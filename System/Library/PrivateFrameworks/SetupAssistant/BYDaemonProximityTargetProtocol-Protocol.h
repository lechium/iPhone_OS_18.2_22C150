//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SetupAssistant/NSObject-Protocol.h>

@class SASProximityHandshake, SASProximityInformation;

@protocol BYDaemonProximityTargetProtocol <NSObject>
- (void)endSIMSetupExternalAuthentication;
- (void)beginSIMSetupExternalAuthentication;
- (void)suspendConnectionForSoftwareUpdate:(void (^)(void))arg1;
- (void)showMigrationInterfaceOnSource;
- (void)endDeviceToDeviceMigration;
- (void)fileTransferSessionTemplate:(void (^)(RPFileTransferSession *))arg1;
- (void)storeHandshake:(SASProximityHandshake *)arg1;
- (void)storeInformation:(SASProximityInformation *)arg1;
- (void)resumeProximitySetup:(void (^)(SASProximityHandshake *, SASProximityInformation *, CUMessageSession *, NSString *, NSString *, _Bool))arg1;
- (void)hasConnection:(void (^)(_Bool))arg1;
- (void)endPairing;
- (void)endAdvertisingProximitySetup;
- (void)beginAdvertisingProximitySetup;
@end

