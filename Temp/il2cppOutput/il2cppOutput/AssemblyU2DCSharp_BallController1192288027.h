#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallController
struct  BallController_t1192288027  : public MonoBehaviour_t667441552
{
public:
	// System.Single BallController::ballForce
	float ___ballForce_2;
	// UnityEngine.Rigidbody2D BallController::rb
	Rigidbody2D_t1743771669 * ___rb_3;
	// System.Boolean BallController::ballActive
	bool ___ballActive_4;

public:
	inline static int32_t get_offset_of_ballForce_2() { return static_cast<int32_t>(offsetof(BallController_t1192288027, ___ballForce_2)); }
	inline float get_ballForce_2() const { return ___ballForce_2; }
	inline float* get_address_of_ballForce_2() { return &___ballForce_2; }
	inline void set_ballForce_2(float value)
	{
		___ballForce_2 = value;
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(BallController_t1192288027, ___rb_3)); }
	inline Rigidbody2D_t1743771669 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody2D_t1743771669 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier(&___rb_3, value);
	}

	inline static int32_t get_offset_of_ballActive_4() { return static_cast<int32_t>(offsetof(BallController_t1192288027, ___ballActive_4)); }
	inline bool get_ballActive_4() const { return ___ballActive_4; }
	inline bool* get_address_of_ballActive_4() { return &___ballActive_4; }
	inline void set_ballActive_4(bool value)
	{
		___ballActive_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
