//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, UIView, UIVisualEffectView, _TtC12GameCenterUI16DynamicTypeLabel;

@interface _TtC12GameCenterUI17ProfileAvatarView
{
    MISSING_TYPE *profileEditButtonBackground;	// 40 = 0x28
    MISSING_TYPE *profileEditLabel;	// 48 = 0x30
    MISSING_TYPE *roundedEditButton;	// 56 = 0x38
    MISSING_TYPE *isEditable;	// 64 = 0x40
    MISSING_TYPE *tapGestureRecognizer;	// 72 = 0x48
    MISSING_TYPE *tapHandler;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000001e27e4
@property(nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityProfileEditLabel;
@property(nonatomic, readonly) UIView *accessibilityRoundedEditButton;
@property(nonatomic, readonly) UIVisualEffectView *accessibilityProfileEditButtonBackground;
@property(nonatomic, readonly) _Bool accessibilityIsEditable;
- (void)didTap;	// IMP=0x00000000001e24e9
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001e243b
- (void)layoutSubviews;	// IMP=0x00000000001e23d0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e197a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001e1771

@end
