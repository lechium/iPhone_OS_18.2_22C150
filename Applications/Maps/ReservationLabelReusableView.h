//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionReusableView.h>

@class NSLayoutConstraint, UILabel;

@interface ReservationLabelReusableView : UICollectionReusableView
{
    _Bool _marginsRequired;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
    NSLayoutConstraint *_leadingConstraintWithoutMargin;	// 24 = 0x18
    NSLayoutConstraint *_leadingConstraintWithMargin;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000d6474f
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraintWithMargin; // @synthesize leadingConstraintWithMargin=_leadingConstraintWithMargin;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraintWithoutMargin; // @synthesize leadingConstraintWithoutMargin=_leadingConstraintWithoutMargin;
@property(nonatomic, getter=isMarginsRequired) _Bool marginsRequired; // @synthesize marginsRequired=_marginsRequired;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)_updateConstraintsForMargins;	// IMP=0x0010000000d64508
- (void)updateConstraints;	// IMP=0x0010000000d644ca
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000d640d3

@end
