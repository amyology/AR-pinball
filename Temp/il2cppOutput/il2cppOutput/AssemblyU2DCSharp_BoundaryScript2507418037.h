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
// UnityEngine.GUIText
struct GUIText_t3371372606;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BoundaryScript
struct  BoundaryScript_t2507418037  : public MonoBehaviour_t667441552
{
public:
	// TestGameController BoundaryScript::gameController
	TestGameController_t78391936 * ___gameController_2;
	// UnityEngine.GUIText BoundaryScript::endText
	GUIText_t3371372606 * ___endText_3;
	// UnityEngine.GameObject BoundaryScript::gameControllerObject
	GameObject_t3674682005 * ___gameControllerObject_4;

public:
	inline static int32_t get_offset_of_gameController_2() { return static_cast<int32_t>(offsetof(BoundaryScript_t2507418037, ___gameController_2)); }
	inline TestGameController_t78391936 * get_gameController_2() const { return ___gameController_2; }
	inline TestGameController_t78391936 ** get_address_of_gameController_2() { return &___gameController_2; }
	inline void set_gameController_2(TestGameController_t78391936 * value)
	{
		___gameController_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_2, value);
	}

	inline static int32_t get_offset_of_endText_3() { return static_cast<int32_t>(offsetof(BoundaryScript_t2507418037, ___endText_3)); }
	inline GUIText_t3371372606 * get_endText_3() const { return ___endText_3; }
	inline GUIText_t3371372606 ** get_address_of_endText_3() { return &___endText_3; }
	inline void set_endText_3(GUIText_t3371372606 * value)
	{
		___endText_3 = value;
		Il2CppCodeGenWriteBarrier(&___endText_3, value);
	}

	inline static int32_t get_offset_of_gameControllerObject_4() { return static_cast<int32_t>(offsetof(BoundaryScript_t2507418037, ___gameControllerObject_4)); }
	inline GameObject_t3674682005 * get_gameControllerObject_4() const { return ___gameControllerObject_4; }
	inline GameObject_t3674682005 ** get_address_of_gameControllerObject_4() { return &___gameControllerObject_4; }
	inline void set_gameControllerObject_4(GameObject_t3674682005 * value)
	{
		___gameControllerObject_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameControllerObject_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
