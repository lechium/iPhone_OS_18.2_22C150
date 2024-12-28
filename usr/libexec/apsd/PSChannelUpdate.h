//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface PSChannelUpdate : PBCodable
{
    unsigned long long _checkpoint;	// 8 = 0x8
    NSData *_channelId;	// 16 = 0x10
    int _channelStatus;	// 24 = 0x18
    struct {
        unsigned int checkpoint:1;
        unsigned int channelStatus:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0020000000045f30
@property(nonatomic) unsigned long long checkpoint; // @synthesize checkpoint=_checkpoint;
@property(retain, nonatomic) NSData *channelId; // @synthesize channelId=_channelId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000045e79
- (unsigned long long)hash;	// IMP=0x0010000000045e0b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000045d2f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000045c79
- (void)copyTo:(id)arg1;	// IMP=0x0010000000045bf8
- (void)writeTo:(id)arg1;	// IMP=0x0010000000045b68
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000045b5b
- (id)dictionaryRepresentation;	// IMP=0x00100000000457a6
- (id)description;	// IMP=0x00100000000456f7
@property(nonatomic) _Bool hasCheckpoint;
- (int)StringAsChannelStatus:(id)arg1;	// IMP=0x001000000004564c
- (id)channelStatusAsString:(int)arg1;	// IMP=0x00100000000455f7
@property(nonatomic) _Bool hasChannelStatus;
@property(nonatomic) int channelStatus; // @synthesize channelStatus=_channelStatus;
@property(readonly, nonatomic) _Bool hasChannelId;

@end
