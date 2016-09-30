#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameController
struct GameController_t2782302542;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallScript
struct  BallScript_t3762807754  : public MonoBehaviour_t667441552
{
public:
	// GameController BallScript::gameController
	GameController_t2782302542 * ___gameController_2;
	// UnityEngine.GameObject BallScript::ball
	GameObject_t3674682005 * ___ball_3;
	// UnityEngine.Rigidbody2D BallScript::ballrb
	Rigidbody2D_t1743771669 * ___ballrb_4;
	// System.Single BallScript::ballForce
	float ___ballForce_5;
	// System.Boolean BallScript::ballActive
	bool ___ballActive_6;

public:
	inline static int32_t get_offset_of_gameController_2() { return static_cast<int32_t>(offsetof(BallScript_t3762807754, ___gameController_2)); }
	inline GameController_t2782302542 * get_gameController_2() const { return ___gameController_2; }
	inline GameController_t2782302542 ** get_address_of_gameController_2() { return &___gameController_2; }
	inline void set_gameController_2(GameController_t2782302542 * value)
	{
		___gameController_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_2, value);
	}

	inline static int32_t get_offset_of_ball_3() { return static_cast<int32_t>(offsetof(BallScript_t3762807754, ___ball_3)); }
	inline GameObject_t3674682005 * get_ball_3() const { return ___ball_3; }
	inline GameObject_t3674682005 ** get_address_of_ball_3() { return &___ball_3; }
	inline void set_ball_3(GameObject_t3674682005 * value)
	{
		___ball_3 = value;
		Il2CppCodeGenWriteBarrier(&___ball_3, value);
	}

	inline static int32_t get_offset_of_ballrb_4() { return static_cast<int32_t>(offsetof(BallScript_t3762807754, ___ballrb_4)); }
	inline Rigidbody2D_t1743771669 * get_ballrb_4() const { return ___ballrb_4; }
	inline Rigidbody2D_t1743771669 ** get_address_of_ballrb_4() { return &___ballrb_4; }
	inline void set_ballrb_4(Rigidbody2D_t1743771669 * value)
	{
		___ballrb_4 = value;
		Il2CppCodeGenWriteBarrier(&___ballrb_4, value);
	}

	inline static int32_t get_offset_of_ballForce_5() { return static_cast<int32_t>(offsetof(BallScript_t3762807754, ___ballForce_5)); }
	inline float get_ballForce_5() const { return ___ballForce_5; }
	inline float* get_address_of_ballForce_5() { return &___ballForce_5; }
	inline void set_ballForce_5(float value)
	{
		___ballForce_5 = value;
	}

	inline static int32_t get_offset_of_ballActive_6() { return static_cast<int32_t>(offsetof(BallScript_t3762807754, ___ballActive_6)); }
	inline bool get_ballActive_6() const { return ___ballActive_6; }
	inline bool* get_address_of_ballActive_6() { return &___ballActive_6; }
	inline void set_ballActive_6(bool value)
	{
		___ballActive_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
