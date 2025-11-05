#pragma once

#include <cstdint>

namespace Red::AddressLib
{
constexpr uintptr_t ImageBase = 0x100000000;

constexpr uintptr_t Main = 0x100032a18 - ImageBase;

constexpr uintptr_t StatsDataSystem_InitializeRecords = 0x1024d89c4 - ImageBase;
constexpr uintptr_t StatsDataSystem_InitializeParams = 0x1024d82cc - ImageBase;
constexpr uintptr_t StatsDataSystem_GetStatRange = 0x1024d989c - ImageBase;
constexpr uintptr_t StatsDataSystem_GetStatFlags = 0x1024d9060 - ImageBase;
constexpr uintptr_t StatsDataSystem_CheckStatFlag = 0x1024d8fe4 - ImageBase;

constexpr uintptr_t TweakDB_Init = 0x102025e3c - ImageBase;
constexpr uintptr_t TweakDB_Load = 0x103b3a42c - ImageBase; // game::data::TweakDB::LoadOptimized
constexpr uintptr_t TweakDB_TryLoad = 0x103b41b58 - ImageBase;
constexpr uintptr_t TweakDB_CreateRecord = 0x10367e344 - ImageBase; // game::data::AddRecord

constexpr uintptr_t TweakDBID_Derive = 0x1012de92c - ImageBase;
}