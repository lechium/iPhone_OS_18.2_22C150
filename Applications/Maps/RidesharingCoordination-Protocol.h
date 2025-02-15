//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AppCoordinator, NSString, RideBookingRequestRideStatus, RidesharingConfirmedRideViewController, RidesharingErrorAlertProvider, UIViewController;

@protocol RidesharingCoordination <NSObject>
@property(nonatomic) __weak AppCoordinator *appCoordinator;
- (void)viewController:(UIViewController *)arg1 presentErrorAlertIfNeeded:(RidesharingErrorAlertProvider *)arg2;
- (void)viewControllerSendFeedbackAction;
- (void)viewControllerRideCompletionAction:(RidesharingConfirmedRideViewController *)arg1;
- (void)viewController:(RidesharingConfirmedRideViewController *)arg1 minimizeConfirmation:(id)arg2;
- (void)presentExpirationAlertControllerWithRequestRideStatus:(RideBookingRequestRideStatus *)arg1;
- (void)presentConfirmedRideWithApplicationIdentifier:(NSString *)arg1;
- (void)presentDetailsPicking;
@end

