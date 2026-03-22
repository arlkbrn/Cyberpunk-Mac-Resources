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
constexpr uintptr_t GetScriptGameInstance = 0x101f42944 - ImageBase;

constexpr uintptr_t CBaseEngine_InitEngine = 0x103d9e494 - ImageBase;
constexpr uintptr_t CBaseEngine_LoadGatheredResources = 0x103d9efc8 - ImageBase;

constexpr uintptr_t CBaseFunction_InternalExecute = 0x102172f90 - ImageBase;

constexpr uintptr_t CBaseStack_ResolveContext = 0x1021742cc - ImageBase;

constexpr uintptr_t CGameFramework_InitializeGameInstance = 0x103f0d900 - ImageBase;

constexpr uintptr_t CMesh_GetAppearance = 0x100e199d8 - ImageBase;
constexpr uintptr_t CMesh_FindAppearance = 0x100e189f4 - ImageBase;

constexpr uintptr_t CommunitySystem_Update = 0x1014ad374 - ImageBase;

constexpr uintptr_t EngineTime_Frequency = 0x10900b408 - ImageBase;

constexpr uintptr_t Entity_Attach = 0x100c99368 - ImageBase;
constexpr uintptr_t Entity_Detach = 0x100c996c0 - ImageBase;
constexpr uintptr_t Entity_Dispose = 0x100c999e0 - ImageBase;
constexpr uintptr_t Entity_Initialize = 0x100c985ec - ImageBase;
constexpr uintptr_t Entity_Assemble = 0x100c97e28 - ImageBase;
constexpr uintptr_t Entity_Reassemble = 0x100c95744 - ImageBase;
constexpr uintptr_t Entity_Uninitialize = 0x100c992c4 - ImageBase;
constexpr uintptr_t Entity_RequestComponents = 0x100c97d3c - ImageBase;
constexpr uintptr_t Entity_ResolveRecordID = 0x10378a7e8 - ImageBase;

constexpr uintptr_t EntityBuilder_ExtractComponentsJob = 0x100ca41e0 - ImageBase;
constexpr uintptr_t EntityBuilder_ScheduleExtractComponentsJob = 0x100ca08a0 - ImageBase;

constexpr uintptr_t EntitySpawner_SpawnEntity = 0x100cdd130 - ImageBase;

constexpr uintptr_t EntitySpawnerToken_dtor = 0x100ce0d28 - ImageBase;
constexpr uintptr_t EntitySpawnerToken_GetWaitHandle = 0x100ce0eb0 - ImageBase;

constexpr uintptr_t InkLayer_RegisterListener = 0x1048dc344 - ImageBase;
constexpr uintptr_t InkLayer_AttachWidgetTree = 0x100ce0eb0 - ImageBase;

constexpr uintptr_t InkLogicController_OnInitialize = 0x1047cf584 - ImageBase;
constexpr uintptr_t InkLogicController_OnUninitialize = 0x1047cf720 - ImageBase;
constexpr uintptr_t InkLogicController_OnArrangeChildrenComplete = 0x1047cf848 - ImageBase;

constexpr uintptr_t InkSpawner_FinishAsyncSpawn = 0x1049799b8 - ImageBase;

constexpr uintptr_t InkSystem_Instance = 0x108d5d830 - ImageBase;
constexpr uintptr_t InkSystem_ProcessCharacterEvent = 0x104887524 - ImageBase;
constexpr uintptr_t InkSystem_ProcessInputEvents = 0x1048842e0 - ImageBase;

constexpr uintptr_t InkWidget_GetLayer = 0x1049ade28 - ImageBase;
constexpr uintptr_t InkWidget_SetLayer = 0x1049b18f0 - ImageBase;
constexpr uintptr_t InkWidget_ScriptReparent = 0x1049b888c - ImageBase;
constexpr uintptr_t InkWidget_ScriptAddChild = 0x1049a3084 - ImageBase;
constexpr uintptr_t InkWidget_TriggerEvent = 0x1049be828 - ImageBase;

// constexpr uintptr_t InkWidgetLibrary_AsyncSpawnFromExternal = 0x0 - ImageBase; // inlined @ 0x1048e4a2c
constexpr uintptr_t InkWidgetLibrary_AsyncSpawnFromLocal = 0x104965b38 - ImageBase;
constexpr uintptr_t InkWidgetLibrary_SpawnFromExternal = 0x1048db148 - ImageBase;
constexpr uintptr_t InkWidgetLibrary_SpawnFromLocal = 0x104965ec0 - ImageBase;

constexpr uintptr_t IComponent_Toggle = 0x100ca633c - ImageBase;

constexpr uintptr_t IPlacedComponent_SetTransform = 0x100c417f0 - ImageBase;

constexpr uintptr_t ISerializable_Clone = 0x102144744 - ImageBase;

constexpr uintptr_t IScriptable_CheckClass = 0x102238a4c - ImageBase;
constexpr uintptr_t IScriptable_CheckExactClass = 0x102238b1c - ImageBase;

// constexpr uintptr_t JobHandle_Wait = 0x0 - ImageBase; // inlined

constexpr uintptr_t Localization_LoadOnScreens = 0x102f67db4 - ImageBase;

constexpr uintptr_t MeshAppearance_LoadMaterialSetupAsync = 0x100e1f7b4 - ImageBase;
// constexpr uintptr_t MeshAppearance_ReleaseReference = 0x0 - ImageBase; // inlined

constexpr uintptr_t MorphTargetManager_ApplyMorphTarget = 0x100c6c0c4 - ImageBase;

constexpr uintptr_t NodeRef_Create = 0x103340cf8 - ImageBase;

