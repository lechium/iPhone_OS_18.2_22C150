//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDCaptionedPhoto, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGuidesLocationEntryTypeWorldWide : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_guideLocationImages;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    GEOPDCaptionedPhoto *_photo;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_guideLocationImages:1;
        unsigned int read_name:1;
        unsigned int read_photo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000c38a7c
- (unsigned long long)hash;	// IMP=0x0000000000c38a05
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c38907
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c385ff
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c382a2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c38293
- (id)jsonRepresentation;	// IMP=0x0000000000c37def
- (id)dictionaryRepresentation;	// IMP=0x0000000000c37984
- (id)description;	// IMP=0x0000000000c378d5
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c36e89
- (id)init;	// IMP=0x0000000000c36e2d

@end

