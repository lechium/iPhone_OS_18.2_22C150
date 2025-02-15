//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ChannelActivityPollingResponse : PBCodable
{
    unsigned long long _serverTimestampSeconds;	// 8 = 0x8
    unsigned long long _version;	// 16 = 0x10
    NSMutableArray *_participantPayloads;	// 24 = 0x18
    unsigned int _responseMessageIndex;	// 32 = 0x20
    unsigned int _retryIntervalSeconds;	// 36 = 0x24
    int _status;	// 40 = 0x28
    unsigned int _totalResponseMessages;	// 44 = 0x2c
    NSData *_uuid;	// 48 = 0x30
    struct {
        unsigned int serverTimestampSeconds:1;
        unsigned int version:1;
        unsigned int responseMessageIndex:1;
        unsigned int retryIntervalSeconds:1;
        unsigned int status:1;
        unsigned int totalResponseMessages:1;
    } _has;	// 56 = 0x38
}

+ (Class)participantPayloadType;	// IMP=0x0010000000013887
- (void).cxx_destruct;	// IMP=0x000000000001506b
@property(nonatomic) unsigned int retryIntervalSeconds; // @synthesize retryIntervalSeconds=_retryIntervalSeconds;
@property(nonatomic) unsigned int totalResponseMessages; // @synthesize totalResponseMessages=_totalResponseMessages;
@property(nonatomic) unsigned int responseMessageIndex; // @synthesize responseMessageIndex=_responseMessageIndex;
@property(retain, nonatomic) NSMutableArray *participantPayloads; // @synthesize participantPayloads=_participantPayloads;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) unsigned long long serverTimestampSeconds; // @synthesize serverTimestampSeconds=_serverTimestampSeconds;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000014d7a
- (unsigned long long)hash;	// IMP=0x0000000000014c4a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000014a89
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000147ef
- (void)copyTo:(id)arg1;	// IMP=0x000000000001465d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000014431
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000014424
- (id)dictionaryRepresentation;	// IMP=0x0000000000013a28
- (id)description;	// IMP=0x0000000000013979
@property(nonatomic) _Bool hasRetryIntervalSeconds;
@property(nonatomic) _Bool hasTotalResponseMessages;
@property(nonatomic) _Bool hasResponseMessageIndex;
- (id)participantPayloadAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001386a
- (unsigned long long)participantPayloadsCount;	// IMP=0x000000000001384d
- (void)addParticipantPayload:(id)arg1;	// IMP=0x00000000000137e3
- (void)clearParticipantPayloads;	// IMP=0x00000000000137c6
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) _Bool hasServerTimestampSeconds;
@property(readonly, nonatomic) _Bool hasUuid;
- (int)StringAsStatus:(id)arg1;	// IMP=0x00000000000135cb
- (id)statusAsString:(int)arg1;	// IMP=0x0000000000013582
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;

@end

