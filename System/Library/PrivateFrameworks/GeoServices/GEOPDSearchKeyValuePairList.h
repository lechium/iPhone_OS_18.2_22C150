//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyValuePairList : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000032121e
- (unsigned long long)hash;	// IMP=0x00000000003210de
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000032104e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000320eb0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000320d7a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000320d6b
- (id)jsonRepresentation;	// IMP=0x00000000003207bc
- (id)dictionaryRepresentation;	// IMP=0x000000000032054e
- (id)description;	// IMP=0x000000000032049f

@end
