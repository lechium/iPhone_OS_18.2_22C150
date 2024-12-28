//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDEventCountersManager, HMMDateProvider, NSNotificationCenter, NSObject, NSString;
@protocol HMDCurrentResidentDeviceDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDMetricsHomeDataChangedManager : HMFObject
{
    _Bool _started;	// 8 = 0x8
    HMDEventCountersManager *_countersManager;	// 16 = 0x10
    NSNotificationCenter *_notificationCenter;	// 24 = 0x18
    id <HMDCurrentResidentDeviceDataSource> _currentHomeDataSource;	// 32 = 0x20
    HMMDateProvider *_dateProvider;	// 40 = 0x28
    unsigned long long _maxNumberEventsToReport;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x0010000000392041
- (void).cxx_destruct;	// IMP=0x00000000003911a9
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) _Bool started; // @synthesize started=_started;
@property(readonly) unsigned long long maxNumberEventsToReport; // @synthesize maxNumberEventsToReport=_maxNumberEventsToReport;
@property(readonly, nonatomic) __weak HMMDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) __weak id <HMDCurrentResidentDeviceDataSource> currentHomeDataSource; // @synthesize currentHomeDataSource=_currentHomeDataSource;
@property(readonly, nonatomic) __weak NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) __weak HMDEventCountersManager *countersManager; // @synthesize countersManager=_countersManager;
- (_Bool)_shouldExcludeUpdateForModelName:(id)arg1 propertyName:(id)arg2;	// IMP=0x00000000003910b3
- (void)_handleHomeDataChangedReasonBecamePrimaryLogEvent:(id)arg1 becamePrimaryHouseholdLogEventsByName:(id)arg2 homeUUID:(id)arg3;	// IMP=0x0000000000390fb1
- (void)_handleHomeDataChangedReasonUpdatedLogEvent:(id)arg1 updatedHouseholdLogEventsByName:(id)arg2 homeUUID:(id)arg3;	// IMP=0x0000000000390e28
- (void)_handleHomeDataChangedReasonInsertedLogEvent:(id)arg1 insertedHouseholdLogEventsByName:(id)arg2 homeUUID:(id)arg3;	// IMP=0x0000000000390d14
- (void)_handleHDCDueToBecamePrimaryForHome:(id)arg1;	// IMP=0x0000000000390c0b
- (void)_handleChangeSetSummary:(id)arg1 homeUUID:(id)arg2;	// IMP=0x0000000000390974
- (void)_handleGeneratedHomeDataChangedNotification:(id)arg1;	// IMP=0x00000000003908bc
- (id)serializeLogEvents:(id)arg1;	// IMP=0x0000000000390753
- (id)logEventsFromDictionary:(id)arg1;	// IMP=0x0000000000390609
- (id)coalescedLogEventsFromLogEvents:(id)arg1 homeUUID:(id)arg2;	// IMP=0x0000000000390283
- (void)deleteCountersBeforeDate:(id)arg1;	// IMP=0x000000000039011d
- (void)deleteCountersAfterDate:(id)arg1;	// IMP=0x000000000038ffb7
- (id)logEventsPopulatedForHomeWithUUID:(id)arg1 associatedWithDate:(id)arg2;	// IMP=0x000000000038fa8b
- (void)stop;	// IMP=0x000000000038f947
- (void)start;	// IMP=0x000000000038f7fc
- (id)householdMetricsLogEventFactory;	// IMP=0x000000000038f7f3
- (id)initWithCountersManager:(id)arg1 currentHomeDataSource:(id)arg2 dateProvider:(id)arg3 notificationCenter:(id)arg4 maxNumberEventsToReport:(unsigned long long)arg5 workQueue:(id)arg6;	// IMP=0x000000000038f6d4
- (id)initWithCountersManager:(id)arg1 currentHomeDataSource:(id)arg2 dateProvider:(id)arg3;	// IMP=0x000000000038f5f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
