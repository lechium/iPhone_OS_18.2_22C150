//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NCNotificationRequestPresentingDelegate-Protocol.h>

@class NCFullScreenPresentableViewController, NSString;

@protocol NCFullScreenPresentableViewControllerDelegate <NCNotificationRequestPresentingDelegate>
- (void)fullScreenPresentableViewController:(NCFullScreenPresentableViewController *)arg1 requestsDismissalWithReason:(NSString *)arg2;

@optional
- (_Bool)fullScreenPresentableViewControllerShouldTransitionToDetailStageOnTap:(NCFullScreenPresentableViewController *)arg1;
@end
