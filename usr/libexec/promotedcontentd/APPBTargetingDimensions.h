//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface APPBTargetingDimensions : PBCodable
{
    NSMutableArray *_exclusionCriterias;	// 8 = 0x8
    NSMutableArray *_inclusionCriterias;	// 16 = 0x10
}

+ (Class)exclusionCriteriaType;	// IMP=0x0020000000087f1b
+ (Class)inclusionCriteriaType;	// IMP=0x0010000000087e49
- (void).cxx_destruct;	// IMP=0x0020000000088fa5
@property(retain, nonatomic) NSMutableArray *exclusionCriterias; // @synthesize exclusionCriterias=_exclusionCriterias;
@property(retain, nonatomic) NSMutableArray *inclusionCriterias; // @synthesize inclusionCriterias=_inclusionCriterias;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000088d11
- (unsigned long long)hash;	// IMP=0x0010000000088cc4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000088c0c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008890c
- (void)copyTo:(id)arg1;	// IMP=0x00100000000887b6
- (void)writeTo:(id)arg1;	// IMP=0x001000000008859f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000088592
- (id)dictionaryRepresentation;	// IMP=0x0010000000087fdb
- (id)description;	// IMP=0x0010000000087f2c
- (id)exclusionCriteriaAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000087efe
- (unsigned long long)exclusionCriteriasCount;	// IMP=0x0010000000087ee1
- (void)addExclusionCriteria:(id)arg1;	// IMP=0x0010000000087e77
- (void)clearExclusionCriterias;	// IMP=0x0010000000087e5a
- (id)inclusionCriteriaAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000087e2c
- (unsigned long long)inclusionCriteriasCount;	// IMP=0x0010000000087e0f
- (void)addInclusionCriteria:(id)arg1;	// IMP=0x0010000000087da5
- (void)clearInclusionCriterias;	// IMP=0x0010000000087d88

@end

