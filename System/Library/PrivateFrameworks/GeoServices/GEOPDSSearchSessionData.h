//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSSearchSessionData : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000610112
- (unsigned long long)hash;	// IMP=0x0000000000610108
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006100c5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000610068
- (void)writeTo:(id)arg1;	// IMP=0x000000000061004b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000061003c
- (id)jsonRepresentation;	// IMP=0x000000000060fc47
- (id)dictionaryRepresentation;	// IMP=0x000000000060fadd
- (id)description;	// IMP=0x000000000060fa2e

@end
