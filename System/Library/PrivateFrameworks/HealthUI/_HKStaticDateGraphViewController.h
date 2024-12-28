//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKDateGraphViewController.h"

@class HKValueRange, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _HKStaticDateGraphViewController : HKDateGraphViewController
{
    NSMutableArray *_allStackedSeries;	// 8 = 0x8
    HKValueRange *_fixedRange;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001e316
@property(readonly, nonatomic) HKValueRange *fixedRange; // @synthesize fixedRange=_fixedRange;
@property(retain, nonatomic) NSMutableArray *allStackedSeries; // @synthesize allStackedSeries=_allStackedSeries;
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;	// IMP=0x000000000001e281
- (void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(_Bool)arg3 changeContext:(long long)arg4;	// IMP=0x000000000001e23a
- (long long)stackCountForGraphView:(id)arg1;	// IMP=0x000000000001e1f6
- (void)addStackedSeries:(id)arg1;	// IMP=0x000000000001e1d9
- (void)viewDidLoad;	// IMP=0x000000000001e12e
- (id)initWithFixedRange:(id)arg1 currentCalendar:(id)arg2;	// IMP=0x000000000001e088

@end
