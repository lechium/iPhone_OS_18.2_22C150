//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine, MPLibraryAddStatusObserver, MPNowPlayingInfoCenter, MPRemoteCommandCenter, MSVBlockGuard, NSArray, NSDictionary, NSString, _MPCMediaRemotePublisher_Swift;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _MPCMediaRemotePublisher : NSObject
{
    MPLibraryAddStatusObserver *_libraryAddStatusObserver;	// 8 = 0x8
    struct os_unfair_lock_s _libraryAddStatusObserverLock;	// 16 = 0x10
    NSArray *_accounts;	// 24 = 0x18
    _Bool _activeAccountAllowsSubscriptionPlayback;	// 32 = 0x20
    _Bool _activeAccountRequiresAuthorizationTokensForPlayback;	// 33 = 0x21
    NSString *_activeAccountStoreFrontIdentifier;	// 40 = 0x28
    _Bool _hasBeganFastForward;	// 48 = 0x30
    _Bool _hasBeganRewind;	// 49 = 0x31
    NSObject<OS_dispatch_source> *_nextPreviousTrackCooldownTimer;	// 56 = 0x38
    long long _deferredTrackChangeDelta;	// 64 = 0x40
    NSArray *_lastCommandDescriptions;	// 72 = 0x48
    MSVBlockGuard *_setPlaybackQueueExtendedTimeGuard;	// 80 = 0x50
    _Bool _commandUpdateScheduled;	// 88 = 0x58
    _Bool _initializedSupportedCommands;	// 89 = 0x59
    _Bool _engineRestoringState;	// 90 = 0x5a
    _Bool _mediaServerAvailable;	// 91 = 0x5b
    MPCPlaybackEngine *_playbackEngine;	// 96 = 0x60
    MPNowPlayingInfoCenter *_infoCenter;	// 104 = 0x68
    MPRemoteCommandCenter *_commandCenter;	// 112 = 0x70
    NSString *_hostingSharedSessionID;	// 120 = 0x78
    _MPCMediaRemotePublisher_Swift *_swift;	// 128 = 0x80
    NSDictionary *_lastPerformanceMetrics;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000001a3dc8
@property(retain, nonatomic) NSDictionary *lastPerformanceMetrics; // @synthesize lastPerformanceMetrics=_lastPerformanceMetrics;
@property(nonatomic, getter=isMediaServerAvailable) _Bool mediaServerAvailable; // @synthesize mediaServerAvailable=_mediaServerAvailable;
@property(nonatomic, getter=isEngineRestoringState) _Bool engineRestoringState; // @synthesize engineRestoringState=_engineRestoringState;
@property(readonly, nonatomic) _MPCMediaRemotePublisher_Swift *swift; // @synthesize swift=_swift;
@property(readonly, copy, nonatomic) NSString *hostingSharedSessionID; // @synthesize hostingSharedSessionID=_hostingSharedSessionID;
@property(readonly, nonatomic) MPRemoteCommandCenter *commandCenter; // @synthesize commandCenter=_commandCenter;
@property(readonly, nonatomic) MPNowPlayingInfoCenter *infoCenter; // @synthesize infoCenter=_infoCenter;
@property(nonatomic, getter=hasInitializedSupportedCommands) _Bool initializedSupportedCommands; // @synthesize initializedSupportedCommands=_initializedSupportedCommands;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)_performSkipChapterCommand:(unsigned int)arg1 withCommandID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a384f
- (unsigned long long)vocalAttenuationUnavailabilityReasons;	// IMP=0x00000000001a36a2
- (void)performSetQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a359b
- (void)performSetQueueWithIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a34d8
- (void)_performCommandEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019d221
- (void)_beginBackgroundTaskUntilPlayCommandWithCommand:(id)arg1 timeout:(double)arg2;	// IMP=0x000000000019d15c
- (void)_performDebugEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019cd8c
- (void)__updateSupportedCommands;	// IMP=0x0000000000196645
- (void)_updateSupportedCommands;	// IMP=0x00000000001965f0
- (void)_updateLaunchCommands;	// IMP=0x00000000001965a9
- (id)_supportedSessionTypes;	// IMP=0x00000000001962fb
- (id)_exportableSessionTypes;	// IMP=0x0000000000195e68
- (void)_enqueueFallbackIntentIfNeededForCommandEvent:(id)arg1 play:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000195a45
- (void)deactivateAudioSessionIfIdle:(long long)arg1;	// IMP=0x00000000001959d7
- (void)becomeActiveIfNeededWithCommandID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001952e2
- (void)_podcastsSkipIntervalDidChange:(id)arg1;	// IMP=0x00000000001952d0
- (void)_activeSharedSessionDidChange:(id)arg1;	// IMP=0x00000000001951c3
- (void)_likedStateChangedNotification:(id)arg1;	// IMP=0x00000000001951b1
- (void)_durationAvailableNotification:(id)arg1;	// IMP=0x0000000000194d12
- (void)_commandEventDidTimeoutNotification:(id)arg1;	// IMP=0x0000000000194b1a
- (void)commandCenter:(id)arg1 didTimeoutCommandEvent:(id)arg2 statusHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000194a14
- (void)nowPlayingInfoCenter:(id)arg1 didEndLyricsEvent:(id)arg2;	// IMP=0x00000000001943fa
- (void)nowPlayingInfoCenter:(id)arg1 didBeginLyricsEvent:(id)arg2;	// IMP=0x000000000019427a
- (void)invalidateSessionTypesWithReason:(id)arg1;	// IMP=0x00000000001941a7
- (void)invalidateQueueTypesWithReason:(id)arg1;	// IMP=0x00000000001940d4
- (void)engine:(id)arg1 didChangeQueueController:(id)arg2;	// IMP=0x00000000001940a2
- (void)engine:(id)arg1 didReceivePickedRouteChange:(id)arg2;	// IMP=0x0000000000194090
- (void)engineDidEndSleepTimer:(id)arg1;	// IMP=0x000000000019407e
- (void)engineDidUnblockVocalAttenuation:(id)arg1;	// IMP=0x000000000019406c
- (void)engineDidBlockVocalAttenuation:(id)arg1;	// IMP=0x0000000000193fa1
- (void)engineDidChangeVocalAttenuationLevel:(id)arg1;	// IMP=0x0000000000193f8f
- (void)engineDidChangeVocalAttenuationState:(id)arg1;	// IMP=0x0000000000193f7d
- (void)engineDidResetMediaServices:(id)arg1;	// IMP=0x0000000000193f73
- (void)engineDidLoseMediaServices:(id)arg1;	// IMP=0x0000000000193f69
- (void)engineDidEndStateRestoration:(id)arg1;	// IMP=0x0000000000193f5f
- (void)engineWillBeginStateRestoration:(id)arg1;	// IMP=0x0000000000193f55
- (void)engine:(id)arg1 didChangeCurrentItemVariantID:(id)arg2;	// IMP=0x0000000000193f43
- (void)engine:(id)arg1 didChangeActionAtQueueEnd:(long long)arg2;	// IMP=0x0000000000193ee2
- (void)engine:(id)arg1 didChangeShuffleType:(long long)arg2;	// IMP=0x0000000000193e92
- (void)engine:(id)arg1 didChangeRepeatType:(long long)arg2;	// IMP=0x0000000000193e42
- (void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2;	// IMP=0x0000000000193d62
- (void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;	// IMP=0x0000000000193d49
- (void)engine:(id)arg1 didAchieveLikelyToKeepUpWithItem:(id)arg2;	// IMP=0x0000000000193d37
- (void)engine:(id)arg1 didChangeToItem:(id)arg2;	// IMP=0x0000000000193cf9
- (void)accountManager:(id)arg1 didChangeAccounts:(id)arg2;	// IMP=0x0000000000193aee
- (void)updatePlaybackMetrics:(id)arg1;	// IMP=0x0000000000193985
- (void)_leaveSharedSessionWithCommandID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001936e4
- (void)leaveSharedSessionWithCommandID:(id)arg1 remoteControlInterface:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019341f
- (id)getQOSDialogForError:(id)arg1 withItem:(id)arg2;	// IMP=0x0000000000193383
- (void)getShouldRestoreStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000193278
- (void)reportUserBackgroundedApplication;	// IMP=0x00000000001931e8
- (void)publishIfNeeded;	// IMP=0x0000000000191ef6
- (void)becomeActive;	// IMP=0x0000000000191ee0
- (void)dealloc;	// IMP=0x0000000000191e57
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x000000000019198b
- (void)nowPlayingInfoCenter:(id)arg1 didEndMigrationWithIdentifier:(id)arg2 error:(id)arg3;	// IMP=0x00000000001ad6a5
- (void)nowPlayingInfoCenter:(id)arg1 willBeginSessionMigrationWithIdentifier:(id)arg2;	// IMP=0x00000000001ad591
- (void)nowPlayingInfoCenter:(id)arg1 getTransportablePlaybackSessionRepresentationForRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ad4d7
- (id)nowPlayingInfoCenter:(id)arg1 childContentItemIDAtIndex:(long long)arg2 ofItem:(id)arg3;	// IMP=0x00000000001ad32d
- (id)nowPlayingInfoCenter:(id)arg1 lyricsForContentItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ad1d1
- (id)nowPlayingInfoCenter:(id)arg1 artworkCatalogForContentItem:(id)arg2;	// IMP=0x00000000001ad076
- (id)nowPlayingInfoCenter:(id)arg1 transcriptAlignmentsForContentItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001acff6
- (id)nowPlayingInfoCenter:(id)arg1 infoForContentItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ace3b
- (id)nowPlayingInfoCenter:(id)arg1 remoteArtworkForContentItem:(id)arg2 format:(id)arg3 size:(struct CGSize)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000001acc71
- (id)nowPlayingInfoCenter:(id)arg1 artworkForContentItem:(id)arg2 size:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001acac6
- (id)nowPlayingInfoCenter:(id)arg1 contentItemForID:(id)arg2;	// IMP=0x00000000001ac7c0
- (id)nowPlayingInfoCenter:(id)arg1 contentItemIDsFromOffset:(long long)arg2 toOffset:(long long)arg3 nowPlayingIndex:(long long *)arg4;	// IMP=0x00000000001ac715
- (id)nowPlayingInfoCenter:(id)arg1 contentItemIDForOffset:(long long)arg2;	// IMP=0x00000000001ac684
- (id)playbackQueueAuxilaryNowPlayingInfoForNowPlayingInfoCenter:(id)arg1;	// IMP=0x00000000001ac4c3
- (id)playbackQueuePropertiesForNowPlayingInfoCenter:(id)arg1;	// IMP=0x00000000001ac2c6
- (id)playbackQueueIdentifierForNowPlayingInfoCenter:(id)arg1;	// IMP=0x00000000001ac24c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
