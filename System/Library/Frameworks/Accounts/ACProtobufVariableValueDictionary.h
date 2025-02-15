//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ACProtobufVariableValueDictionary : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

+ (Class)pairType;	// IMP=0x00100000000566da
- (void).cxx_destruct;	// IMP=0x0000000000057154
@property(retain, nonatomic) NSMutableArray *pairs; // @synthesize pairs=_pairs;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000056ff6
- (unsigned long long)hash;	// IMP=0x0000000000056fd9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000056f49
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000056d85
- (void)copyTo:(id)arg1;	// IMP=0x0000000000056cc0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000056b8a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000056b7d
- (id)dictionaryRepresentation;	// IMP=0x000000000005679a
- (id)description;	// IMP=0x00000000000566eb
- (id)pairAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000566bd
- (unsigned long long)pairsCount;	// IMP=0x00000000000566a0
- (void)addPair:(id)arg1;	// IMP=0x0000000000056636
- (void)clearPairs;	// IMP=0x0000000000056619
@property(copy, nonatomic) NSDictionary *dictionary;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000545af

@end

