#include "shared.h"

PLUGIFY_EXPORT float (*__s2sdk_AnglesDiff)(float, float) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_AnglesToVector)(Vector3*) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_AxisAngleToQuaternion)(Vector3*, float) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_CalcClosestPointOnEntityOBB)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_CalcDistanceBetweenEntityOBB)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_CalcDistanceToLineSegment2D)(Vector3*, Vector3*, Vector3*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_CrossVectors)(Vector3*, Vector3*) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_ExponentDecay)(float, float, float) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_LerpVectors)(Vector3*, Vector3*, float) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_QSlerp)(Vector3*, Vector3*, float) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_RotateOrientation)(Vector3*, Vector3*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_RotatePosition)(Vector3*, Vector3*, Vector3*) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_RotateQuaternionByAxisAngle)(Vector4*, Vector3*, float) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_RotationDelta)(Vector3*, Vector3*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_RotationDeltaAsAngularVelocity)(Vector3*, Vector3*) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_SplineQuaternions)(Vector4*, Vector4*, float) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_SplineVectors)(Vector3*, Vector3*, float) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_VectorToAngles)(Vector3*) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_RandomFlt)(float, float) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_RandomInt)(int32_t, int32_t) = NULL;


