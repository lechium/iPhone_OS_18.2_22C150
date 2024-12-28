//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDCustomLandmark, GEOPDZoomInfo, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVectorPoiDisplayDV : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDZoomInfo *_classZoomDriving;	// 24 = 0x18
    GEOPDZoomInfo *_classZoomNavigation;	// 32 = 0x20
    GEOPDZoomInfo *_classZoom;	// 40 = 0x28
    GEOPDZoomInfo *_containmentZoom;	// 48 = 0x30
    GEOPDCustomLandmark *_customLandmark;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    unsigned int _containmentClass;	// 76 = 0x4c
    unsigned int _poiClass;	// 80 = 0x50
    int _treeDisplayType;	// 84 = 0x54
    _Bool _inMiniPoiMarket;	// 88 = 0x58
    struct {
        unsigned int has_containmentClass:1;
        unsigned int has_poiClass:1;
        unsigned int has_treeDisplayType:1;
        unsigned int has_inMiniPoiMarket:1;
        unsigned int read_unknownFields:1;
        unsigned int read_classZoomDriving:1;
        unsigned int read_classZoomNavigation:1;
        unsigned int read_classZoom:1;
        unsigned int read_containmentZoom:1;
        unsigned int read_customLandmark:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 92 = 0x5c
}

- (void).cxx_destruct;	// IMP=0x00000000005a5ec1
- (unsigned long long)hash;	// IMP=0x00000000005a5d76
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005a5b56
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005a589c
- (void)writeTo:(id)arg1;	// IMP=0x00000000005a560f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005a5600
- (id)jsonRepresentation;	// IMP=0x00000000005a510e
- (id)dictionaryRepresentation;	// IMP=0x00000000005a48cf
- (id)description;	// IMP=0x00000000005a4820
- (id)initWithData:(id)arg1;	// IMP=0x00000000005a3cbb
- (id)init;	// IMP=0x00000000005a3c5f

@end
