//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface NMArgument : PBCodable
{
    struct NMLocation _locationValue;	// 8 = 0x8
    struct {
        unsigned long long *list;
        unsigned long long count;
        unsigned long long size;
    } _unsignedIntListValues;	// 136 = 0x88
    double _doubleValue;	// 160 = 0xa0
    unsigned long long _intValue;	// 168 = 0xa8
    NSMutableArray *_dataListValues;	// 176 = 0xb0
    NSData *_dataValue;	// 184 = 0xb8
    NSMutableArray *_stringListValues;	// 192 = 0xc0
    NSMutableArray *_stringToObjectMaps;	// 200 = 0xc8
    NSString *_stringValue;	// 208 = 0xd0
    int _tag;	// 216 = 0xd8
    NSMutableArray *_tileRequestValues;	// 224 = 0xe0
    _Bool _boolValue;	// 232 = 0xe8
    struct {
        unsigned int locationValue:1;
        unsigned int doubleValue:1;
        unsigned int intValue:1;
        unsigned int tag:1;
        unsigned int boolValue:1;
    } _has;	// 236 = 0xec
}

+ (Class)tileRequestValueType;	// IMP=0x0020000000033eb5
+ (Class)dataListValueType;	// IMP=0x0010000000033de3
+ (Class)stringListValueType;	// IMP=0x0010000000033b55
+ (Class)stringToObjectMapType;	// IMP=0x0010000000033a83
- (void).cxx_destruct;	// IMP=0x0020000000036cea
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(retain, nonatomic) NSMutableArray *tileRequestValues; // @synthesize tileRequestValues=_tileRequestValues;
@property(retain, nonatomic) NSMutableArray *dataListValues; // @synthesize dataListValues=_dataListValues;
@property(nonatomic) struct NMLocation locationValue; // @synthesize locationValue=_locationValue;
@property(retain, nonatomic) NSMutableArray *stringListValues; // @synthesize stringListValues=_stringListValues;
@property(retain, nonatomic) NSMutableArray *stringToObjectMaps; // @synthesize stringToObjectMaps=_stringToObjectMaps;
@property(retain, nonatomic) NSData *dataValue; // @synthesize dataValue=_dataValue;
@property(nonatomic) _Bool boolValue; // @synthesize boolValue=_boolValue;
@property(nonatomic) unsigned long long intValue; // @synthesize intValue=_intValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000365c4
- (unsigned long long)hash;	// IMP=0x001000000003634c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000360bd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000035a08
- (void)copyTo:(id)arg1;	// IMP=0x00100000000355f6
- (void)writeTo:(id)arg1;	// IMP=0x00100000000350e5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000350d8
- (id)dictionaryRepresentation;	// IMP=0x0010000000033fc0
- (id)description;	// IMP=0x0010000000033f11
@property(nonatomic) _Bool hasDoubleValue;
- (id)tileRequestValueAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000033e98
- (unsigned long long)tileRequestValuesCount;	// IMP=0x0010000000033e7b
- (void)addTileRequestValue:(id)arg1;	// IMP=0x0010000000033e11
- (void)clearTileRequestValues;	// IMP=0x0010000000033df4
- (id)dataListValueAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000033dc6
- (unsigned long long)dataListValuesCount;	// IMP=0x0010000000033da9
- (void)addDataListValue:(id)arg1;	// IMP=0x0010000000033d3f
- (void)clearDataListValues;	// IMP=0x0010000000033d22
- (void)setUnsignedIntListValues:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x0010000000033d0b
- (unsigned long long)unsignedIntListValueAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000033c3a
- (void)addUnsignedIntListValue:(unsigned long long)arg1;	// IMP=0x0010000000033c26
- (void)clearUnsignedIntListValues;	// IMP=0x0010000000033c15
@property(readonly, nonatomic) unsigned long long *unsignedIntListValues;
@property(readonly, nonatomic) unsigned long long unsignedIntListValuesCount;
@property(nonatomic) _Bool hasLocationValue;
- (id)stringListValueAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000033b38
- (unsigned long long)stringListValuesCount;	// IMP=0x0010000000033b1b
- (void)addStringListValue:(id)arg1;	// IMP=0x0010000000033ab1
- (void)clearStringListValues;	// IMP=0x0010000000033a94
- (id)stringToObjectMapAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000033a66
- (unsigned long long)stringToObjectMapsCount;	// IMP=0x0010000000033a49
- (void)addStringToObjectMap:(id)arg1;	// IMP=0x00100000000339df
- (void)clearStringToObjectMaps;	// IMP=0x00100000000339c2
@property(readonly, nonatomic) _Bool hasDataValue;
@property(nonatomic) _Bool hasBoolValue;
@property(nonatomic) _Bool hasIntValue;
@property(readonly, nonatomic) _Bool hasStringValue;
- (int)StringAsTag:(id)arg1;	// IMP=0x0010000000033298
- (id)tagAsString:(int)arg1;	// IMP=0x0010000000032ec1
@property(nonatomic) _Bool hasTag;
@property(nonatomic) int tag; // @synthesize tag=_tag;
- (void)dealloc;	// IMP=0x0010000000032e14
- (id)_nm_locationValue;	// IMP=0x0010000000050792
- (id)_nm_errorValue;	// IMP=0x001000000005066d
- (id)_nm_arrayValue;	// IMP=0x0010000000050541
- (id)_nm_dictionaryValue;	// IMP=0x001000000005003d
- (id)_nm_initWithLocation:(id)arg1 tag:(int)arg2;	// IMP=0x001000000004fe1c
- (id)_nm_initWithErrorValue:(id)arg1 tag:(int)arg2;	// IMP=0x001000000004fe0a
- (id)_nm_initWithDictionaryValue:(id)arg1 tag:(int)arg2;	// IMP=0x001000000004fdf8
- (id)_nm_initWithArrayValue:(id)arg1 tag:(int)arg2;	// IMP=0x001000000004fde6
- (id)_nm_initWithSecureCodingValue:(id)arg1 tag:(int)arg2;	// IMP=0x001000000004fcca
- (id)_nm_compressedArgument:(int)arg1;	// IMP=0x001000000004fb34

@end
