//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class ACAccount, AKAppleIDAuthenticationInAppContext, HUAppleMusicAccountModuleController;

@protocol HUAppleMusicAccountModuleControllerDelegate <NSObject>
- (void)appleMusicModuleControllerPresentSignInFlow:(HUAppleMusicAccountModuleController *)arg1;
- (void)appleMusicModuleController:(HUAppleMusicAccountModuleController *)arg1 willPresentContext:(AKAppleIDAuthenticationInAppContext *)arg2 account:(ACAccount *)arg3;
- (void)appleMusicModuleControllerDidUpdateAuthenticationState:(HUAppleMusicAccountModuleController *)arg1;
@end
