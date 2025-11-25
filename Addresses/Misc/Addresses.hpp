#pragma once

/*
 * Miscellaneous addresses which may be moved to the appropriate mod group once added.
*/
#include <cstdint>

// Addresses for Cyberpunk 2077, version 2.31, Mac, bundle 5314028, build 5314055.
// clang-format off
namespace CMR::Addresses
{
constexpr uintptr_t ImageBase = 0x100000000;

#pragma region CScript
constexpr uintptr_t CScript_Log = 0x1022111f8 - ImageBase;
constexpr uintptr_t CScript_LogError = 0x1022112d8 - ImageBase;
constexpr uintptr_t CScript_LogWarning = 0x1022113b8 - ImageBase; 
constexpr uintptr_t CScript_LogChannel = 0x102211498 - ImageBase; 
constexpr uintptr_t CScript_LogChannelWarning = 0x1022116c8 - ImageBase; 
constexpr uintptr_t CScript_ToStringDEBUG = 0x102b79d10 - ImageBase;
#pragma endregion

} // namespace CMR::Addresses
// clang-format on