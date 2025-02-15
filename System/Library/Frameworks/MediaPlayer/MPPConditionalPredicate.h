//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MPPMediaPredicate;

__attribute__((visibility("hidden")))
@interface MPPConditionalPredicate : PBCodable
{
    MPPMediaPredicate *_conditionalPredicate;	// 8 = 0x8
    MPPMediaPredicate *_elsePredicate;	// 16 = 0x10
    MPPMediaPredicate *_thenPredicate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d6aa6
@property(retain, nonatomic) MPPMediaPredicate *elsePredicate; // @synthesize elsePredicate=_elsePredicate;
@property(retain, nonatomic) MPPMediaPredicate *thenPredicate; // @synthesize thenPredicate=_thenPredicate;
@property(retain, nonatomic) MPPMediaPredicate *conditionalPredicate; // @synthesize conditionalPredicate=_conditionalPredicate;
- (unsigned long long)hash;	// IMP=0x00000000000d69ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d6905
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d6841
- (void)copyTo:(id)arg1;	// IMP=0x00000000000d6732
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d659f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d6592
- (id)dictionaryRepresentation;	// IMP=0x00000000000d6471
- (id)description;	// IMP=0x00000000000d63c2
@property(readonly, nonatomic) _Bool hasElsePredicate;
@property(readonly, nonatomic) _Bool hasThenPredicate;
@property(readonly, nonatomic) _Bool hasConditionalPredicate;
- (void)dealloc;	// IMP=0x00000000000d631d

@end

