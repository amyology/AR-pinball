#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

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

// GameController
struct  GameController_t2782302542  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject GameController::ball
	GameObject_t3674682005 * ___ball_2;
	// System.Int32 GameController::points
	int32_t ___points_3;
	// UnityEngine.GUIText GameController::scoreText
	GUIText_t3371372606 * ___scoreText_4;
	// System.Int32 GameController::lives
	int32_t ___lives_5;
	// UnityEngine.GUIText GameController::livesText
	GUIText_t3371372606 * ___livesText_6;
	// System.Boolean GameController::ballDown
	bool ___ballDown_7;

public:
	inline static int32_t get_offset_of_ball_2() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___ball_2)); }
	inline GameObject_t3674682005 * get_ball_2() const { return ___ball_2; }
	inline GameObject_t3674682005 ** get_address_of_ball_2() { return &___ball_2; }
	inline void set_ball_2(GameObject_t3674682005 * value)
	{
		___ball_2 = value;
		Il2CppCodeGenWriteBarrier(&___ball_2, value);
	}

	inline static int32_t get_offset_of_points_3() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___points_3)); }
	inline int32_t get_points_3() const { return ___points_3; }
	inline int32_t* get_address_of_points_3() { return &___points_3; }
	inline void set_points_3(int32_t value)
	{
		___points_3 = value;
	}

	inline static int32_t get_offset_of_scoreText_4() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___scoreText_4)); }
	inline GUIText_t3371372606 * get_scoreText_4() const { return ___scoreText_4; }
	inline GUIText_t3371372606 ** get_address_of_scoreText_4() { return &___scoreText_4; }
	inline void set_scoreText_4(GUIText_t3371372606 * value)
	{
		___scoreText_4 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_4, value);
	}

	inline static int32_t get_offset_of_lives_5() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___lives_5)); }
	inline int32_t get_lives_5() const { return ___lives_5; }
	inline int32_t* get_address_of_lives_5() { return &___lives_5; }
	inline void set_lives_5(int32_t value)
	{
		___lives_5 = value;
	}

	inline static int32_t get_offset_of_livesText_6() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___livesText_6)); }
	inline GUIText_t3371372606 * get_livesText_6() const { return ___livesText_6; }
	inline GUIText_t3371372606 ** get_address_of_livesText_6() { return &___livesText_6; }
	inline void set_livesText_6(GUIText_t3371372606 * value)
	{
		___livesText_6 = value;
		Il2CppCodeGenWriteBarrier(&___livesText_6, value);
	}

	inline static int32_t get_offset_of_ballDown_7() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___ballDown_7)); }
	inline bool get_ballDown_7() const { return ___ballDown_7; }
	inline bool* get_address_of_ballDown_7() { return &___ballDown_7; }
	inline void set_ballDown_7(bool value)
	{
		___ballDown_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
