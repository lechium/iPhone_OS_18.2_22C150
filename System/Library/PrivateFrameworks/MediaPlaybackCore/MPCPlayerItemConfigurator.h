//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPAVRoutingController, MPCAudioAssetTypeSelector, MPCMediaFoundationTranslator, MPCModelGenericAVItem, MPCPlaybackEngine, MPCPlayerAudioRoute, MPPlaybackEQSetting, NSString;
@protocol MFPlaybackStackController><MFQueueManagement, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface MPCPlayerItemConfigurator : NSObject
{
    MPCPlayerAudioRoute *_currentAudioRoute;	// 8 = 0x8
    MPAVRoutingController *_routingController;	// 16 = 0x10
    MPCAudioAssetTypeSelector *_audioAssetTypeSelector;	// 24 = 0x18
    MPPlaybackEQSetting *_eqSetting;	// 32 = 0x20
    MPCMediaFoundationTranslator *_translator;	// 40 = 0x28
    id <MFPlaybackStackController><MFQueueManagement> _stackController;	// 48 = 0x30
    MPCPlaybackEngine *_playbackEngine;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_userDefaultsDebouncer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000254dd5
@property(retain, nonatomic) NSObject<OS_dispatch_source> *userDefaultsDebouncer; // @synthesize userDefaultsDebouncer=_userDefaultsDebouncer;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(readonly, nonatomic) __weak id <MFPlaybackStackController><MFQueueManagement> stackController; // @synthesize stackController=_stackController;
@property(readonly, nonatomic) __weak MPCMediaFoundationTranslator *translator; // @synthesize translator=_translator;
@property(retain, nonatomic) MPPlaybackEQSetting *eqSetting; // @synthesize eqSetting=_eqSetting;
@property(readonly, nonatomic) MPCAudioAssetTypeSelector *audioAssetTypeSelector; // @synthesize audioAssetTypeSelector=_audioAssetTypeSelector;
@property(readonly, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
- (void)_resetBufferedAudio;	// IMP=0x0000000000254bdd
- (void)engineDidChangeVocalAttenuationState:(id)arg1;	// IMP=0x0000000000254b81
- (void)engineDidChangeVocalAttenuationLevel:(id)arg1;	// IMP=0x0000000000254b47
- (void)_updatePreferredAudioFormatIfRequiredForItem:(id)arg1 route:(id)arg2;	// IMP=0x0000000000254534
- (void)_updateQueueItemsAndPlayerForFormatChangeIfRequired;	// IMP=0x00000000002543b1
- (_Bool)_shouldReloadEntireQueue;	// IMP=0x00000000002540b8
- (id)_modeObjectForPlayerItem:(id)arg1;	// IMP=0x0000000000253ff4
- (id)queuedItems;	// IMP=0x0000000000253d8d
@property(readonly, nonatomic) __weak MPCModelGenericAVItem *currentItem;
- (_Bool)updateCurrentAudioRouteWithPickedRouteIfNeeded:(id)arg1;	// IMP=0x0000000000253bb0
@property(readonly, nonatomic) MPCPlayerAudioRoute *currentAudioRoute; // @synthesize currentAudioRoute=_currentAudioRoute;
- (void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2;	// IMP=0x000000000025393f
- (id)_audioFormatsDictionaryWithHLSMetadata:(id)arg1;	// IMP=0x0000000000253712
- (id)_HLSMetadataForAsset:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000253550
- (id)_audioFormatsDictionaryWithHLSMetadataFromAsset:(id)arg1 metadataWaitTime:(double *)arg2 error:(id *)arg3;	// IMP=0x000000000025347f
- (void)_emitAudioFormatSelection:(id)arg1 item:(id)arg2;	// IMP=0x0000000000253187
- (void)_setupQueueItemForLossyAudioPlayback:(id)arg1 playerItem:(id)arg2;	// IMP=0x0000000000252dd2
- (void)_setupQueueItemForHLSPlayback:(id)arg1 playerItem:(id)arg2;	// IMP=0x0000000000252b28
- (_Bool)_setupQueueItemForEnhancedAudioHLSPlayback:(id)arg1 playerItem:(id)arg2 metadataWaitTime:(double *)arg3 error:(id *)arg4;	// IMP=0x00000000002520f8
- (void)_setupPlayer;	// IMP=0x0000000000251f43
- (void)processAudioQualityChanges;	// IMP=0x0000000000251c74
- (void)tearDownDefaultsDebouncer;	// IMP=0x0000000000251bec
- (void)setupDefaultsDebouncer;	// IMP=0x0000000000251a4b
- (void)_preferredResolutionDidChange:(id)arg1;	// IMP=0x00000000002519ce
- (void)_soundCheckEnabledChangedNotification:(id)arg1;	// IMP=0x0000000000251850
- (void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)arg1;	// IMP=0x0000000000251805
- (void)_highQualityMusicStreamingOnCellularDidChange:(id)arg1;	// IMP=0x00000000002517ba
- (void)_setupNotifications;	// IMP=0x00000000002516b7
- (void)_setupRoutingController;	// IMP=0x0000000000251622
- (void)updatePlayerConfiguration;	// IMP=0x0000000000251610
- (_Bool)configureQueueItem:(id)arg1 playerItem:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000250ab0
- (void)dealloc;	// IMP=0x0000000000250a3b
- (id)initWithPlaybackEngine:(id)arg1 stackController:(id)arg2 translator:(id)arg3;	// IMP=0x00000000002508bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

