//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKey64Value64PairList : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000314322
- (unsigned long long)hash;	// IMP=0x0000000000314305
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000314275
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003140d7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000313fa1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000313dc6
- (id)jsonRepresentation;	// IMP=0x0000000000313db7
- (id)dictionaryRepresentation;	// IMP=0x0000000000313b49
- (id)description;	// IMP=0x0000000000313a9a

@end

