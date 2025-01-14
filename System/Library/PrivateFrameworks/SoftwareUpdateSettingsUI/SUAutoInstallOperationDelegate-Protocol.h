//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoftwareUpdateSettingsUI/NSObject-Protocol.h>

@class NSError, SUAutoInstallOperation;

@protocol SUAutoInstallOperationDelegate <NSObject>
- (void)autoInstallOperationPasscodePolicyDidChange:(SUAutoInstallOperation *)arg1 passcodePolicyType:(unsigned long long)arg2;
- (void)autoInstallOperationIsReadyToInstall:(SUAutoInstallOperation *)arg1 withResponse:(void (^)(_Bool, NSError *))arg2;
- (void)autoInstallOperationDidConsent:(SUAutoInstallOperation *)arg1;
- (void)autoInstallOperationWasCancelled:(SUAutoInstallOperation *)arg1;

@optional
- (void)autoInstallOperationDidExpire:(SUAutoInstallOperation *)arg1 withError:(NSError *)arg2;
- (void)autoInstallOperationDidExpire:(SUAutoInstallOperation *)arg1;
@end

