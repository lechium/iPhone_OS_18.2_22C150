//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSRawAttribute : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _beginIndex;	// 16 = 0x10
    unsigned int _endIndex;	// 20 = 0x14
    struct {
        unsigned int has_beginIndex:1;
        unsigned int has_endIndex:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000600d1c
- (unsigned long long)hash;	// IMP=0x0000000000600cd8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000600c25
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000600b88
- (void)writeTo:(id)arg1;	// IMP=0x0000000000600afa
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000600aed
- (id)jsonRepresentation;	// IMP=0x00000000006006d3
- (id)dictionaryRepresentation;	// IMP=0x0000000000600493
- (id)description;	// IMP=0x00000000006003e4

@end

