//! Addresses for Cyberpunk 2077, version 2.31, Mac, bundle 5314028, build 5314055.
//! Format is based on [audioware's hooks/mod.rs](https://github.com/cyb3rpsych0s1s/audioware/blob/main/crates/audioware/src/hooks/mod.rs).

#[rustfmt::skip]
#[doc(hidden)]
mod offsets {
    const IMAGE_BASE: usize = 0x100000000;

    pub const AUDIO_PLAY_DIALOG_LINE: usize                       = 0x103e9cd24 - IMAGE_BASE;
    pub const AUDIOSYSTEM_PLAY: usize                             = 0x100a86010 - IMAGE_BASE;
    pub const AUDIOSYSTEM_STOP: usize                             = 0x100a861d8 - IMAGE_BASE;
    pub const AUDIOSYSTEM_SWITCH: usize                           = 0x100a8976c - IMAGE_BASE;
    #[cfg(debug_assertions)]
    pub const ENTITY_DISPOSE: usize                               = 0x100c9ac40 - IMAGE_BASE;
    pub const ENTITY_QUEUE_EVENT: usize                           = 0x100c9ae7c - IMAGE_BASE;
    pub const TIMEDILATABLE_SETINDIVIDUALTIMEDILATION: usize      = 0x101f9157c - IMAGE_BASE;
    pub const TIMEDILATABLE_UNSETINDIVIDUALTIMEDILATION: usize    = 0x101f91868 - IMAGE_BASE;
    pub const TIMESYSTEM_SETTIMEDILATION: usize                   = 0x103c00790 - IMAGE_BASE;
    pub const TIMESYSTEM_UNSETTIMEDILATION: usize                 = 0x103c00a54 - IMAGE_BASE;
    /// gameuiSaveHandlingController
    /// mac note: LoadSaveInGame and LoadModdedSave DO NOT share same underlying address
    #[cfg(debug_assertions)]
    pub const SAVEHANDLINGCONTROLLER_LOAD_SAVE_IN_GAME: usize     = 0x1023b6188 - IMAGE_BASE;
    pub const SAVEHANDLINGCONTROLLER_LOAD_MODDED_SAVE: usize      = 0x1023b64e0 - IMAGE_BASE; // Mac addition
    pub const UISYSTEM_QUEUE_EVENT: usize                         = 0x1025d0cf8 - IMAGE_BASE;
    /// mac note: inkIWidgetController.QueueEvent (a.k.a inkIGameController)
    /// and inkWidgetLogicController.QueueEvent (a.k.a inkLogicController) DO NOT share same underlying address
    pub const INKIWIDGETCONTROLLER_QUEUE_EVENT: usize             = 0x1047cac28 - IMAGE_BASE;
    pub const INKWIDGETLOGICCONTROLLER_QUEUE_EVENT: usize         = 0x1047d35e0 - IMAGE_BASE; // Mac addition
    pub const INKMENUSCENARIO_SWITCH_TO_SCENARIO: usize           = 0x1049300d4 - IMAGE_BASE;
    pub const INKMENUSCENARIO_QUEUE_EVENT: usize                  = 0x104930374 - IMAGE_BASE;
    pub const SOUNDCOMPONENT_ONSTOPDIALOGLINE: usize              = 0x1035494e8 - IMAGE_BASE;
    #[cfg(all(debug_assertions, feature = "research", feature = "redengine"))]
    pub const AUDIOINTERFACE_POST_EVENT: usize                    = 0x103e360fc - IMAGE_BASE;
    pub const SOUNDENGINE_POST_EVENT: usize                       = 0x100de1d64 - IMAGE_BASE;
    pub const SOUNDENGINE_POST_EVENT_ONESHOT: usize               = 0x100de1ed4 - IMAGE_BASE;
    pub const SOUNDENGINE_EXTERNAL_EVENT_RES: usize               = 0x100de2088 - IMAGE_BASE;
    pub const SOUNDENGINE_SET_SWITCH: usize                       = 0x100de22a8 - IMAGE_BASE;
    pub const SOUNDENGINE_SET_PARAMETER: usize                    = 0x100de21a8 - IMAGE_BASE;
    pub const SOUNDENGINE_SET_GLOBAL_PARAMETER: usize             = 0x100de2218 - IMAGE_BASE;
    pub const AUDIOINTERNALEVENT_APPLY_ACTION: usize              = 0x103e34fd0 - IMAGE_BASE;

    #[cfg(feature = "research")]
    mod natives {
        pub const INKLOGICCONTROLLER_QUEUE_EVENT: usize               = 0x1047d35e0 - IMAGE_BASE;
        pub const VO_STORAGE_GET_VO_FILE: usize                       = 0x1013ff9dc - IMAGE_BASE;
        pub const LOCALIZATIONMANAGER_RESOLVEFILENAME: usize          = 0x1013f5880 - IMAGE_BASE;
        pub const ONSCREENVOPLAYERCONTROLLER_SHOWSUBTITLE: usize      = 0x1023c738c - IMAGE_BASE;
        pub const SCRIPTAUDIOPLAYER_PLAY_SINGLE: usize                = 0x103e34038 - IMAGE_BASE;
        pub const SCRIPTAUDIOPLAYER_PLAY_THREE: usize                 = 0x103e340b8 - IMAGE_BASE;
        pub const SCRIPTAUDIOPLAYER_PLAY_UNIQUE_WITH_SEEK: usize      = 0x103e343bc - IMAGE_BASE;
        pub const SCRIPTAUDIOPLAYER_STOP: usize                       = 0x103e34430 - IMAGE_BASE;
        pub const SCRIPTAUDIOPLAYER_SET_SWITCH: usize                 = 0x103e344d8 - IMAGE_BASE;
        pub const SCRIPTAUDIOPLAYER_SET_PARAMETER: usize              = 0x103e34484 - IMAGE_BASE;
    }
    #[cfg(feature = "research")]
    pub use natives::*;

    #[cfg(feature = "research")]
    mod events {
        pub const EVENT_DIALOGLINE: usize                             = 0x101b5b3c8 - IMAGE_BASE;
        pub const EVENT_DIALOGLINEEND: usize                          = 0x103d0cb44 - IMAGE_BASE;
        pub const VEHICLE_AUDIO_EVENT: usize                          = 0x1012a53b4 - IMAGE_BASE;
        pub const AUDIO_EVENT: usize                                  = 0x101f86428 - IMAGE_BASE;
        pub const WEAPON_PRE_FIRE_EVENT: usize                        = 0x103d0cb64 - IMAGE_BASE;
        // mac note: gameaudioeventsStopWeaponFire and gameweaponeventsStopFiringEvent DO NOT share same underlying address
        pub const WEAPON_STOP_FIRING_EVENT: usize                     = 0x103d0cb4c - IMAGE_BASE;
        pub const WEAPON_STOP_WEAPON_FIRE: usize                      = 0x103d0cb54 - IMAGE_BASE; // Mac addition
        pub const AREA_ENTERED_EVENT: usize                           = 0x103fdaea8 - IMAGE_BASE;
        pub const AREA_EXITED_EVENT: usize                            = 0x103fdb10c - IMAGE_BASE;
        pub const INK_VO_REQUEST_EVT: usize                           = 0x1023c6dd4 - IMAGE_BASE;
        pub const SOUND_PLAY_VO: usize                                = 0x101b5a5bc - IMAGE_BASE;
    }
    #[cfg(feature = "research")]
    pub use events::*;
}
