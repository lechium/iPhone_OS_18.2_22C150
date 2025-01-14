//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPBOfflineDataBatchesResponse : PBCodable
{
    NSMutableArray *_layerBatchs;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00100000014b42cf
+ (Class)layerBatchType;	// IMP=0x00100000014b36d8
- (void).cxx_destruct;	// IMP=0x00000000014b5033
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000014b4ec7
- (unsigned long long)hash;	// IMP=0x00000000014b4e8c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014b4dd3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014b4c0f
- (void)copyTo:(id)arg1;	// IMP=0x00000000014b4b39
- (void)writeTo:(id)arg1;	// IMP=0x00000000014b4a03
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014b4818
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000014b42c9
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000014b42b7
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000014b3a36
- (id)jsonRepresentation;	// IMP=0x00000000014b3a27
- (id)dictionaryRepresentation;	// IMP=0x00000000014b3798
- (id)description;	// IMP=0x00000000014b36e9
- (id)layerBatchAtIndex:(unsigned long long)arg1;	// IMP=0x00000000014b36bb
- (unsigned long long)layerBatchsCount;	// IMP=0x00000000014b369e
- (void)addLayerBatch:(id)arg1;	// IMP=0x00000000014b3634
- (void)clearLayerBatchs;	// IMP=0x00000000014b3617
@property(retain, nonatomic) NSMutableArray *layerBatchs;

@end

