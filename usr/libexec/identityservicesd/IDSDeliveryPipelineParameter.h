//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPeerMessage, IDSRegistrationProperties, NSArray, NSData, NSDictionary, NSString;
@protocol IDSPrioritizedTokenList;

@interface IDSDeliveryPipelineParameter : NSObject
{
    _Bool _alwaysSkipSelf;	// 8 = 0x8
    _Bool _alwaysIncludeSelf;	// 9 = 0x9
    _Bool _disallowQueryRefresh;	// 10 = 0xa
    _Bool _sendOnePerToken;	// 11 = 0xb
    _Bool _forceAttachmentMessage;	// 12 = 0xc
    _Bool _forceOnePerFanout;	// 13 = 0xd
    _Bool _wantsFirewallDonation;	// 14 = 0xe
    _Bool _wantsDeliveryStatus;	// 15 = 0xf
    _Bool _wantsCertifiedDelivery;	// 16 = 0x10
    _Bool _isScheduled;	// 17 = 0x11
    _Bool _usedMMCS;	// 18 = 0x12
    NSArray *_uris;	// 24 = 0x18
    NSString *_fromID;	// 32 = 0x20
    NSString *_fromShortHandle;	// 40 = 0x28
    NSString *_service;	// 48 = 0x30
    NSData *_fromIdentity;	// 56 = 0x38
    IDSRegistrationProperties *_registrationProperties;	// 64 = 0x40
    NSData *_dataToEncrypt;	// 72 = 0x48
    NSDictionary *_attributes;	// 80 = 0x50
    NSDictionary *_ktURIVerificationMap;	// 88 = 0x58
    unsigned long long _encryptionType;	// 96 = 0x60
    unsigned long long _maxSize;	// 104 = 0x68
    IDSPeerMessage *_messageToSend;	// 112 = 0x70
    id <IDSPrioritizedTokenList> _prioritizedTokenList;	// 120 = 0x78
    CDUnknownBlockType _willSendBlock;	// 128 = 0x80
    NSString *_guid;	// 136 = 0x88
    NSData *_encryptedTopLevelPayload;	// 144 = 0x90
    NSArray *_endpoints;	// 152 = 0x98
    NSDictionary *_endpointsToEncryptedData;	// 160 = 0xa0
    NSArray *_aggregatableMessages;	// 168 = 0xa8
    NSArray *_aggregateMessages;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00200000003be8ed
@property(nonatomic) _Bool usedMMCS; // @synthesize usedMMCS=_usedMMCS;
@property(retain, nonatomic) NSArray *aggregateMessages; // @synthesize aggregateMessages=_aggregateMessages;
@property(retain, nonatomic) NSArray *aggregatableMessages; // @synthesize aggregatableMessages=_aggregatableMessages;
@property(retain, nonatomic) NSDictionary *endpointsToEncryptedData; // @synthesize endpointsToEncryptedData=_endpointsToEncryptedData;
@property(retain, nonatomic) NSArray *endpoints; // @synthesize endpoints=_endpoints;
@property(nonatomic) _Bool isScheduled; // @synthesize isScheduled=_isScheduled;
@property(retain, nonatomic) NSData *encryptedTopLevelPayload; // @synthesize encryptedTopLevelPayload=_encryptedTopLevelPayload;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(copy, nonatomic) CDUnknownBlockType willSendBlock; // @synthesize willSendBlock=_willSendBlock;
@property(retain, nonatomic) id <IDSPrioritizedTokenList> prioritizedTokenList; // @synthesize prioritizedTokenList=_prioritizedTokenList;
@property(nonatomic) _Bool wantsCertifiedDelivery; // @synthesize wantsCertifiedDelivery=_wantsCertifiedDelivery;
@property(nonatomic) _Bool wantsDeliveryStatus; // @synthesize wantsDeliveryStatus=_wantsDeliveryStatus;
@property(retain, nonatomic) IDSPeerMessage *messageToSend; // @synthesize messageToSend=_messageToSend;
@property(nonatomic) unsigned long long maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) _Bool wantsFirewallDonation; // @synthesize wantsFirewallDonation=_wantsFirewallDonation;
@property(nonatomic) _Bool forceOnePerFanout; // @synthesize forceOnePerFanout=_forceOnePerFanout;
@property(nonatomic) _Bool forceAttachmentMessage; // @synthesize forceAttachmentMessage=_forceAttachmentMessage;
@property(nonatomic) unsigned long long encryptionType; // @synthesize encryptionType=_encryptionType;
@property(retain, nonatomic) NSDictionary *ktURIVerificationMap; // @synthesize ktURIVerificationMap=_ktURIVerificationMap;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSData *dataToEncrypt; // @synthesize dataToEncrypt=_dataToEncrypt;
@property(retain, nonatomic) IDSRegistrationProperties *registrationProperties; // @synthesize registrationProperties=_registrationProperties;
@property(nonatomic) _Bool sendOnePerToken; // @synthesize sendOnePerToken=_sendOnePerToken;
@property(nonatomic) _Bool disallowQueryRefresh; // @synthesize disallowQueryRefresh=_disallowQueryRefresh;
@property(nonatomic) _Bool alwaysIncludeSelf; // @synthesize alwaysIncludeSelf=_alwaysIncludeSelf;
@property(nonatomic) _Bool alwaysSkipSelf; // @synthesize alwaysSkipSelf=_alwaysSkipSelf;
@property(retain, nonatomic) NSData *fromIdentity; // @synthesize fromIdentity=_fromIdentity;
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *fromShortHandle; // @synthesize fromShortHandle=_fromShortHandle;
@property(retain, nonatomic) NSString *fromID; // @synthesize fromID=_fromID;
@property(retain, nonatomic) NSArray *uris; // @synthesize uris=_uris;
- (id)description;	// IMP=0x00100000003be519
- (_Bool)overrideSendOnePerTokenForService:(id)arg1;	// IMP=0x00100000003be4fd
- (id)initWithInfo:(id)arg1 uris:(id)arg2 service:(id)arg3 maxSize:(unsigned long long)arg4;	// IMP=0x00100000003bdea3

@end

