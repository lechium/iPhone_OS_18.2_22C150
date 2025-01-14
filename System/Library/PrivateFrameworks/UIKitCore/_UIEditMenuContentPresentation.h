//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIEditMenuContainerView, _UIEditMenuListView, _UIEditMenuPresentationLayout;

__attribute__((visibility("hidden")))
@interface _UIEditMenuContentPresentation
{
    _Bool _observingSourceView;	// 8 = 0x8
    long long _userInterfaceStyle;	// 16 = 0x10
    _UIEditMenuListView *_currentListView;	// 24 = 0x18
    _UIEditMenuPresentationLayout *_currentMenuLayout;	// 32 = 0x20
    struct CGRect _targetRectInSourceView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000001851afb
@property(readonly, nonatomic) _Bool observingSourceView; // @synthesize observingSourceView=_observingSourceView;
@property(readonly, nonatomic) struct CGRect targetRectInSourceView; // @synthesize targetRectInSourceView=_targetRectInSourceView;
@property(retain, nonatomic) _UIEditMenuPresentationLayout *currentMenuLayout; // @synthesize currentMenuLayout=_currentMenuLayout;
@property(readonly, nonatomic) _UIEditMenuListView *currentListView; // @synthesize currentListView=_currentListView;
@property(nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
- (void)_resolvedMenuPositionForArrowDirection:(inout long long *)arg1 availableBounds:(struct CGRect)arg2 sourceRect:(struct CGRect)arg3 menuSize:(struct CGSize)arg4 menuPosition:(inout struct CGPoint *)arg5 anchorPoint:(inout struct CGPoint *)arg6;	// IMP=0x0000000001851413
- (struct UIEdgeInsets)_preferredContentInsetsForContainerViewWithConfiguration:(id)arg1;	// IMP=0x0000000001851201
- (id)_resolvedLayoutForMenuWithConfiguration:(id)arg1 sourceRect:(struct CGRect)arg2 axis:(long long)arg3;	// IMP=0x000000000184fd0c
- (void)_updateMenuPositionAnimated:(_Bool)arg1 reuseTargetRect:(_Bool)arg2 forced:(_Bool)arg3;	// IMP=0x000000000184fae6
- (long long)initialUserInterfaceStyle;	// IMP=0x000000000184fa6c
- (void)sourceViewDidUpdateFromTraitCollection:(id)arg1;	// IMP=0x000000000184fa3b
- (void)_reloadMenuLayoutWithSourceRect:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x000000000184f7b1
- (_Bool)_shouldReuseVisibleMenu;	// IMP=0x000000000184f71d
- (long long)_listViewAxisForTraitCollection:(id)arg1;	// IMP=0x000000000184f6de
- (id)_queryMenuSourceRectsPreferredLayoutRectsForConfiguration:(id)arg1;	// IMP=0x000000000184f2c7
- (struct CGRect)_queryMenuSourceRectForConfiguration:(id)arg1 reuseTargetRect:(_Bool)arg2 isValid:(out _Bool *)arg3;	// IMP=0x000000000184f0a4
- (struct CGRect)_convertSourceWindowRectToContainerView:(struct CGRect)arg1;	// IMP=0x000000000184eec2
- (id)_currentPlatformMetrics;	// IMP=0x000000000184ee6a
- (_Bool)wantsPasteTouchAuthenticationInEditMenuListView:(id)arg1;	// IMP=0x000000000184ee62
- (void)editMenuListView:(id)arg1 didSelectMenuElement:(id)arg2;	// IMP=0x000000000184ec10
- (void)contentSizeCategoryDidChangeInEditMenuListView:(id)arg1;	// IMP=0x000000000184eb14
- (void)_geometryChanged:(const CDStruct_6f49ea1d *)arg1 forAncestor:(id)arg2;	// IMP=0x000000000184eaf5
- (void)_endSourceViewObservation;	// IMP=0x000000000184ea94
- (void)_observeSourceViewIfNeeded;	// IMP=0x000000000184ea33
- (void)teardownContainerView;	// IMP=0x000000000184ea2d
- (id)configureContainerViewWithConfiguration:(id)arg1;	// IMP=0x000000000184ea25
- (void)didTransitionFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x000000000184e8fd
- (_Bool)canPresentEditMenu;	// IMP=0x000000000184e8f5
- (struct CGRect)menuFrameInCoordinateSpace:(id)arg1;	// IMP=0x000000000184e7bc
- (void)updateMenuPositionAnimated:(_Bool)arg1;	// IMP=0x000000000184e7a5
- (void)hideMenuWithReason:(long long)arg1;	// IMP=0x000000000184e2f9
- (void)_displayPreparedMenu:(id)arg1 titleView:(id)arg2 reason:(long long)arg3 didDismissMenu:(_Bool)arg4 configuration:(id)arg5;	// IMP=0x000000000184d9b2
- (void)_displayMenu:(id)arg1 reason:(long long)arg2;	// IMP=0x000000000184d6e5
- (void)replaceVisibleMenuWithMenu:(id)arg1 reason:(long long)arg2;	// IMP=0x000000000184d60b
- (void)displayMenu:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000184d5a8

// Remaining properties
@property(retain, nonatomic) _UIEditMenuContainerView *containerView; // @dynamic containerView;

@end

