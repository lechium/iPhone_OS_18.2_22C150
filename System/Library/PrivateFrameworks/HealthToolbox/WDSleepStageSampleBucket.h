//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKDevice, HKSortedSampleArray, HKSourceRevision, NSArray, NSPredicate, NSString, WDTimePeriod;

__attribute__((visibility("hidden")))
@interface WDSleepStageSampleBucket : NSObject
{
    HKDevice *_device;	// 8 = 0x8
    long long _sleepStage;	// 16 = 0x10
    WDTimePeriod *_timePeriod;	// 24 = 0x18
    HKSourceRevision *_sourceRevision;	// 32 = 0x20
    HKSortedSampleArray *_sortedSamples;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000020728
@property(readonly, nonatomic) HKSortedSampleArray *sortedSamples; // @synthesize sortedSamples=_sortedSamples;
@property(readonly, nonatomic) HKSourceRevision *sourceRevision; // @synthesize sourceRevision=_sourceRevision;
@property(readonly, nonatomic) WDTimePeriod *timePeriod; // @synthesize timePeriod=_timePeriod;
@property(readonly, nonatomic) long long sleepStage; // @synthesize sleepStage=_sleepStage;
@property(readonly, nonatomic) HKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) NSPredicate *predicate;
@property(readonly, nonatomic) double totalDuration;
@property(readonly, nonatomic) unsigned long long numberOfSamples;
@property(readonly, nonatomic) NSArray *samples;
- (void)removeAllSamples;	// IMP=0x000000000002030c
- (void)removeSample:(id)arg1;	// IMP=0x00000000000202f6
- (void)addSample:(id)arg1;	// IMP=0x000000000002024d
- (id)initWithSleepStage:(long long)arg1 timePeriod:(id)arg2 sourceRevision:(id)arg3 device:(id)arg4;	// IMP=0x0000000000020115
@property(readonly, nonatomic) unsigned long long sortNumber;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
