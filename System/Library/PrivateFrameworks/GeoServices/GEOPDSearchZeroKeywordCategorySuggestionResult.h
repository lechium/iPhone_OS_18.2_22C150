//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchZeroKeywordCategorySuggestionResult : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_categorys;	// 24 = 0x18
    NSMutableArray *_zeroKeywordEntrys;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_categorys:1;
        unsigned int read_zeroKeywordEntrys:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000593417
- (unsigned long long)hash;	// IMP=0x00000000005933c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005932ee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000592f29
- (void)writeTo:(id)arg1;	// IMP=0x0000000000592b74
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000592b65
- (id)jsonRepresentation;	// IMP=0x00000000005925f7
- (id)dictionaryRepresentation;	// IMP=0x0000000000592075
- (id)description;	// IMP=0x0000000000591fc6
- (id)initWithData:(id)arg1;	// IMP=0x0000000000591757
- (id)init;	// IMP=0x00000000005916fb

@end

