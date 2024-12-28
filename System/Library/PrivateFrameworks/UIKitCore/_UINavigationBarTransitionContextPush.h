//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContextPush
{
    struct CGRect _endingNewTitleViewFrame;	// 200 = 0xc8
    struct CGRect _endingNewBackButtonFrame;	// 232 = 0xe8
    struct CGRect _endingBackIndicatorViewFrame;	// 264 = 0x108
    struct CGSize _titleTransitionDistance;	// 296 = 0x128
    struct CGSize _titleTransitionDistanceExcludingLargeTitleOffset;	// 312 = 0x138
    _Bool _unfreezeTitleControlOnFinish;	// 328 = 0x148
}

- (void)complete;	// IMP=0x000000000048be1f
- (void)cancel;	// IMP=0x000000000048bdd9
- (void)_finishWithFinalLayout:(id)arg1 invalidLayout:(id)arg2;	// IMP=0x000000000048b615
- (void)animate;	// IMP=0x000000000048b59d
- (void)_animateFromPalette:(id)arg1 fromPaletteFrame:(struct CGRect)arg2 toPalette:(id)arg3 toPaletteFrame:(struct CGRect)arg4;	// IMP=0x000000000048b1eb
- (void)_animateSearchBar;	// IMP=0x000000000048a854
- (void)_animateBackgroundView;	// IMP=0x000000000048a461
- (void)_animateLargeTitleView;	// IMP=0x0000000000489fa1
- (void)_animateContentView;	// IMP=0x00000000004895fa
- (void)_animateScaleTransition;	// IMP=0x0000000000489107
- (void)prepare;	// IMP=0x0000000000488d6b
- (void)_prepareTransitionFromPalette:(id)arg1 toPalette:(id)arg2 toPaletteFrame:(struct CGRect)arg3;	// IMP=0x0000000000488b3e
- (void)_prepareSearchBar;	// IMP=0x000000000048856c
- (void)_prepareBackgroundView;	// IMP=0x00000000004882be
- (void)_prepareLargeTitleView;	// IMP=0x0000000000487cd2
- (void)_prepareContentView;	// IMP=0x0000000000486dae
- (void)_prepareScaleTransition;	// IMP=0x0000000000486436
- (long long)transition;	// IMP=0x000000000048642b

@end
