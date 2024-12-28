//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class NSArray, NSMutableArray, NSString, UIPointerInteraction, UIView, UIVisualEffect, UIVisualEffectView;
@protocol AVMobileChromelessSliderDelegate;

__attribute__((visibility("hidden")))
@interface AVMobileChromelessSlider : UIControl
{
    UIView *_contentView;	// 8 = 0x8
    UIVisualEffectView *_filledBarView;	// 16 = 0x10
    UIVisualEffectView *_unfilledBarView;	// 24 = 0x18
    float _trackingStartNormalizedValue;	// 32 = 0x20
    float _trackingTouchStartNormalizedX;	// 36 = 0x24
    NSMutableArray *_sliderMarkViews;	// 40 = 0x28
    UIVisualEffect *_enabledFilledBarViewEffect;	// 48 = 0x30
    UIVisualEffect *_enabledUnfilledBarViewEffect;	// 56 = 0x38
    UIVisualEffect *_disabledFilledBarViewEffect;	// 64 = 0x40
    UIVisualEffect *_disabledUnfilledBarViewEffect;	// 72 = 0x48
    UIPointerInteraction *_sliderPointerInteraction;	// 80 = 0x50
    float _minimumValue;	// 88 = 0x58
    float _maximumValue;	// 92 = 0x5c
    float _totalValue;	// 96 = 0x60
    float _value;	// 100 = 0x64
    double _barHeight;	// 104 = 0x68
    NSArray *_sliderMarks;	// 112 = 0x70
    unsigned long long _tintState;	// 120 = 0x78
    id <AVMobileChromelessSliderDelegate> _delegate;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000007bd59
@property(nonatomic) __weak id <AVMobileChromelessSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float value; // @synthesize value=_value;
@property(nonatomic) float totalValue; // @synthesize totalValue=_totalValue;
@property(nonatomic) unsigned long long tintState; // @synthesize tintState=_tintState;
@property(retain, nonatomic) NSArray *sliderMarks; // @synthesize sliderMarks=_sliderMarks;
@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) double barHeight; // @synthesize barHeight=_barHeight;
- (void)interruptActiveInteractions;	// IMP=0x000000000007bc9c
- (void)_updateAccessibilityValue;	// IMP=0x000000000007bbde
- (void)accessibilityDecrement;	// IMP=0x000000000007bb31
- (void)accessibilityIncrement;	// IMP=0x000000000007ba84
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000007ba2e
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x000000000007b95e
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000007b786
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000007b62f
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000007b4cf
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x000000000007b438
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x000000000007b365
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000007b316
- (void)layoutSubviews;	// IMP=0x000000000007afd7
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000007afba
- (struct CGRect)hitRect;	// IMP=0x000000000007af54
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000007af00
- (void)didMoveToWindow;	// IMP=0x000000000007aeaf
- (struct CGRect)frameForSliderMark:(id)arg1;	// IMP=0x000000000007ae94
- (void)_updateBarTintStateAlpha;	// IMP=0x000000000007ad10
- (id)init;	// IMP=0x000000000007a3fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
