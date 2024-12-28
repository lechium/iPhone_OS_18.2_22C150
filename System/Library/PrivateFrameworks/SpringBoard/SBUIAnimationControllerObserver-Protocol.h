//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/BSTransactionObserver-Protocol.h>

@class SBUIAnimationController;

@protocol SBUIAnimationControllerObserver <BSTransactionObserver>

@optional
- (void)animationControllerDidRevealApplication:(SBUIAnimationController *)arg1;
- (void)animationControllerDidFinishAnimation:(SBUIAnimationController *)arg1;
- (void)animationController:(SBUIAnimationController *)arg1 willBeginAnimation:(_Bool)arg2;
@end
