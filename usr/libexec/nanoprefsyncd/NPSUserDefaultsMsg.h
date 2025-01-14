//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NPSUserDefaultsMsg : PBCodable
{
    double _timestamp;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
    NSMutableArray *_keys;	// 24 = 0x18
    struct {
        unsigned int timestamp:1;
    } _has;	// 32 = 0x20
}

+ (Class)keyType;	// IMP=0x002000000001b88a
- (void).cxx_destruct;	// IMP=0x002000000001c70a
@property(retain, nonatomic) NSMutableArray *keys; // @synthesize keys=_keys;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000001c514
- (unsigned long long)hash;	// IMP=0x001000000001c3c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001c2d9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001c0d0
- (void)copyTo:(id)arg1;	// IMP=0x001000000001bfd4
- (void)writeTo:(id)arg1;	// IMP=0x001000000001be4f
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000001be42
- (id)dictionaryRepresentation;	// IMP=0x001000000001b94a
- (id)description;	// IMP=0x001000000001b89b
- (id)keyAtIndex:(unsigned long long)arg1;	// IMP=0x001000000001b86d
- (unsigned long long)keysCount;	// IMP=0x001000000001b850
- (void)addKey:(id)arg1;	// IMP=0x001000000001b7e6
- (void)clearKeys;	// IMP=0x001000000001b7c9
@property(nonatomic) _Bool hasTimestamp;

@end

