//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebCore/SBSBackgroundActivityCoordinatorDelegate-Protocol.h>

@class NSError, SBSStatusBarStyleOverridesCoordinator;
@protocol SBSStatusBarTapContext;

@protocol SBSStatusBarStyleOverridesCoordinatorDelegate <SBSBackgroundActivityCoordinatorDelegate>
- (void)statusBarCoordinator:(SBSStatusBarStyleOverridesCoordinator *)arg1 invalidatedRegistrationWithError:(NSError *)arg2;

@optional
- (_Bool)statusBarCoordinator:(SBSStatusBarStyleOverridesCoordinator *)arg1 receivedTapWithContext:(id <SBSStatusBarTapContext>)arg2 completionBlock:(void (^)(void))arg3;
@end

