//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface SharedChannelProvisionStoragePacketInfo : PBCodable
{
    unsigned long long _packetId;	// 8 = 0x8
    NSData *_channelTopicCommitment;	// 16 = 0x10
    NSData *_encryptedPacket;	// 24 = 0x18
    NSData *_initializationVector;	// 32 = 0x20
    struct {
        unsigned int packetId:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000042ce5
@property(retain, nonatomic) NSData *initializationVector; // @synthesize initializationVector=_initializationVector;
@property(retain, nonatomic) NSData *channelTopicCommitment; // @synthesize channelTopicCommitment=_channelTopicCommitment;
@property(retain, nonatomic) NSData *encryptedPacket; // @synthesize encryptedPacket=_encryptedPacket;
@property(nonatomic) unsigned long long packetId; // @synthesize packetId=_packetId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000042bc1
- (unsigned long long)hash;	// IMP=0x0000000000042b2d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000042a16
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004292d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000042889
- (void)writeTo:(id)arg1;	// IMP=0x00000000000427e9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000427dc
- (id)dictionaryRepresentation;	// IMP=0x000000000004248c
- (id)description;	// IMP=0x00000000000423dd
@property(readonly, nonatomic) _Bool hasInitializationVector;
@property(readonly, nonatomic) _Bool hasChannelTopicCommitment;
@property(readonly, nonatomic) _Bool hasEncryptedPacket;
@property(nonatomic) _Bool hasPacketId;

@end

