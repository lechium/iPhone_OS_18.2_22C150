//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSMutableArray, NSString, PDDPAsset, PDDPDate;

@interface PDDPAssessment : PBCodable
{
    double _takerTimeLimitInSeconds;	// 8 = 0x8
    PDDPAsset *_aggregateDataAsset;	// 16 = 0x10
    int _assessmentMode;	// 24 = 0x18
    PDDPAsset *_baseAsset;	// 32 = 0x20
    PDDPAsset *_baseMarkupAsset;	// 40 = 0x28
    NSString *_createdByFamilyName;	// 48 = 0x30
    NSString *_createdByGivenName;	// 56 = 0x38
    PDDPDate *_dateCreated;	// 64 = 0x40
    PDDPDate *_dateLastModified;	// 72 = 0x48
    NSString *_etag;	// 80 = 0x50
    NSMutableArray *_instructionAssets;	// 88 = 0x58
    MISSING_TYPE *_makerUserId;	// 96 = 0x60
    NSString *_objectId;	// 104 = 0x68
    NSString *_parentObjectId;	// 112 = 0x70
    PDDPAsset *_questionDataAsset;	// 120 = 0x78
    _Bool _allowLateSubmissions;	// 128 = 0x80
    struct {
        unsigned int takerTimeLimitInSeconds:1;
        unsigned int assessmentMode:1;
        unsigned int allowLateSubmissions:1;
    } _has;	// 132 = 0x84
}

+ (Class)instructionAssetsType;	// IMP=0x00200000001268fb
- (void).cxx_destruct;	// IMP=0x0020000000128ac7
@property(retain, nonatomic) NSMutableArray *instructionAssets; // @synthesize instructionAssets=_instructionAssets;
@property(retain, nonatomic) PDDPAsset *aggregateDataAsset; // @synthesize aggregateDataAsset=_aggregateDataAsset;
@property(retain, nonatomic) PDDPAsset *questionDataAsset; // @synthesize questionDataAsset=_questionDataAsset;
@property(retain, nonatomic) PDDPAsset *baseMarkupAsset; // @synthesize baseMarkupAsset=_baseMarkupAsset;
@property(retain, nonatomic) PDDPAsset *baseAsset; // @synthesize baseAsset=_baseAsset;
@property(retain, nonatomic) NSString *createdByFamilyName; // @synthesize createdByFamilyName=_createdByFamilyName;
@property(retain, nonatomic) NSString *createdByGivenName; // @synthesize createdByGivenName=_createdByGivenName;
@property(nonatomic) double takerTimeLimitInSeconds; // @synthesize takerTimeLimitInSeconds=_takerTimeLimitInSeconds;
@property(nonatomic) _Bool allowLateSubmissions; // @synthesize allowLateSubmissions=_allowLateSubmissions;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) NSString *makerUserId; // @synthesize makerUserId=_makerUserId;
@property(retain, nonatomic) PDDPDate *dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property(retain, nonatomic) PDDPDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) NSString *parentObjectId; // @synthesize parentObjectId=_parentObjectId;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000012850a
- (unsigned long long)hash;	// IMP=0x0010000000128240
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000127f04
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000127ae0
- (void)copyTo:(id)arg1;	// IMP=0x001000000012783c
- (void)writeTo:(id)arg1;	// IMP=0x0010000000127541
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000127534
- (id)dictionaryRepresentation;	// IMP=0x00100000001269bb
- (id)description;	// IMP=0x001000000012690c
- (id)instructionAssetsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000001268de
- (unsigned long long)instructionAssetsCount;	// IMP=0x00100000001268c1
- (void)addInstructionAssets:(id)arg1;	// IMP=0x0010000000126857
- (void)clearInstructionAssets;	// IMP=0x001000000012683a
@property(readonly, nonatomic) _Bool hasAggregateDataAsset;
@property(readonly, nonatomic) _Bool hasQuestionDataAsset;
@property(readonly, nonatomic) _Bool hasBaseMarkupAsset;
@property(readonly, nonatomic) _Bool hasBaseAsset;
@property(readonly, nonatomic) _Bool hasCreatedByFamilyName;
@property(readonly, nonatomic) _Bool hasCreatedByGivenName;
- (int)StringAsAssessmentMode:(id)arg1;	// IMP=0x0010000000126725
- (id)assessmentModeAsString:(int)arg1;	// IMP=0x00100000001266dc
@property(nonatomic) _Bool hasAssessmentMode;
@property(nonatomic) int assessmentMode; // @synthesize assessmentMode=_assessmentMode;
@property(nonatomic) _Bool hasTakerTimeLimitInSeconds;
@property(nonatomic) _Bool hasAllowLateSubmissions;
@property(readonly, nonatomic) _Bool hasEtag;
@property(readonly, nonatomic) _Bool hasMakerUserId;
@property(readonly, nonatomic) _Bool hasDateLastModified;
@property(readonly, nonatomic) _Bool hasDateCreated;
@property(readonly, nonatomic) _Bool hasParentObjectId;
@property(readonly, nonatomic) _Bool hasObjectId;

@end
