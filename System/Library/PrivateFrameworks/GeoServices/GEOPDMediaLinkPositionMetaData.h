//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMediaLinkPositionMetaData : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _collectionItemIndex;	// 16 = 0x10
    int _mediaLinkPosition;	// 20 = 0x14
    struct {
        unsigned int has_collectionItemIndex:1;
        unsigned int has_mediaLinkPosition:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000c605c4
- (unsigned long long)hash;	// IMP=0x0000000000c6057e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c604cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c6042e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c603a0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c60393
- (id)jsonRepresentation;	// IMP=0x0000000000c5ff79
- (id)dictionaryRepresentation;	// IMP=0x0000000000c5fd1e
- (id)description;	// IMP=0x0000000000c5fc6f

@end
