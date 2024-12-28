//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingAVConferenceInviteData, NSString;

@interface CSDMessagingCallMessage : PBCodable
{
    CSDMessagingAVConferenceInviteData *_inviteData;	// 8 = 0x8
    unsigned int _protoProtocolVersion;	// 16 = 0x10
    NSString *_protoUpgradeSessionUUID;	// 24 = 0x18
    int _type;	// 32 = 0x20
    _Bool _oBSOLETEProtoMomentsAvailable;	// 36 = 0x24
    _Bool _protoMomentsV2Available;	// 37 = 0x25
    _Bool _protoSenderMuteUplink;	// 38 = 0x26
    _Bool _protoShouldSuppressInCallUI;	// 39 = 0x27
    _Bool _protoWantsVideo;	// 40 = 0x28
    struct {
        unsigned int protoProtocolVersion:1;
        unsigned int type:1;
        unsigned int oBSOLETEProtoMomentsAvailable:1;
        unsigned int protoMomentsV2Available:1;
        unsigned int protoSenderMuteUplink:1;
        unsigned int protoShouldSuppressInCallUI:1;
        unsigned int protoWantsVideo:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x002000000017335c
@property(retain, nonatomic) NSString *protoUpgradeSessionUUID; // @synthesize protoUpgradeSessionUUID=_protoUpgradeSessionUUID;
@property(nonatomic) _Bool protoMomentsV2Available; // @synthesize protoMomentsV2Available=_protoMomentsV2Available;
@property(nonatomic) _Bool protoShouldSuppressInCallUI; // @synthesize protoShouldSuppressInCallUI=_protoShouldSuppressInCallUI;
@property(nonatomic) _Bool protoSenderMuteUplink; // @synthesize protoSenderMuteUplink=_protoSenderMuteUplink;
@property(nonatomic) _Bool oBSOLETEProtoMomentsAvailable; // @synthesize oBSOLETEProtoMomentsAvailable=_oBSOLETEProtoMomentsAvailable;
@property(retain, nonatomic) CSDMessagingAVConferenceInviteData *inviteData; // @synthesize inviteData=_inviteData;
@property(nonatomic) _Bool protoWantsVideo; // @synthesize protoWantsVideo=_protoWantsVideo;
@property(nonatomic) unsigned int protoProtocolVersion; // @synthesize protoProtocolVersion=_protoProtocolVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000017316c
- (unsigned long long)hash;	// IMP=0x0010000000173037
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000172e1e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000172caf
- (void)copyTo:(id)arg1;	// IMP=0x0010000000172b7f
- (void)writeTo:(id)arg1;	// IMP=0x0010000000172a2d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000172a20
- (id)dictionaryRepresentation;	// IMP=0x0010000000172101
- (id)description;	// IMP=0x0010000000172052
// Error: Property attributes should begin with the type ('T') attribute, property name: hasProtoUpgradeSessionUUID
// Property attributes: (null)

@property(nonatomic) _Bool hasProtoMomentsV2Available;
@property(nonatomic) _Bool hasProtoShouldSuppressInCallUI;
@property(nonatomic) _Bool hasProtoSenderMuteUplink;
@property(nonatomic) _Bool hasOBSOLETEProtoMomentsAvailable;
@property(readonly, nonatomic) _Bool hasInviteData;
@property(nonatomic) _Bool hasProtoWantsVideo;
@property(nonatomic) _Bool hasProtoProtocolVersion;
- (int)StringAsType:(id)arg1;	// IMP=0x0010000000171dd5
- (id)typeAsString:(int)arg1;	// IMP=0x0010000000171d8c
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)addProtocolVersion;	// IMP=0x0010000000018f9e
@property(nonatomic) _Bool shouldSuppressInCallUI;
@property(nonatomic, getter=isMomentsAvailable) _Bool momentsAvailable;
@property(nonatomic) _Bool senderMuteUplink;
- (void)setWantsVideo:(_Bool)arg1;	// IMP=0x0010000000018e60
- (_Bool)wantsVideo;	// IMP=0x0010000000018e4e
@property(nonatomic) int protocolVersion;

@end
