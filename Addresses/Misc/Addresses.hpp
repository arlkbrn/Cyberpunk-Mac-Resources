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
constexpr uintptr_t CScript_FTLog = 0x1020946a4 - ImageBase;
constexpr uintptr_t CScript_FTLogError = 0x102094784 - ImageBase;
constexpr uintptr_t CScript_FTLogWarning = 0x102094864 - ImageBase;

constexpr uintptr_t CScript_Log = 0x1022111f8 - ImageBase;
constexpr uintptr_t CScript_LogError = 0x1022112d8 - ImageBase;
constexpr uintptr_t CScript_LogWarning = 0x1022113b8 - ImageBase;

constexpr uintptr_t CScript_LogChannel = 0x102211498 - ImageBase;
constexpr uintptr_t CScript_LogChannelError = 0x1022115b0 - ImageBase;
constexpr uintptr_t CScript_LogChannelWarning = 0x1022116c8 - ImageBase;
#pragma endregion

} // namespace CMR::Addresses
// clang-format on