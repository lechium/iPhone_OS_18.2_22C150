//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterProtoFetchEventsMessage : PBCodable
{
    int _fetchType;	// 8 = 0x8
    NSMutableArray *_topics;	// 16 = 0x10
    struct {
        unsigned int fetchType:1;
    } _has;	// 24 = 0x18
}

+ (Class)topicsType;	// IMP=0x0010000000bdff66
- (void).cxx_destruct;	// IMP=0x0000000000bdfd1a
@property(retain, nonatomic) NSMutableArray *topics; // @synthesize topics=_topics;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000bdfb80
- (unsigned long long)hash;	// IMP=0x0000000000bdfb2d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bdfa73
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bdf884
- (void)copyTo:(id)arg1;	// IMP=0x0000000000bdf7a3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bdf63c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bdf62f
- (id)dictionaryRepresentation;	// IMP=0x0000000000bdf378
- (id)description;	// IMP=0x0000000000bdf2c9
- (int)StringAsFetchType:(id)arg1;	// IMP=0x0000000000bdf264
- (id)fetchTypeAsString:(int)arg1;	// IMP=0x0000000000bdf20f
@property(nonatomic) _Bool hasFetchType;
@property(nonatomic) int fetchType; // @synthesize fetchType=_fetchType;
- (id)topicsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000bdf18e
- (unsigned long long)topicsCount;	// IMP=0x0000000000bdf171
- (void)addTopics:(id)arg1;	// IMP=0x0000000000bdf107
- (void)clearTopics;	// IMP=0x0000000000bdf0ea

@end
