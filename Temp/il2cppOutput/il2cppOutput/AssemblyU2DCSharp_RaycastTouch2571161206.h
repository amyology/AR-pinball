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
// UnityEngine.GUIText
struct GUIText_t3371372606;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Ray3134616544.h"
#include "UnityEngine_UnityEngine_RaycastHit4003175726.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RaycastTouch
struct  RaycastTouch_t2571161206  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Ray RaycastTouch::ray
	Ray_t3134616544  ___ray_2;
	// UnityEngine.RaycastHit RaycastTouch::hit
	RaycastHit_t4003175726  ___hit_3;
	// UnityEngine.HingeJoint2D RaycastTouch::leftFlipperJoint
	HingeJoint2D_t2650814389 * ___leftFlipperJoint_4;
	// UnityEngine.HingeJoint2D RaycastTouch::rightFlipperJoint
	HingeJoint2D_t2650814389 * ___rightFlipperJoint_5;
	// UnityEngine.GUIText RaycastTouch::dbText
	GUIText_t3371372606 * ___dbText_6;
	// System.Single RaycastTouch::ballForce
	float ___ballForce_7;
	// UnityEngine.Rigidbody2D RaycastTouch::rb
	Rigidbody2D_t1743771669 * ___rb_8;
	// System.Boolean RaycastTouch::ballActive
	bool ___ballActive_9;

public:
	inline static int32_t get_offset_of_ray_2() { return static_cast<int32_t>(offsetof(RaycastTouch_t2571161206, ___ray_2)); }
	inline Ray_t3134616544  get_ray_2() const { return ___ray_2; }
	inline Ray_t3134616544 * get_address_of_ray_2() { return &___ray_2; }
	inline void set_ray_2(Ray_t3134616544  value)
	{
		___ray_2 = value;
	}

	inline static int32_t get_offset_of_hit_3() { return static_cast<int32_t>(offsetof(RaycastTouch_t2571161206, ___hit_3)); }
	inline RaycastHit_t4003175726  get_hit_3() const { return ___hit_3; }
	inline RaycastHit_t4003175726 * get_address_of_hit_3() { return &___hit_3; }
	inline void set_hit_3(RaycastHit_t4003175726  value)
	{
		___hit_3 = value;
	}

	inline static int32_t get_offset_of_leftFlipperJoint_4() { return static_cast<int32_t>(offsetof(RaycastTouch_t2571161206, ___leftFlipperJoint_4)); }
	inline HingeJoint2D_t2650814389 * get_leftFlipperJoint_4() const { return ___leftFlipperJoint_4; }
	inline HingeJoint2D_t2650814389 ** get_address_of_leftFlipperJoint_4() { return &___leftFlipperJoint_4; }
	inline void set_leftFlipperJoint_4(HingeJoint2D_t2650814389 * value)
	{
		___leftFlipperJoint_4 = value;
		Il2CppCodeGenWriteBarrier(&___leftFlipperJoint_4, value);
	}

	inline static int32_t get_offset_of_rightFlipperJoint_5() { return static_cast<int32_t>(offsetof(RaycastTouch_t2571161206, ___rightFlipperJoint_5)); }
	inline HingeJoint2D_t2650814389 * get_rightFlipperJoint_5() const { return ___rightFlipperJoint_5; }
	inline HingeJoint2D_t2650814389 ** get_address_of_rightFlipperJoint_5() { return &___rightFlipperJoint_5; }
	inline void set_rightFlipperJoint_5(HingeJoint2D_t2650814389 * value)
	{
		___rightFlipperJoint_5 = value;
		Il2CppCodeGenWriteBarrier(&___rightFlipperJoint_5, value);
	}

	inline static int32_t get_offset_of_dbText_6() { return static_cast<int32_t>(offsetof(RaycastTouch_t2571161206, ___dbText_6)); }
	inline GUIText_t3371372606 * get_dbText_6() const { return ___dbText_6; }
	inline GUIText_t3371372606 ** get_address_of_dbText_6() { return &___dbText_6; }
	inline void set_dbText_6(GUIText_t3371372606 * value)
	{
		___dbText_6 = value;
		Il2CppCodeGenWriteBarrier(&___dbText_6, value);
	}

	inline static int32_t get_offset_of_ballForce_7() { return static_cast<int32_t>(offsetof(RaycastTouch_t2571161206, ___ballForce_7)); }
	inline float get_ballForce_7() const { return ___ballForce_7; }
	inline float* get_address_of_ballForce_7() { return &___ballForce_7; }
	inline void set_ballForce_7(float value)
	{
		___ballForce_7 = value;
	}

	inline static int32_t get_offset_of_rb_8() { return static_cast<int32_t>(offsetof(RaycastTouch_t2571161206, ___rb_8)); }
	inline Rigidbody2D_t1743771669 * get_rb_8() const { return ___rb_8; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rb_8() { return &___rb_8; }
	inline void set_rb_8(Rigidbody2D_t1743771669 * value)
	{
		___rb_8 = value;
		Il2CppCodeGenWriteBarrier(&___rb_8, value);
	}

	inline static int32_t get_offset_of_ballActive_9() { return static_cast<int32_t>(offsetof(RaycastTouch_t2571161206, ___ballActive_9)); }
	inline bool get_ballActive_9() const { return ___ballActive_9; }
	inline bool* get_address_of_ballActive_9() { return &___ballActive_9; }
	inline void set_ballActive_9(bool value)
	{
		___ballActive_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
