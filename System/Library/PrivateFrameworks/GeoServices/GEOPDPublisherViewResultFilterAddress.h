//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMapsIdentifier, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPublisherViewResultFilterAddress : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDMapsIdentifier *_geoId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000055d61a
- (unsigned long long)hash;	// IMP=0x000000000055d5fd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000055d56d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000055d4e2
- (void)writeTo:(id)arg1;	// IMP=0x000000000055d487
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000055d478
- (id)jsonRepresentation;	// IMP=0x000000000055d117
- (id)dictionaryRepresentation;	// IMP=0x000000000055cf24
- (id)description;	// IMP=0x000000000055ce75

@end
