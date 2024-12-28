//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingCallModel, CSDMessagingCallProvider, CSDMessagingHandle, MISSING_TYPE, NSDate, NSMutableArray, NSSet, NSString, NSUUID, TUCallModel, TUCallProvider, TUHandle;

@interface CSDMessagingCall : PBCodable
{
    double _protoTimeConnected;	// 8 = 0x8
    NSString *_callerNameFromNetwork;	// 16 = 0x10
    NSString *_destinationID;	// 24 = 0x18
    NSString *_groupUUIDString;	// 32 = 0x20
    CSDMessagingHandle *_handle;	// 40 = 0x28
    NSString *_isoCountryCode;	// 48 = 0x30
    NSString *_localSenderIdentityAccountUUIDString;	// 56 = 0x38
    NSString *_localSenderIdentityUUIDString;	// 64 = 0x40
    CSDMessagingCallModel *_protoCallModel;	// 72 = 0x48
    unsigned int _protoDisconnectedReason;	// 80 = 0x50
    unsigned int _protoOriginatingUIType;	// 84 = 0x54
    CSDMessagingCallProvider *_protoProvider;	// 88 = 0x58
    unsigned int _protoService;	// 96 = 0x60
    unsigned int _protoSoundRegion;	// 100 = 0x64
    unsigned int _protoStatus;	// 104 = 0x68
    unsigned int _protoTTYType;	// 108 = 0x6c
    NSMutableArray *_remoteParticipantHandles;	// 112 = 0x70
    NSString *_sourceIdentifier;	// 120 = 0x78
    NSString *_uniqueProxyIdentifier;	// 128 = 0x80
    _Bool _protoConferenced;	// 136 = 0x88
    _Bool _protoEmergency;	// 137 = 0x89
    _Bool _protoFailureExpected;	// 138 = 0x8a
    _Bool _protoHasSentInvitation;	// 139 = 0x8b
    _Bool _protoNeedsManualInCallSounds;	// 140 = 0x8c
    _Bool _protoOutgoing;	// 141 = 0x8d
    _Bool _protoSOS;	// 142 = 0x8e
    _Bool _protoShouldSuppressRingtone;	// 143 = 0x8f
    _Bool _protoSupportsDTMFUpdates;	// 144 = 0x90
    _Bool _protoSupportsEmergencyFallback;	// 145 = 0x91
    _Bool _protoSupportsTTYWithVoice;	// 146 = 0x92
    MISSING_TYPE *_protoUplinkMuted;	// 147 = 0x93
    _Bool _protoVideo;	// 148 = 0x94
    _Bool _protoVoicemail;	// 149 = 0x95
    _Bool _protoWantsHoldMusic;	// 150 = 0x96
    struct {
        unsigned int protoTimeConnected:1;
        unsigned int protoDisconnectedReason:1;
        unsigned int protoOriginatingUIType:1;
        unsigned int protoService:1;
        unsigned int protoSoundRegion:1;
        unsigned int protoStatus:1;
        unsigned int protoTTYType:1;
        unsigned int protoConferenced:1;
        unsigned int protoEmergency:1;
        unsigned int protoFailureExpected:1;
        unsigned int protoHasSentInvitation:1;
        unsigned int protoNeedsManualInCallSounds:1;
        unsigned int protoOutgoing:1;
        unsigned int protoSOS:1;
        unsigned int protoShouldSuppressRingtone:1;
        unsigned int protoSupportsDTMFUpdates:1;
        unsigned int protoSupportsEmergencyFallback:1;
        unsigned int protoSupportsTTYWithVoice:1;
        unsigned int protoUplinkMuted:1;
        unsigned int protoVideo:1;
        unsigned int protoVoicemail:1;
        unsigned int protoWantsHoldMusic:1;
    } _has;	// 152 = 0x98
}

