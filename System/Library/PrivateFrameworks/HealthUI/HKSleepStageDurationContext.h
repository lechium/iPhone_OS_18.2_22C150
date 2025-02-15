//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKDisplayType, HKDisplayTypeContextItem, HKInteractiveChartOverlayViewController, HKUIMetricColors, NSString;
@protocol HKOverlaySleepRoomContextChangeDelegate;

__attribute__((visibility("hidden")))
@interface HKSleepStageDurationContext : NSObject
{
    HKInteractiveChartOverlayViewController *_overlayChartController;	// 8 = 0x8
    HKDisplayType *_baseDisplayType;	// 16 = 0x10
    HKDisplayType *_overlayDisplayType;	// 24 = 0x18
    long long _sleepValue;	// 32 = 0x20
    HKDisplayTypeContextItem *_lastUpdatedItem;	// 40 = 0x28
    id <HKOverlaySleepRoomContextChangeDelegate> _contextChangeDelegate;	// 48 = 0x30
    HKUIMetricColors *_metricColors;	// 56 = 0x38
    HKUIMetricColors *_selectedMetricColors;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000002db953
@property(readonly, nonatomic) HKUIMetricColors *selectedMetricColors; // @synthesize selectedMetricColors=_selectedMetricColors;
@property(readonly, nonatomic) HKUIMetricColors *metricColors; // @synthesize metricColors=_metricColors;
@property(readonly, nonatomic) __weak id <HKOverlaySleepRoomContextChangeDelegate> contextChangeDelegate; // @synthesize contextChangeDelegate=_contextChangeDelegate;
@property(retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem; // @synthesize lastUpdatedItem=_lastUpdatedItem;
@property(readonly, nonatomic) long long sleepValue; // @synthesize sleepValue=_sleepValue;
@property(readonly, nonatomic) HKDisplayType *overlayDisplayType; // @synthesize overlayDisplayType=_overlayDisplayType;
@property(readonly, nonatomic) HKDisplayType *baseDisplayType; // @synthesize baseDisplayType=_baseDisplayType;
@property(readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController; // @synthesize overlayChartController=_overlayChartController;
- (id)_attributedDurationStringFromDuration:(double)arg1 isSelected:(_Bool)arg2;	// IMP=0x00000000002db769
- (id)_attributedTitleOverrideWithDuration:(double)arg1;	// IMP=0x00000000002db6ca
- (double)_computeAverageValueFromChartPoints:(id)arg1;	// IMP=0x00000000002db499
- (long long)resolutionForTimeScope:(long long)arg1 traitResolution:(long long)arg2;	// IMP=0x00000000002db491
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000002db235
- (void)overlayStateWillChange:(_Bool)arg1 contextItem:(id)arg2 chartController:(id)arg3;	// IMP=0x00000000002db1eb
- (_Bool)unselectedContextShouldUseContextBaseType;	// IMP=0x00000000002db1e3
- (id)contextItemForLastUpdate;	// IMP=0x00000000002db1d1
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;	// IMP=0x00000000002db1bf
- (id)baseDisplayTypeForOverlay:(long long)arg1;	// IMP=0x00000000002db1ad
- (id)sampleTypeForDateRangeUpdates;	// IMP=0x00000000002db1a5
- (id)_contextItemWithDuration:(double)arg1 timeScope:(long long)arg2;	// IMP=0x00000000002daef0
- (id)initWithBaseDisplayType:(id)arg1 overlayDisplayType:(id)arg2 overlayChartController:(id)arg3 contextChangeDelegate:(id)arg4 sleepValue:(long long)arg5;	// IMP=0x00000000002dad4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

