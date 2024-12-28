//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDPersistentStore, HMMCountersManager, HMMDateProvider, NSMutableDictionary, NSObject;
@protocol HMDEventCountersStoring, HMMUptimeProvider, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDEventCountersManager : HMFObject
{
    HMDPersistentStore *_persistentStore;	// 8 = 0x8
    NSMutableDictionary *_counterGroups;	// 16 = 0x10
    double _lastSaveTime;	// 24 = 0x18
    _Bool _pendingSave;	// 32 = 0x20
    struct os_unfair_lock_s _lock;	// 36 = 0x24
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    id <HMDEventCountersStoring> _counterStorage;	// 48 = 0x30
    double _saveInterval;	// 56 = 0x38
    id <HMMUptimeProvider> _uptimeProvider;	// 64 = 0x40
    HMMCountersManager *_bridgedCountersManager;	// 72 = 0x48
    HMMDateProvider *_bridgedDateProvider;	// 80 = 0x50
}

+ (id)allowedSpecifierClasses;	// IMP=0x0010000000a6dfdf
- (void).cxx_destruct;	// IMP=0x0000000000a6d677
@property(readonly, nonatomic) HMMDateProvider *bridgedDateProvider; // @synthesize bridgedDateProvider=_bridgedDateProvider;
@property(readonly, nonatomic) HMMCountersManager *bridgedCountersManager; // @synthesize bridgedCountersManager=_bridgedCountersManager;
@property(readonly, nonatomic) id <HMMUptimeProvider> uptimeProvider; // @synthesize uptimeProvider=_uptimeProvider;
@property(readonly, nonatomic) double saveInterval; // @synthesize saveInterval=_saveInterval;
@property(readonly, nonatomic) id <HMDEventCountersStoring> counterStorage; // @synthesize counterStorage=_counterStorage;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)unarchiveEventCounters;	// IMP=0x0000000000a6d44e
- (void)_save;	// IMP=0x0000000000a6d3e0
- (void)counterChanged;	// IMP=0x0000000000a6d351
- (void)forceSave;	// IMP=0x0000000000a6d2f6
- (id)_fetchAllEventCounters;	// IMP=0x0000000000a6d21e
- (void)resetAllEventCounters;	// IMP=0x0000000000a6d049
- (void)resetEventCountersForRequestGroup:(id)arg1;	// IMP=0x0000000000a6d00c
- (id)fetchAllEventCounters;	// IMP=0x0000000000a6cf77
- (unsigned long long)fetchAggregatedEventCountersForRequestGroup:(id)arg1;	// IMP=0x0000000000a6cf33
- (id)fetchEventCountersForRequestGroup:(id)arg1;	// IMP=0x0000000000a6cee3
- (unsigned long long)fetchEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;	// IMP=0x0000000000a6ce66
- (void)incrementEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;	// IMP=0x0000000000a6cdee
- (void)incrementEventCounterForEventName:(id)arg1 requestGroup:(id)arg2 withValue:(unsigned long long)arg3;	// IMP=0x0000000000a6cd74
- (void)addObserver:(id)arg1 forEventName:(id)arg2 requestGroup:(id)arg3;	// IMP=0x0000000000a6cce6
- (void)_removeCounterGroupForSpecifier:(id)arg1;	// IMP=0x0000000000a6cc8d
- (void)removeCounterGroupsBasedOnPredicate:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a6caaf
- (void)removeCounterGroupForSpecifier:(id)arg1;	// IMP=0x0000000000a6ca41
- (void)removeCounterGroupForName:(id)arg1;	// IMP=0x0000000000a6c9ee
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000000a6c9dc
- (id)counterGroupsForPredicate:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a6c8b4
- (id)counterGroupForSpecifier:(id)arg1;	// IMP=0x0000000000a6c13d
- (id)counterGroupForName:(id)arg1;	// IMP=0x0000000000a6c0d7
- (id)initWithBridgedCountersManager:(id)arg1 bridgedDateProvider:(id)arg2;	// IMP=0x0000000000a6c0bd
- (id)initWithEventCountersStorage:(id)arg1 bridgedCountersManager:(id)arg2 bridgedDateProvider:(id)arg3 saveInterval:(double)arg4 uptimeProvider:(id)arg5;	// IMP=0x0000000000a6be42
- (id)initWithEventCountersStorage:(id)arg1 bridgedCountersManager:(id)arg2 bridgedDateProvider:(id)arg3;	// IMP=0x0000000000a6bce0
- (id)init;	// IMP=0x0000000000a6bc50

@end
