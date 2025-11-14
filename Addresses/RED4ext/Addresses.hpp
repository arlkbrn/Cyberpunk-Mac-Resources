#pragma once
#include <cstdint>

// Addresses for Cyberpunk 2077 Mac Build, version 2.31.
// clang-format off
namespace Addresses
{
constexpr uintptr_t ImageBase = 0x100000000;

constexpr uintptr_t AssertionFailed = 0x100003980 - ImageBase;

constexpr uintptr_t CBaseEngine_InitScripts = 0x101e57e78 - ImageBase; // Needs to be reimplemented
constexpr uintptr_t CBaseEngine_LoadScripts = 0x101e4ef04 - ImageBase; // Possible alternative. Needs to be reimplemented

constexpr uintptr_t CGameApplication_AddState = 0x101e43ab0 - ImageBase; // [red::GameAppInstance::RegisterState]

constexpr uintptr_t GameInstance_CollectSaveableSystems = 0x0 - ImageBase; // Inlined @ 10138a378 // Inlined @ 0x102ef6f30
// constexpr uintptr_t Global_ExecuteProcess = 0x0 - ImageBase; // Does not exist in the Mac build
constexpr uintptr_t GsmState_SessionActive_ReportErrorCode = 0x1009eee74 - ImageBase;

constexpr uintptr_t IGameSystem_vtbl = 0x1070bdb58 - ImageBase;
constexpr uintptr_t Main = 0x100032a18 - ImageBase;
constexpr uintptr_t ScriptValidator_Validate = 0x102ef6f30 - ImageBase;
} // namespace Addresses
// clang-format on