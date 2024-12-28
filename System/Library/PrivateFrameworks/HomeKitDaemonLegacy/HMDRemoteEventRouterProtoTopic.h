//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterProtoTopic : PBCodable
{
    NSString *_eventUUID;	// 8 = 0x8
    NSString *_topic;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004fd75f
@property(retain, nonatomic) NSString *eventUUID; // @synthesize eventUUID=_eventUUID;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000004fd6b2
- (unsigned long long)hash;	// IMP=0x00000000004fd665
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004fd5ad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004fd50f
- (void)copyTo:(id)arg1;	// IMP=0x00000000004fd4ac
- (void)writeTo:(id)arg1;	// IMP=0x00000000004fd44f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004fd442
- (id)dictionaryRepresentation;	// IMP=0x00000000004fd3bf
- (id)description;	// IMP=0x00000000004fd310
@property(readonly, nonatomic) _Bool hasEventUUID;
@property(readonly, nonatomic) _Bool hasTopic;

@end
