//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSSearchAutoRedoThreshold : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    double _panDeltaThresholdInMeters;	// 16 = 0x10
    double _zoomInPercentThreshold;	// 24 = 0x18
    double _zoomOutPercentThreshold;	// 32 = 0x20
    unsigned int _numberOfVisiblePoisThreshold;	// 40 = 0x28
    CDStruct_541951ee _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000006020e6
- (unsigned long long)hash;	// IMP=0x0000000000601d00
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000601bf2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000601b13
- (void)writeTo:(id)arg1;	// IMP=0x0000000000601a3f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000601a30
- (id)jsonRepresentation;	// IMP=0x00000000006010fb
- (id)dictionaryRepresentation;	// IMP=0x0000000000600ddf
- (id)description;	// IMP=0x0000000000600d30

@end
