//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDHoursThreshold : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _closingSoonMessageThresholdSecond;	// 16 = 0x10
    unsigned int _openingSoonMessageThresholdSecond;	// 20 = 0x14
    struct {
        unsigned int has_closingSoonMessageThresholdSecond:1;
        unsigned int has_openingSoonMessageThresholdSecond:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000c44c4b
- (unsigned long long)hash;	// IMP=0x0000000000c44c07
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c44b54
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c44ab7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c44a29
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c44a1c
- (id)jsonRepresentation;	// IMP=0x0000000000c444b6
- (id)dictionaryRepresentation;	// IMP=0x0000000000c44276
- (id)description;	// IMP=0x0000000000c441c7

@end

