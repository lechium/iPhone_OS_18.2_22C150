//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, _TtC12GameCenterUI16DynamicTypeLabel;

@interface _TtC12GameCenterUI25BaseSmallFriendLockupView : UIView
{
    MISSING_TYPE *avatarView;	// 8 = 0x8
    MISSING_TYPE *titleLabel;	// 16 = 0x10
    MISSING_TYPE *subtitleLabel;	// 24 = 0x18
    MISSING_TYPE *style;	// 32 = 0x20
    MISSING_TYPE *chevronView;	// 40 = 0x28
    MISSING_TYPE *hasChevron;	// 48 = 0x30
    MISSING_TYPE *trailingViewConfiguration;	// 56 = 0x38
    MISSING_TYPE *accessoryButton;	// 112 = 0x70
    MISSING_TYPE *avatarLoadingTask;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000003b702c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000003b6fab
@property(nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;
- (void)didTapAccessoryButton;	// IMP=0x00000000003b6ebe
- (_Bool)accessibilityActivate;	// IMP=0x00000000003b6e96
- (void)layoutSubviews;	// IMP=0x00000000003b6c23
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x00000000003b6a80
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000003b69a9
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003b5f5e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003b5c4b

@end
