//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOTimezone, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDStopInfo : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned long long _muid;	// 16 = 0x10
    GEOTimezone *_timezone;	// 24 = 0x18
    unsigned int _walkingTime;	// 32 = 0x20
    struct {
        unsigned int has_muid:1;
        unsigned int has_walkingTime:1;
    } _flags;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000ced3a1
- (unsigned long long)hash;	// IMP=0x0000000000ced338
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ced25b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ced195
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ced0ea
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ced0db
- (id)jsonRepresentation;	// IMP=0x0000000000cecbfb
- (id)dictionaryRepresentation;	// IMP=0x0000000000cec954
- (id)description;	// IMP=0x0000000000cec8a5

@end

