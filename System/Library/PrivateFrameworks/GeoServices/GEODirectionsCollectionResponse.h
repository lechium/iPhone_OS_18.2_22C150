//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEODirectionsCollectionResponse : PBCodable
{
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0010000000d9bf24
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000d9c28d
- (unsigned long long)hash;	// IMP=0x0000000000d9c273
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d9c1ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d9c1b6
- (void)copyTo:(id)arg1;	// IMP=0x0000000000d9c1a2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d9c19c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d9c05d
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000d9bf1e
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000d9bf11
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000d9bf04
- (id)jsonRepresentation;	// IMP=0x0000000000d9befa
- (id)dictionaryRepresentation;	// IMP=0x0000000000d9beef
- (id)description;	// IMP=0x0000000000d9be40

@end

