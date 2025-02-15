//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PDDPEERequestZone, PDDPSearchQuery;

@interface PDDPEESearchRequestZone : PBCodable
{
    int _compareOptions;	// 8 = 0x8
    PDDPSearchQuery *_filterQuery;	// 16 = 0x10
    NSString *_keyword;	// 24 = 0x18
    PDDPEERequestZone *_requestZone;	// 32 = 0x20
    struct {
        unsigned int compareOptions:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000078842
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) PDDPSearchQuery *filterQuery; // @synthesize filterQuery=_filterQuery;
@property(retain, nonatomic) PDDPEERequestZone *requestZone; // @synthesize requestZone=_requestZone;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000078704
- (unsigned long long)hash;	// IMP=0x001000000007866e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000078560
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007847c
- (void)copyTo:(id)arg1;	// IMP=0x00100000000783d9
- (void)writeTo:(id)arg1;	// IMP=0x0010000000078339
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000007832c
- (id)dictionaryRepresentation;	// IMP=0x0010000000077e5c
- (id)description;	// IMP=0x0010000000077dad
- (int)StringAsCompareOptions:(id)arg1;	// IMP=0x0010000000077c78
- (id)compareOptionsAsString:(int)arg1;	// IMP=0x0010000000077ba7
@property(nonatomic) _Bool hasCompareOptions;
@property(nonatomic) int compareOptions; // @synthesize compareOptions=_compareOptions;
@property(readonly, nonatomic) _Bool hasKeyword;
@property(readonly, nonatomic) _Bool hasFilterQuery;
@property(readonly, nonatomic) _Bool hasRequestZone;

@end

