//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit12ValueStepper : UIControl
{
    MISSING_TYPE *decreaseButton;	// 8 = 0x8
    MISSING_TYPE *increaseButton;	// 16 = 0x10
    MISSING_TYPE *valueLabel;	// 24 = 0x18
    MISSING_TYPE *contentStackView;	// 32 = 0x20
    MISSING_TYPE *interItemSpacing;	// 40 = 0x28
    MISSING_TYPE *cornerRadius;	// 48 = 0x30
    MISSING_TYPE *valueLabelWidth;	// 56 = 0x38
    MISSING_TYPE *valueLabelBorderWidth;	// 64 = 0x40
    MISSING_TYPE *minValue;	// 72 = 0x48
    MISSING_TYPE *maxValue;	// 80 = 0x50
    MISSING_TYPE *unit;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_currentValue;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000048500
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000484a0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000048420
- (void)didTapRightButton;	// IMP=0x00000000000483f0
- (void)didTapLeftButton;	// IMP=0x0000000000048350
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000048280

@end
