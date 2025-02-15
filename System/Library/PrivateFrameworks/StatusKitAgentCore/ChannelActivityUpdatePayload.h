//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ChannelActivityUpdatePayload : PBCodable
{
    NSData *_padding;	// 8 = 0x8
    NSMutableArray *_participantPayloads;	// 16 = 0x10
    int _updateType;	// 24 = 0x18
    struct {
        unsigned int updateType:1;
    } _has;	// 28 = 0x1c
}

+ (Class)participantPayloadType;	// IMP=0x0010000000063f9b
- (void).cxx_destruct;	// IMP=0x0000000000064dd9
@property(retain, nonatomic) NSData *padding; // @synthesize padding=_padding;
@property(retain, nonatomic) NSMutableArray *participantPayloads; // @synthesize participantPayloads=_participantPayloads;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000064bfa
- (unsigned long long)hash;	// IMP=0x0000000000064b7a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000064a97
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000064868
- (void)copyTo:(id)arg1;	// IMP=0x000000000006475d
- (void)writeTo:(id)arg1;	// IMP=0x00000000000645d8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000645cb
- (id)dictionaryRepresentation;	// IMP=0x0000000000064070
- (id)description;	// IMP=0x0000000000063fc1
@property(readonly, nonatomic) _Bool hasPadding;
- (id)participantPayloadAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000063f7e
- (unsigned long long)participantPayloadsCount;	// IMP=0x0000000000063f61
- (void)addParticipantPayload:(id)arg1;	// IMP=0x0000000000063ef7
- (void)clearParticipantPayloads;	// IMP=0x0000000000063eda
- (int)StringAsUpdateType:(id)arg1;	// IMP=0x0000000000063e75
- (id)updateTypeAsString:(int)arg1;	// IMP=0x0000000000063e20
@property(nonatomic) _Bool hasUpdateType;
@property(nonatomic) int updateType; // @synthesize updateType=_updateType;

@end

