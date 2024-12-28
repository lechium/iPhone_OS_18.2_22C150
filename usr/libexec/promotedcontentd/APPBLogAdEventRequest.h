//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class APPBLogMetaData, NSMutableArray;

@interface APPBLogAdEventRequest : PBRequest
{
    NSMutableArray *_events;	// 8 = 0x8
    APPBLogMetaData *_metaData;	// 16 = 0x10
}

+ (Class)eventType;	// IMP=0x00200000000a724f
+ (id)options;	// IMP=0x00100000000a7129
- (void).cxx_destruct;	// IMP=0x00200000000a7e72
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(retain, nonatomic) APPBLogMetaData *metaData; // @synthesize metaData=_metaData;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000a7c9e
- (unsigned long long)hash;	// IMP=0x00100000000a7c51
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a7b99
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a79c1
- (void)copyTo:(id)arg1;	// IMP=0x00100000000a78d9
- (void)writeTo:(id)arg1;	// IMP=0x00100000000a7787
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000a777a
- (id)dictionaryRepresentation;	// IMP=0x00100000000a730f
- (id)description;	// IMP=0x00100000000a7260
- (id)eventAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000a7232
- (unsigned long long)eventsCount;	// IMP=0x00100000000a7215
- (void)addEvent:(id)arg1;	// IMP=0x00100000000a71ab
- (void)clearEvents;	// IMP=0x00100000000a718e
@property(readonly, nonatomic) _Bool hasMetaData;

@end
