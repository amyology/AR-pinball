#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TestGameController
struct TestGameController_t78391936;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BumperController
struct  BumperController_t2976025727  : public MonoBehaviour_t667441552
{
public:
	// TestGameController BumperController::gameController
	TestGameController_t78391936 * ___gameController_2;
	// UnityEngine.GameObject BumperController::gameControllerObject
	GameObject_t3674682005 * ___gameControllerObject_3;
	// System.Int32 BumperController::pointAmount
	int32_t ___pointAmount_4;

public:
	inline static int32_t get_offset_of_gameController_2() { return static_cast<int32_t>(offsetof(BumperController_t2976025727, ___gameController_2)); }
	inline TestGameController_t78391936 * get_gameController_2() const { return ___gameController_2; }
	inline TestGameController_t78391936 ** get_address_of_gameController_2() { return &___gameController_2; }
	inline void set_gameController_2(TestGameController_t78391936 * value)
	{
		___gameController_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_2, value);
	}

	inline static int32_t get_offset_of_gameControllerObject_3() { return static_cast<int32_t>(offsetof(BumperController_t2976025727, ___gameControllerObject_3)); }
	inline GameObject_t3674682005 * get_gameControllerObject_3() const { return ___gameControllerObject_3; }
	inline GameObject_t3674682005 ** get_address_of_gameControllerObject_3() { return &___gameControllerObject_3; }
	inline void set_gameControllerObject_3(GameObject_t3674682005 * value)
	{
		___gameControllerObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameControllerObject_3, value);
	}

	inline static int32_t get_offset_of_pointAmount_4() { return static_cast<int32_t>(offsetof(BumperController_t2976025727, ___pointAmount_4)); }
	inline int32_t get_pointAmount_4() const { return ___pointAmount_4; }
	inline int32_t* get_address_of_pointAmount_4() { return &___pointAmount_4; }
	inline void set_pointAmount_4(int32_t value)
	{
		___pointAmount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
