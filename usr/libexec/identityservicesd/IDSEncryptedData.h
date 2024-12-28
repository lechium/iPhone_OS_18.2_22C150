//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface IDSEncryptedData : NSObject
{
    NSData *_data;	// 8 = 0x8
    long long _encryptionType;	// 16 = 0x10
    NSData *_payloadMetadata;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000011264c
@property(readonly, nonatomic) NSData *payloadMetadata; // @synthesize payloadMetadata=_payloadMetadata;
@property(readonly, nonatomic) long long encryptionType; // @synthesize encryptionType=_encryptionType;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)description;	// IMP=0x0010000000112598
- (id)initWithData:(id)arg1 encryptionType:(long long)arg2 payloadMetadata:(id)arg3;	// IMP=0x00100000001124f3

@end
