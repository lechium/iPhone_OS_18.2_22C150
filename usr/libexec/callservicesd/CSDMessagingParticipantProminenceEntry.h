//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CSDMessagingParticipantProminenceEntry : PBCodable
{
    unsigned long long _audioPriority;	// 8 = 0x8
    unsigned long long _participantIdentifier;	// 16 = 0x10
    struct {
        unsigned int audioPriority:1;
        unsigned int participantIdentifier:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) unsigned long long audioPriority; // @synthesize audioPriority=_audioPriority;
@property(nonatomic) unsigned long long participantIdentifier; // @synthesize participantIdentifier=_participantIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000237a2
- (unsigned long long)hash;	// IMP=0x001000000002375d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000236a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000023627
- (void)copyTo:(id)arg1;	// IMP=0x00100000000235c9
- (void)writeTo:(id)arg1;	// IMP=0x0010000000023556
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000023549
- (id)dictionaryRepresentation;	// IMP=0x001000000002320e
- (id)description;	// IMP=0x001000000002315f
@property(nonatomic) _Bool hasAudioPriority;
@property(nonatomic) _Bool hasParticipantIdentifier;

@end

