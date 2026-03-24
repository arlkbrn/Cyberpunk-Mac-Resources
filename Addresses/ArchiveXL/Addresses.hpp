#pragma once

/**
 * Format is based on ArchiveXL's Library.hpp
 * [https://github.com/psiberx/cp2077-archive-xl/blob/main/src/Red/Addresses/Library.hpp]
 */
#include <cstdint>

// Addresses for Cyberpunk 2077, version 2.31, Mac, bundle 5314028, build 5314055.
// clang-format off
namespace Red::AddressLib
{
constexpr uintptr_t ImageBase = 0x100000000;

constexpr uintptr_t Main = 0x100031e18 - ImageBase;

// constexpr uintptr_t AISpotPersistentDataArray_Reserve = 0x0 - ImageBase; // inlined @ 0x103d50e70
constexpr uintptr_t AIWorkspotManager_RegisterSpots = 0x103d515d0 - ImageBase;

constexpr uintptr_t AnimatedComponent_InitializeAnimations = 0x100b97524 - ImageBase;

constexpr uintptr_t AppearanceChanger_ComputePlayerGarment = 0x103710560 - ImageBase;
constexpr uintptr_t AppearanceChanger_GetBaseMeshOffset = 0x100afd9a8 - ImageBase;
constexpr uintptr_t AppearanceChanger_GetSuffixes = 0x10370d924 - ImageBase;
// constexpr uintptr_t AppearanceChanger_GetSuffixValue = 0x0 - ImageBase; // inlined @ AppearanceChanger_GetSuffixes
constexpr uintptr_t AppearanceChanger_RegisterPart = 0x100cd1f50 - ImageBase;
constexpr uintptr_t AppearanceChanger_SelectAppearanceName = 0x103732c68 - ImageBase;

constexpr uintptr_t AppearanceChangeSystem_ChangeAppearance1 = 0x100d43218 - ImageBase;
constexpr uintptr_t AppearanceChangeSystem_ChangeAppearance2 = 0x100d45fd0 - ImageBase;

constexpr uintptr_t AppearanceDefinition_ExtractPartComponents = 0x100acca30 - ImageBase;

constexpr uintptr_t AppearanceNameVisualTagsPreset_GetVisualTags = 0x103cd7234 - ImageBase;

constexpr uintptr_t AppearanceResource_OnLoad = 0x100ad88a8 - ImageBase; // appearance::AppearanceResource::OnPostLoad
constexpr uintptr_t AppearanceResource_FindAppearanceDefinition = 0x100ad7048 - ImageBase;

constexpr uintptr_t AttachmentSlots_InitializeSlots = 0x103508df8 - ImageBase;
constexpr uintptr_t AttachmentSlots_IsSlotEmpty = 0x1035104e4 - ImageBase;
constexpr uintptr_t AttachmentSlots_IsSlotSpawning = 0x103510644 - ImageBase;

constexpr uintptr_t BufferReader_MakeType0 = 0x1022643c0 - ImageBase;
constexpr uintptr_t BufferReader_MakeType1 = 0x10226442c - ImageBase;

constexpr uintptr_t CNamePool_RegisterName = 0x103452108 - ImageBase;
constexpr uintptr_t CNamePool_GetStringView = 0x103452bdc - ImageBase;

constexpr uintptr_t CBaseEngine_InitEngine = 0x103d9e494 - ImageBase;
constexpr uintptr_t CBaseEngine_LoadGatheredResources = 0x103d9efc8 - ImageBase;

constexpr uintptr_t CharacterCustomizationFeetController_CheckState = 0x1024436d0 - ImageBase;

constexpr uintptr_t CharacterCustomizationGenitalsController_OnAttach = 0x102440418 - ImageBase;
constexpr uintptr_t CharacterCustomizationGenitalsController_CheckState = 0x102440814 - ImageBase;

constexpr uintptr_t CharacterCustomizationHairstyleController_OnDetach = 0x1024415c0 - ImageBase;
constexpr uintptr_t CharacterCustomizationHairstyleController_CheckState = 0x102442d8c - ImageBase;

constexpr uintptr_t CharacterCustomizationHelper_GetHairColor = 0x1037349e0 - ImageBase;

constexpr uintptr_t CharacterCustomizationState_FinalizePart = 0x10244f640 - ImageBase;
constexpr uintptr_t CharacterCustomizationState_GetHeadAppearances1 = 0x102451620 - ImageBase;
constexpr uintptr_t CharacterCustomizationState_GetHeadAppearances2 = 0x102451afc - ImageBase;
constexpr uintptr_t CharacterCustomizationState_GetBodyAppearances1 = 0x102451f2c - ImageBase;
constexpr uintptr_t CharacterCustomizationState_GetBodyAppearances2 = 0x1024518e4 - ImageBase;
constexpr uintptr_t CharacterCustomizationState_GetArmsAppearances1 = 0x102451d14 - ImageBase;
constexpr uintptr_t CharacterCustomizationState_GetArmsAppearances2 = 0x102452144 - ImageBase;

constexpr uintptr_t CharacterCustomizationSystem_Initialize = 0x1024593dc - ImageBase;
constexpr uintptr_t CharacterCustomizationSystem_Uninitialize = 0x102459f78 - ImageBase;
// constexpr uintptr_t CharacterCustomizationSystem_GetResource = 0x0 - ImageBase; // inlined @ CharacterCustomizationSystem_Initialize
constexpr uintptr_t CharacterCustomizationSystem_EnsureState = 0x102456c9c - ImageBase;
constexpr uintptr_t CharacterCustomizationSystem_InitializeAppOption = 0x102464ed4 - ImageBase;
constexpr uintptr_t CharacterCustomizationSystem_InitializeMorphOption = 0x1024652d8 - ImageBase;
constexpr uintptr_t CharacterCustomizationSystem_InitializeSwitcherOption = 0x102465a4c - ImageBase;
constexpr uintptr_t CharacterCustomizationSystem_InitializeOptionsFromState = 0x10245f9ac - ImageBase;

constexpr uintptr_t CMesh_PostLoad = 0x100e16b28 - ImageBase;
constexpr uintptr_t CMesh_GetAppearance = 0x100e199d8 - ImageBase;
constexpr uintptr_t CMesh_FindAppearance = 0x100e189f4 - ImageBase;
constexpr uintptr_t CMesh_LoadMaterialsAsync = 0x100e18c28 - ImageBase;
constexpr uintptr_t CMesh_AddStubAppearance = 0x100e16e68 - ImageBase;
// constexpr uintptr_t CMesh_ShouldPreloadAppearances = 0x0 - ImageBase; // inlined @ CMesh_PostLoad

constexpr uintptr_t MeshMaterialBuffer_LoadMaterialAsync = 0x100e27a4c - ImageBase;

constexpr uintptr_t Entity_Attach = 0x100c99368 - ImageBase;
constexpr uintptr_t Entity_Detach = 0x100c996c0 - ImageBase;
constexpr uintptr_t Entity_Dispose = 0x100c999e0 - ImageBase;
constexpr uintptr_t Entity_Initialize = 0x100c985ec - ImageBase;
constexpr uintptr_t Entity_Assemble = 0x100c97e28 - ImageBase;
constexpr uintptr_t Entity_Reassemble = 0x100c95744 - ImageBase;
constexpr uintptr_t Entity_Uninitialize = 0x100c992c4 - ImageBase;
constexpr uintptr_t Entity_RequestComponents = 0x100c97d3c - ImageBase;

constexpr uintptr_t EntityBuilder_ExtractComponentsJob = 0x100ca41e0 - ImageBase;
constexpr uintptr_t EntityBuilder_ScheduleExtractComponentsJob = 0x100ca08a0 - ImageBase;

constexpr uintptr_t EntitySpawner_SpawnFromTemplate = 0x1014084b0 - ImageBase;

constexpr uintptr_t EntityTemplate_OnLoad = 0x100cb2a6c - ImageBase;
constexpr uintptr_t EntityTemplate_FindAppearance = 0x100cb12bc - ImageBase;

constexpr uintptr_t FactoryIndex_LoadFactoryAsync = 0x100cc0710 - ImageBase;
constexpr uintptr_t FactoryIndex_ResolveResource = 0x100cc0bec - ImageBase;

constexpr uintptr_t GameApplication_InitResourceDepot = 0x101704194 - ImageBase;

constexpr uintptr_t GarmentAssembler_FindState = 0x1036f8a34 - ImageBase;
constexpr uintptr_t GarmentAssembler_RemoveItem = 0x1036f8744 - ImageBase;
constexpr uintptr_t GarmentAssembler_ProcessGarment = 0x100ae4004 - ImageBase;
constexpr uintptr_t GarmentAssembler_ExtractComponentsJob = 0x100ae6660 - ImageBase;
constexpr uintptr_t GarmentAssembler_ProcessSkinnedMesh = 0x100ae3840 - ImageBase;
constexpr uintptr_t GarmentAssembler_ProcessMorphedMesh = 0x100ae3cc0 - ImageBase;
constexpr uintptr_t GarmentAssembler_OnGameDetach = 0x10371fe6c - ImageBase;

constexpr uintptr_t GarmentAssemblerState_AddItem = 0x1036f8208 - ImageBase;
constexpr uintptr_t GarmentAssemblerState_AddCustomItem = 0x1036f82f4 - ImageBase;
constexpr uintptr_t GarmentAssemblerState_ChangeItem = 0x1036f887c - ImageBase; // no xrefs
constexpr uintptr_t GarmentAssemblerState_ChangeCustomItem = 0x1036f89a4 - ImageBase; // no xrefs

constexpr uintptr_t ImpostorComponent_OnAttach = 0x1037debc8 - ImageBase;

constexpr uintptr_t InkSpawner_FinishAsyncSpawn = 0x1049799b8 - ImageBase;

// constexpr uintptr_t InkWidgetLibrary_AsyncSpawnFromExternal = 0x0 - ImageBase; // inlined @ 0x1048e4a2c
constexpr uintptr_t InkWidgetLibrary_AsyncSpawnFromLocal = 0x104965b38 - ImageBase;
constexpr uintptr_t InkWidgetLibrary_SpawnFromExternal = 0x1048db148 - ImageBase;
constexpr uintptr_t InkWidgetLibrary_SpawnFromLocal = 0x104965ec0 - ImageBase;

constexpr uintptr_t InkWorldLayer_UpdateComponents = 0x10491ddb0 - ImageBase;

constexpr uintptr_t ItemFactoryAppearanceChangeRequest_LoadTemplate = 0x1036fca88 - ImageBase;
constexpr uintptr_t ItemFactoryAppearanceChangeRequest_LoadAppearance = 0x1036fce14 - ImageBase;

constexpr uintptr_t ItemFactoryRequest_LoadAppearance = 0x1037034a4 - ImageBase;

constexpr uintptr_t IPlacedComponent_SetTransform = 0x100c417f0 - ImageBase;

constexpr uintptr_t JobHandle_Wait = 0x1009d477c - ImageBase; // need to wrap as Wait(Red::JobHandle& aJob,0,0xffffffff)

constexpr uintptr_t JournalManager_LoadJournal = 0x101eae820 - ImageBase;
constexpr uintptr_t JournalManager_TrackQuest = 0x101eb17c0 - ImageBase;

constexpr uintptr_t JournalRootFolderEntry_Initialize = 0x101e75a24 - ImageBase;

constexpr uintptr_t JournalTree_ProcessJournalIndex = 0x101ea3410 - ImageBase;

constexpr uintptr_t Localization_LoadOnScreens = 0x102f67db4 - ImageBase;
constexpr uintptr_t Localization_LoadSubtitles = 0x102f67be0 - ImageBase;
constexpr uintptr_t Localization_LoadVoiceOvers = 0x101405334 - ImageBase;
constexpr uintptr_t Localization_LoadLipsyncs = 0x101af9ccc - ImageBase;

constexpr uintptr_t MappinSystem_GetMappinData = 0x1042a3e68 - ImageBase;
constexpr uintptr_t MappinSystem_GetPoiData = 0x10429eed0 - ImageBase;
constexpr uintptr_t MappinSystem_OnStreamingWorldLoaded = 0x1042a71a4 - ImageBase;

constexpr uintptr_t MeshAppearance_LoadMaterialSetupAsync = 0x100e1f7b4 - ImageBase;

constexpr uintptr_t MorphTargetMesh_PostLoad = 0x100e467bc - ImageBase; // MorphTargetMesh::OnPostLoad

constexpr uintptr_t MorphTargetManager_ApplyMorphTarget = 0x100c6c0c4 - ImageBase;

constexpr uintptr_t PersistencySystem_SetPersistentStateData = 0x103febc30 - ImageBase;

constexpr uintptr_t QuestLoader_ProcessPhaseResource = 0x102ed6090 - ImageBase;

constexpr uintptr_t QuestsSystem_OnGameRestored = 0x102ef8c58 - ImageBase;

constexpr uintptr_t QuestRootInstance_Start = 0x102d00870 - ImageBase;

constexpr uintptr_t ResourceDepot_InitializeArchives = 0x103ed96b0 - ImageBase;
constexpr uintptr_t ResourceDepot_LoadArchives = 0x103eda488 - ImageBase;
constexpr uintptr_t ResourceDepot_RequestResource = 0x103ed9b94 - ImageBase;
constexpr uintptr_t ResourceDepot_CheckResource = 0x103ed9e9c - ImageBase;

constexpr uintptr_t ResourceLoader_RequestResource = 0x1021b71cc - ImageBase; // res::ResourceLoader::IssueLoadingRequest
constexpr uintptr_t ResourceLoader_OnUpdate = 0x1021b5548 - ImageBase;

constexpr uintptr_t ResourcePath_Create = 0x1021c90a4 - ImageBase;

constexpr uintptr_t ResourceSerializer_Load = 0x102255b4c - ImageBase;
constexpr uintptr_t ResourceSerializer_Deserialize = 0x10225921c - ImageBase;
constexpr uintptr_t ResourceSerializer_PostLoad = 0x102259888 - ImageBase;
constexpr uintptr_t ResourceSerializer_OnDependenciesReady = 0x1022575c0 - ImageBase;
// constexpr uintptr_t ResourceSerializer_OnResourceReady = 0x0 - ImageBase; // inlined @ ResourceSerializer_OnDependenciesReady

constexpr uintptr_t StreamingSector_PostLoad = 0x103426204 - ImageBase;

constexpr uintptr_t StreamingWorld_Serialize = 0x10342ad40 - ImageBase;

constexpr uintptr_t TPPRepresentationComponent_OnAttach = 0x1035a0604 - ImageBase;
constexpr uintptr_t TPPRepresentationComponent_OnItemEquipped = 0x1035a6174 - ImageBase;
constexpr uintptr_t TPPRepresentationComponent_OnItemUnequipped = 0x1035a56dc - ImageBase;
constexpr uintptr_t TPPRepresentationComponent_RegisterAffectedItem = 0x1035a0e10 - ImageBase;
// constexpr uintptr_t TPPRepresentationComponent_IsAffectedSlot = 0x0 - ImageBase; // inlined @ TPPRepresentationComponent_OnItemEquipped & TPPRepresentationComponent_OnItemUnequipped

constexpr uintptr_t TweakDB_Load = 0x102b75570 - ImageBase; // game::data::TweakDB::LoadOptimized
} // namespace Red::AddressLib
// clang-format on