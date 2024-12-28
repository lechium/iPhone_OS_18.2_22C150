//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;
@protocol MPCPlaybackEngineEventStreamSubscription;

__attribute__((visibility("hidden")))
@interface MPCPlayActivityFeedEventConsumer : NSObject
{
    NSArray *_allowedBundleIds;	// 8 = 0x8
    id <MPCPlaybackEngineEventStreamSubscription> _subscription;	// 16 = 0x10
    NSMutableArray *_radioPlayActivityEvents;	// 24 = 0x18
}

+ (id)identifier;	// IMP=0x00100000002402e6
- (void).cxx_destruct;	// IMP=0x000000000023e012
@property(readonly, nonatomic) NSMutableArray *radioPlayActivityEvents; // @synthesize radioPlayActivityEvents=_radioPlayActivityEvents;
@property(readonly, nonatomic) id <MPCPlaybackEngineEventStreamSubscription> subscription; // @synthesize subscription=_subscription;
- (_Bool)_finalizePAFEvents:(id)arg1;	// IMP=0x000000000023df34
- (void)_clampTimeValuesForPAFEvent:(id)arg1 withDuration:(double)arg2;	// IMP=0x000000000023de94
- (void)_updatePAFEvent:(id)arg1 withSharedListeningInfoFromCursor:(id)arg2;	// IMP=0x000000000023d91b
- (void)_updatePAFEvent:(id)arg1 withAudioChangeEvent:(id)arg2;	// IMP=0x000000000023d596
- (void)_updatePAFEvent:(id)arg1 withDeviceInfoFromCursor:(id)arg2;	// IMP=0x000000000023c9ec
- (_Bool)_vocalControlIsOnForEvent:(id)arg1;	// IMP=0x000000000023c747
- (void)_updatePAFEvent:(id)arg1 withVocalAttenuationInfoForEndEvent:(id)arg2 cursor:(id)arg3;	// IMP=0x000000000023bb1e
- (void)_updatePAFEvent:(id)arg1 withEnqueuerAccountIdentifier:(id)arg2 queueAddEvent:(id)arg3 cursor:(id)arg4;	// IMP=0x000000000023b420
- (void)_updatePAFEvent:(id)arg1 withAccountIdentifier:(id)arg2 cursor:(id)arg3;	// IMP=0x000000000023b104
- (void)_updatePAFEvent:(id)arg1 withItemBeginEvent:(id)arg2 containerBeginPayload:(id)arg3 cursor:(id)arg4 forEventType:(id)arg5;	// IMP=0x00000000002398ba
- (void)_updatePAFEvent:(id)arg1 withQueueAddEvent:(id)arg2 queueSectionIdentifier:(id)arg3 cursor:(id)arg4;	// IMP=0x0000000000239390
- (void)_sendPlayEndNotificationWithStartTime:(double)arg1 endTime:(double)arg2 pafEvent:(id)arg3 cursor:(id)arg4;	// IMP=0x0000000000238f25
- (double)_getPlaybackDurationForHLSStreamFromStartEvent:(id)arg1 toEndEvent:(id)arg2 withLimitedCursor:(id)arg3;	// IMP=0x0000000000238c82
- (double)_getStartTimeForMostRecentPlaybackStart:(id)arg1 withItemBeginEvent:(id)arg2 containerBeginEvent:(id)arg3 cursor:(id)arg4;	// IMP=0x0000000000237da6
- (id)_findRecentPlaybackStartFromTypes:(id)arg1 matchingPayload:(id)arg2 cursor:(id)arg3;	// IMP=0x0000000000237c64
- (id)_generateAggregateNoncatalogEndEventForCursor:(id)arg1;	// IMP=0x0000000000236f84
- (_Bool)_itemIsPlaceholderFromQueueSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2 cursor:(id)arg3;	// IMP=0x0000000000236e4c
- (_Bool)_itemWithinHLSTimedMetadataBeginFromQueueSection:(id)arg1 itemIdentifier:(id)arg2 cursor:(id)arg3;	// IMP=0x0000000000236c02
- (_Bool)_itemIsPlayingFromQueueSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2 cursor:(id)arg3;	// IMP=0x00000000002368d5
- (_Bool)_handleApplicationTerminationEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x00000000002363b9
- (id)_generatePlaybackEndEventFromEvent:(id)arg1 withQueueSectionIdentifier:(id)arg2 itemIdentifier:(id)arg3 cursor:(id)arg4;	// IMP=0x00000000002351c4
- (_Bool)_handleItemEndEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x0000000000234eed
- (_Bool)_handleItemPauseEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x0000000000233cb5
- (_Bool)_handleItemPositionJumpEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x0000000000232904
- (_Bool)_handleItemResumeEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x0000000000231c8d
- (void)_updateAllowedBundleIdsIfNecessary:(id)arg1;	// IMP=0x0000000000231aea
- (void)_handleURLBagProviderDidUpdateBagNotification:(id)arg1;	// IMP=0x0000000000231a65
- (void)unsubscribeFromEventStream:(id)arg1;	// IMP=0x0000000000231a4b
- (void)subscribeToEventStream:(id)arg1;	// IMP=0x00000000002318b7
- (id)init;	// IMP=0x00000000002317a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
