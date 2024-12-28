//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sharing/NSObject-Protocol.h>

@class NSError, NSUUID, SFAuthenticationApproveInfo, SFAutoUnlockDevice;

@protocol SFUnlockClientProtocol <NSObject>
- (void)receivedApproveRequestForSessionID:(NSUUID *)arg1 info:(SFAuthenticationApproveInfo *)arg2;
- (void)failedAuthenticationSessionWithID:(NSUUID *)arg1 error:(NSError *)arg2;
- (void)completedAuthenticationSessionWithID:(NSUUID *)arg1;
- (void)startedAuthenticationSessionWithID:(NSUUID *)arg1;
- (void)failedToDisableDeviceForSessionID:(NSUUID *)arg1 error:(NSError *)arg2;
- (void)disabledAuthenticationSessionWithID:(NSUUID *)arg1;
- (void)failedToEnableDeviceForSessionID:(NSUUID *)arg1 error:(NSError *)arg2;
- (void)enabledAuthenticationSessionWithID:(NSUUID *)arg1;
- (void)failedUnlockWithError:(NSError *)arg1;
- (void)completedUnlockWithDevice:(SFAutoUnlockDevice *)arg1;
- (void)beganAttemptWithDevice:(SFAutoUnlockDevice *)arg1;
- (void)failedToEnableDevice:(SFAutoUnlockDevice *)arg1 error:(NSError *)arg2;
- (void)enabledDevice:(SFAutoUnlockDevice *)arg1;
- (void)keyDeviceLocked:(SFAutoUnlockDevice *)arg1;
@end
