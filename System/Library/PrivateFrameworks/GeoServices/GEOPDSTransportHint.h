//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSTransportHint : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _transportType;	// 16 = 0x10
    struct {
        unsigned int has_transportType:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x000000000061465f
- (unsigned long long)hash;	// IMP=0x0000000000614634
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006145a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000614522
- (void)writeTo:(id)arg1;	// IMP=0x00000000006144be
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006144b1
- (id)jsonRepresentation;	// IMP=0x0000000000614151
- (id)dictionaryRepresentation;	// IMP=0x0000000000613f62
- (id)description;	// IMP=0x0000000000613eb3

@end
