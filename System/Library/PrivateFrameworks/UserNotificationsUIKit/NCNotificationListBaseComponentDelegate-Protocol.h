//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NCNotificationListAnimatorProviding-Protocol.h>

@class NCModalNavigationController, NCNotificationListSupplementaryViewsSection, NSSet, NSString, PLSwipeInteraction, UIView, UIViewController, _UILegibilitySettings;
@protocol NCMaterialDisplaying, NCNotificationListBaseComponent, NCNotificationListCoalescingControlsHandler;

@protocol NCNotificationListBaseComponentDelegate <NCNotificationListAnimatorProviding>

@optional
- (void)supplementaryViewSectionDidChangeHeight:(NCNotificationListSupplementaryViewsSection *)arg1;
- (void)supplementaryViewSectionDidChangeContent:(NCNotificationListSupplementaryViewsSection *)arg1;
- (_Bool)shouldScrollToTopForNotificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 requestsScrollingToContentOffset:(double)arg2 withCompletion:(void (^)(void))arg3;
- (void)notificationListBaseComponentDidRemoveAll:(id <NCNotificationListBaseComponent>)arg1;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 requestsClearingPresentables:(NSSet *)arg2;
- (void)notificationListBaseComponentRequestsClearingAll:(id <NCNotificationListBaseComponent>)arg1;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 didPresentCoalescingControlsHandler:(id <NCNotificationListCoalescingControlsHandler>)arg2 inForceTouchState:(_Bool)arg3;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 didTransitionCoalescingControlsHandler:(id <NCNotificationListCoalescingControlsHandler>)arg2 toClearState:(_Bool)arg3;
- (UIView *)containerViewForPreviewInteractionPresentedContentForNotificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1;
- (_Bool)handleTapOnNotificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1;
- (NSString *)backgroundGroupNameBaseForNotificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1;
- (_UILegibilitySettings *)legibilitySettingsForNotificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 closeSwipeInteractions:(_Bool)arg2;
- (_Bool)shouldHintDefaultActionForNotificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 didTransitionActionsForSwipeInteraction:(PLSwipeInteraction *)arg2 revealed:(_Bool)arg3;
- (void)notificationListBaseComponentDidSignificantUserInteraction:(id <NCNotificationListBaseComponent>)arg1;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 didSetGrouped:(_Bool)arg2;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 didEndUserInteractionWithViewController:(UIViewController *)arg2;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 didBeginUserInteractionWithViewController:(UIViewController *)arg2;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 requestsModalPresentationOfNavigationController:(NCModalNavigationController *)arg2 sender:(id)arg3 animated:(_Bool)arg4 completion:(void (^)(_Bool))arg5;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 didRemoveViewController:(UIViewController<NCMaterialDisplaying> *)arg2;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 didUpdateViewController:(UIViewController<NCMaterialDisplaying> *)arg2;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 willUpdateViewController:(UIViewController<NCMaterialDisplaying> *)arg2;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 didAddViewController:(UIViewController<NCMaterialDisplaying> *)arg2;
@end

