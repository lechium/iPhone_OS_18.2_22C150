//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SECSFAPropertyValue : PBCodable
{
    long long _integer;	// 8 = 0x8
    int _property;	// 16 = 0x10
    NSString *_string;	// 24 = 0x18
    struct {
        unsigned int integer:1;
        unsigned int property:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003a91c
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) long long integer; // @synthesize integer=_integer;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003a879
- (unsigned long long)hash;	// IMP=0x000000000003a812
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003a735
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003a682
- (void)copyTo:(id)arg1;	// IMP=0x000000000003a601
- (void)writeTo:(id)arg1;	// IMP=0x000000000003a59b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003a58e
- (id)dictionaryRepresentation;	// IMP=0x000000000003a455
- (id)description;	// IMP=0x000000000003a3a6
- (void)clearOneofValuesForProperty;	// IMP=0x000000000003a35f
- (int)StringAsProperty:(id)arg1;	// IMP=0x000000000003a2c8
- (id)propertyAsString:(int)arg1;	// IMP=0x000000000003a280
@property(nonatomic) _Bool hasProperty;
@property(nonatomic) int property; // @synthesize property=_property;
@property(readonly, nonatomic) _Bool hasString;
@property(nonatomic) _Bool hasInteger;

@end

