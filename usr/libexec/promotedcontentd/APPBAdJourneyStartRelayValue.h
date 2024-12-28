//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface APPBAdJourneyStartRelayValue : PBCodable
{
    double _valueDouble;	// 8 = 0x8
    long long _valueInt;	// 16 = 0x10
    NSString *_key;	// 24 = 0x18
    int _value;	// 32 = 0x20
    NSString *_valueString;	// 40 = 0x28
    _Bool _valueBool;	// 48 = 0x30
    struct {
        unsigned int valueDouble:1;
        unsigned int valueInt:1;
        unsigned int value:1;
        unsigned int valueBool:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x002000000004eb8b
@property(retain, nonatomic) NSString *valueString; // @synthesize valueString=_valueString;
@property(nonatomic) double valueDouble; // @synthesize valueDouble=_valueDouble;
@property(nonatomic) long long valueInt; // @synthesize valueInt=_valueInt;
@property(nonatomic) _Bool valueBool; // @synthesize valueBool=_valueBool;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000004ea3f
- (unsigned long long)hash;	// IMP=0x001000000004e88d
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004e712
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000004e5f4
- (void)copyTo:(id)arg1;	// IMP=0x001000000004e511
- (void)writeTo:(id)arg1;	// IMP=0x001000000004e441
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000004e434
- (id)dictionaryRepresentation;	// IMP=0x001000000004ddee
- (id)description;	// IMP=0x001000000004dd3f
- (void)clearOneofValuesForValue;	// IMP=0x001000000004dcda
- (int)StringAsValue:(id)arg1;	// IMP=0x001000000004dc08
- (id)valueAsString:(int)arg1;	// IMP=0x001000000004dbbf
@property(nonatomic) _Bool hasValue;
@property(nonatomic) int value; // @synthesize value=_value;
@property(readonly, nonatomic) _Bool hasValueString;
@property(nonatomic) _Bool hasValueDouble;
@property(nonatomic) _Bool hasValueInt;
@property(nonatomic) _Bool hasValueBool;
@property(readonly, nonatomic) _Bool hasKey;

@end
