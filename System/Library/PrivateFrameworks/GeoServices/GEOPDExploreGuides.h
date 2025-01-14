//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDGuidesLocationEntry, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExploreGuides : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_exploreImageUrlTemplate;	// 24 = 0x18
    GEOPDGuidesLocationEntry *_guidesLocationEntry;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_exploreImageUrlTemplate:1;
        unsigned int read_guidesLocationEntry:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (id)exploreGuideComponentFromPlaceData:(id)arg1;	// IMP=0x0010000000a03d3c
- (void).cxx_destruct;	// IMP=0x0000000000c1ae6f
- (unsigned long long)hash;	// IMP=0x0000000000c1ae18
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c1ad46
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c1aba3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c1a969
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c1a95a
- (id)jsonRepresentation;	// IMP=0x0000000000c1a43c
- (id)dictionaryRepresentation;	// IMP=0x0000000000c1a1eb
- (id)description;	// IMP=0x0000000000c1a13c
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c19959
- (id)init;	// IMP=0x0000000000c198fd

@end

