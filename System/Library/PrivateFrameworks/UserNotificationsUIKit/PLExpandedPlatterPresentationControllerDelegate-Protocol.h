//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class BSAnimationSettings, PLExpandedPlatterPresentationController, UIWindow;
@protocol PLKeyboardHomeAffordanceAssertion, UIViewSpringAnimationBehaviorDescribing;

@protocol PLExpandedPlatterPresentationControllerDelegate <NSObject>

@optional
- (id <UIViewSpringAnimationBehaviorDescribing>)settleHomeAffordanceAnimationBehaviorDescriptionForExpandedPlatterPresentationController:(PLExpandedPlatterPresentationController *)arg1;
- (BSAnimationSettings *)unhideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(PLExpandedPlatterPresentationController *)arg1;
- (BSAnimationSettings *)hideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(PLExpandedPlatterPresentationController *)arg1;
- (id <PLKeyboardHomeAffordanceAssertion>)expandedPlatterPresentationController:(PLExpandedPlatterPresentationController *)arg1 keyboardAssertionForGestureWindow:(UIWindow *)arg2;
- (_Bool)expandedPlatterPresentationControllerShouldAllowKeyboardOnAppearance:(PLExpandedPlatterPresentationController *)arg1;
@end
