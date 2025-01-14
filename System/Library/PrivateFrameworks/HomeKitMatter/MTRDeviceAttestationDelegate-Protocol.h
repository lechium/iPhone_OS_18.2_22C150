//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMatter/NSObject-Protocol.h>

@class MTRDeviceAttestationDeviceInfo, MTRDeviceController, NSError;

@protocol MTRDeviceAttestationDelegate <NSObject>

@optional
- (void)deviceAttestation:(MTRDeviceController *)arg1 failedForDevice:(void *)arg2 error:(NSError *)arg3;
- (void)deviceAttestation:(MTRDeviceController *)arg1 completedForDevice:(void *)arg2 attestationDeviceInfo:(MTRDeviceAttestationDeviceInfo *)arg3 error:(NSError *)arg4;
- (void)deviceAttestationFailedForController:(MTRDeviceController *)arg1 opaqueDeviceHandle:(void *)arg2 error:(NSError *)arg3;
- (void)deviceAttestationCompletedForController:(MTRDeviceController *)arg1 opaqueDeviceHandle:(void *)arg2 attestationDeviceInfo:(MTRDeviceAttestationDeviceInfo *)arg3 error:(NSError *)arg4;
@end

