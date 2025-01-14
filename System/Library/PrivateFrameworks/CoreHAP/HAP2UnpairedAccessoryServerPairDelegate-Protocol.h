//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/NSObject-Protocol.h>

@class NSData, NSError, NSString, NSUUID;
@protocol HAP2UnpairedAccessoryServer;

@protocol HAP2UnpairedAccessoryServerPairDelegate <NSObject>
- (void)accessoryServer:(id <HAP2UnpairedAccessoryServer>)arg1 didFinishAuthWithError:(NSError *)arg2;
- (void)accessoryServer:(id <HAP2UnpairedAccessoryServer>)arg1 confirmSoftwareAuthUUID:(NSUUID *)arg2 token:(NSData *)arg3 completion:(void (^)(NSError *))arg4;
- (void)accessoryServer:(id <HAP2UnpairedAccessoryServer>)arg1 authenticateSoftwareAuthUUID:(NSUUID *)arg2 token:(NSData *)arg3 completion:(void (^)(NSData *))arg4;
- (void)accessoryServer:(id <HAP2UnpairedAccessoryServer>)arg1 validatePairingCert:(NSData *)arg2 model:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)accessoryServer:(id <HAP2UnpairedAccessoryServer>)arg1 validateSoftwareAuthUUID:(NSUUID *)arg2 token:(NSData *)arg3 model:(NSString *)arg4 completion:(void (^)(NSError *))arg5;
- (void)accessoryServer:(id <HAP2UnpairedAccessoryServer>)arg1 didCompleteWithError:(NSError *)arg2;
- (void)accessoryServer:(id <HAP2UnpairedAccessoryServer>)arg1 didRejectSetupCodeWithBackoffInterval:(double)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)accessoryServer:(id <HAP2UnpairedAccessoryServer>)arg1 doesRequireSetupCodeWithCompletion:(void (^)(NSString *, NSError *))arg2;
- (void)accessoryServer:(id <HAP2UnpairedAccessoryServer>)arg1 doesRequirePermission:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
@end

