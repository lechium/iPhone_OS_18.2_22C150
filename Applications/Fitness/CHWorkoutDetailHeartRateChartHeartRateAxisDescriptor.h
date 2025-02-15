//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FitnessUI/FIUIChartTimeAxisDescriptor.h>

@class FIUIChartAxisLabel, FIUIFormattingManager, NSNumber;

@interface CHWorkoutDetailHeartRateChartHeartRateAxisDescriptor : FIUIChartTimeAxisDescriptor
{
    FIUIFormattingManager *_formattingManager;	// 8 = 0x8
    NSNumber *_averageHeartRate;	// 16 = 0x10
    FIUIChartAxisLabel *_averageHeartRateLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000014c6a
- (id)_createAverageHeartRateLabel;	// IMP=0x0010000000014ac4
- (id)axisSubLabels;	// IMP=0x0010000000014a24
- (void)setAverageHeartRate:(id)arg1;	// IMP=0x00100000000149d0
- (void)invalidateCaches;	// IMP=0x00100000000149af
- (void)setSubAxisSpacing:(id)arg1;	// IMP=0x0010000000014965
- (id)init;	// IMP=0x00100000000148f6

@end

