//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPDSearchBusinessEntry : PBCodable
{
    unsigned long long _businessId;	// 8 = 0x8
    struct {
        unsigned int has_businessId:1;
    } _flags;	// 16 = 0x10
}

- (unsigned long long)hash;	// IMP=0x0000000000a64fc3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a64f30
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a64ecc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a64ea0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a64e93
- (id)jsonRepresentation;	// IMP=0x0000000000a64c96
- (id)dictionaryRepresentation;	// IMP=0x0000000000a64bd3
- (id)description;	// IMP=0x0000000000a64b24

@end
