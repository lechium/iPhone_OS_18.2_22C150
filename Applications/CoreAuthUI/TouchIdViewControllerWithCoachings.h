//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LAUIPhysicalButtonView;

@interface TouchIdViewControllerWithCoachings
{
    LAUIPhysicalButtonView *_coachingView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000000f603
- (void)_updateUI;	// IMP=0x001000000000f549
- (void)_setupDimming;	// IMP=0x001000000000f3f7
- (void)_setupCoachingView;	// IMP=0x001000000000f2fb
- (_Bool)prefersStatusBarHidden;	// IMP=0x001000000000f2f3
- (void)_dismissUIWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f280
- (void)_presentUI:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f1d6
- (void)_configureUI;	// IMP=0x001000000000f173
- (void)_setupUI;	// IMP=0x001000000000f135
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x001000000000f0a9
- (void)viewWillLayoutSubviews;	// IMP=0x001000000000f068
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x001000000000f027

@end
