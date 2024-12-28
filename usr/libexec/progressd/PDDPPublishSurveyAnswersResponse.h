//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface PDDPPublishSurveyAnswersResponse : PBCodable
{
    NSMutableArray *_payloads;	// 8 = 0x8
}

+ (Class)payloadType;	// IMP=0x0020000000180733
- (void).cxx_destruct;	// IMP=0x00200000001811a0
@property(retain, nonatomic) NSMutableArray *payloads; // @synthesize payloads=_payloads;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000181042
- (unsigned long long)hash;	// IMP=0x0010000000181025
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000180f95
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000180dd1
- (void)copyTo:(id)arg1;	// IMP=0x0010000000180d0c
- (void)writeTo:(id)arg1;	// IMP=0x0010000000180bd6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000180a23
- (id)dictionaryRepresentation;	// IMP=0x00100000001807f3
- (id)description;	// IMP=0x0010000000180744
- (id)payloadAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000180716
- (unsigned long long)payloadsCount;	// IMP=0x00100000001806f9
- (void)addPayload:(id)arg1;	// IMP=0x001000000018068f
- (void)clearPayloads;	// IMP=0x0010000000180672

@end
