//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CardPresentationController, MKViewWithHairline, MacMenuPresentationController, MacPopoverPresentationController, NSLayoutConstraint, NSString, UIColor, UIView, UIVisualEffectView;
@protocol ContaineeViewControllerDelegate;

@interface ContaineeViewController
{
    CardPresentationController *_cardPresentationController;	// 8 = 0x8
    MacMenuPresentationController *_menuPresentationController;	// 16 = 0x10
    MacPopoverPresentationController *_popoverPresentationController;	// 24 = 0x18
    UIVisualEffectView *_effectView;	// 32 = 0x20
    UIView *_defaultHeaderView;	// 40 = 0x28
    UIView *_defaultContentView;	// 48 = 0x30
    MKViewWithHairline *_homeIndicatorSafeAreaView;	// 56 = 0x38
    NSLayoutConstraint *_homeIndicatorSafeAreaHeightConstraint;	// 64 = 0x40
    _Bool _keepOriginalSafeInsets;	// 72 = 0x48
    unsigned long long _preferredPresentationStyle;	// 80 = 0x50
    unsigned long long _retainedLayout;	// 88 = 0x58
    id <ContaineeViewControllerDelegate> _containeeDelegate;	// 96 = 0x60
    UIColor *_cardColor;	// 104 = 0x68
}

+ (float)contentViewTopConstraintPriority;	// IMP=0x0020000000b49919
+ (float)contentViewBottomConstraintPriority;	// IMP=0x0010000000b4990b
+ (_Bool)wantsDefaultHeaderContentViews;	// IMP=0x0010000000b49903
- (void).cxx_destruct;	// IMP=0x0020000000b4af38
@property(retain, nonatomic) UIColor *cardColor; // @synthesize cardColor=_cardColor;
@property(nonatomic) __weak id <ContaineeViewControllerDelegate> containeeDelegate; // @synthesize containeeDelegate=_containeeDelegate;
@property(nonatomic) _Bool keepOriginalSafeInsets; // @synthesize keepOriginalSafeInsets=_keepOriginalSafeInsets;
@property(readonly, nonatomic) unsigned long long retainedLayout; // @synthesize retainedLayout=_retainedLayout;
@property(nonatomic) unsigned long long preferredPresentationStyle; // @synthesize preferredPresentationStyle=_preferredPresentationStyle;
@property(readonly, nonatomic) MacPopoverPresentationController *macPopoverPresentationController;
@property(readonly, nonatomic) MacMenuPresentationController *macMenuPresentationController;
@property(readonly, nonatomic) CardPresentationController *cardPresentationController;
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0010000000b4ada5
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0010000000b4ad9f
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0010000000b4ad99
- (id)keyCommands;	// IMP=0x0010000000b4acf6
- (void)didChangeContainerStyle:(unsigned long long)arg1;	// IMP=0x0010000000b4ac2c
- (void)didChangeLayout:(unsigned long long)arg1;	// IMP=0x0010000000b4abd2
- (void)willChangeContainerStyle:(unsigned long long)arg1;	// IMP=0x0010000000b4abcc
- (void)willChangeLayout:(unsigned long long)arg1;	// IMP=0x0010000000b4abc6
- (void)willDismissByGesture;	// IMP=0x0010000000b4abc0
- (void)didDismissByGesture;	// IMP=0x0010000000b4abba
- (void)shouldDismissForHorizontalSwipe_nonUIKitCardsOnly;	// IMP=0x0010000000b4abb4
- (void)didResignCurrent;	// IMP=0x0010000000b4abae
- (void)willResignCurrent:(_Bool)arg1;	// IMP=0x0010000000b4aba8
- (void)didBecomeCurrent;	// IMP=0x0010000000b4aba2
- (void)willBecomeCurrentByGesture;	// IMP=0x0010000000b4ab9c
- (void)willBecomeCurrent:(_Bool)arg1;	// IMP=0x0010000000b4ab96
- (void)shoulDismissForVerticalSwipe_nonUIKitCardsOnly;	// IMP=0x0010000000b4ab90
- (_Bool)shouldCollapseOnMapGesture;	// IMP=0x0010000000b4ab88
- (void)handleDismissAction:(id)arg1;	// IMP=0x0010000000b4ab1d
- (id)contentView;	// IMP=0x0010000000b4ab08
- (id)headerView;	// IMP=0x0010000000b4aaf3
@property(readonly, nonatomic) double headerHeight;
@property(readonly, nonatomic) _Bool forceCurrentWidthForHeaderHeightCalculations;
- (void)applyAlphaToContent:(double)arg1;	// IMP=0x0010000000b4a90b
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x0010000000b4a7e7
@property(readonly, nonatomic) double macContaineeWidth;
- (long long)preferredUserInterfaceStyle;	// IMP=0x0010000000b4a6f1
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000b4a593
- (void)viewDidLoad;	// IMP=0x0010000000b49e6b
- (void)_updateBlurCornerRadius;	// IMP=0x0010000000b49de7
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000b49d6e
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000b49bb6
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000b49927

// Remaining properties
@property(readonly, nonatomic) _Bool allowsQuickActionMenuInMap;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

