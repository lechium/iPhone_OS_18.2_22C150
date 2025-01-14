//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UISlider, UISliderDataModel, _UIFluidSliderInteraction;

__attribute__((visibility("hidden")))
@interface _UISlideriOSFluidVisualElement
{
    _UIFluidSliderInteraction *_fluidInteraction;	// 296 = 0x128
    double _thumbPosition;	// 304 = 0x130
    struct CGRect _trackBounds;	// 312 = 0x138
    struct CGAffineTransform _trackTransform;	// 344 = 0x158
    _Bool _overriddenTrackingState;	// 392 = 0x188
    unsigned long long _fluidUpdateSource;	// 400 = 0x190
    _Bool _changeWithVolumeButtons;	// 408 = 0x198
}

- (void).cxx_destruct;	// IMP=0x00000000011688f2
@property(nonatomic) _Bool changeWithVolumeButtons; // @synthesize changeWithVolumeButtons=_changeWithVolumeButtons;
- (_Bool)cancelTouchTracking;	// IMP=0x00000000011688da
- (_Bool)cancelMouseTracking;	// IMP=0x00000000011688d2
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000011688cc
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000011688c6
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000011688c0
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000011688ba
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000011688b2
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000011688aa
- (_Bool)overriddenTrackingState;	// IMP=0x000000000116889a
- (void)didSetValues;	// IMP=0x00000000011687c9
- (void)setValue:(float)arg1 animated:(_Bool)arg2;	// IMP=0x0000000001168721
- (void)_updateModelValue:(double)arg1 sendAction:(_Bool)arg2;	// IMP=0x0000000001168595
- (void)_setValue:(float)arg1 minimum:(float)arg2 maximum:(float)arg3 animated:(_Bool)arg4;	// IMP=0x00000000011684e3
- (void)didSetSpeedMultiplier;	// IMP=0x0000000001168431
- (void)didSetFluidTrackHidden;	// IMP=0x0000000001168262
- (_Bool)driver:(id)arg1 shouldAdjustValueForProposedValue:(double)arg2 adjustedValue:(double *)arg3 startValue:(double *)arg4 endValue:(double *)arg5;	// IMP=0x0000000001168159
- (_Bool)driver:(id)arg1 shouldBeginAtPoint:(struct CGPoint)arg2;	// IMP=0x0000000001168032
@property(readonly, nonatomic) unsigned long long fluidUpdateSource;
- (void)didSetUserInteractionEnabled;	// IMP=0x0000000001167f78
- (void)didSetEnabled;	// IMP=0x0000000001167eaa
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000001167e19
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000001167dab
- (void)_updateConfigurationForFrameChange:(_Bool)arg1;	// IMP=0x0000000001167ba7
- (void)_setupFeedback;	// IMP=0x0000000001167ba1
- (struct CGRect)_modifiedTrackRect:(struct CGRect)arg1;	// IMP=0x0000000001167afd
- (void)_setupInteraction;	// IMP=0x0000000001167733
- (id)_updatedConfigurationForTrackSize:(struct CGSize)arg1;	// IMP=0x0000000001167691
@property(nonatomic) __weak UISlider *slider;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000001167552

// Remaining properties
@property(retain, nonatomic) UISliderDataModel *data;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

