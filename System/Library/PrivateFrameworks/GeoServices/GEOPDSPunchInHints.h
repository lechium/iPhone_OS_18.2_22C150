//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSPunchInQueryHints, GEOPDSPunchInResultHints, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSPunchInHints : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_appId;	// 24 = 0x18
    GEOPDSPunchInQueryHints *_queryHints;	// 32 = 0x20
    NSMutableArray *_resultHints;	// 40 = 0x28
    GEOPDSPunchInResultHints *_tappedResultHint;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_appId:1;
        unsigned int read_queryHints:1;
        unsigned int read_resultHints:1;
        unsigned int read_tappedResultHint:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x00000000005fcee4
- (unsigned long long)hash;	// IMP=0x00000000005fc8c9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005fc7a3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005fc469
- (void)writeTo:(id)arg1;	// IMP=0x00000000005fbd7f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005fbd70
- (id)jsonRepresentation;	// IMP=0x00000000005fad32
- (id)dictionaryRepresentation;	// IMP=0x00000000005fa776
- (id)description;	// IMP=0x00000000005fa6c7
- (id)initWithData:(id)arg1;	// IMP=0x00000000005f9b83
- (id)init;	// IMP=0x00000000005f9b27

@end
