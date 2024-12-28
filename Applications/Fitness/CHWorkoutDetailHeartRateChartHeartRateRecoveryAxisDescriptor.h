//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FitnessUI/FIUIChartTimeAxisDescriptor.h>

@class FIUIFormattingManager, NSArray, NSDateFormatter, NSDateIntervalFormatter, NSDictionary, NSNumberFormatter;

@interface CHWorkoutDetailHeartRateChartHeartRateRecoveryAxisDescriptor : FIUIChartTimeAxisDescriptor
{
    FIUIFormattingManager *_formattingManager;	// 8 = 0x8
    NSDateFormatter *_hourMinuteFormatter;	// 16 = 0x10
    NSNumberFormatter *_minuteNumberFormatter;	// 24 = 0x18
    NSDateIntervalFormatter *_dateIntervalFormatter;	// 32 = 0x20
    NSDictionary *_recoveryHeartRateReadingsByMinute;	// 40 = 0x28
    NSArray *_cachedLabels;	// 48 = 0x30
    NSArray *_cachedSubLabels;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000a2920
- (id)_subLabelsForHeartRateRecovery;	// IMP=0x00100000000a2644
- (id)_labelsForHeartRateRecovery;	// IMP=0x00100000000a227b
- (id)axisSubLabels;	// IMP=0x00100000000a222e
- (id)axisLabels;	// IMP=0x00100000000a21e1
- (void)invalidateCaches;	// IMP=0x00100000000a217a
- (void)setSubAxisSpacing:(id)arg1;	// IMP=0x00100000000a2130
- (void)setAxisSpacing:(id)arg1;	// IMP=0x00100000000a20e6
- (void)setRecoveryHeartRateReadings:(id)arg1;	// IMP=0x00100000000a2037
- (id)init;	// IMP=0x00100000000a1fc8

@end
