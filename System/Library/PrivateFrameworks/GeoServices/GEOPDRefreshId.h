//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMapsIdentifier, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRefreshId : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDMapsIdentifier *_forwardMapsId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000cc6784
- (unsigned long long)hash;	// IMP=0x0000000000cc6767
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cc66d7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cc664c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cc65f1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cc65e2
- (id)jsonRepresentation;	// IMP=0x0000000000cc6281
- (id)dictionaryRepresentation;	// IMP=0x0000000000cc608e
- (id)description;	// IMP=0x0000000000cc5fdf

@end
