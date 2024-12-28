//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface PDDPBinaryValue : PBCodable
{
    int _valueType;	// 8 = 0x8
    _Bool _value;	// 12 = 0xc
    struct {
        unsigned int valueType:1;
        unsigned int value:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001a1944
- (unsigned long long)hash;	// IMP=0x00100000001a18fe
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001a1840
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001a17c1
- (void)copyTo:(id)arg1;	// IMP=0x00100000001a1765
- (void)writeTo:(id)arg1;	// IMP=0x00100000001a16f1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001a16e4
- (id)dictionaryRepresentation;	// IMP=0x00100000001a138e
- (id)description;	// IMP=0x00100000001a12df
- (int)StringAsValueType:(id)arg1;	// IMP=0x00100000001a120d
- (id)valueTypeAsString:(int)arg1;	// IMP=0x00100000001a11c4
@property(nonatomic) _Bool hasValueType;
@property(nonatomic) int valueType; // @synthesize valueType=_valueType;
@property(nonatomic) _Bool hasValue;

@end
