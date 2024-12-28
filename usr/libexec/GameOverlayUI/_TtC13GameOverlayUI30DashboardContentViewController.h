//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, UINavigationController;

@interface _TtC13GameOverlayUI30DashboardContentViewController : UIViewController
{
    MISSING_TYPE *dismissHandler;	// 8 = 0x8
    MISSING_TYPE *_navigationController;	// 24 = 0x18
    MISSING_TYPE *alwaysShowDoneButton;	// 32 = 0x20
    MISSING_TYPE *requiresNavigationController;	// 33 = 0x21
    MISSING_TYPE *contentViewController;	// 40 = 0x28
    MISSING_TYPE *effectView;	// 48 = 0x30
    MISSING_TYPE *adjustTopConstraint;	// 56 = 0x38
    MISSING_TYPE *daemonProxy;	// 64 = 0x40
    MISSING_TYPE *GKScrollToTopViewTag;	// 72 = 0x48
    MISSING_TYPE *request;	// 80 = 0x50
    MISSING_TYPE *remoteTarget;	// 88 = 0x58
    MISSING_TYPE *dashboardAssetNames;	// 96 = 0x60
    MISSING_TYPE *leaderboardSetAssetNames;	// 104 = 0x68
    MISSING_TYPE *leaderboardAssetNames;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00400000000984f0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000098470
- (void)setToDarkBackground;	// IMP=0x00100000000983c0
- (void)setToLightBackground;	// IMP=0x00100000000983b0
- (void)dismissWithGameController;	// IMP=0x0010000000098380
- (void)dashboardDidChangeToLeaderboardIdentifier:(id)arg1;	// IMP=0x0010000000098220
- (void)dashboardDidChangeToLeaderboardPlayerScope:(long long)arg1;	// IMP=0x0010000000098140
- (void)dashboardDidChangeToLeaderboardTimeScope:(long long)arg1;	// IMP=0x0010000000098120
- (void)dashboardDidChangeToViewState:(long long)arg1;	// IMP=0x0010000000098100
- (void)quitTurnBasedMatch:(id)arg1;	// IMP=0x00100000000980b0
- (void)finishWithTurnBasedMatch:(id)arg1;	// IMP=0x0010000000097d10
- (void)finishAndPlayChallenge:(id)arg1;	// IMP=0x0010000000097c80
- (void)finish;	// IMP=0x0010000000097be0
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x0010000000097a40
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00100000000978d0
- (void)donePressed:(id)arg1;	// IMP=0x0010000000097820
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000000977a0
- (void)scrollToTopPressed:(id)arg1;	// IMP=0x00100000000972c0
- (void)dismissNotificationCallback:(id)arg1;	// IMP=0x00100000000957e0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000000954b0
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000952f0
@property(nonatomic, readonly) UINavigationController *navigationController;
- (void)viewWillLayoutSubviews;	// IMP=0x0010000000095090
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000094e40
- (void)viewDidLoad;	// IMP=0x0010000000094a90
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000946a0

@end
