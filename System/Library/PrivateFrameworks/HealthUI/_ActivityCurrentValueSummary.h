//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKActivitySummary.h>

@class NSDateComponents;

__attribute__((visibility("hidden")))
@interface _ActivityCurrentValueSummary : HKActivitySummary
{
    NSDateComponents *_collationDateComponents;	// 8 = 0x8
    long long _timeScope;	// 16 = 0x10
    double _collatedSummaryCount;	// 24 = 0x18
    double _pausedSummaryCount;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002b1a76
@property(nonatomic) double pausedSummaryCount; // @synthesize pausedSummaryCount=_pausedSummaryCount;
@property(nonatomic) double collatedSummaryCount; // @synthesize collatedSummaryCount=_collatedSummaryCount;
@property(nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(retain, nonatomic) NSDateComponents *collationDateComponents; // @synthesize collationDateComponents=_collationDateComponents;
- (id)_maxQuantity:(id)arg1 otherQuantity:(id)arg2;	// IMP=0x00000000002b1916
- (id)_divideQuantity:(id)arg1 divisor:(double)arg2;	// IMP=0x00000000002b182d
- (id)_addQuantity:(id)arg1 toQuantity:(id)arg2;	// IMP=0x00000000002b175c
- (void)finishCollatingSummaryWithGraphView:(id)arg1;	// IMP=0x00000000002b1457
- (id)dateComponentsForCalendar:(id)arg1;	// IMP=0x00000000002b134a
- (void)combineWithActivitySummary:(id)arg1;	// IMP=0x00000000002b0ac2
- (id)initWithTimeScope:(long long)arg1;	// IMP=0x00000000002b0a66

@end

