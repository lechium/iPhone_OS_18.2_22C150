//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface CloudBackgroundTaskManager : NSObject
{
    NSMapTable *_jobNameToSelectorMap;	// 8 = 0x8
}

+ (id)sharedTaskManager;	// IMP=0x0040000000128b2e
- (void).cxx_destruct;	// IMP=0x0020000000128323
- (_Bool)_cellularDataAllowedForJaliscoMedia;	// IMP=0x0010000000128290
- (_Bool)_cellularDataAllowedForJaliscoApps;	// IMP=0x0010000000128241
- (id)_nextJaliscoAppsPollTimeKey;	// IMP=0x0010000000128234
- (id)_nextJaliscoMediaPollTimeKey;	// IMP=0x0010000000128227
- (id)_nextEvaluateSyncRulesThrottleOperationTimeKey;	// IMP=0x001000000012821a
- (id)_nextEvaluateSyncRulesOperationTimeKey;	// IMP=0x001000000012820d
- (double)_throttledDeferredEvaluateKeepLocalTime;	// IMP=0x0010000000128154
- (id)_homeSharingPrefsNumberForKey:(id)arg1;	// IMP=0x0010000000128138
- (void)_setHomeSharingPrefsNumber:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000012810f
- (id)_baseBtaJobForPeriodicPollCellularDataAllowed:(_Bool)arg1;	// IMP=0x00100000001280f7
- (id)_baseBtaJobForDeferredPush;	// IMP=0x00100000001280df
- (void)_handleJobNamed:(const char *)arg1 satisfied:(_Bool)arg2 invalid:(_Bool)arg3;	// IMP=0x0010000000127fbf
- (void)_unscheduleJobNamed:(const char *)arg1;	// IMP=0x0010000000127fb9
- (void)_scheduleJobNamed:(const char *)arg1 withStartTime:(id)arg2 baseBtaJob:(id)arg3;	// IMP=0x0010000000127fb3
- (void)_initializeBTAHandlers;	// IMP=0x0010000000127fad
- (void)_handleJaliscoMediaDeferredPushUpdateJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;	// IMP=0x0010000000127d63
- (void)_handleJaliscoMediaPeriodicPollJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;	// IMP=0x0010000000127ada
- (void)_handleSagaDeferredPushUpdateJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;	// IMP=0x001000000012788e
- (void)unscheduleJaliscoMediaDeferredPushUpate;	// IMP=0x0010000000127888
- (void)scheduleJaliscoMediaDeferredPushUpate;	// IMP=0x0010000000127882
- (void)unscheduleJaliscoMediaPeriodicPoll;	// IMP=0x001000000012787c
- (void)scheduleJaliscoMediaPeriodicPoll;	// IMP=0x0010000000127876
- (void)unscheduleSagaDeferredPushUpate;	// IMP=0x0010000000127870
- (void)scheduleSagaDeferredPushUpate;	// IMP=0x001000000012786a
- (id)init;	// IMP=0x001000000012781e

@end
