//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, _TtC12GameCenterUI16DynamicTypeLabel;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI23PlayerProfileHeaderView : UIView
{
    MISSING_TYPE *profileAvatarView;	// 8 = 0x8
    MISSING_TYPE *friendsLabel;	// 16 = 0x10
    MISSING_TYPE *titleLabel;	// 24 = 0x18
    MISSING_TYPE *subtitleLabel;	// 32 = 0x20
    MISSING_TYPE *useHorizontalLayout;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004a0524
@property(nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityFriendStatusLabel;
@property(nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000049f580
- (void)layoutSubviews;	// IMP=0x000000000049f4de
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x000000000049f194
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000049ebd2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000049eb88
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000049e8f9

@end

