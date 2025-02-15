//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceCheckInternal/NSObject-Protocol.h>

@class DCContext, NSData, NSDictionary;

@protocol DCCryptoProxy <NSObject>
- (void)fetchOpaqueBlobWithContext:(DCContext *)arg1 completion:(void (^)(NSData *, NSError *))arg2;

@optional
- (void)baaSignaturesForData:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *, NSData *, NSError *))arg2;
- (void)baaSignatureForData:(NSData *)arg1 completion:(void (^)(NSData *, NSData *, NSError *))arg2;
@end

