//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, UILabel, UIView;

@interface _TtC12GameCenterUI23GKPickerGroupNearbyCell
{
    MISSING_TYPE *iconContainer;	// 8 = 0x8
    MISSING_TYPE *badgeLabel;	// 16 = 0x10
    MISSING_TYPE *titleLabel;	// 24 = 0x18
}

+ (id)reuseIdentifierAX;	// IMP=0x00400000002efa3e
+ (id)reuseIdentifier;	// IMP=0x00400000002efa07
- (void).cxx_destruct;	// IMP=0x00000000002f07fc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002f0766
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002f068b
- (void)prepareForReuse;	// IMP=0x00000000002f0540
@property(nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;	// IMP=0x00000000002f02ba
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000002f0263
- (void)configureWithBadgeCount:(long long)arg1;	// IMP=0x00000000002f01b2
- (void)awakeFromNib;	// IMP=0x00000000002efe8a
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UILabel *badgeLabel; // @synthesize badgeLabel;
@property(nonatomic) __weak UIView *iconContainer; // @synthesize iconContainer;

@end
