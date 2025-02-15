//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PDDPTypedValue;

@interface PDDPSearchCriteria : PBCodable
{
    int _compareOptions;	// 8 = 0x8
    NSString *_fieldName;	// 16 = 0x10
    int _searchOperator;	// 24 = 0x18
    PDDPTypedValue *_value;	// 32 = 0x20
    struct {
        unsigned int compareOptions:1;
        unsigned int searchOperator:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000139e47
@property(retain, nonatomic) PDDPTypedValue *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000139d40
- (unsigned long long)hash;	// IMP=0x0010000000139c97
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000139b83
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000139aa7
- (void)copyTo:(id)arg1;	// IMP=0x0010000000139a00
- (void)writeTo:(id)arg1;	// IMP=0x0010000000139955
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000139948
- (id)dictionaryRepresentation;	// IMP=0x001000000013940c
- (id)description;	// IMP=0x001000000013935d
- (int)StringAsCompareOptions:(id)arg1;	// IMP=0x0010000000139228
- (id)compareOptionsAsString:(int)arg1;	// IMP=0x0010000000139156
@property(nonatomic) _Bool hasCompareOptions;
@property(nonatomic) int compareOptions; // @synthesize compareOptions=_compareOptions;
@property(readonly, nonatomic) _Bool hasValue;
- (int)StringAsSearchOperator:(id)arg1;	// IMP=0x0010000000138fa2
- (id)searchOperatorAsString:(int)arg1;	// IMP=0x0010000000138f59
@property(nonatomic) _Bool hasSearchOperator;
@property(nonatomic) int searchOperator; // @synthesize searchOperator=_searchOperator;
@property(readonly, nonatomic) _Bool hasFieldName;

@end

