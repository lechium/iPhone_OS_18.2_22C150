//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/IDSMessage.h>

@class NSData, NSDate, NSDictionary, NSMutableSet, NSNumber, NSString;

@interface IDSPeerAggregateMessage : IDSMessage
{
    _Bool _fireAndForget;	// 257 = 0x101
    _Bool _hasReceivedAPSDAck;	// 258 = 0x102
    _Bool _isFinalMessage;	// 259 = 0x103
    NSString *;	// 264 = 0x108
    NSString *_sourceShortHandle;	// 272 = 0x110
    NSString *_encryptionType;	// 280 = 0x118
    NSString *_messageID;	// 288 = 0x120
    NSString *_targetService;	// 296 = 0x128
    NSNumber *_priority;	// 304 = 0x130
    NSDate *_expirationDate;	// 312 = 0x138
    NSData *_fromIdentity;	// 320 = 0x140
    NSDictionary *_additionalDictionary;	// 328 = 0x148
    NSMutableSet *_individualPeerMessages;	// 336 = 0x150
    NSMutableSet *_pendingResponseTokens;	// 344 = 0x158
    long long _maxSize;	// 352 = 0x160
    long long _currentSize;	// 360 = 0x168
    NSNumber *_chunkNumber;	// 368 = 0x170
    NSData *_groupPayload;	// 376 = 0x178
    NSData *_groupIdentifer;	// 384 = 0x180
    NSNumber *_deliveryMinimumTimeDelay;	// 392 = 0x188
    NSNumber *_deliveryMinimumTime;	// 400 = 0x190
}

- (void).cxx_destruct;	// IMP=0x002000000007fcc8
@property(copy) NSNumber *deliveryMinimumTime; // @synthesize deliveryMinimumTime=_deliveryMinimumTime;
@property(copy) NSNumber *deliveryMinimumTimeDelay; // @synthesize deliveryMinimumTimeDelay=_deliveryMinimumTimeDelay;
@property(copy, nonatomic) NSData *groupIdentifer; // @synthesize groupIdentifer=_groupIdentifer;
@property(copy, nonatomic) NSData *groupPayload; // @synthesize groupPayload=_groupPayload;
@property _Bool isFinalMessage; // @synthesize isFinalMessage=_isFinalMessage;
@property(copy) NSNumber *chunkNumber; // @synthesize chunkNumber=_chunkNumber;
@property _Bool hasReceivedAPSDAck; // @synthesize hasReceivedAPSDAck=_hasReceivedAPSDAck;
@property _Bool fireAndForget; // @synthesize fireAndForget=_fireAndForget;
@property long long currentSize; // @synthesize currentSize=_currentSize;
@property long long maxSize; // @synthesize maxSize=_maxSize;
@property(retain) NSMutableSet *pendingResponseTokens; // @synthesize pendingResponseTokens=_pendingResponseTokens;
@property(retain) NSMutableSet *individualPeerMessages; // @synthesize individualPeerMessages=_individualPeerMessages;
@property(copy) NSDictionary *additionalDictionary; // @synthesize additionalDictionary=_additionalDictionary;
@property(copy) NSData *fromIdentity; // @synthesize fromIdentity=_fromIdentity;
@property(copy) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy) NSNumber *priority; // @synthesize priority=_priority;
@property(copy) NSString *targetService; // @synthesize targetService=_targetService;
@property(copy) NSString *messageID; // @synthesize messageID=_messageID;
@property(copy) NSString *encryptionType; // @synthesize encryptionType=_encryptionType;
@property(copy) NSString *sourceShortHandle; // @synthesize sourceShortHandle=_sourceShortHandle;
@property(copy) NSString *sourcePeerID; // @synthesize sourcePeerID=_sourcePeerID;
- (id)messageBody;	// IMP=0x001000000007ef36
- (id)requiredKeys;	// IMP=0x001000000007eea8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007eaf3
- (unsigned long long)sizeOfKeysWithValues;	// IMP=0x001000000007e868
- (void)logFailureInfo;	// IMP=0x001000000007e453
- (_Bool)expectingMoreResponses;	// IMP=0x001000000007e42f
- (id)_processMessageResponseForMessage:(id)arg1 withError:(id)arg2 resultCode:(long long)arg3 toURI:(id)arg4 fromURI:(id)arg5 service:(id)arg6 fromIdentity:(id)arg7;	// IMP=0x001000000007d858
- (void)noteResponseForToken:(id)arg1;	// IMP=0x001000000007d0bc
- (void)callAllAckBlocks;	// IMP=0x001000000007cf45
- (void)clearAllPendingResponseTokens;	// IMP=0x001000000007cee5
- (void)callAllIndividualCompletionBlocksWithDeliveryContext:(id)arg1;	// IMP=0x001000000007cd70
- (_Bool)removeAllAggregatableMessages;	// IMP=0x001000000007cc90
- (_Bool)addAggregatableMessage:(id)arg1;	// IMP=0x001000000007cb85
- (_Bool)hasSpaceForAggregatableMessage:(id)arg1;	// IMP=0x001000000007cb4a
- (id)initWithPeerMessage:(id)arg1 service:(id)arg2 fromIdentity:(id)arg3 maxSize:(unsigned long long)arg4;	// IMP=0x001000000007c6c5
- (id)initWithHighPriority:(_Bool)arg1;	// IMP=0x001000000007c653
- (id)init;	// IMP=0x001000000007c602

@end
