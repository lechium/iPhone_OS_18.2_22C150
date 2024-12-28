//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKNavbarCanvasViewController, CKNavigationButtonView, IMChipAction, IMChipReply, UIView, UIViewController;

@protocol CKNavbarCanvasViewControllerDelegate <NSObject>
- (_Bool)shouldUseMinimumSafeAreas;
- (struct NSDirectionalEdgeInsets)systemMinimumLayoutMarginsForViewController:(UIViewController *)arg1;
- (void)navbarCanvasViewControllerLegacyCanvasHeightDidChange:(CKNavbarCanvasViewController *)arg1;
- (void)navbarCanvasViewControllerCanvasHeightDidChange:(CKNavbarCanvasViewController *)arg1;
- (_Bool)shouldConfigureForJunkModalInNavbarCanvasViewController:(CKNavbarCanvasViewController *)arg1;
- (_Bool)shouldShowChevronInNavbarCanvasViewController:(CKNavbarCanvasViewController *)arg1;
- (_Bool)shouldShowFacetimeButtonInNavbarCanvasViewController:(CKNavbarCanvasViewController *)arg1;
- (void)navbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 updatedJoinStateWithStyle:(long long)arg2;
- (void)navbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 infoButtonTapped:(CKNavigationButtonView *)arg2;
- (void)navbarCanvasViewControllerFaceTimeVideoButtonTapped:(CKNavbarCanvasViewController *)arg1;
- (void)navbarCanvasViewControllerFaceTimeAudioButtonTapped:(CKNavbarCanvasViewController *)arg1;
- (void)navbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 didTapView:(UIView *)arg2;
- (_Bool)shouldShowAvatarViewInNavBarCanvas;

@optional
- (void)navbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 selectedSuggestedReply:(IMChipReply *)arg2;
- (void)navbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 selectedChipAction:(IMChipAction *)arg2;
- (_Bool)shouldShowLocationLabelInNavbarCanvasViewController:(CKNavbarCanvasViewController *)arg1;
- (long long)unreadCountForCurrentFilterModeForNavbarCanvasViewController:(CKNavbarCanvasViewController *)arg1;
@end
