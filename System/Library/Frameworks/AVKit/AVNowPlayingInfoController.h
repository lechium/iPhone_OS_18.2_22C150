//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVObservationController, AVPlayerController, NSString, NSTimer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVNowPlayingInfoController : NSObject
{
    id _playerControllerCurrentTimeJumpedObserver;	// 8 = 0x8
    _Bool _nowPlayingInfoNeedsUpdate;	// 16 = 0x10
    _Bool _enabled;	// 17 = 0x11
    void *_commandHandlerIdentifier;	// 24 = 0x18
    AVObservationController *_keyValueObservationController;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 40 = 0x28
    _Bool _suspended;	// 48 = 0x30
    _Bool _requiresLinearPlayback;	// 49 = 0x31
    NSString *_overrideParentApplicationDisplayIdentifier;	// 56 = 0x38
    AVPlayerController *_playerController;	// 64 = 0x40
    AVPlayerController *_playerControllerToActivateAfterDelay;	// 72 = 0x48
    NSTimer *_startNowPlayingUpdatesTimer;	// 80 = 0x50
}

+ (id)_mediaRemoteLanguageOptionCharacteristicForAVMediaCharacteristic:(id)arg1;	// IMP=0x0060000000067009
+ (id)_avMediaCharacteristics;	// IMP=0x0060000000066fd9
+ (id)_mediaRemoteLanguageOptionCharacteristicsForAVMediaSelectionOption:(id)arg1;	// IMP=0x0060000000066d95
+ (void *)_createMediaRemoteLanguageOptionWithAVMediaSelectionOption:(id)arg1;	// IMP=0x0060000000066bfa
+ (void *)_createMediaRemoteLanguageOptionGroupWithAVMediaSelectionOptions:(id)arg1;	// IMP=0x00600000000669e5
+ (void)sharedNowPlayingInfoControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0060000000066923
- (void).cxx_destruct;	// IMP=0x000000000006638d
@property(nonatomic) __weak NSTimer *startNowPlayingUpdatesTimer; // @synthesize startNowPlayingUpdatesTimer=_startNowPlayingUpdatesTimer;
@property(nonatomic) __weak AVPlayerController *playerControllerToActivateAfterDelay; // @synthesize playerControllerToActivateAfterDelay=_playerControllerToActivateAfterDelay;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(copy, nonatomic) NSString *overrideParentApplicationDisplayIdentifier; // @synthesize overrideParentApplicationDisplayIdentifier=_overrideParentApplicationDisplayIdentifier;
@property(nonatomic) _Bool requiresLinearPlayback; // @synthesize requiresLinearPlayback=_requiresLinearPlayback;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
- (id)_currentLanguageOptions;	// IMP=0x00000000000661e6
- (id)_availableLanguageOptions;	// IMP=0x0000000000066098
- (unsigned int)_handleRemoteCommand:(unsigned int)arg1 options:(id)arg2;	// IMP=0x0000000000064ec5
- (void)_updateRegisteredRemoteCommandEnabledStatesWithCommandsAndStates:(id)arg1;	// IMP=0x0000000000064b4e
- (id)_makeCommandsAndStatesDictionaryForPlayerController:(id)arg1;	// IMP=0x0000000000064400
- (id)_makePlaybackInfoDictionary;	// IMP=0x0000000000063cd3
- (void)_updateNowPlayingInfo:(id)arg1 commandsAndStates:(id)arg2;	// IMP=0x0000000000063c3d
- (void)_updateNowPlayingInfoIfNeeded;	// IMP=0x0000000000063a0b
- (void)_setNowPlayingInfoNeedsUpdate;	// IMP=0x00000000000639be
- (id)_createNowPlayingInfoFromPlaybackInfo:(id)arg1;	// IMP=0x00000000000638bf
- (void)stopNowPlayingUpdatesForPlayerController:(id)arg1;	// IMP=0x0000000000063741
- (void)startNowPlayingUpdatesForPlayerController:(id)arg1 afterDelay:(double)arg2;	// IMP=0x000000000006346b
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)dealloc;	// IMP=0x0000000000062e7d
- (id)init;	// IMP=0x0000000000062bf1

@end

