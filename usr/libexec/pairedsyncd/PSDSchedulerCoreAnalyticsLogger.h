//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableSet, NSString, NSURL, PSDSchedulerCoreAnalyticsSessionState, PSYLinkUpgradeMonitor;
@protocol OS_dispatch_queue;

@interface PSDSchedulerCoreAnalyticsLogger : NSObject
{
    PSDSchedulerCoreAnalyticsSessionState *_sessionState;	// 8 = 0x8
    NSURL *_sessionStateURL;	// 16 = 0x10
    long long _currentLinkType;	// 24 = 0x18
    NSDate *_currentLinkStartTime;	// 32 = 0x20
    PSYLinkUpgradeMonitor *_linkUpgradeMonitor;	// 40 = 0x28
    NSMutableSet *_activeSyncTopics;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_analyticsQueue;	// 56 = 0x38
}

+ (id)defaultLogger;	// IMP=0x002000000001041c
- (void).cxx_destruct;	// IMP=0x00200000000124bf
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue; // @synthesize analyticsQueue=_analyticsQueue;
@property(retain, nonatomic) NSMutableSet *activeSyncTopics; // @synthesize activeSyncTopics=_activeSyncTopics;
@property(retain, nonatomic) PSYLinkUpgradeMonitor *linkUpgradeMonitor; // @synthesize linkUpgradeMonitor=_linkUpgradeMonitor;
@property(retain, nonatomic) NSDate *currentLinkStartTime; // @synthesize currentLinkStartTime=_currentLinkStartTime;
@property(nonatomic) long long currentLinkType; // @synthesize currentLinkType=_currentLinkType;
@property(retain, nonatomic) NSURL *sessionStateURL; // @synthesize sessionStateURL=_sessionStateURL;
@property(retain, nonatomic) PSDSchedulerCoreAnalyticsSessionState *sessionState; // @synthesize sessionState=_sessionState;
- (id)binNameForDuration:(double)arg1 bins:(int *)arg2 count:(int)arg3;	// IMP=0x001000000001234b
- (id)updatedIdentifierForActivityIdentifier:(id)arg1;	// IMP=0x0010000000012326
- (void)sendEvent:(id)arg1;	// IMP=0x00100000000121db
- (void)_appendPairedWatchInforamtionToEvent:(id)arg1 withDevice:(id)arg2;	// IMP=0x0010000000011f66
- (void)_appendLinkAvailabilityForKey:(id)arg1 fromDictionary:(id)arg2 syncDuration:(double)arg3 intoDictionary:(id)arg4 outputKey:(id)arg5;	// IMP=0x0010000000011df8
- (long long)_linkTypeForAmountOfTimeKey:(id)arg1;	// IMP=0x0010000000011d53
- (void)_appendLinkInformationForActivity:(id)arg1 inEventInfo:(id)arg2 forEventDuration:(double)arg3;	// IMP=0x001000000001197c
- (void)logDurationForActivityWithIdentifier:(id)arg1 bins:(int *)arg2 binCount:(int)arg3 inSession:(id)arg4;	// IMP=0x0010000000011633
- (void)clearSessionState;	// IMP=0x00100000000114f6
- (void)saveSessionState;	// IMP=0x00100000000113e9
- (void)didFinishSession:(id)arg1;	// IMP=0x0010000000011295
- (void)didFinishActivity:(id)arg1 inSession:(id)arg2;	// IMP=0x00100000000110c4
- (void)activityDidCompleteSending:(id)arg1;	// IMP=0x0010000000010f9c
- (void)didStartActivity:(id)arg1;	// IMP=0x0010000000010dee
- (void)_updateCurrentLinkStats;	// IMP=0x0010000000010c0e
- (void)linkChangedToLinkType:(long long)arg1;	// IMP=0x0010000000010be5
- (void)_resetLinkMonitor;	// IMP=0x0010000000010bb3
- (void)_setupLinkMonitorWithPairingIdentifier:(id)arg1;	// IMP=0x0010000000010bad
- (void)scheduler:(id)arg1 didUpdateSyncSessionWithUpdate:(id)arg2;	// IMP=0x001000000001096a
- (void)scheduler:(id)arg1 willStartSyncSession:(id)arg2;	// IMP=0x0010000000010822
- (id)initWithSessionState:(id)arg1 URL:(id)arg2;	// IMP=0x0010000000010727

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

