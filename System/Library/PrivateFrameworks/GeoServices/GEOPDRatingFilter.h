//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRatingFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000cc44c1
- (unsigned long long)hash;	// IMP=0x0000000000cc44b9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cc4476
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cc4419
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cc43fc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cc43ef
- (id)jsonRepresentation;	// IMP=0x0000000000cc4132
- (id)dictionaryRepresentation;	// IMP=0x0000000000cc3fc8
- (id)description;	// IMP=0x0000000000cc3f19

@end
