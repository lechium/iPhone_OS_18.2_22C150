//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDEnrichmentDataFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c010fa
- (unsigned long long)hash;	// IMP=0x0000000000c010f2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c010af
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c01052
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c01035
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c01028
- (id)jsonRepresentation;	// IMP=0x0000000000c00d6b
- (id)dictionaryRepresentation;	// IMP=0x0000000000c00c01
- (id)description;	// IMP=0x0000000000c00b52

@end

