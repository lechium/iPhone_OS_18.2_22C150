//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreCDPUI/NSObject-Protocol.h>

@class CDPUIEDPRecoveryTokenFlowCoordinator;

@protocol CDPUIEDPRecoveryTokenFlowCoordinatorDelegate <NSObject>
- (void)recoveryTokenFlowCoordinatorDidSelectResetProtectedData:(CDPUIEDPRecoveryTokenFlowCoordinator *)arg1;
- (void)recoveryTokenFlowCoordinatorDidSelectAccessDataLater:(CDPUIEDPRecoveryTokenFlowCoordinator *)arg1;
- (void)recoveryTokenFlowCoordinatorDidSuccessfullyFinish:(CDPUIEDPRecoveryTokenFlowCoordinator *)arg1;
- (void)recoveryTokenFlowCoordinatorDidSelectCancel:(CDPUIEDPRecoveryTokenFlowCoordinator *)arg1;
@end

