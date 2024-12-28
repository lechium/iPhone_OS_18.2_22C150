//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSMutableArray;

@interface AMPMusicCatalogContent : PBCodable
{
    MISSING_TYPE *_adamId;	// 8 = 0x8
    long long _canonicalId;	// 16 = 0x10
    long long _releaseDate;	// 24 = 0x18
    NSMutableArray *_contentFeatures;	// 32 = 0x20
    int _contentType;	// 40 = 0x28
    _Bool _isExplicit;	// 44 = 0x2c
    struct {
        unsigned int adamId:1;
        unsigned int canonicalId:1;
        unsigned int releaseDate:1;
        unsigned int contentType:1;
        unsigned int isExplicit:1;
    } _has;	// 48 = 0x30
}

+ (Class)contentFeaturesType;	// IMP=0x00200000000f6aa0
- (void).cxx_destruct;	// IMP=0x00200000000f65f0
@property(retain, nonatomic) NSMutableArray *contentFeatures; // @synthesize contentFeatures=_contentFeatures;
@property(nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(nonatomic) long long releaseDate; // @synthesize releaseDate=_releaseDate;
@property(nonatomic) long long canonicalId; // @synthesize canonicalId=_canonicalId;
@property(nonatomic) long long adamId; // @synthesize adamId=_adamId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000f6381
- (unsigned long long)hash;	// IMP=0x00100000000f62c5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000f6177
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000f5f04
- (void)copyTo:(id)arg1;	// IMP=0x00100000000f5db5
- (void)writeTo:(id)arg1;	// IMP=0x00100000000f5bd8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000f5bcb
- (id)dictionaryRepresentation;	// IMP=0x00100000000f57cf
- (id)description;	// IMP=0x00100000000f5720
- (id)contentFeaturesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000f5703
- (unsigned long long)contentFeaturesCount;	// IMP=0x00100000000f56e6
- (void)addContentFeatures:(id)arg1;	// IMP=0x00100000000f567c
- (void)clearContentFeatures;	// IMP=0x00100000000f565f
@property(nonatomic) _Bool hasIsExplicit;
@property(nonatomic) _Bool hasReleaseDate;
@property(nonatomic) _Bool hasCanonicalId;
@property(nonatomic) _Bool hasAdamId;
- (int)StringAsContentType:(id)arg1;	// IMP=0x00100000000f5466
- (id)contentTypeAsString:(int)arg1;	// IMP=0x00100000000f541e
@property(nonatomic) _Bool hasContentType;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;

@end
