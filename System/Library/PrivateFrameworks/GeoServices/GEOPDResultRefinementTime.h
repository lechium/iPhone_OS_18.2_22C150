//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDResultRefinementMetadata, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultRefinementTime : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    GEOPDResultRefinementMetadata *_metadata;	// 32 = 0x20
    double _timestamp;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    _Bool _isSelected;	// 60 = 0x3c
    _Bool _usedNextDayForFilteration;	// 61 = 0x3d
    struct {
        unsigned int has_timestamp:1;
        unsigned int has_isSelected:1;
        unsigned int has_usedNextDayForFilteration:1;
        unsigned int read_unknownFields:1;
        unsigned int read_displayName:1;
        unsigned int read_metadata:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000e27dd9
- (unsigned long long)hash;	// IMP=0x0000000000e27c39
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e27ac8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e278ab
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e27659
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e2764a
- (id)jsonRepresentation;	// IMP=0x0000000000e27299
- (id)dictionaryRepresentation;	// IMP=0x0000000000e26f2b
- (id)description;	// IMP=0x0000000000e26e7c
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e26419
- (id)init;	// IMP=0x0000000000e263bd

@end
