//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventCounterGroup, HMDEventCountersManager, NSObject, NSUserDefaults;
@protocol HMMLogEventSubmitting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDLogEventMessageEventsAnalyzer
{
    HMDEventCountersManager *_eventCountersManager;	// 8 = 0x8
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 16 = 0x10
    NSUserDefaults *_userDefaults;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    HMDEventCounterGroup *_residentSyncGroup;	// 40 = 0x28
    HMDEventCounterGroup *_homeManagerMessagesGroup;	// 48 = 0x30
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x001000000026311f
- (void).cxx_destruct;	// IMP=0x0000000000262e9b
@property(readonly, nonatomic) HMDEventCounterGroup *homeManagerMessagesGroup; // @synthesize homeManagerMessagesGroup=_homeManagerMessagesGroup;
@property(readonly, nonatomic) HMDEventCounterGroup *residentSyncGroup; // @synthesize residentSyncGroup=_residentSyncGroup;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
- (void)submitDailyMessageEvents;	// IMP=0x0000000000262e07
- (void)resetAggregationAnalysisContext;	// IMP=0x0000000000262c97
- (void)populateAggregationAnalysisLogEvent:(id)arg1 forDate:(id)arg2;	// IMP=0x00000000002626dd
- (void)handlePrimaryResidentChangedNotification:(id)arg1;	// IMP=0x00000000002624cf
- (void)_handleXPCMessageCounterLogEvent:(id)arg1;	// IMP=0x00000000002621fa
- (void)_updateResidentSyncCountersWithRemoteMessageLogEvent:(id)arg1;	// IMP=0x00000000002621f4
- (void)_updatePeriodicSubmissionGroupRemoteMessageEventCountersForMessageName:(id)arg1 peerInformation:(id)arg2 transportType:(int)arg3 messageDirectionSending:(_Bool)arg4 identifier:(id)arg5;	// IMP=0x0000000000261f1b
- (void)_updateDailySubmissionGroupRemoteMessageEventCountersForTransportType:(int)arg1 messageDirectionSending:(_Bool)arg2;	// IMP=0x0000000000261e76
- (void)_handleRemoteMessageLogEvent:(id)arg1;	// IMP=0x0000000000261a87
- (id)periodicRemoteMessageCounterEventNameWithMessageName:(id)arg1 peerInformation:(id)arg2;	// IMP=0x0000000000261a16
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x0000000000261982
- (void)submitRemoteMessageCounters;	// IMP=0x00000000002618be
- (void)submitXPCMessageCounters;	// IMP=0x000000000026186a
- (void)submitRemoteMessageCountersForGroup:(id)arg1;	// IMP=0x00000000002613e2
- (id)messageDirectionStringForRemoteMessageCounterRequestGroup:(id)arg1;	// IMP=0x00000000002612a5
- (id)transportTypeStringForRemoteMessageCounterRequestGroup:(id)arg1;	// IMP=0x000000000026114f
- (void)submitXPCMessageCountersForGroup:(id)arg1;	// IMP=0x0000000000260cff
- (void)registerEWSTriggersWithDataSource:(id)arg1;	// IMP=0x0000000000260af6
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000000260849

@end

