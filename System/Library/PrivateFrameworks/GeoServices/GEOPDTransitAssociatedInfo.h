//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitAssociatedInfo : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned long long _alewifeId;	// 16 = 0x10
    struct {
        unsigned int has_alewifeId:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000d07d7c
- (unsigned long long)hash;	// IMP=0x0000000000d07d54
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d07cc1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d07c40
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d07bdc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d07bcf
- (id)jsonRepresentation;	// IMP=0x0000000000d0786e
- (id)dictionaryRepresentation;	// IMP=0x0000000000d0769a
- (id)description;	// IMP=0x0000000000d075eb

@end
