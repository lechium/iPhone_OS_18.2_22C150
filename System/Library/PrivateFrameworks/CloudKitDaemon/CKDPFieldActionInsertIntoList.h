//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPListPosition, NSMutableArray;

@interface CKDPFieldActionInsertIntoList : PBCodable
{
    CKDPListPosition *_position;	// 8 = 0x8
    NSMutableArray *_values;	// 16 = 0x10
    _Bool _insertAfter;	// 24 = 0x18
    struct {
        unsigned int insertAfter:1;
    } _has;	// 28 = 0x1c
}

+ (Class)valueType;	// IMP=0x0010000000148d48
- (void).cxx_destruct;	// IMP=0x0000000000149b64
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(nonatomic) _Bool insertAfter; // @synthesize insertAfter=_insertAfter;
@property(retain, nonatomic) CKDPListPosition *position; // @synthesize position=_position;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000014995e
- (unsigned long long)hash;	// IMP=0x00000000001498e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001497fa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001495f6
- (void)copyTo:(id)arg1;	// IMP=0x00000000001494f2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000149379
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000014936c
- (id)dictionaryRepresentation;	// IMP=0x0000000000148e08
- (id)description;	// IMP=0x0000000000148d59
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000148d2b
- (unsigned long long)valuesCount;	// IMP=0x0000000000148d0e
- (void)addValue:(id)arg1;	// IMP=0x0000000000148ca4
- (void)clearValues;	// IMP=0x0000000000148c87
@property(nonatomic) _Bool hasInsertAfter;
@property(readonly, nonatomic) _Bool hasPosition;

@end
