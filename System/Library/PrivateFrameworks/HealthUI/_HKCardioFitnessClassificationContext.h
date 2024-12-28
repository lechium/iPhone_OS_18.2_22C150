//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol _HKCardioFitnessClassificationContextDelegate;

__attribute__((visibility("hidden")))
@interface _HKCardioFitnessClassificationContext
{
    id <_HKCardioFitnessClassificationContextDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000ddd9d
@property(nonatomic) __weak id <_HKCardioFitnessClassificationContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000dd98b
- (id)sampleTypeForDateRangeUpdates;	// IMP=0x00000000000dd979
- (id)baseDisplayTypeForOverlay:(long long)arg1;	// IMP=0x00000000000dd971
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;	// IMP=0x00000000000dd969
- (_Bool)canSelectOverlayContextItem:(id)arg1 isDeselecting:(_Bool)arg2 timeScope:(long long)arg3 chartController:(id)arg4;	// IMP=0x00000000000dd961
- (id)initWithMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 delegate:(id)arg4;	// IMP=0x00000000000dd8dc

@end
