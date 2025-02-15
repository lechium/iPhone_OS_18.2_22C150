//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIViewController;
@protocol PUDisplayLocationProvider, PUOneUpActionsController;

@protocol PUOneUpActionsControllerDelegate
- (_Bool)oneUpActionsControllerIsDetailsAccessoryAvailable:(id <PUOneUpActionsController>)arg1;
- (_Bool)oneUpActionsControllerPrefersInclusionAfterRemoval:(id <PUOneUpActionsController>)arg1 forActionType:(unsigned long long)arg2;
- (double)oneUpActionsControllerBottomPaddingForPresentingToast:(id <PUOneUpActionsController>)arg1;
- (UIViewController *)oneUpActionsControllerHostViewControllerForPresentingToast:(id <PUOneUpActionsController>)arg1;
- (void)oneUpActionsControllerToggleChromeVisibility:(id <PUOneUpActionsController>)arg1;
- (void)oneUpActionsController:(id <PUOneUpActionsController>)arg1 zoomAtLocationProvider:(id <PUDisplayLocationProvider>)arg2;
- (void)oneUpActionsControllerToggleCommentsVisibility:(id <PUOneUpActionsController>)arg1;
- (void)oneUpActionsControllerToggleDetailsVisibility:(id <PUOneUpActionsController>)arg1;
- (_Bool)oneUpActionsControllerShouldAnimateViewControllerPresentation:(id <PUOneUpActionsController>)arg1;
- (_Bool)oneUpActionsControllerDismissPresentedViewController:(id <PUOneUpActionsController>)arg1;
@end

