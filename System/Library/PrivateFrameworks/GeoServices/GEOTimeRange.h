//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOTimeRange : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _from;	// 16 = 0x10
    unsigned int _to;	// 20 = 0x14
    struct {
        unsigned int has_from:1;
        unsigned int has_to:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000001017fee
- (unsigned long long)hash;	// IMP=0x0000000001017faa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001017ef7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001017e5a
- (void)writeTo:(id)arg1;	// IMP=0x0000000001017dcc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001017dbf
- (id)jsonRepresentation;	// IMP=0x00000000010179a5
- (id)dictionaryRepresentation;	// IMP=0x0000000001017781
- (id)description;	// IMP=0x00000000010176d2
- (id)initWithPlaceDataTimeRange:(struct GEOPDLocalTimeRange *)arg1;	// IMP=0x00000000009f9150

@end

