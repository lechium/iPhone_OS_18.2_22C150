//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKAnchoredObjectQuery, HKHealthStore, HKMCPregnancyModel, NSMutableSet;
@protocol HKMCCycleFactorsDataSourceDelegate, HKMCPregnancyModelProviding, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HKMCCycleFactorsDataSource : NSObject
{
    id <HKMCCycleFactorsDataSourceDelegate> _delegate;	// 8 = 0x8
    HKHealthStore *_healthStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    HKAnchoredObjectQuery *_observerQuery;	// 32 = 0x20
    NSMutableSet *_cycleFactors;	// 40 = 0x28
    HKMCPregnancyModel *_pregnancyModel;	// 48 = 0x30
    CDStruct_ef5fcbe6 _currentDayIndexRange;	// 56 = 0x38
    _Bool _pregnancyQueryHasStarted;	// 72 = 0x48
    _Bool _isRegisteredForPregnancyModelUpdates;	// 73 = 0x49
    id <HKMCPregnancyModelProviding> _pregnancyModelProvider;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000029f4f
@property(readonly, nonatomic) id <HKMCPregnancyModelProviding> pregnancyModelProvider; // @synthesize pregnancyModelProvider=_pregnancyModelProvider;
@property(nonatomic) __weak id <HKMCCycleFactorsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x0000000000029e22
- (void)stopObserving;	// IMP=0x0000000000029dcc
- (void)pregnancyModelDidUpdate:(id)arg1;	// IMP=0x0000000000029a3f
- (void)startObservingCycleFactorsInDayIndexRange:(CDStruct_ef5fcbe6)arg1;	// IMP=0x000000000002898c
- (id)initWithHealthStore:(id)arg1 pregnancyModelProvider:(id)arg2 queue:(id)arg3;	// IMP=0x00000000000287c7

@end
