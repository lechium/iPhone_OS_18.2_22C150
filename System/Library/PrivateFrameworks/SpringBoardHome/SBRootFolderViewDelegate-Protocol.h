//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/SBFolderViewDelegate-Protocol.h>

@class NSMutableDictionary, NSString, SBRootFolderView, SBRootFolderViewPageManagementLayoutManager, UIView;
@protocol UIViewImplicitlyAnimating;

@protocol SBRootFolderViewDelegate <SBFolderViewDelegate>

@optional
- (NSString *)iconLocationForListsWithNonDefaultSizedIconsForRootFolderView:(SBRootFolderView *)arg1;
- (void)rootFolderView:(SBRootFolderView *)arg1 didDismissPageManagementWithLayoutManager:(SBRootFolderViewPageManagementLayoutManager *)arg2 context:(NSMutableDictionary *)arg3;
- (void)rootFolderView:(SBRootFolderView *)arg1 willDismissPageManagementUsingAnimator:(id <UIViewImplicitlyAnimating>)arg2 context:(NSMutableDictionary *)arg3;
- (void)rootFolderView:(SBRootFolderView *)arg1 willPresentPageManagementWithLayoutManager:(SBRootFolderViewPageManagementLayoutManager *)arg2 animator:(id <UIViewImplicitlyAnimating>)arg3 context:(NSMutableDictionary *)arg4;
- (void)rootFolderViewWantsSearchPresented:(SBRootFolderView *)arg1;
- (void)rootFolderViewWantsIconTintViewControllerPresented:(SBRootFolderView *)arg1;
- (void)rootFolderViewWantsWidgetEditingViewControllerPresented:(SBRootFolderView *)arg1;
- (void)rootFolderViewWantsToEndEditing:(SBRootFolderView *)arg1;
- (void)rootFolderView:(SBRootFolderView *)arg1 didEndOverscrollOnLastPageWithVelocity:(double)arg2 translation:(double)arg3;
- (void)rootFolderView:(SBRootFolderView *)arg1 didOverscrollOnLastPageByAmount:(double)arg2;
- (void)rootFolderView:(SBRootFolderView *)arg1 didEndOverscrollOnFirstPageWithVelocity:(double)arg2 translation:(double)arg3;
- (void)rootFolderView:(SBRootFolderView *)arg1 didOverscrollOnFirstPageByAmount:(double)arg2;
- (UIView *)backgroundViewForEditingDoneButtonForRootFolderView:(SBRootFolderView *)arg1;
- (UIView *)backgroundViewForDockForRootFolderView:(SBRootFolderView *)arg1;
- (void)rootFolderViewDidChangeSuppressesEditingStateForListViews:(SBRootFolderView *)arg1;
- (double)preferredExternalDockVerticalMarginForRootFolderView:(SBRootFolderView *)arg1;
- (double)externalDockHeightForRootFolderView:(SBRootFolderView *)arg1;
- (double)maxExternalDockHeightForRootFolderView:(SBRootFolderView *)arg1;
- (double)distanceToTopOfSpotlightIconsForRootFolderView:(SBRootFolderView *)arg1;
- (void)rootFolderView:(SBRootFolderView *)arg1 wantsToAdjustLeadingCustomContentForEdgeBounceForScrollOffset:(struct CGPoint)arg2;
@end

