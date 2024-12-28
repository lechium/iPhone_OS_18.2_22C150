//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewController.h>

@class MISSING_TYPE, _TtC10FitnessApp18SummaryCoordinator;
@protocol _TtP10FitnessApp32TrophyCaseViewControllerDelegate_, _TtP10FitnessApp35HistoryPagingViewControllerDelegate_;

@interface _TtC10FitnessApp31ActivityDashboardViewController : UICollectionViewController
{
    MISSING_TYPE *summaryCoordinator;	// 8 = 0x8
    MISSING_TYPE *marketingBannerPresenter;	// 16 = 0x10
    MISSING_TYPE *paletteBannerInsets;	// 24 = 0x18
    MISSING_TYPE *summaryBannerActionPresenter;	// 56 = 0x38
    MISSING_TYPE *loadingCardHeightProvider;	// 64 = 0x40
    MISSING_TYPE *impressionsTracker;	// 72 = 0x48
    MISSING_TYPE *achievementTransitionAnimator;	// 80 = 0x50
    MISSING_TYPE *marketingBannerViewController;	// 88 = 0x58
    MISSING_TYPE *transitionAnimatorFromViewController;	// 96 = 0x60
    MISSING_TYPE *dataSource;	// 104 = 0x68
    MISSING_TYPE *trophyCaseViewControllerDelegate;	// 112 = 0x70
    MISSING_TYPE *historyPagingViewControllerDelegate;	// 120 = 0x78
    MISSING_TYPE *dashboardCardCellViewCache;	// 128 = 0x80
    MISSING_TYPE *context;	// 136 = 0x88
    MISSING_TYPE *addButton;	// 144 = 0x90
    MISSING_TYPE *doneButton;	// 152 = 0x98
    MISSING_TYPE *editButtonIdentifier;	// 0 = 0x0
    MISSING_TYPE *entryLinksButtonIdentifier;	// 0 = 0x0
    MISSING_TYPE *visibility;	// 1651471470 = 0x626f746e
    MISSING_TYPE *initialPresentation;	// 1094999903 = 0x41445f5f
    MISSING_TYPE *accountButton;	// 0 = 0x0
    MISSING_TYPE *customizeSummaryTip;	// 0 = 0x0
    MISSING_TYPE *trainingLoadTip;	// 0 = 0x0
    MISSING_TYPE *dashboardTipReuseIdentifier;	// 0 = 0x0
    MISSING_TYPE *isNavigationBarSetup;	// 0 = 0x0
    MISSING_TYPE *observers;	// 0 = 0x0
    MISSING_TYPE *keyValueObservers;	// 0 = 0x0
    MISSING_TYPE *resignActiveObserver;	// 1414745679 = 0x54534e4f
    MISSING_TYPE *$__lazy_storage_$_onDismissAddCardModal;	// 0 = 0x0
    MISSING_TYPE *ringCardIndex;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x002000000041f480
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000427810
- (id)initWithCollectionViewLayout:(id)arg1;	// IMP=0x00100000004277e0
- (void)scrollToBottom;	// IMP=0x0010000000425bb0
- (void)scrollToTop;	// IMP=0x00100000004259b0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000425790
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000425760
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000422e00
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000422d00
- (void)didTapAddCard;	// IMP=0x00100000004228c0
- (void)didTapDone;	// IMP=0x0010000000422450
- (void)entryLinksButtonTapped;	// IMP=0x0010000000422130
- (void)editButtonTapped;	// IMP=0x0010000000421e80
- (void)accountButtonTapped:(id)arg1;	// IMP=0x0010000000421920
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000420fe0
- (void)textSizeChanged:(id)arg1;	// IMP=0x0010000000420f30
- (void)dealloc;	// IMP=0x001000000041f460
- (void)viewDidLoad;	// IMP=0x001000000041f2e0
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000041eea0
- (id)initWithCollectionViewLayout:(id)arg1 context:(id)arg2;	// IMP=0x001000000041ee60
@property(nonatomic) __weak id <_TtP10FitnessApp35HistoryPagingViewControllerDelegate_> historyPagingViewControllerDelegate; // @synthesize historyPagingViewControllerDelegate;
@property(nonatomic) __weak id <_TtP10FitnessApp32TrophyCaseViewControllerDelegate_> trophyCaseViewControllerDelegate; // @synthesize trophyCaseViewControllerDelegate;
@property(nonatomic, readonly) _TtC10FitnessApp18SummaryCoordinator *summaryCoordinator; // @synthesize summaryCoordinator;
- (void)presentWorkoutConfigurationWithData:(id)arg1;	// IMP=0x001000000034a880
- (void)showSummaryCardWithIdentifier:(long long)arg1;	// IMP=0x001000000034a510
- (void)showLoad;	// IMP=0x0010000000349f10
- (void)showTrendWithIdentifier:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000349ed0
- (void)showAllTrendsAnimated:(_Bool)arg1;	// IMP=0x0010000000349950
- (void)showMindfulnessSessionWithUUID:(id)arg1;	// IMP=0x0010000000347b00
- (void)navigateToMindfulnessHistoryAnimated:(_Bool)arg1;	// IMP=0x0010000000347370
- (void)showWorkoutWithId:(id)arg1 activityId:(id)arg2 page:(id)arg3;	// IMP=0x0010000000346fb0
- (void)navigateToWorkoutHistoryWithActivityType:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000003465d0
- (void)navigateToHistoryAnimated:(_Bool)arg1;	// IMP=0x00100000003459f0
- (void)navigateToTrophyCaseSection:(id)arg1 withAchievementID:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00100000003456e0
- (id)navigateToTrophyCaseAnimated:(_Bool)arg1 initialAchievement:(id)arg2 shouldShowCelebration:(_Bool)arg3 forModalPresentation:(_Bool)arg4;	// IMP=0x0010000000345660
- (id)showActivityOnDate:(id)arg1 shareImmediately:(_Bool)arg2 animated:(_Bool)arg3 forGoalCompleteNotification:(_Bool)arg4 goalRecommendation:(id)arg5 withPauseRingsEditing:(_Bool)arg6;	// IMP=0x00100000003446d0
- (id)showActivityOnDate:(id)arg1 shareImmediately:(_Bool)arg2 animated:(_Bool)arg3 forGoalCompleteNotification:(_Bool)arg4 goalRecommendation:(id)arg5;	// IMP=0x0010000000344600
- (id)showTodayAndShareImmediately:(_Bool)arg1 animated:(_Bool)arg2 forGoalCompleteNotification:(_Bool)arg3 goalRecommendation:(id)arg4 withPauseRingsEditing:(_Bool)arg5;	// IMP=0x0010000000344520
- (id)showTodayAndShareImmediately:(_Bool)arg1 animated:(_Bool)arg2 forGoalCompleteNotification:(_Bool)arg3 goalRecommendation:(id)arg4;	// IMP=0x0010000000344450
- (void)presentAppSettingsShowingPane:(long long)arg1;	// IMP=0x0010000000343ba0
- (_Bool)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;	// IMP=0x001000000034aa30
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;	// IMP=0x001000000034a9a0
- (id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;	// IMP=0x0010000000353400
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x0010000000353350
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0010000000427d10
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0010000000427c20
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0010000000427b20
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x00100000004279c0

@end
