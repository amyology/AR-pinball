#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.HingeJoint2D
struct HingeJoint2D_t2650814389;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RightFlipperScript
struct  RightFlipperScript_t201721311  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.HingeJoint2D RightFlipperScript::flipperJoint
	HingeJoint2D_t2650814389 * ___flipperJoint_2;

public:
	inline static int32_t get_offset_of_flipperJoint_2() { return static_cast<int32_t>(offsetof(RightFlipperScript_t201721311, ___flipperJoint_2)); }
	inline HingeJoint2D_t2650814389 * get_flipperJoint_2() const { return ___flipperJoint_2; }
	inline HingeJoint2D_t2650814389 ** get_address_of_flipperJoint_2() { return &___flipperJoint_2; }
	inline void set_flipperJoint_2(HingeJoint2D_t2650814389 * value)
	{
		___flipperJoint_2 = value;
		Il2CppCodeGenWriteBarrier(&___flipperJoint_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
