//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface _ADPBDeviceStringKeyValuePair : PBCodable
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000360604
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000360557
- (unsigned long long)hash;	// IMP=0x001000000036050a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000360452
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000003603b4
- (void)copyTo:(id)arg1;	// IMP=0x0010000000360351
- (void)writeTo:(id)arg1;	// IMP=0x00100000003602f4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000003602e7
- (id)dictionaryRepresentation;	// IMP=0x0010000000360264
- (id)description;	// IMP=0x00100000003601b5
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKey;

@end
