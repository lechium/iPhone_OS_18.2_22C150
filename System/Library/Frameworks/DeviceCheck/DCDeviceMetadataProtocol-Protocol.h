//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceCheck/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol DCDeviceMetadataProtocol <NSObject>
- (void)appAttestationIsSupportedWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)appAttestationAssert:(NSString *)arg1 keyId:(NSString *)arg2 clientDataHash:(NSData *)arg3 completion:(void (^)(NSData *, NSError *))arg4;
- (void)appAttestationAttestKey:(NSString *)arg1 keyId:(NSString *)arg2 clientDataHash:(NSData *)arg3 completion:(void (^)(NSData *, NSError *))arg4;
- (void)appAttestationCreateKey:(NSString *)arg1 completion:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)isSupportedDeviceWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)fetchOpaqueBlobWithCompletion:(void (^)(NSData *, NSError *))arg1;

@optional
- (void)baaSignaturesForData:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *, NSData *, NSError *))arg2;
- (void)baaSignatureForData:(NSData *)arg1 completion:(void (^)(NSData *, NSData *, NSError *))arg2;
@end

