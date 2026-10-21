package rounds

import (
	s2sdk "github.com/fr0nch/go-plugify-s2sdk/v2"
)

type Manager struct {
	rounds []*s2sdk.KeyValues3

	current *s2sdk.KeyValues3
	next    *s2sdk.KeyValues3
	forced  *s2sdk.KeyValues3
}

func NewManager() *Manager {
	return &Manager{}
}

func (m *Manager) Add(round *s2sdk.KeyValues3) {
	m.rounds = append(m.rounds, round)
}

func (m *Manager) Clear() {
	for i := range m.rounds {
		m.rounds[i].Close()
	}

	m.rounds = nil
}

func (m *Manager) Find(name string) *s2sdk.KeyValues3 {
	if i := m.Index(name); i != -1 {
		return m.rounds[i]
	}

	return nil
}

func (m *Manager) Index(name string) int32 {
	for i := range m.rounds {
		if Name(m.rounds[i]) == name {
			return int32(i)
		}
	}

	return -1
}

func (m *Manager) Names() []string {
	names := make([]string, 0, len(m.rounds))
	for i := range m.rounds {
		names = append(names, Name(m.rounds[i]))
	}

	return names
}

func (m *Manager) Handles() []uintptr {
	handles := make([]uintptr, 0, len(m.rounds))
	for i := range m.rounds {
		handles = append(handles, m.rounds[i].Get())
	}

	return handles
}

func (m *Manager) Current() *s2sdk.KeyValues3 {
	return m.current
}

func (m *Manager) Next() *s2sdk.KeyValues3 {
	return m.next
}

func (m *Manager) SetCurrent(round *s2sdk.KeyValues3) {
	if m.current != nil {
		m.current.Close()
	}
	m.current = round
}

func (m *Manager) SetNext(round *s2sdk.KeyValues3) {
	if m.next != nil {
		m.next.Close()
	}
	m.next = round
}

func (m *Manager) SetForced(round *s2sdk.KeyValues3) {
	if m.forced != nil {
		m.forced.Close()
	}
	m.forced = round
}

func (m *Manager) BeginRound() {
	if m.forced != nil {
		m.SetCurrent(m.forced)
		m.forced = nil
	} else if m.current == nil {
		m.current, m.next = m.next, nil
	}
}

func (m *Manager) EndRound() {
	m.SetCurrent(nil)
}

func (m *Manager) Reset() {
	m.SetCurrent(nil)
	m.SetNext(nil)
	m.SetForced(nil)
}

func (m *Manager) Close() {
	m.Reset()
	m.Clear()
}
