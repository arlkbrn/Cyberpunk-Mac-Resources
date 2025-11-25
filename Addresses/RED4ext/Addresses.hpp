#pragma once
#include <cstdint>

// Addresses for Cyberpunk 2077, version 2.31, Mac, bundle 5314028, build 5314055.
// clang-format off
namespace Addresses
{
constexpr uintptr_t ImageBase = 0x100000000;

constexpr uintptr_t AssertionFailed = 0x100002d80 - ImageBase;

constexpr uintptr_t CBaseEngine_InitScripts = 0x103d9ed9c - ImageBase; // Needs to be reimplemented
constexpr uintptr_t CBaseEngine_LoadScripts = 0x103d9622c - ImageBase; // Possible alternative. Needs to be reimplemented

constexpr uintptr_t CGameApplication_AddState = 0x103d8add0 - ImageBase; // [red::GameAppInstance::RegisterState]

constexpr uintptr_t GameInstance_CollectSaveableSystems = 0x0 - ImageBase; // Inlined @ 101f2d870 // Inlined @ 1021fbf90
// constexpr uintptr_t Global_ExecuteProcess = 0x0 - ImageBase; // Does not exist in the Mac build
constexpr uintptr_t GsmState_SessionActive_ReportErrorCode = 0x103f70114 - ImageBase;

constexpr uintptr_t IGameSystem_vtbl = 0x10719a700 - ImageBase;
constexpr uintptr_t Main = 0x100031e18 - ImageBase;
constexpr uintptr_t ScriptValidator_Validate = 0x1021fbf90 - ImageBase;
} // namespace Addresses
// clang-format on