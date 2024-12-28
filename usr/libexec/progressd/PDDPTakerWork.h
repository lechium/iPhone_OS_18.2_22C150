//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PDDPAsset, PDDPDate;

@interface PDDPTakerWork : PBCodable
{
    PDDPDate *_dateCreated;	// 8 = 0x8
    PDDPDate *_dateLastModified;	// 16 = 0x10
    NSString *_etag;	// 24 = 0x18
    PDDPAsset *_graderMarkupAsset;	// 32 = 0x20
    PDDPAsset *_graderScoreAsset;	// 40 = 0x28
    NSMutableArray *_infoDicts;	// 48 = 0x30
    NSString *_makerUserId;	// 56 = 0x38
    NSString *_objectId;	// 64 = 0x40
    NSString *_parentObjectId;	// 72 = 0x48
    NSString *_selfIdentifiedName;	// 80 = 0x50
    PDDPAsset *_takerMarkupAsset;	// 88 = 0x58
    NSString *_takerUserId;	// 96 = 0x60
}

+ (Class)infoDictType;	// IMP=0x00200000000573a8
- (void).cxx_destruct;	// IMP=0x0020000000058d74
@property(retain, nonatomic) NSMutableArray *infoDicts; // @synthesize infoDicts=_infoDicts;
@property(retain, nonatomic) PDDPAsset *graderScoreAsset; // @synthesize graderScoreAsset=_graderScoreAsset;
@property(retain, nonatomic) PDDPAsset *graderMarkupAsset; // @synthesize graderMarkupAsset=_graderMarkupAsset;
@property(retain, nonatomic) PDDPAsset *takerMarkupAsset; // @synthesize takerMarkupAsset=_takerMarkupAsset;
@property(retain, nonatomic) NSString *selfIdentifiedName; // @synthesize selfIdentifiedName=_selfIdentifiedName;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
// Error: Property attributes should begin with the type ('T') attribute, property name: dateLastModified
// Property attributes: (null)

@property(retain, nonatomic) PDDPDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) NSString *parentObjectId; // @synthesize parentObjectId=_parentObjectId;
@property(retain, nonatomic) NSString *makerUserId; // @synthesize makerUserId=_makerUserId;
@property(retain, nonatomic) NSString *takerUserId; // @synthesize takerUserId=_takerUserId;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000058896
- (unsigned long long)hash;	// IMP=0x001000000005873f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000584d3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000058153
- (void)copyTo:(id)arg1;	// IMP=0x0010000000057f31
- (void)writeTo:(id)arg1;	// IMP=0x0010000000057cbd
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000057cb0
- (id)dictionaryRepresentation;	// IMP=0x0010000000057468
- (id)description;	// IMP=0x00100000000573b9
- (id)infoDictAtIndex:(unsigned long long)arg1;	// IMP=0x001000000005738b
- (unsigned long long)infoDictsCount;	// IMP=0x001000000005736e
- (void)addInfoDict:(id)arg1;	// IMP=0x0010000000057304
- (void)clearInfoDicts;	// IMP=0x00100000000572e7
@property(readonly, nonatomic) _Bool hasGraderScoreAsset;
@property(readonly, nonatomic) _Bool hasGraderMarkupAsset;
@property(readonly, nonatomic) _Bool hasTakerMarkupAsset;
@property(readonly, nonatomic) _Bool hasSelfIdentifiedName;
@property(readonly, nonatomic) _Bool hasEtag;
@property(readonly, nonatomic) _Bool hasDateLastModified;
@property(readonly, nonatomic) _Bool hasDateCreated;
@property(readonly, nonatomic) _Bool hasParentObjectId;
@property(readonly, nonatomic) _Bool hasMakerUserId;
@property(readonly, nonatomic) _Bool hasTakerUserId;
@property(readonly, nonatomic) _Bool hasObjectId;

@end
