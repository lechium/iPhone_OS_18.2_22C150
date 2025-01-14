//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface STUsageReportGraphDataSet : NSObject
{
    unsigned long long _timePeriod;	// 8 = 0x8
    unsigned long long _itemType;	// 16 = 0x10
    NSNumber *_total;	// 24 = 0x18
    NSNumber *_max;	// 32 = 0x20
    NSNumber *_average;	// 40 = 0x28
    double _averageAsPercentageOfMax;	// 48 = 0x30
    NSArray *_dataPoints;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000e7453
@property(copy, nonatomic) NSArray *dataPoints; // @synthesize dataPoints=_dataPoints;
@property(nonatomic) double averageAsPercentageOfMax; // @synthesize averageAsPercentageOfMax=_averageAsPercentageOfMax;
@property(copy, nonatomic) NSNumber *average; // @synthesize average=_average;
@property(copy, nonatomic) NSNumber *max; // @synthesize max=_max;
@property(copy, nonatomic) NSNumber *total; // @synthesize total=_total;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(nonatomic) unsigned long long timePeriod; // @synthesize timePeriod=_timePeriod;
- (id)initEmptyDataSetWithTimePeriod:(unsigned long long)arg1 referenceDate:(id)arg2;	// IMP=0x00000000000e6ee9
- (id)initWithTimePeriod:(unsigned long long)arg1 itemType:(unsigned long long)arg2 total:(id)arg3 max:(id)arg4 average:(id)arg5 averageAsPercentageOfMax:(double)arg6 dataPoints:(id)arg7;	// IMP=0x00000000000e6db3

@end

