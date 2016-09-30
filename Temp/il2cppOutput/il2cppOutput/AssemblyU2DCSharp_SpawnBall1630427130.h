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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawnBall
struct  SpawnBall_t1630427130  : public MonoBehaviour_t667441552
{
public:
	// GameController SpawnBall::gameController
	GameController_t2782302542 * ___gameController_2;
	// UnityEngine.GameObject SpawnBall::ball
	GameObject_t3674682005 * ___ball_3;

public:
	inline static int32_t get_offset_of_gameController_2() { return static_cast<int32_t>(offsetof(SpawnBall_t1630427130, ___gameController_2)); }
	inline GameController_t2782302542 * get_gameController_2() const { return ___gameController_2; }
	inline GameController_t2782302542 ** get_address_of_gameController_2() { return &___gameController_2; }
	inline void set_gameController_2(GameController_t2782302542 * value)
	{
		___gameController_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_2, value);
	}

	inline static int32_t get_offset_of_ball_3() { return static_cast<int32_t>(offsetof(SpawnBall_t1630427130, ___ball_3)); }
	inline GameObject_t3674682005 * get_ball_3() const { return ___ball_3; }
	inline GameObject_t3674682005 ** get_address_of_ball_3() { return &___ball_3; }
	inline void set_ball_3(GameObject_t3674682005 * value)
	{
		___ball_3 = value;
		Il2CppCodeGenWriteBarrier(&___ball_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
