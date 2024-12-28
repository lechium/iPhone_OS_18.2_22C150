//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UITabBarVisualProvider.h"

@class UIMotionEffect, UIScrollView, UIView, _UIBarBackground, _UIBarBackgroundLayoutLegacy;

__attribute__((visibility("hidden")))
@interface _UITabBarVisualProviderLegacyTVOS : _UITabBarVisualProvider
{
    _UIBarBackground *_backgroundView;	// 16 = 0x10
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;	// 24 = 0x18
    UIView *_customBackgroundView;	// 32 = 0x20
    UIView *_accessoryView;	// 40 = 0x28
    UIScrollView *_itemsScrollView;	// 48 = 0x30
    UIView *_focusedItemHighlightView;	// 56 = 0x38
    UIMotionEffect *_focusedItemHighlightMotionEffect;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000183ae7e
- (id)_focusedItemHighlightView;	// IMP=0x000000000183ae69
- (void)_shim_updateTabBarItemView:(id)arg1;	// IMP=0x000000000183ad4a
- (void)_shim_layoutItemsOnly;	// IMP=0x000000000183ad38
- (void)_shim_updateFocusHighlightVisibility;	// IMP=0x000000000183ab78
- (void)_shim_setShadowHidden:(_Bool)arg1;	// IMP=0x000000000183ab06
- (_Bool)_shim_shadowHidden;	// IMP=0x000000000183aae9
- (void)_shim_setShadowAlpha:(double)arg1;	// IMP=0x000000000183aa70
- (double)_shim_shadowAlpha;	// IMP=0x000000000183aa53
- (id)_shim_accessoryView;	// IMP=0x000000000183aa3e
- (void)_shim_setAccessoryView:(id)arg1;	// IMP=0x000000000183a9ae
- (id)_shim_compatibilityBackgroundView;	// IMP=0x000000000183a986
- (void)_shim_setCustomBackgroundView:(id)arg1;	// IMP=0x000000000183a92f
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000183a6eb
- (_Bool)_focusedItemHighlightViewIsVisible;	// IMP=0x000000000183a6c2
- (void)_updateFocusedItemHighlightViewWithInterfaceStyle:(long long)arg1 visible:(_Bool)arg2;	// IMP=0x000000000183a685
- (void)_setFocusedItemHightlightVisible:(_Bool)arg1;	// IMP=0x000000000183a44c
- (void)_updateFocusedItemHighlightFrame;	// IMP=0x000000000183a38f
- (void)_updateHighlightMotionEffect;	// IMP=0x000000000183a217
- (id)preferredFocusedView;	// IMP=0x000000000183a152
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x0000000001839eaa
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000001839e53
- (void)layoutSubviews;	// IMP=0x0000000001839e18
- (void)updateBackgroundGroupName;	// IMP=0x0000000001839d74
- (void)_updateBackground;	// IMP=0x0000000001839739
- (void)_layoutTabBarItems;	// IMP=0x00000000018387ac
- (void)_configureItems:(id)arg1;	// IMP=0x000000000183854a
- (id)_parentViewForItems;	// IMP=0x000000000183850d
- (void)_updateAccessoryView;	// IMP=0x0000000001838422
- (struct CGRect)_shadowFrameForBounds:(struct CGRect)arg1 height:(double)arg2;	// IMP=0x00000000018383d1
- (struct CGRect)_layoutRegion;	// IMP=0x000000000183824d
- (struct CGSize)intrinsicContentSizeGivenSize:(struct CGSize)arg1;	// IMP=0x00000000018380f5
- (void)updateArchivedSubviews:(id)arg1;	// IMP=0x0000000001837eaf
- (id)createViewForTabBarItem:(id)arg1;	// IMP=0x0000000001837956
- (void)changeLayout;	// IMP=0x0000000001837940
- (void)changeAppearance;	// IMP=0x000000000183793a
- (void)changeSelectedItem:(id)arg1 fromItem:(id)arg2;	// IMP=0x000000000183789d
- (id)exchangeItem:(id)arg1 withItem:(id)arg2;	// IMP=0x0000000001837604
- (void)_applyAppearanceCustomizationsToItem:(id)arg1;	// IMP=0x000000000183754d
- (void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(_Bool)arg5;	// IMP=0x0000000001836b9b
- (void)teardown;	// IMP=0x0000000001836ab6
- (void)prepare;	// IMP=0x00000000018369b4

@end
