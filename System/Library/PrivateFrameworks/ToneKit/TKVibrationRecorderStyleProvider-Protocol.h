//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ToneKit/NSObject-Protocol.h>

@class UIColor, UIFont, UIImage, UIScreen;

@protocol TKVibrationRecorderStyleProvider <NSObject>
@property(readonly, nonatomic) double vibrationRecorderRippleFingerMovingSpeed;
@property(readonly, nonatomic) double vibrationRecorderRippleFingerStillSpeed;
@property(readonly, nonatomic) double vibrationRecorderRippleFinalRadius;
@property(readonly, nonatomic) double vibrationRecorderRippleInitialRadius;
@property(readonly, nonatomic) double vibrationRecorderRippleRingLineWidth;
@property(readonly, nonatomic) UIColor *vibrationRecorderRippleViewBackgroundColor;
@property(readonly, nonatomic) double vibrationRecorderProgressViewAccessibilityAdditionalHeight;
@property(readonly, nonatomic) UIImage *vibrationRecorderProgressViewResizableDotImage;
@property(readonly, nonatomic) UIColor *vibrationRecorderProgressViewDotTintColor;
@property(readonly, nonatomic) double vibrationRecorderProgressViewDotHorizontalInset;
@property(readonly, nonatomic) UIColor *vibrationRecorderProgressViewTrackColor;
@property(readonly, nonatomic) double vibrationRecorderProgressViewHeight;
@property(readonly, nonatomic) double vibrationRecorderProgressViewHorizontalOffsetFromEdge;
@property(readonly, nonatomic) double vibrationRecorderProgressToolbarAdditionalHeight;
@property(readonly, nonatomic) double vibrationRecorderProgressToolbarVerticalOffset;
@property(readonly, nonatomic) double vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge;
@property(readonly, nonatomic) double vibrationRecorderControlsToolbarAdditionalHeight;
@property(readonly, nonatomic) double vibrationRecorderControlsToolbarVerticalOffset;
@property(readonly, nonatomic) double vibrationRecorderInstructionsLabelFadeAnimationDuration;
@property(readonly, nonatomic) struct UIEdgeInsets vibrationRecorderInstructionsLabelEdgeInsets;
@property(readonly, nonatomic) struct UIOffset vibrationRecorderInstructionsLabelPositionOffset;
@property(readonly, nonatomic) UIColor *vibrationRecorderInstructionsLabelBackgroundColor;
@property(readonly, nonatomic) UIColor *vibrationRecorderInstructionsLabelTextColor;
@property(readonly, nonatomic) UIFont *vibrationRecorderInstructionsLabelFont;
@property(retain, nonatomic) UIScreen *screen;
@property(readonly, nonatomic) UIColor *vibrationRecorderBarsBackgroundColor;
@end
