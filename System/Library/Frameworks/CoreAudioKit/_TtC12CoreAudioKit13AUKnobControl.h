//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12CoreAudioKit13AUKnobControl : UIControl
{
    MISSING_TYPE *param;	// 8 = 0x8
    MISSING_TYPE *min;	// 16 = 0x10
    MISSING_TYPE *max;	// 20 = 0x14
    MISSING_TYPE *previousTouchPosition;	// 24 = 0x18
    MISSING_TYPE *numDigits;	// 40 = 0x28
    MISSING_TYPE *formatter;	// 48 = 0x30
    MISSING_TYPE *value;	// 56 = 0x38
    MISSING_TYPE *title;	// 64 = 0x40
    MISSING_TYPE *valueLayer;	// 80 = 0x50
    MISSING_TYPE *lineLayer;	// 88 = 0x58
    MISSING_TYPE *titleLayer;	// 96 = 0x60
    MISSING_TYPE *valueLabel;	// 104 = 0x68
    MISSING_TYPE *minValueLayer;	// 112 = 0x70
    MISSING_TYPE *maxValueLayer;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000049ad0
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000049a70
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000049a00
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000049990
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000049920
- (void)tintColorDidChange;	// IMP=0x0000000000049440
- (void)accessibilityDecrement;	// IMP=0x0000000000048160
- (void)accessibilityIncrement;	// IMP=0x00000000000480e0
@property(nonatomic) unsigned long long accessibilityTraits;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000048040
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000047e90

@end
