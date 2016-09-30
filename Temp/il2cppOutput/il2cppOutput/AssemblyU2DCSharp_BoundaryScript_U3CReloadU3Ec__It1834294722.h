#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1080795294.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BoundaryScript/<Reload>c__Iterator0
struct  U3CReloadU3Ec__Iterator0_t1834294722  : public Il2CppObject
{
public:
	// UnityEngine.SceneManagement.Scene BoundaryScript/<Reload>c__Iterator0::<scene>__0
	Scene_t1080795294  ___U3CsceneU3E__0_0;
	// System.Int32 BoundaryScript/<Reload>c__Iterator0::$PC
	int32_t ___U24PC_1;
	// System.Object BoundaryScript/<Reload>c__Iterator0::$current
	Il2CppObject * ___U24current_2;

public:
	inline static int32_t get_offset_of_U3CsceneU3E__0_0() { return static_cast<int32_t>(offsetof(U3CReloadU3Ec__Iterator0_t1834294722, ___U3CsceneU3E__0_0)); }
	inline Scene_t1080795294  get_U3CsceneU3E__0_0() const { return ___U3CsceneU3E__0_0; }
	inline Scene_t1080795294 * get_address_of_U3CsceneU3E__0_0() { return &___U3CsceneU3E__0_0; }
	inline void set_U3CsceneU3E__0_0(Scene_t1080795294  value)
	{
		___U3CsceneU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U24PC_1() { return static_cast<int32_t>(offsetof(U3CReloadU3Ec__Iterator0_t1834294722, ___U24PC_1)); }
	inline int32_t get_U24PC_1() const { return ___U24PC_1; }
	inline int32_t* get_address_of_U24PC_1() { return &___U24PC_1; }
	inline void set_U24PC_1(int32_t value)
	{
		___U24PC_1 = value;
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CReloadU3Ec__Iterator0_t1834294722, ___U24current_2)); }
	inline Il2CppObject * get_U24current_2() const { return ___U24current_2; }
	inline Il2CppObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(Il2CppObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
