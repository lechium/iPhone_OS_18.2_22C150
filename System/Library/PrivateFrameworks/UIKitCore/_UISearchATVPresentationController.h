//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UISearchATVPresentationController
{
    UIVisualEffectView *_blurView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000138159e
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
- (void)containerViewWillLayoutSubviews;	// IMP=0x0000000001381573
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000001381500
- (unsigned long long)edgeForHidingNavigationBar;	// IMP=0x00000000013814f8
- (_Bool)forceObeyNavigationBarInsets;	// IMP=0x00000000013814f0
- (_Bool)animatorShouldLayoutPresentationViews;	// IMP=0x00000000013814e8
- (void)setContentVisible:(_Bool)arg1;	// IMP=0x000000000138149a
- (struct CGRect)finalFrameForContainerView;	// IMP=0x000000000138147c
- (id)adaptivePresentationController;	// IMP=0x0000000001381474
- (double)resultsControllerContentOffset;	// IMP=0x000000000138146b
- (_Bool)searchBarToBecomeTopAttached;	// IMP=0x0000000001381463
- (double)statusBarAdjustment;	// IMP=0x000000000138145a
- (_Bool)searchBarShouldClipToBounds;	// IMP=0x0000000001381452
- (_Bool)searchBarCanContainScopeBar;	// IMP=0x000000000138144a
- (_Bool)resultsUnderlapsSearchBar;	// IMP=0x0000000001381442
- (_Bool)shouldAccountForStatusBar;	// IMP=0x000000000138143a
- (id)_presentationControllerForTraitCollection:(id)arg1;	// IMP=0x0000000001381431
- (id)_presentedViewControllerForSizeClassPair:(CDStruct_912cb5d2)arg1;	// IMP=0x000000000138141f
- (long long)adaptivePresentationStyle;	// IMP=0x0000000001381414
- (void)hideBackgroundObscuringView;	// IMP=0x00000000013813f4
- (void)showBackgroundObscuringView;	// IMP=0x00000000013813cf
- (id)backgroundObscuringView;	// IMP=0x0000000001381229

@end
