//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class NSArray, NSMutableDictionary, NSString, UIColor, UIImage, UIImageView, UITabBar, UITabBarButtonLabel, UITabBarSwappableImageView, UIVibrancyEffect, UIView, UIVisualEffectView, _UIBadgeView, _UITabBarItemData;

__attribute__((visibility("hidden")))
@interface UITabBarButton : UIControl
{
    struct CGRect _hitRect;	// 160 = 0xa0
    UITabBarSwappableImageView *_imageView;	// 192 = 0xc0
    UIVisualEffectView *_vibrancyEffectView;	// 200 = 0xc8
    UITabBarButtonLabel *_label;	// 208 = 0xd0
    _UIBadgeView *_badge;	// 216 = 0xd8
    UIImageView *_selectedIndicator;	// 224 = 0xe0
    struct UIEdgeInsets _imageInsets;	// 232 = 0xe8
    struct UIEdgeInsets _imageLandscapeInsets;	// 264 = 0x108
    UIImage *_customSelectedIndicatorImage;	// 296 = 0x128
    struct UIOffset _labelOffset;	// 304 = 0x130
    NSMutableDictionary *_buttonTintColorsForState;	// 320 = 0x140
    NSMutableDictionary *_contentTintColorsForState;	// 328 = 0x148
    UIColor *_defaultUnselectedLabelTintColor;	// 336 = 0x150
    UIColor *_badgeColor;	// 344 = 0x158
    NSMutableDictionary *_badgeTextAttributesForState;	// 352 = 0x160
    struct UIOffset _badgeOffset;	// 360 = 0x168
    UIView *_highContrastFocusIndicator;	// 376 = 0x178
    _Bool _selected;	// 384 = 0x180
    _Bool _accessibilityButtonShapesEnabled;	// 385 = 0x181
    _Bool _accessibilityHighContractFocusIndicatorEnabled;	// 386 = 0x182
    _Bool _accessibilityGrayStatusEnabled;	// 387 = 0x183
    _Bool _showsHighlightedState;	// 388 = 0x184
    UIView *_focusView;	// 392 = 0x188
    Class _appearanceGuideClass;	// 400 = 0x190
    long long _layoutStyle;	// 408 = 0x198
    _UITabBarItemData *_itemAppearanceData;	// 416 = 0x1a0
    UIVibrancyEffect *_itemVibrantEffect;	// 424 = 0x1a8
    UITabBar *_tabBar;	// 432 = 0x1b0
    NSArray *_carplayConstraints;	// 440 = 0x1b8
}

