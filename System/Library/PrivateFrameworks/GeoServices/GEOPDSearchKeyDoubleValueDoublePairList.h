//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyDoubleValueDoublePairList : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000319251
- (unsigned long long)hash;	// IMP=0x0000000000319234
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003191a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000319006
- (void)writeTo:(id)arg1;	// IMP=0x0000000000318ed0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000318cf5
- (id)jsonRepresentation;	// IMP=0x0000000000318ce6
- (id)dictionaryRepresentation;	// IMP=0x0000000000318a78
- (id)description;	// IMP=0x00000000003189c9

@end
