//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTripLink : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSData *_linkGeometry;	// 16 = 0x10
    unsigned long long _linkId;	// 24 = 0x18
    struct {
        unsigned int has_linkId:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000d29942
- (unsigned long long)hash;	// IMP=0x0000000000d298f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d2983c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d29793
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d29712
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d29705
- (id)jsonRepresentation;	// IMP=0x0000000000d29361
- (id)dictionaryRepresentation;	// IMP=0x0000000000d29106
- (id)description;	// IMP=0x0000000000d29057

@end
