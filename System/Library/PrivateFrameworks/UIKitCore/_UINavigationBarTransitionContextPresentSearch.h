//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContextPresentSearch
{
    UIView *_transitioningScopeBarContainer;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000494654
- (void)cancel;	// IMP=0x0000000000494566
- (void)complete;	// IMP=0x000000000049441b
- (void)_resetContentAndLargeTitleViewCompleted:(_Bool)arg1;	// IMP=0x00000000004943d1
- (void)animate;	// IMP=0x0000000000493bbc
- (void)_animateFromPalette:(id)arg1 fromPaletteFrame:(struct CGRect)arg2 toPalette:(id)arg3 toPaletteFrame:(struct CGRect)arg4;	// IMP=0x0000000000493a54
- (void)_animateBackgroundView;	// IMP=0x00000000004938a4
- (void)prepare;	// IMP=0x0000000000493600
- (void)_prepareTransitionFromPalette:(id)arg1 toPalette:(id)arg2 toPaletteFrame:(struct CGRect)arg3;	// IMP=0x0000000000493557
- (void)_prepareBackgroundView;	// IMP=0x000000000049335d
- (long long)transition;	// IMP=0x0000000000493352

@end

