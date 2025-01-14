//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDAllCollectionsViewResultFilterTypeAddress, GEOPDAllCollectionsViewResultFilterTypeKeyword, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAllCollectionsViewResultFilter : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDAllCollectionsViewResultFilterTypeAddress *_filterAddress;	// 24 = 0x18
    GEOPDAllCollectionsViewResultFilterTypeKeyword *_filterKeyword;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _filterType;	// 52 = 0x34
    CDStruct_85060554 _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000004090b3
- (unsigned long long)hash;	// IMP=0x0000000000409029
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000408f28
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000408d40
- (void)writeTo:(id)arg1;	// IMP=0x0000000000408b71
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000408b62
- (id)jsonRepresentation;	// IMP=0x000000000040839c
- (id)dictionaryRepresentation;	// IMP=0x0000000000408093
- (id)description;	// IMP=0x0000000000407fe4
- (id)initWithData:(id)arg1;	// IMP=0x0000000000407673
- (id)init;	// IMP=0x0000000000407617

@end

