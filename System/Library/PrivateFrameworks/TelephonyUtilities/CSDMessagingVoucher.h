//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingHandle, NSData, NSString, TUVoucher;

__attribute__((visibility("hidden")))
@interface CSDMessagingVoucher : PBCodable
{
    NSData *_encryptedData;	// 8 = 0x8
    CSDMessagingHandle *_handle;	// 16 = 0x10
    NSString *_tokenPrefixedURI;	// 24 = 0x18
    NSData *_unsafeData;	// 32 = 0x20
}

+ (id)voucherWithTUVoucher:(id)arg1;	// IMP=0x0010000000080f0a
- (void).cxx_destruct;	// IMP=0x000000000006afb6
@property(retain, nonatomic) NSData *encryptedData; // @synthesize encryptedData=_encryptedData;
@property(retain, nonatomic) NSData *unsafeData; // @synthesize unsafeData=_unsafeData;
@property(retain, nonatomic) NSString *tokenPrefixedURI; // @synthesize tokenPrefixedURI=_tokenPrefixedURI;
@property(retain, nonatomic) CSDMessagingHandle *handle; // @synthesize handle=_handle;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000006ae69
- (unsigned long long)hash;	// IMP=0x000000000006ade5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006acd9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006abef
- (void)copyTo:(id)arg1;	// IMP=0x000000000006ab4c
- (void)writeTo:(id)arg1;	// IMP=0x000000000006aab5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000006aaa8
- (id)dictionaryRepresentation;	// IMP=0x000000000006a78b
- (id)description;	// IMP=0x000000000006a6dc
@property(readonly, nonatomic) _Bool hasEncryptedData;
@property(readonly, nonatomic) _Bool hasUnsafeData;
@property(readonly, nonatomic) _Bool hasTokenPrefixedURI;
@property(readonly, nonatomic) _Bool hasHandle;
@property(readonly, nonatomic) TUVoucher *tuVoucher;

@end

