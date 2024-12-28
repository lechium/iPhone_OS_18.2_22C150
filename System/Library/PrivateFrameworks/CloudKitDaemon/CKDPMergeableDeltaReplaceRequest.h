//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPMergeableValueIdentifier, NSMutableArray;

@interface CKDPMergeableDeltaReplaceRequest : PBRequest
{
    NSMutableArray *_deltaIdentifiers;	// 8 = 0x8
    NSMutableArray *_deltas;	// 16 = 0x10
    CKDPMergeableValueIdentifier *_identifier;	// 24 = 0x18
    _Bool _containsNewData;	// 32 = 0x20
    _Bool _ignoreMissingDeltas;	// 33 = 0x21
    struct {
        unsigned int containsNewData:1;
        unsigned int ignoreMissingDeltas:1;
    } _has;	// 36 = 0x24
}

+ (Class)deltasType;	// IMP=0x00100000001a6d68
+ (Class)deltaIdentifiersType;	// IMP=0x00100000001a6c96
+ (id)options;	// IMP=0x00100000001a6b70
- (void).cxx_destruct;	// IMP=0x00000000001a82a9
@property(nonatomic) _Bool containsNewData; // @synthesize containsNewData=_containsNewData;
@property(nonatomic) _Bool ignoreMissingDeltas; // @synthesize ignoreMissingDeltas=_ignoreMissingDeltas;
@property(retain, nonatomic) NSMutableArray *deltas; // @synthesize deltas=_deltas;
@property(retain, nonatomic) NSMutableArray *deltaIdentifiers; // @synthesize deltaIdentifiers=_deltaIdentifiers;
@property(retain, nonatomic) CKDPMergeableValueIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001a7f5e
- (unsigned long long)hash;	// IMP=0x00000000001a7ea4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a7d56
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a79e3
- (void)copyTo:(id)arg1;	// IMP=0x00000000001a783b
- (Class)responseClass;	// IMP=0x00000000001a782a
- (unsigned int)requestTypeCode;	// IMP=0x00000000001a781f
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a759d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a7590
- (id)dictionaryRepresentation;	// IMP=0x00000000001a6eb6
- (id)description;	// IMP=0x00000000001a6e07
@property(nonatomic) _Bool hasContainsNewData;
@property(nonatomic) _Bool hasIgnoreMissingDeltas;
- (id)deltasAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001a6d4b
- (unsigned long long)deltasCount;	// IMP=0x00000000001a6d2e
- (void)addDeltas:(id)arg1;	// IMP=0x00000000001a6cc4
- (void)clearDeltas;	// IMP=0x00000000001a6ca7
- (id)deltaIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001a6c79
- (unsigned long long)deltaIdentifiersCount;	// IMP=0x00000000001a6c5c
- (void)addDeltaIdentifiers:(id)arg1;	// IMP=0x00000000001a6bf2
- (void)clearDeltaIdentifiers;	// IMP=0x00000000001a6bd5
@property(readonly, nonatomic) _Bool hasIdentifier;

@end