+ (Class)remoteParticipantHandlesType;	// IMP=0x00200000000c849d
- (void).cxx_destruct;	// IMP=0x00200000000cca69
@property(nonatomic) _Bool protoSupportsDTMFUpdates; // @synthesize protoSupportsDTMFUpdates=_protoSupportsDTMFUpdates;
@property(retain, nonatomic) NSString *groupUUIDString; // @synthesize groupUUIDString=_groupUUIDString;
@property(nonatomic) _Bool protoSupportsEmergencyFallback; // @synthesize protoSupportsEmergencyFallback=_protoSupportsEmergencyFallback;
@property(nonatomic) _Bool protoFailureExpected; // @synthesize protoFailureExpected=_protoFailureExpected;
@property(nonatomic) unsigned int protoOriginatingUIType; // @synthesize protoOriginatingUIType=_protoOriginatingUIType;
@property(retain, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(nonatomic) _Bool protoSupportsTTYWithVoice; // @synthesize protoSupportsTTYWithVoice=_protoSupportsTTYWithVoice;
@property(nonatomic) unsigned int protoTTYType; // @synthesize protoTTYType=_protoTTYType;
@property(retain, nonatomic) NSString *localSenderIdentityAccountUUIDString; // @synthesize localSenderIdentityAccountUUIDString=_localSenderIdentityAccountUUIDString;
@property(retain, nonatomic) NSMutableArray *remoteParticipantHandles; // @synthesize remoteParticipantHandles=_remoteParticipantHandles;
@property(retain, nonatomic) NSString *localSenderIdentityUUIDString; // @synthesize localSenderIdentityUUIDString=_localSenderIdentityUUIDString;
@property(retain, nonatomic) CSDMessagingCallModel *protoCallModel; // @synthesize protoCallModel=_protoCallModel;
@property(nonatomic) _Bool protoUplinkMuted; // @synthesize protoUplinkMuted=_protoUplinkMuted;
@property(nonatomic) _Bool protoVideo; // @synthesize protoVideo=_protoVideo;
@property(retain, nonatomic) CSDMessagingCallProvider *protoProvider; // @synthesize protoProvider=_protoProvider;
@property(nonatomic) _Bool protoSOS; // @synthesize protoSOS=_protoSOS;
@property(retain, nonatomic) CSDMessagingHandle *handle; // @synthesize handle=_handle;
@property(nonatomic) _Bool protoHasSentInvitation; // @synthesize protoHasSentInvitation=_protoHasSentInvitation;
@property(nonatomic) _Bool protoEmergency; // @synthesize protoEmergency=_protoEmergency;
@property(nonatomic) unsigned int protoSoundRegion; // @synthesize protoSoundRegion=_protoSoundRegion;
@property(nonatomic) _Bool protoNeedsManualInCallSounds; // @synthesize protoNeedsManualInCallSounds=_protoNeedsManualInCallSounds;
@property(nonatomic) _Bool protoShouldSuppressRingtone; // @synthesize protoShouldSuppressRingtone=_protoShouldSuppressRingtone;
@property(nonatomic) _Bool protoOutgoing; // @synthesize protoOutgoing=_protoOutgoing;
@property(nonatomic) double protoTimeConnected; // @synthesize protoTimeConnected=_protoTimeConnected;
@property(retain, nonatomic) NSString *callerNameFromNetwork; // @synthesize callerNameFromNetwork=_callerNameFromNetwork;
@property(nonatomic) _Bool protoVoicemail; // @synthesize protoVoicemail=_protoVoicemail;
- (unsigned int)protoDisconnectedReason;	// IMP=0x00100000000cc7fa
@property(nonatomic) _Bool protoWantsHoldMusic; // @synthesize protoWantsHoldMusic=_protoWantsHoldMusic;
@property(nonatomic) unsigned int protoService; // @synthesize protoService=_protoService;
@property(retain, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(retain, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(nonatomic) _Bool protoConferenced; // @synthesize protoConferenced=_protoConferenced;
@property(nonatomic) unsigned int protoStatus; // @synthesize protoStatus=_protoStatus;
@property(retain, nonatomic) NSString *uniqueProxyIdentifier; // @synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000cc1c3
- (unsigned long long)hash;	// IMP=0x00100000000cbb79
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000cb419
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000cadc2
- (void)copyTo:(id)arg1;	// IMP=0x00100000000ca90d
- (void)writeTo:(id)arg1;	// IMP=0x00100000000ca395
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000ca388
- (id)dictionaryRepresentation;	// IMP=0x00100000000c8765
- (id)description;	// IMP=0x00100000000c86b6
@property(nonatomic) _Bool hasProtoSupportsDTMFUpdates;
@property(readonly, nonatomic) _Bool hasGroupUUIDString;
@property(nonatomic) _Bool hasProtoSupportsEmergencyFallback;
@property(nonatomic) _Bool hasProtoFailureExpected;
@property(nonatomic) _Bool hasProtoOriginatingUIType;
@property(readonly, nonatomic) _Bool hasIsoCountryCode;
@property(nonatomic) _Bool hasProtoSupportsTTYWithVoice;
@property(nonatomic) _Bool hasProtoTTYType;
@property(readonly, nonatomic) _Bool hasLocalSenderIdentityAccountUUIDString;
- (id)remoteParticipantHandlesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000c8480
- (unsigned long long)remoteParticipantHandlesCount;	// IMP=0x00100000000c8463
- (void)addRemoteParticipantHandles:(id)arg1;	// IMP=0x00100000000c83f9
- (void)clearRemoteParticipantHandles;	// IMP=0x00100000000c83dc
@property(readonly, nonatomic) _Bool hasLocalSenderIdentityUUIDString;
@property(readonly, nonatomic) _Bool hasProtoCallModel;
@property(nonatomic) _Bool hasProtoUplinkMuted;
@property(nonatomic) _Bool hasProtoVideo;
@property(readonly, nonatomic) _Bool hasProtoProvider;
@property(nonatomic) _Bool hasProtoSOS;
@property(readonly, nonatomic) _Bool hasHandle;
@property(nonatomic) _Bool hasProtoHasSentInvitation;
@property(nonatomic) _Bool hasProtoEmergency;
@property(nonatomic) _Bool hasProtoSoundRegion;
@property(nonatomic) _Bool hasProtoNeedsManualInCallSounds;
@property(nonatomic) _Bool hasProtoShouldSuppressRingtone;
@property(nonatomic) _Bool hasProtoOutgoing;
@property(nonatomic) _Bool hasProtoTimeConnected;
- (_Bool);	// IMP=0x00100000000c806c
@property(nonatomic) _Bool hasProtoVoicemail;
@property(nonatomic) _Bool hasProtoDisconnectedReason;
- (void)setProtoDisconnectedReason:(unsigned int)arg1;	// IMP=0x00100000000c7fd5
@property(nonatomic) _Bool hasProtoWantsHoldMusic;
@property(nonatomic) _Bool hasProtoService;
@property(readonly, nonatomic) _Bool hasSourceIdentifier;
@property(readonly, nonatomic) _Bool hasDestinationID;
@property(nonatomic) _Bool hasProtoConferenced;
@property(nonatomic) _Bool hasProtoStatus;
@property(readonly, nonatomic) _Bool hasUniqueProxyIdentifier;
@property(copy, nonatomic) NSSet *remoteParticipantTUHandles;
@property(retain, nonatomic) NSUUID *localSenderIdentityAccountUUID;
@property(retain, nonatomic) NSUUID *localSenderIdentityUUID;
@property(retain, nonatomic) NSDate *dateConnected;
- (void)setTuProvider:(id)arg1 isVideo:(_Bool)arg2;	// IMP=0x0010000000178f10
@property(nonatomic, getter=isVideo) _Bool video;
@property(retain, nonatomic) TUCallProvider *tuProvider;
@property(retain, nonatomic) TUHandle *tuHandle;
@property(retain, nonatomic) TUCallModel *callModel;
- (_Bool)isEqualToCall:(id)arg1;	// IMP=0x0010000000178024
- (void)updateRelayCall:(id)arg1;	// IMP=0x0010000000177b0e
@property(nonatomic) long long soundRegion;
@property(nonatomic) int originatingUIType;
@property(nonatomic) _Bool supportsTTYWithVoice;
@property(nonatomic) int ttyType;
@property(nonatomic, getter=isUplinkMuted) _Bool uplinkMuted;
@property(nonatomic) _Bool hasSentInvitation;
@property(nonatomic) _Bool supportsDTMFUpdates;
@property(nonatomic, getter=isSOS, setter=setSOS:) _Bool sos;
@property(nonatomic) _Bool supportsEmergencyFallback;
@property(nonatomic, getter=isFailureExpected) _Bool failureExpected;
@property(nonatomic, getter=isEmergency) _Bool emergency;
@property(nonatomic) _Bool needsManualInCallSounds;
@property(nonatomic) _Bool shouldSuppressRingtone;
@property(nonatomic, getter=isOutgoing) _Bool outgoing;
@property(nonatomic, getter=isVoicemail) _Bool voicemail;
@property(nonatomic) _Bool wantsHoldMusic;
@property(nonatomic) int disconnectedReason;
- (void)setService:(int)arg1;	// IMP=0x001000000017756a
- (int)service;	// IMP=0x0010000000177558
@property(nonatomic, getter=isConferenced) _Bool conferenced;
@property(nonatomic) int status;
- (id)initWithCall:(id)arg1;	// IMP=0x0010000000176fd4

// Remaining properties
@property(readonly, nonatomic) _Bool hasCallerNameFromNetwork;

@end
