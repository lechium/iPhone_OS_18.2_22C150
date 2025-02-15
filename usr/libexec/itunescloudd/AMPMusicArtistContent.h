//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSMutableArray, NSString;

@interface AMPMusicArtistContent : PBCodable
{
    long long _adamId;	// 8 = 0x8
    NSMutableArray *_catalogContents;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    struct {
        unsigned int adamId:1;
    } _has;	// 32 = 0x20
}

+ (Class)catalogContentType;	// IMP=0x00200000000cb618
- (void).cxx_destruct;	// IMP=0x00200000000cb36d
@property(retain, nonatomic) NSMutableArray *catalogContents; // @synthesize catalogContents=_catalogContents;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long adamId; // @synthesize adamId=_adamId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000cb17c
- (unsigned long long)hash;	// IMP=0x00100000000cb0ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000cb017
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000cae12
- (void)copyTo:(id)arg1;	// IMP=0x00100000000cad0d
- (void)writeTo:(id)arg1;	// IMP=0x00100000000cab95
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000cab88
- (MISSING_TYPE *)dictionaryRepresentation;	// IMP=0x00100000000ca8da
- (id)description;	// IMP=0x00100000000ca82b
- (id)catalogContentAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000ca80e
- (unsigned long long)catalogContentsCount;	// IMP=0x00100000000ca7f1
- (void)addCatalogContent:(id)arg1;	// IMP=0x00100000000ca787
- (void)clearCatalogContents;	// IMP=0x00100000000ca76a
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasAdamId;

@end

