package rounds

import (
	"encoding/json"
	"errors"

	s2sdk "github.com/fr0nch/go-plugify-s2sdk/v2"
)

const (
	kv3TypeTable    int32 = 9
	kv3SubTypeTable int32 = 12
)

func FromSettings(settings map[string]any) (*s2sdk.KeyValues3, error) {
	data, err := json.Marshal(settings)
	if err != nil {
		return nil, err
	}

	kv := s2sdk.NewKeyValues3Kv3Create(kv3TypeTable, kv3SubTypeTable)

	var loadErr string
	if ok, err := kv.LoadFromJSON(&loadErr, string(data), "customround", 0); err != nil || !ok {
		kv.Close()
		return nil, errors.Join(err, errors.New(loadErr))
	}

	return kv, nil
}

func Handle(kv *s2sdk.KeyValues3) uintptr {
	if kv == nil {
		return 0
	}

	return kv.Get()
}

func Name(kv *s2sdk.KeyValues3) string {
	if kv == nil {
		return ""
	}

	name, _ := kv.GetMemberString("name", "")
	return name
}

func JSON(kv *s2sdk.KeyValues3) (string, error) {
	if kv == nil {
		return "null", nil
	}

	var output, saveErr string
	if ok, err := kv.SaveAsJSONString(&saveErr, &output); err != nil || !ok {
		return "", errors.Join(err, errors.New(saveErr))
	}

	return output, nil
}
