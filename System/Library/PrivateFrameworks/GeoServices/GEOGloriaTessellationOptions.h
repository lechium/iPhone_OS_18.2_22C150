//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOGloriaTessellationOptions : PBCodable
{
    CDStruct_9f2792e4 _zoomLevels;	// 8 = 0x8
    int _type;	// 32 = 0x20
}

- (unsigned long long)hash;	// IMP=0x00000000011ecc4e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011ecbbd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011ecb4f
- (void)writeTo:(id)arg1;	// IMP=0x00000000011ecadc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000011ec795
- (id)jsonRepresentation;	// IMP=0x00000000011ec78b
- (id)dictionaryRepresentation;	// IMP=0x00000000011ec687
- (id)description;	// IMP=0x00000000011ec5d8
- (void)dealloc;	// IMP=0x00000000011ec4bc

@end
