//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDNearestTransitParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned long long _lineMuid;	// 16 = 0x10
    _Bool _isTransitOnly;	// 24 = 0x18
    struct {
        unsigned int has_lineMuid:1;
        unsigned int has_isTransitOnly:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000004cdf34
- (unsigned long long)hash;	// IMP=0x00000000004cdeee
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004cde2a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004cdd8c
- (void)writeTo:(id)arg1;	// IMP=0x00000000004cdcfd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004cdcf0
- (id)jsonRepresentation;	// IMP=0x00000000004cd8d6
- (id)dictionaryRepresentation;	// IMP=0x00000000004cd695
- (id)description;	// IMP=0x00000000004cd5e6

@end

