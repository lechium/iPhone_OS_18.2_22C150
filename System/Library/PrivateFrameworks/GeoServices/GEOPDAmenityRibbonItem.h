//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAmenityRibbonItem : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    CDStruct_9f2792e4 _amenityItemIndexs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b2c820
- (unsigned long long)hash;	// IMP=0x0000000000b2c80f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b2c7a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b2c739
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b2c6c2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b2c6b5
- (id)jsonRepresentation;	// IMP=0x0000000000b2c240
- (id)dictionaryRepresentation;	// IMP=0x0000000000b2c083
- (id)description;	// IMP=0x0000000000b2bfd4
- (void)dealloc;	// IMP=0x0000000000b2beb6

@end

