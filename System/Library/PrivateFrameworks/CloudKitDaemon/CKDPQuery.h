//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPQuery : PBCodable
{
    NSMutableArray *_filters;	// 8 = 0x8
    int _queryOperator;	// 16 = 0x10
    NSMutableArray *_sorts;	// 24 = 0x18
    NSMutableArray *_types;	// 32 = 0x20
    _Bool _distinct;	// 40 = 0x28
    struct {
        unsigned int queryOperator:1;
        unsigned int distinct:1;
    } _has;	// 44 = 0x2c
}

+ (Class)sortsType;	// IMP=0x00100000001c661d
+ (Class)filtersType;	// IMP=0x00100000001c654b
+ (Class)typesType;	// IMP=0x00100000001c6479
- (void).cxx_destruct;	// IMP=0x00000000001c827c
@property(nonatomic) _Bool distinct; // @synthesize distinct=_distinct;
@property(retain, nonatomic) NSMutableArray *sorts; // @synthesize sorts=_sorts;
@property(retain, nonatomic) NSMutableArray *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) NSMutableArray *types; // @synthesize types=_types;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001c7e70
- (unsigned long long)hash;	// IMP=0x00000000001c7db7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c7c75
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c77e4
- (void)copyTo:(id)arg1;	// IMP=0x00000000001c75c9
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c727d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c7270
- (id)dictionaryRepresentation;	// IMP=0x00000000001c684e
- (id)description;	// IMP=0x00000000001c679f
- (int)StringAsQueryOperator:(id)arg1;	// IMP=0x00000000001c6734
- (id)queryOperatorAsString:(int)arg1;	// IMP=0x00000000001c66de
@property(nonatomic) _Bool hasQueryOperator;
@property(nonatomic) int queryOperator; // @synthesize queryOperator=_queryOperator;
@property(nonatomic) _Bool hasDistinct;
- (id)sortsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001c6600
- (unsigned long long)sortsCount;	// IMP=0x00000000001c65e3
- (void)addSorts:(id)arg1;	// IMP=0x00000000001c6579
- (void)clearSorts;	// IMP=0x00000000001c655c
- (id)filtersAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001c652e
- (unsigned long long)filtersCount;	// IMP=0x00000000001c6511
- (void)addFilters:(id)arg1;	// IMP=0x00000000001c64a7
- (void)clearFilters;	// IMP=0x00000000001c648a
- (id)typesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001c645c
- (unsigned long long)typesCount;	// IMP=0x00000000001c643f
- (void)addTypes:(id)arg1;	// IMP=0x00000000001c63d5
- (void)clearTypes;	// IMP=0x00000000001c63b8

@end

