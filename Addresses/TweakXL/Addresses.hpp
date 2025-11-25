#pragma once

/**
 * Format is based on TweakXL's Library.hpp
 * [https://github.com/psiberx/cp2077-tweak-xl/blob/master/src/Red/Addresses/Library.hpp]
 */
#include <cstdint>

// Addresses for Cyberpunk 2077, version 2.31, Mac, bundle 5314028, build 5314055.
// clang-format off
namespace Red::AddressLib
{
constexpr uintptr_t ImageBase = 0x100000000;

constexpr uintptr_t Main = 0x100031e18 - ImageBase;

constexpr uintptr_t StatsDataSystem_InitializeRecords = 0x103a939a0 - ImageBase;
constexpr uintptr_t StatsDataSystem_InitializeParams = 0x103a932a8 - ImageBase;
constexpr uintptr_t StatsDataSystem_GetStatRange = 0x103a9472c - ImageBase;
constexpr uintptr_t StatsDataSystem_GetStatFlags = 0x103a93ef0 - ImageBase;
constexpr uintptr_t StatsDataSystem_CheckStatFlag = 0x103a93e74 - ImageBase;

constexpr uintptr_t TweakDB_Init = 0x1035f1bac - ImageBase;
constexpr uintptr_t TweakDB_Load = 0x102b75570 - ImageBase; // game::data::TweakDB::LoadOptimized
constexpr uintptr_t TweakDB_TryLoad = 0x102b7cc9c - ImageBase;
constexpr uintptr_t TweakDB_CreateRecord = 0x1026b8db8 - ImageBase; // game::data::AddRecord

constexpr uintptr_t TweakDBID_Derive = 0x103453b14 - ImageBase;
} // namespace Red::AddressLib
// clang-format on
