#pragma once

/*
 * Miscellaneous addresses which may be moved to the appropriate mod group once added.
*/
#include <cstdint>

// Addresses for Cyberpunk 2077 Mac Build, version 2.31.
// clang-format off
namespace CMR::Addresses
{
constexpr uintptr_t ImageBase = 0x100000000;

#pragma region CScript
constexpr uintptr_t CScript_LogError = 0x102f0c278 - ImageBase;
constexpr uintptr_t CScript_LogWarning = 0x102f0c358 - ImageBase;
constexpr uintptr_t CScript_LogChannel = 0x102f0c438 - ImageBase;
constexpr uintptr_t CScript_LogChannelWarning = 0x102f0c668 - ImageBase;
constexpr uintptr_t CScript_ToStringDEBUG = 0x103b3ebcc - ImageBase;
#pragma endregion

} // namespace CMR::Addresses
// clang-format on