//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAboutFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b18989
- (unsigned long long)hash;	// IMP=0x0000000000b18981
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b1893e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b188e1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b188c4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b188b7
- (id)jsonRepresentation;	// IMP=0x0000000000b185fa
- (id)dictionaryRepresentation;	// IMP=0x0000000000b18490
- (id)description;	// IMP=0x0000000000b183e1

@end

