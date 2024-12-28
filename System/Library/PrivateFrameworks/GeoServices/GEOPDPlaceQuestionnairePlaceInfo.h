//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMapsIdentifier, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceQuestionnairePlaceInfo : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_countryCode;	// 16 = 0x10
    NSString *_mapsCategoryId;	// 24 = 0x18
    GEOPDMapsIdentifier *_mapsId;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    _Bool _hasRichData;	// 52 = 0x34
    struct {
        unsigned int has_hasRichData:1;
        unsigned int read_countryCode:1;
        unsigned int read_mapsCategoryId:1;
        unsigned int read_mapsId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000014a576b
- (unsigned long long)hash;	// IMP=0x00000000014a56cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014a5594
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014a5399
- (void)writeTo:(id)arg1;	// IMP=0x00000000014a51c7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014a51b8
- (id)jsonRepresentation;	// IMP=0x00000000014a4f08
- (id)dictionaryRepresentation;	// IMP=0x00000000014a4bff
- (id)description;	// IMP=0x00000000014a4b50
- (id)initWithData:(id)arg1;	// IMP=0x00000000014a44a5
- (id)init;	// IMP=0x00000000014a4449

@end
