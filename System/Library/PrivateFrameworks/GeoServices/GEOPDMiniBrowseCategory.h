//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOStyleAttributes, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMiniBrowseCategory : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOStyleAttributes *_styleAttributes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000c65662
- (unsigned long long)hash;	// IMP=0x0000000000c65645
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c655b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c6552a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c654cf
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c654c0
- (id)jsonRepresentation;	// IMP=0x0000000000c6515f
- (id)dictionaryRepresentation;	// IMP=0x0000000000c64f6c
- (id)description;	// IMP=0x0000000000c64ebd

@end

