//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKTimeSinceStartOfDayNumberFormatter;

__attribute__((visibility("hidden")))
@interface _HKChartAxisDimensionTableForTimeOfDay
{
    HKTimeSinceStartOfDayNumberFormatter *_numberFormatter;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000160053
@property(readonly, nonatomic) HKTimeSinceStartOfDayNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
- (id)stringForLocation:(id)arg1 formatterForStepSize:(id)arg2;	// IMP=0x000000000015ff7b
- (id)endingLabelsFactorOverride;	// IMP=0x000000000015ff6e
- (id)initWithStepSizeTable:(struct HKStepSizeTableEntryDefn *)arg1 stepSizeTableSize:(long long)arg2 displayType:(id)arg3 unitController:(id)arg4;	// IMP=0x000000000015ff11

@end
