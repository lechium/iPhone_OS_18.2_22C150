//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBoundsFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b4426e
- (unsigned long long)hash;	// IMP=0x0000000000b44266
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b44223
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b441c6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b441a9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b4419c
- (id)jsonRepresentation;	// IMP=0x0000000000b43edf
- (id)dictionaryRepresentation;	// IMP=0x0000000000b43d75
- (id)description;	// IMP=0x0000000000b43cc6

@end

