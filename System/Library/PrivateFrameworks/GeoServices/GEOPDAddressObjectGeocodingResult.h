//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAddressObjectGeocodingResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_disambiguationLabels;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003ff94b
- (unsigned long long)hash;	// IMP=0x00000000003ff7d1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003ff741
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003ff584
- (void)writeTo:(id)arg1;	// IMP=0x00000000003ff425
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003ff416
- (id)jsonRepresentation;	// IMP=0x00000000003fef20
- (id)dictionaryRepresentation;	// IMP=0x00000000003feb84
- (id)description;	// IMP=0x00000000003fead5

@end
