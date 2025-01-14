//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@class NSLayoutConstraint, NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface UIStatusBarCarPlayDockAppItemButton : UIButton
{
    NSLayoutConstraint *_heightConstraint;	// 160 = 0xa0
    NSLayoutConstraint *_widthConstraint;	// 168 = 0xa8
    _Bool _active;	// 176 = 0xb0
    _Bool _hasBadge;	// 177 = 0xb1
    NSString *_bundleIdentifier;	// 184 = 0xb8
    UIImageView *_iconImageView;	// 192 = 0xc0
    UIImageView *_iconHighlightImageView;	// 200 = 0xc8
    UIImageView *_badgeView;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0000000001412b81
@property(nonatomic) _Bool hasBadge; // @synthesize hasBadge=_hasBadge;
@property(retain, nonatomic) UIImageView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIImageView *iconHighlightImageView; // @synthesize iconHighlightImageView=_iconHighlightImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000014129cf
- (_Bool)canBecomeFocused;	// IMP=0x00000000014129ba
- (void)_buttonPressed:(id)arg1;	// IMP=0x00000000014127cb
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001412714
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000141265d
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001412592
- (void)setBadgeHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000014121b0
- (_Bool)shouldShowBadge;	// IMP=0x0000000001412165
@property(readonly, nonatomic) _Bool itemHasBundleIdentifier;
- (void)setCharge:(float)arg1;	// IMP=0x0000000001412078
- (float)charge;	// IMP=0x000000000141206a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001411df6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000001411611

@end

