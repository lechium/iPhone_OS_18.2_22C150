//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitVehiclePositionParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    CDStruct_62a50c50 _tripIds;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005a3c4c
- (unsigned long long)hash;	// IMP=0x00000000005a3c3b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005a3bd5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005a3b65
- (void)writeTo:(id)arg1;	// IMP=0x00000000005a3aee
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005a3ae1
- (id)jsonRepresentation;	// IMP=0x00000000005a366c
- (id)dictionaryRepresentation;	// IMP=0x00000000005a34af
- (id)description;	// IMP=0x00000000005a3400
- (void)dealloc;	// IMP=0x00000000005a33bd

@end