+ (id)_defaultLabelColor;	// IMP=0x001000000052a132
- (void).cxx_destruct;	// IMP=0x0000000000530bfa
@property(retain, nonatomic) NSArray *carplayConstraints; // @synthesize carplayConstraints=_carplayConstraints;
@property(readonly, nonatomic) __weak UITabBar *tabBar; // @synthesize tabBar=_tabBar;
@property(retain, nonatomic) UIVibrancyEffect *itemVibrantEffect; // @synthesize itemVibrantEffect=_itemVibrantEffect;
@property(retain, nonatomic) _UITabBarItemData *itemAppearanceData; // @synthesize itemAppearanceData=_itemAppearanceData;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
@property(nonatomic, setter=_setShowsHighlightedState:) _Bool _showsHighlightedState; // @synthesize _showsHighlightedState;
- (void)set_info:(id)arg1;	// IMP=0x0000000000530b4b
- (id)_info;	// IMP=0x0000000000530b2b
@property(readonly, nonatomic) UIColor *_defaultUnselectedLabelTintColor;
- (id)_contentTintColorForState:(unsigned long long)arg1;	// IMP=0x0000000000530a85
- (void)_setContentTintColor:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000005308f7
- (id)_buttonTintColorForState:(unsigned long long)arg1;	// IMP=0x0000000000530889
- (void)_setButtonTintColor:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000530724
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;	// IMP=0x00000000005305e8
- (struct UIOffset)_titlePositionAdjustment;	// IMP=0x00000000005305d0
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1;	// IMP=0x00000000005305be
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1;	// IMP=0x000000000053057d
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000530577
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000530571
- (void)_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000053055f
- (void)_UIAppearance_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000005303fb
- (void)_setBadgeColor:(id)arg1;	// IMP=0x00000000005303e9
- (void)_UIAppearance_setBadgeColor:(id)arg1;	// IMP=0x0000000000530390
- (_Bool)labelShouldUseVibrancyForState:(long long)arg1;	// IMP=0x000000000053028c
- (_Bool)iconShouldUseVibrancyForState:(long long)arg1;	// IMP=0x000000000053014f
- (struct UIOffset)badgeTitlePositionAdjustmentForState:(long long)arg1;	// IMP=0x0000000000530124
- (id)badgeTextAttributesForState:(long long)arg1;	// IMP=0x000000000052ff8e
- (id)badgeBackgroundColorForState:(long long)arg1;	// IMP=0x000000000052ff46
- (struct UIOffset)badgePositionAdjustmentForState:(long long)arg1;	// IMP=0x000000000052fe68
- (_Bool)isDefaultColor:(id)arg1 forState:(long long)arg2;	// IMP=0x000000000052fdbf
- (id)iconColorForState:(long long)arg1;	// IMP=0x000000000052fce1
- (long long)defaultCompositingModeForState:(long long)arg1;	// IMP=0x000000000052fcd9
- (double)defaultAlphaForState:(long long)arg1;	// IMP=0x000000000052fccb
- (id)defaultColorForState:(long long)arg1;	// IMP=0x000000000052fc38
- (struct UIOffset)titlePositionAdjustmentForState:(long long)arg1;	// IMP=0x000000000052fbfe
- (id)titleTextAttributesForState:(long long)arg1;	// IMP=0x000000000052fb16
- (long long)_currentItemState;	// IMP=0x000000000052fa9f
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000052f9ac
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000052f8b9
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000052f7c6
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000052f69b
- (long long)_focusTouchSensitivityStyle;	// IMP=0x000000000052f690
- (struct CGRect)_responderSelectionRect;	// IMP=0x000000000052f5d8
- (struct CGRect)_responderSelectionRectForWindow:(id)arg1;	// IMP=0x000000000052f546
- (id)_tabBar;	// IMP=0x000000000052f4c2
- (struct CGRect)_defaultFocusRegionFrame;	// IMP=0x000000000052f4a3
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x000000000052f3df
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000052f2b5
- (void)_sendFocusAction:(id)arg1;	// IMP=0x000000000052f219
- (_Bool)_isEligibleForFocusInteraction;	// IMP=0x000000000052f211
- (_Bool)canBecomeFocused;	// IMP=0x000000000052f1b2
- (id)_systemDefaultFocusGroupIdentifier;	// IMP=0x000000000052f12b
- (void)_setCustomSelectedIndicatorImage:(id)arg1;	// IMP=0x000000000052f086
- (void)layoutSubviews;	// IMP=0x000000000052ed53
- (void)_ios_layoutSubviews;	// IMP=0x000000000052e49b
- (void)_showBoundsViewAt:(struct CGRect)arg1 alignmentViewAt:(double)arg2 forSymbolImage:(_Bool)arg3;	// IMP=0x000000000052e045
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000052dff6
- (struct CGSize)_horizontalLayout_sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000052df25
- (void)_appleTV_layoutSubviews;	// IMP=0x000000000052db66
@property(readonly, nonatomic) UIView *focusView; // @synthesize focusView=_focusView;
- (void)_removeCarplayConstraints;	// IMP=0x000000000052d96c
- (void)_setupCarplayConstraints;	// IMP=0x000000000052cf3d
- (struct CGSize)_appleTV_sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000052cdd5
- (void)_setupSymbolConfigurationsForIdiom:(long long)arg1;	// IMP=0x000000000052cb0e
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;	// IMP=0x000000000052ca7a
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000052ca11
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000052c9e5
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;	// IMP=0x000000000052c9b9
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000052c92a
- (void)_updateBadgeAppearanceAndLayoutNow:(_Bool)arg1;	// IMP=0x000000000052c7c3
- (void)_setBadgeValue:(id)arg1;	// IMP=0x000000000052c68a
- (void)_setBadgeOffset:(struct UIOffset)arg1;	// IMP=0x000000000052c666
- (void)_positionBadgeAfterChangesIfNecessary:(CDUnknownBlockType)arg1;	// IMP=0x000000000052c62c
- (void)_positionBadge;	// IMP=0x000000000052c0a6
@property(nonatomic, getter=_isSelected, setter=_setSelected:) _Bool _selected;
@property(retain, nonatomic, getter=_unselectedTintColor, setter=_setUnselectedTintColor:) UIColor *unselectedTintColor;
- (void)_updateToMatchCurrentState;	// IMP=0x000000000052bc46
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000052bc05
- (void)_showSelectedIndicator:(_Bool)arg1 changeSelection:(_Bool)arg2;	// IMP=0x000000000052ba4f
- (void)_updateSelectedIndicatorFrame;	// IMP=0x000000000052b4c0
- (void)_updateSelectedIndicatorView;	// IMP=0x000000000052b21e
- (id)_selectedIndicatorImage;	// IMP=0x000000000052b084
- (_Bool)_areTabBarButtonAccessibilityButtonShapesEnabled;	// IMP=0x000000000052b029
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;	// IMP=0x000000000052afe1
- (void)_accessibilityHighContractFocusIndicatorDidChangeNotification:(id)arg1;	// IMP=0x000000000052af99
- (void)_accessibilityGrayStatusDidChangeNotification:(id)arg1;	// IMP=0x000000000052af51
- (struct CGRect)_tabBarHitRect;	// IMP=0x000000000052af31
- (void)_setTabBarHitRect:(struct CGRect)arg1;	// IMP=0x000000000052af13
- (void)setImage:(id)arg1;	// IMP=0x000000000052aefb
- (void)_reducedTransparencyDidChange:(id)arg1;	// IMP=0x000000000052aef5
- (void)_updateVibrancyEffectView;	// IMP=0x000000000052adad
- (void)_updateAfterTraitCollectionOrAccessibilityDidChangeTV;	// IMP=0x000000000052abf6
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000052aa7b
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x000000000052aa09
- (id)initWithImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 withInsets:(struct UIEdgeInsets)arg4 tabBar:(id)arg5;	// IMP=0x000000000052a9b0
- (void)dealloc;	// IMP=0x000000000052a8a5
- (id)initWithImage:(id)arg1 landscapeImage:(id)arg2 selectedImage:(id)arg3 landscapeSelectedImage:(id)arg4 label:(id)arg5 withInsets:(struct UIEdgeInsets)arg6 landscapeInsets:(struct UIEdgeInsets)arg7 tabBar:(id)arg8;	// IMP=0x000000000052a18f
- (id)_selectedIndicatorView;	// IMP=0x000000000052a11d
@property(readonly, nonatomic, getter=isDefaultTVLayout) _Bool _defaultTVLayout;
@property(readonly, nonatomic) struct CGRect _contentRect;
@property(nonatomic, getter=isSpringLoaded) _Bool springLoaded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
