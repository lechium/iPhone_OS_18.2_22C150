//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyDoubleValueDoublePair : PBCodable
{
    double _key;	// 8 = 0x8
    double _value;	// 16 = 0x10
    CDStruct_a4cc0a70 _flags;	// 24 = 0x18
}

- (unsigned long long)hash;	// IMP=0x0000000000318759
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031869a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000318615
- (void)writeTo:(id)arg1;	// IMP=0x000000000031859e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000318591
- (id)jsonRepresentation;	// IMP=0x000000000031836d
- (id)dictionaryRepresentation;	// IMP=0x000000000031825b
- (id)description;	// IMP=0x00000000003181ac

@end