constexpr uintptr_t ObjectSerializer_Prepare = 0x102161438 - ImageBase;
constexpr uintptr_t ObjectSerializer_WriteToBuffer = 0x1011d6fa4 - ImageBase;
constexpr uintptr_t ObjectSerializer_ReadFromStrean = 0x1011d6e58 - ImageBase;

constexpr uintptr_t PersistentObject_InitializeState = 0x101f8dffc - ImageBase;

constexpr uintptr_t PhysicsTraceResult_GetHitObject = 0x104092830 - ImageBase;

constexpr uintptr_t PlayerSystem_OnPlayerSpawned = 0x103fd4d70 - ImageBase; // cp::PlayerSystem::OnPlayerMainObjectSpawned

constexpr uintptr_t PointOfInterestMappin_SetPhase = 0x1042eaf14 - ImageBase;

constexpr uintptr_t QuestLoader_PhasePreloadCheck = 0x102ed49e0 - ImageBase;

constexpr uintptr_t QuestPhaseInstance_Initialize = 0x102cfba64 - ImageBase;
constexpr uintptr_t QuestPhaseInstance_ExecuteGraph = 0x102cfb178 - ImageBase;
constexpr uintptr_t QuestPhaseInstance_ExecuteNode = 0x102cfd644 - ImageBase;

constexpr uintptr_t QuestsSystem_CreateContext = 0x102cf313c - ImageBase;

constexpr uintptr_t RenderData_Release = 0x1016a38d4 - ImageBase;

constexpr uintptr_t RenderProxy_SetMaterialOverride = 0x1016a85a8 - ImageBase;
constexpr uintptr_t RenderProxy_SetHighlightParams = 0x1016a83b8 - ImageBase;
constexpr uintptr_t RenderProxy_SetScanningState = 0x1016a8484 - ImageBase;
constexpr uintptr_t RenderProxy_SetVisibility = 0x1016a78e4 - ImageBase;
constexpr uintptr_t RenderProxy_UpdateVisibility = 0x1016a7924 - ImageBase;

constexpr uintptr_t ResourceBank_ForgetResource = 0x1021b4ab8 - ImageBase;

constexpr uintptr_t ResourcePath_Create = 0x1021c90a4 - ImageBase;

constexpr uintptr_t ResourceSerializer_OnDependenciesReady = 0x1022575c0 - ImageBase;
// constexpr uintptr_t ResourceSerializer_OnResourceReady = 0x0 - ImageBase; // inlined @ ResourceSerializer_OnDependenciesReady

constexpr uintptr_t RuntimeEntityRegistry_RegisterEntity = 0x100d13c5c - ImageBase; // world::RuntimeEntityRegistry::RegisterEntity
constexpr uintptr_t RuntimeEntityRegistry_UnregisterEntity = 0x100d14084 - ImageBase;

constexpr uintptr_t RuntimeScene_AttachEntity = 0x100cf6ed8 - ImageBase;
constexpr uintptr_t RuntimeScene_DetachEntity = 0x100cf6fd0 - ImageBase;

constexpr uintptr_t RuntimeSystemEntity_AttachEntity = 0x100d25e50 - ImageBase;
constexpr uintptr_t RuntimeSystemEntity_DetachEntity = 0x100d25e58 - ImageBase;

constexpr uintptr_t RuntimeSystemWeather_GetEnvironmentDefinition = 0x100d5aee0 - ImageBase;
// constexpr uintptr_t RuntimeSystemWeather_GetWeatherState = 0x0 - ImageBase; // inlined @ RuntimeSystemWeather_SetWeatherByName
constexpr uintptr_t RuntimeSystemWeather_SetWeatherByName = 0x100d5c384 - ImageBase;
// constexpr uintptr_t RuntimeSystemWeather_SetWeatherByIndex = 0x0 - ImageBase; // inlined @ 0x100d5e558

constexpr uintptr_t ScriptBundle_dtor = 0x1021ecfd8 - ImageBase;

constexpr uintptr_t ScriptOpCodes_Handlers = 0x10908b798 - ImageBase;
constexpr uintptr_t ScriptOpCodes_Handlers_New = 0x102251ff0 - ImageBase;
constexpr uintptr_t ScriptOpCodes_Handlers_Cast = 0x102251b48 - ImageBase;
constexpr uintptr_t ScriptOpCodes_Register = 0x102252ef4 - ImageBase;

constexpr uintptr_t ScriptValidator_CompareType = 0x1021fd144 - ImageBase;
// constexpr uintptr_t ScriptValidator_CompareTypeName = 0x0 - ImageBase; // inlined @ ScriptValidator_CompareType
constexpr uintptr_t ScriptValidator_Validate = 0x1021fbf90 - ImageBase;
constexpr uintptr_t ScriptValidator_ValidateProperty = 0x1021fcfb8 - ImageBase;

constexpr uintptr_t SoundBankManager_ReadSoundBanksJson = 0x100dc8d0c - ImageBase;

constexpr uintptr_t TagSystem_AssignTag = 0x1020cde7c - ImageBase;
constexpr uintptr_t TagSystem_UnassignTag = 0x1020ce358 - ImageBase;

constexpr uintptr_t VehicleController_ToggleAuxLights = 0x1012e6f44 - ImageBase;

// constexpr uintptr_t VehicleSystem_ToggleGarageVehicle = 0x0 - ImageBase; // inlined @ 0x10136965c

constexpr uintptr_t VisionModeSystem_SetBraindanceMode = 0x1015a0544 - ImageBase;

constexpr uintptr_t VisualController_LoadDependencies = 0x100c8b630 - ImageBase;

// constexpr uintptr_t WorkspotSystem_GetWorkspotInstance = 0x0 - ImageBase; // inlined @ 0x1015fa5a0
} // namespace Red::AddressLib
// clang-format on