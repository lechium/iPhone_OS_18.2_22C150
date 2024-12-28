//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface NMStringToObjectTuple : PBCodable
{
    double _doubleValue;	// 8 = 0x8
    unsigned long long _intValue;	// 16 = 0x10
    NSData *_dataValue;	// 24 = 0x18
    NSString *_key;	// 32 = 0x20
    NSString *_stringValue;	// 40 = 0x28
    _Bool _boolValue;	// 48 = 0x30
    struct {
        unsigned int doubleValue:1;
        unsigned int intValue:1;
        unsigned int boolValue:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0020000000061269
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) unsigned long long intValue; // @synthesize intValue=_intValue;
@property(nonatomic) _Bool boolValue; // @synthesize boolValue=_boolValue;
@property(retain, nonatomic) NSData *dataValue; // @synthesize dataValue=_dataValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000610e7
- (unsigned long long)hash;	// IMP=0x0010000000060f3b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000060dcf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000060cae
- (void)copyTo:(id)arg1;	// IMP=0x0010000000060bce
- (void)writeTo:(id)arg1;	// IMP=0x0010000000060ae1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000060ad4
- (id)dictionaryRepresentation;	// IMP=0x00100000000605e6
- (id)description;	// IMP=0x0010000000060537
@property(nonatomic) _Bool hasDoubleValue;
@property(nonatomic) _Bool hasIntValue;
@property(nonatomic) _Bool hasBoolValue;
@property(readonly, nonatomic) _Bool hasDataValue;
@property(readonly, nonatomic) _Bool hasStringValue;
@property(readonly, nonatomic) _Bool hasKey;

@end
