//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflineAreaFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c74b80
- (unsigned long long)hash;	// IMP=0x0000000000c74b78
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c74b35
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c74ad8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c74abb
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c74aae
- (id)jsonRepresentation;	// IMP=0x0000000000c747f1
- (id)dictionaryRepresentation;	// IMP=0x0000000000c74687
- (id)description;	// IMP=0x0000000000c745d8

@end

