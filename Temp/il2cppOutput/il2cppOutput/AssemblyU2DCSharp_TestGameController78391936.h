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
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.GUIText
struct GUIText_t3371372606;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestGameController
struct  TestGameController_t78391936  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 TestGameController::gameScore
	int32_t ___gameScore_2;
	// System.Int32 TestGameController::gameLives
	int32_t ___gameLives_3;
	// UnityEngine.Rigidbody2D TestGameController::rb
	Rigidbody2D_t1743771669 * ___rb_4;
	// UnityEngine.GameObject TestGameController::ball
	GameObject_t3674682005 * ___ball_5;
	// UnityEngine.GameObject TestGameController::ballSpawn
	GameObject_t3674682005 * ___ballSpawn_6;
	// UnityEngine.GUIText TestGameController::scoreText
	GUIText_t3371372606 * ___scoreText_7;
	// UnityEngine.GUIText TestGameController::livesText
	GUIText_t3371372606 * ___livesText_8;

public:
	inline static int32_t get_offset_of_gameScore_2() { return static_cast<int32_t>(offsetof(TestGameController_t78391936, ___gameScore_2)); }
	inline int32_t get_gameScore_2() const { return ___gameScore_2; }
	inline int32_t* get_address_of_gameScore_2() { return &___gameScore_2; }
	inline void set_gameScore_2(int32_t value)
	{
		___gameScore_2 = value;
	}

	inline static int32_t get_offset_of_gameLives_3() { return static_cast<int32_t>(offsetof(TestGameController_t78391936, ___gameLives_3)); }
	inline int32_t get_gameLives_3() const { return ___gameLives_3; }
	inline int32_t* get_address_of_gameLives_3() { return &___gameLives_3; }
	inline void set_gameLives_3(int32_t value)
	{
		___gameLives_3 = value;
	}

	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(TestGameController_t78391936, ___rb_4)); }
	inline Rigidbody2D_t1743771669 * get_rb_4() const { return ___rb_4; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody2D_t1743771669 * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier(&___rb_4, value);
	}

	inline static int32_t get_offset_of_ball_5() { return static_cast<int32_t>(offsetof(TestGameController_t78391936, ___ball_5)); }
	inline GameObject_t3674682005 * get_ball_5() const { return ___ball_5; }
	inline GameObject_t3674682005 ** get_address_of_ball_5() { return &___ball_5; }
	inline void set_ball_5(GameObject_t3674682005 * value)
	{
		___ball_5 = value;
		Il2CppCodeGenWriteBarrier(&___ball_5, value);
	}

	inline static int32_t get_offset_of_ballSpawn_6() { return static_cast<int32_t>(offsetof(TestGameController_t78391936, ___ballSpawn_6)); }
	inline GameObject_t3674682005 * get_ballSpawn_6() const { return ___ballSpawn_6; }
	inline GameObject_t3674682005 ** get_address_of_ballSpawn_6() { return &___ballSpawn_6; }
	inline void set_ballSpawn_6(GameObject_t3674682005 * value)
	{
		___ballSpawn_6 = value;
		Il2CppCodeGenWriteBarrier(&___ballSpawn_6, value);
	}

	inline static int32_t get_offset_of_scoreText_7() { return static_cast<int32_t>(offsetof(TestGameController_t78391936, ___scoreText_7)); }
	inline GUIText_t3371372606 * get_scoreText_7() const { return ___scoreText_7; }
	inline GUIText_t3371372606 ** get_address_of_scoreText_7() { return &___scoreText_7; }
	inline void set_scoreText_7(GUIText_t3371372606 * value)
	{
		___scoreText_7 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_7, value);
	}

	inline static int32_t get_offset_of_livesText_8() { return static_cast<int32_t>(offsetof(TestGameController_t78391936, ___livesText_8)); }
	inline GUIText_t3371372606 * get_livesText_8() const { return ___livesText_8; }
	inline GUIText_t3371372606 ** get_address_of_livesText_8() { return &___livesText_8; }
	inline void set_livesText_8(GUIText_t3371372606 * value)
	{
		___livesText_8 = value;
		Il2CppCodeGenWriteBarrier(&___livesText_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
