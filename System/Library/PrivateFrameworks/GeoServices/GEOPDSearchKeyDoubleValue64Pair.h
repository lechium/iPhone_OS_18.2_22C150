//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyDoubleValue64Pair : PBCodable
{
    double _key;	// 8 = 0x8
    unsigned long long _value;	// 16 = 0x10
    CDStruct_a4cc0a70 _flags;	// 24 = 0x18
}

- (unsigned long long)hash;	// IMP=0x0000000000317771
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003176b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000317634
- (void)writeTo:(id)arg1;	// IMP=0x00000000003175bf
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003175b2
- (id)jsonRepresentation;	// IMP=0x0000000000317351
- (id)dictionaryRepresentation;	// IMP=0x0000000000317241
- (id)description;	// IMP=0x0000000000317192

@end
