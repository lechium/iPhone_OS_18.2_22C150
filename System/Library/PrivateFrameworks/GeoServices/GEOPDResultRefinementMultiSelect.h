//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultRefinementMultiSelect : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_displayNameForMultiSelected;	// 24 = 0x18
    NSString *_displayName;	// 32 = 0x20
    NSString *_multiSelectIdentifier;	// 40 = 0x28
    NSMutableArray *_multiSelects;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _clauseType;	// 68 = 0x44
    unsigned int _maxNumSelectElements;	// 72 = 0x48
    _Bool _showEqualWidthButtonsOnFilterView;	// 76 = 0x4c
    struct {
        unsigned int has_clauseType:1;
        unsigned int has_maxNumSelectElements:1;
        unsigned int has_showEqualWidthButtonsOnFilterView:1;
        unsigned int read_unknownFields:1;
        unsigned int read_displayNameForMultiSelected:1;
        unsigned int read_displayName:1;
        unsigned int read_multiSelectIdentifier:1;
        unsigned int read_multiSelects:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000e12dc4
- (unsigned long long)hash;	// IMP=0x0000000000e12cc7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e12b0f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e1273d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e123cc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e123bd
- (id)jsonRepresentation;	// IMP=0x0000000000e11f19
- (id)dictionaryRepresentation;	// IMP=0x0000000000e1190d
- (id)description;	// IMP=0x0000000000e1185e
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e10957
- (id)init;	// IMP=0x0000000000e108fb

@end

