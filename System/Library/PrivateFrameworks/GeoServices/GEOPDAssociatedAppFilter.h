//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAssociatedAppFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b36212
- (unsigned long long)hash;	// IMP=0x0000000000b3620a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b361c7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b3616a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b3614d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b36140
- (id)jsonRepresentation;	// IMP=0x0000000000b35e83
- (id)dictionaryRepresentation;	// IMP=0x0000000000b35d19
- (id)description;	// IMP=0x0000000000b35c6a

@end
