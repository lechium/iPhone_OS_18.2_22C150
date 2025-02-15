//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSDictionary, NSString, TMLContext;

@interface UIViewController (TouchML)
+ (void)tmlLoadCategory;	// IMP=0x002000000005ea0d
- (long long)tmlPreferredInterfaceOrientationForPresentation;	// IMP=0x0010000000060ebb
- (unsigned long long)tmlSupportedInterfaceOrientations;	// IMP=0x0010000000060e34
- (_Bool)tmlShouldAutorotate;	// IMP=0x0010000000060daf
- (_Bool)tmlAccessibilityPerformMagicTap;	// IMP=0x0010000000060d08
- (_Bool)tmlAccessibilityPerformEscape;	// IMP=0x0010000000060c61
- (void)setChildViewControllerForStatusBarHidden:(id)arg1;	// IMP=0x0010000000060c31
- (id)tmlChildViewControllerForStatusBarHidden;	// IMP=0x0010000000060bba
- (void)setChildViewControllerForStatusBarStyle:(id)arg1;	// IMP=0x0010000000060b8a
- (id)tmlChildViewControllerForStatusBarStyle;	// IMP=0x0010000000060b13
- (void)setPreferredStatusBarUpdateAnimation:(long long)arg1;	// IMP=0x0010000000060aaa
- (long long)tmlPreferredStatusBarUpdateAnimation;	// IMP=0x0010000000060a3a
- (void)setPrefersStatusBarHidden:(_Bool)arg1;	// IMP=0x00100000000609d1
- (_Bool)tmlPrefersStatusBarHidden;	// IMP=0x0010000000060963
- (void)setPreferredStatusBarStyle:(long long)arg1;	// IMP=0x00100000000608fa
- (long long)tmlPreferredStatusBarStyle;	// IMP=0x001000000006088a
@property(copy, nonatomic) NSArray *previewActionItems;
- (id)tmlPreviewActionItems;	// IMP=0x0010000000060863
- (void)tmlWillMoveToParentViewController:(id)arg1;	// IMP=0x0010000000060771
- (void)tmlTraitCollectionDidChange:(id)arg1;	// IMP=0x00100000000606cb
- (void)tmlWillTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000000603d5
- (void)tmlViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000000600c8
- (void)tmlDecodeRestorableStateWithCoder:(id)arg1;	// IMP=0x001000000005ffcc
- (void)tmlEncodeRestorableStateWithCoder:(id)arg1;	// IMP=0x001000000005ff08
- (void)tmlUpdateViewConstraints;	// IMP=0x001000000005fed1
- (void)tmlViewDidLayoutSubviews;	// IMP=0x001000000005fe9a
- (void)tmlViewWillLayoutSubviews;	// IMP=0x001000000005fe63
- (void)tmlViewDidDisappear:(_Bool)arg1;	// IMP=0x001000000005fd9e
- (void)tmlViewWillDisappear:(_Bool)arg1;	// IMP=0x001000000005fcd9
- (void)tmlViewDidAppear:(_Bool)arg1;	// IMP=0x001000000005fc14
- (void)tmlViewWillAppear:(_Bool)arg1;	// IMP=0x001000000005fb4f
- (void)tmlViewDidLoad;	// IMP=0x001000000005fb18
- (void)tmlLoadViewOverride;	// IMP=0x001000000005fa8c
- (void)setTMLValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x001000000005f9d2
- (_Bool)tmlLoadViewControllerWithSource:(id)arg1;	// IMP=0x001000000005f828
- (_Bool)tmlLoadViewControllerFromPath:(id)arg1;	// IMP=0x001000000005f67e
- (id)tmlLoadViewFromPath:(id)arg1;	// IMP=0x001000000005f5c0
- (id)tmlLoadView:(id)arg1;	// IMP=0x001000000005f502
- (_Bool)tmlLoadViewWithSource:(id)arg1;	// IMP=0x001000000005f375
- (_Bool)tmlLoadView;	// IMP=0x001000000005f1dd
- (void)_tmlUnloadContext;	// IMP=0x001000000005f181
- (id)_tmlEnsureContext;	// IMP=0x001000000005ef6a
@property(copy, nonatomic) NSDictionary *tmlObjects;
@property(readonly, nonatomic) NSString *tmlViewPath;
@property(readonly, nonatomic) TMLContext *tmlContext;
@end

