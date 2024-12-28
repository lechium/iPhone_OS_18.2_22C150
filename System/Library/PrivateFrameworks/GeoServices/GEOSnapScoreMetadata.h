//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOSnapScorePoint, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOSnapScoreMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_destinationAccessPoints;	// 24 = 0x18
    NSMutableArray *_destinationPoints;	// 32 = 0x20
    NSMutableArray *_originAccessPoints;	// 40 = 0x28
    GEOSnapScorePoint *_originPoint;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_destinationAccessPoints:1;
        unsigned int read_destinationPoints:1;
        unsigned int read_originAccessPoints:1;
        unsigned int read_originPoint:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x00000000009165a1
- (unsigned long long)hash;	// IMP=0x0000000000915e86
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000915d60
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000091585f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000914cbe
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000914caf
- (id)jsonRepresentation;	// IMP=0x0000000000913c49
- (id)dictionaryRepresentation;	// IMP=0x000000000091342f
- (id)description;	// IMP=0x0000000000913380
- (id)initWithData:(id)arg1;	// IMP=0x00000000009126e5
- (id)init;	// IMP=0x0000000000912689

@end
