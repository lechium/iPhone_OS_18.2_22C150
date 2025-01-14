//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTMessageDelivery, IDSCoalesceMessageQueueManager, IDSRateLimiter, IDSSenderKeyDistributionManager, NSMutableArray, NSMutableDictionary, NSString;

@interface IDSDeliveryController : NSObject
{
    FTMessageDelivery *_messageDelivery;	// 8 = 0x8
    NSMutableDictionary *_messageQueue;	// 16 = 0x10
    NSMutableArray *_pendingOfflineMessages;	// 24 = 0x18
    IDSRateLimiter *_tokenURINegativeCache;	// 32 = 0x20
    IDSCoalesceMessageQueueManager *_coalesceMessageQueueManager;	// 40 = 0x28
    IDSSenderKeyDistributionManager *_senderKeyDistributionManager;	// 48 = 0x30
}

+ (id)tokenURINegativeCacheItemForTokenURI:(id)arg1 service:(id)arg2;	// IMP=0x0020000000203c65
+ (id)sharedInstance;	// IMP=0x001000000020358e
- (void).cxx_destruct;	// IMP=0x00200000002141b8
- (void)queueManager:(id)arg1 receivedMessagesToSend:(id)arg2 forTopic:(id)arg3 sendMode:(id)arg4;	// IMP=0x00100000002134d2
- (void)sendRTCMetricWithStartDate:(id)arg1 endDate:(id)arg2 endpointCount:(long long)arg3 usedPipeline:(_Bool)arg4 usedMMCS:(_Bool)arg5 responseCode:(long long)arg6;	// IMP=0x00100000002132d9
- (id)_constructOfflineDeliveryPipeline;	// IMP=0x0010000000213138
- (id)_constructDeliveryPipeline;	// IMP=0x0010000000212daf
- (void)_pipelineHandleMessage:(id)arg1 forURIs:(id)arg2 service:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000211ee5
- (void)_pipelineHandleMessage:(id)arg1 forURIs:(id)arg2 service:(id)arg3;	// IMP=0x001000000021171c
- (void)_pipelinesHandleMessagesToCoalesce:(id)arg1 forService:(id)arg2 sendMode:(id)arg3;	// IMP=0x0010000000210d62
- (void)sendMessageDictionary:(id)arg1 messageID:(id)arg2 dataToEncrypt:(id)arg3 withEncryptedAttributes:(id)arg4 onService:(id)arg5 wantsResponse:(_Bool)arg6 expirationDate:(id)arg7 enforceRemoteTimeouts:(_Bool)arg8 canUseLargePayload:(_Bool)arg9 sendOnePerToken:(_Bool)arg10 allowPartialSendsToSucceed:(_Bool)arg11 priority:(long long)arg12 fireAndForget:(_Bool)arg13 fromID:(id)arg14 fromShortHandle:(id)arg15 fromIdentity:(id)arg16 toURIs:(id)arg17 accessToken:(id)arg18 topic:(id)arg19 registrationProperties:(id)arg20 fakeMessage:(_Bool)arg21 alwaysSkipSelf:(_Bool)arg22 alwaysIncludeSelf:(_Bool)arg23 forceQuery:(long long)arg24 pushPriority:(id)arg25 ignoreMaxRetryCount:(_Bool)arg26 disallowRefresh:(_Bool)arg27 originalTimestamp:(id)arg28 prioritizedTokenList:(id)arg29 wantsFirewallDonation:(_Bool)arg30 destinationObject:(id)arg31 deliveryMinimumTimeDelay:(id)arg32 deliveryMinimumTime:(id)arg33 sendMode:(id)arg34 KTURIVerificationMap:(id)arg35 ackBlock:(CDUnknownBlockType)arg36 willSendBlock:(CDUnknownBlockType)arg37 sendCompletionBlock:(CDUnknownBlockType)arg38;	// IMP=0x001000000021091c
- (void)_sendErrorDictionary:(id)arg1 onService:(id)arg2 fromID:(id)arg3 fromIdentity:(id)arg4 toID:(id)arg5 toToken:(id)arg6 topic:(id)arg7 sendCompletionBlock:(CDUnknownBlockType)arg8;	// IMP=0x0010000000210567
- (void)_sendMessageDictionary:(id)arg1 lastRetryInterval:(double)arg2 dataToEncrypt:(id)arg3 withEncryptedAttributes:(id)arg4 onService:(id)arg5 wantsResponse:(_Bool)arg6 canUseLargePayload:(_Bool)arg7 sendOnePerToken:(_Bool)arg8 allowPartialSendsToSucceed:(_Bool)arg9 highPriority:(_Bool)arg10 fireAndForget:(_Bool)arg11 expirationDate:(id)arg12 enforceRemoteTimeouts:(_Bool)arg13 messageID:(id)arg14 fromID:(id)arg15 fromShortHandle:(id)arg16 fromIdentity:(id)arg17 toID:(id)arg18 toURIs:(id)arg19 accessToken:(id)arg20 topic:(id)arg21 registrationProperties:(id)arg22 fakeMessage:(_Bool)arg23 alwaysSkipSelf:(_Bool)arg24 alwaysIncludeSelf:(_Bool)arg25 forceQuery:(long long)arg26 pushPriority:(id)arg27 ignoreMaxRetryCount:(_Bool)arg28 disallowRefresh:(_Bool)arg29 originalTimestamp:(id)arg30 prioritizedTokenList:(id)arg31 wantsFirewallDonation:(_Bool)arg32 destinationObject:(id)arg33 deliveryMinimumTimeDelay:(id)arg34 deliveryMinimumTime:(id)arg35 sendMode:(id)arg36 KTURIVerificationMap:(id)arg37 ackBlock:(CDUnknownBlockType)arg38 willSendBlock:(CDUnknownBlockType)arg39 sendCompletionBlock:(CDUnknownBlockType)arg40;	// IMP=0x001000000020f6d9
- (void)sendIDSMessage:(id)arg1 service:(id)arg2 topic:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000020f4a7
- (void)_sendMessage:(id)arg1 dataToEncrypt:(id)arg2 withEncryptedAttributes:(id)arg3 onService:(id)arg4 fromID:(id)arg5 fromShortHandle:(id)arg6 fromIdentity:(id)arg7 toID:(id)arg8 toURIs:(id)arg9 canUseLargePayload:(_Bool)arg10 sendOnePerToken:(_Bool)arg11 allowPartialSendsToSucceed:(_Bool)arg12 registrationProperties:(id)arg13 fakeMessage:(_Bool)arg14 alwaysSkipSelf:(_Bool)arg15 alwaysIncludeSelf:(_Bool)arg16 forceQuery:(long long)arg17 disallowRefresh:(_Bool)arg18 prioritizedTokenList:(id)arg19 wantsFirewallDonation:(_Bool)arg20 destinationObject:(id)arg21 willSendBlock:(CDUnknownBlockType)arg22 completionBlock:(CDUnknownBlockType)arg23 firstAttemptDate:(id)arg24 ktURIVerificationMap:(id)arg25 fromCoalesceQueue:(_Bool)arg26 withQueryCompletion:(CDUnknownBlockType)arg27;	// IMP=0x001000000020bee5
- (id)_tokenURIForToken:(id)arg1 uri:(id)arg2;	// IMP=0x001000000020be96
- (void)_sendAttachmentWithGuid:(id)arg1 service:(id)arg2 topic:(id)arg3 originalCommand:(id)arg4 additionalDictionary:(id)arg5 encryptedData:(id)arg6 toToken:(id)arg7 toID:(id)arg8 fromID:(id)arg9 fromIdentity:(id)arg10 canUseLargePayload:(_Bool)arg11 expirationDate:(id)arg12 destinationObject:(id)arg13 ackBlock:(CDUnknownBlockType)arg14 completionBlock:(CDUnknownBlockType)arg15;	// IMP=0x001000000020a4cf
- (void)_sendFTFanoutMessage:(id)arg1 service:(id)arg2 fromID:(id)arg3 toURIs:(id)arg4 fromIdentity:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x0010000000208d19
- (void)_sendFTMessage:(id)arg1 service:(id)arg2 fromID:(id)arg3 toID:(id)arg4 toToken:(id)arg5 toSessionToken:(id)arg6 toURIs:(id)arg7 fromIdentity:(id)arg8 completionBlock:(CDUnknownBlockType)arg9;	// IMP=0x001000000020777c
- (void)_queueMessage:(id)arg1 service:(id)arg2 dataToEncrypt:(id)arg3 withEncryptedAttributes:(id)arg4 fromID:(id)arg5 fromShortHandle:(id)arg6 fromIdentity:(id)arg7 toID:(id)arg8 toURIs:(id)arg9 originallyToURIs:(id)arg10 ktURIVerificationMap:(id)arg11 canUseLargePayload:(_Bool)arg12 sendOnePerToken:(_Bool)arg13 registrationProperties:(id)arg14 fakeMessage:(_Bool)arg15 alwaysSkipSelf:(_Bool)arg16 alwaysIncludeSelf:(_Bool)arg17 forceQuery:(long long)arg18 disallowRefresh:(_Bool)arg19 prioritizedTokenList:(id)arg20 wantsFirewallDonation:(_Bool)arg21 destinationObject:(id)arg22 willSendBlock:(CDUnknownBlockType)arg23 completionBlock:(CDUnknownBlockType)arg24 fromCoalesceQueue:(_Bool)arg25;	// IMP=0x0010000000206df4
- (void)_discardMessage:(id)arg1 forURIs:(id)arg2 service:(id)arg3;	// IMP=0x0010000000206aae
- (void)_emptyMessagesForURIs:(id)arg1 service:(id)arg2;	// IMP=0x00100000002067c5
- (unsigned long long)_destinationCountForURIsAndTokens:(id)arg1;	// IMP=0x00100000002064ac
- (id)pinnedIdentityController;	// IMP=0x0010000000206493
- (id)encryptionController;	// IMP=0x001000000020647a
- (id)keyTransparencyVerifier;	// IMP=0x0010000000206461
- (id)peerIDManager;	// IMP=0x0010000000206448
- (long long)_maxPayloadSizeForMessage:(id)arg1;	// IMP=0x00100000002063da
- (_Bool)_forceAttachmentForMessage:(id)arg1;	// IMP=0x00100000002063a4
- (_Bool)_sendAsAttachmentForMessage:(id)arg1 payloadData:(id)arg2;	// IMP=0x0010000000205fab
- (void)_handleMessagesForURIs:(id)arg1 originalURIs:(id)arg2 service:(id)arg3 fromID:(id)arg4 fromCoalesceQueue:(_Bool)arg5 withQueryCompletion:(CDUnknownBlockType)arg6;	// IMP=0x001000000020578a
- (void)_handleAccessoryMessageForID:(id)arg1 msg:(id)arg2 service:(id)arg3 fromID:(id)arg4 fromIdentity:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x0010000000205128
- (void)_checkFastDormancy;	// IMP=0x0010000000205122
- (id)_keyForURIs:(id)arg1 service:(id)arg2;	// IMP=0x00100000002050aa
- (void)_processMessageResponse:(id)arg1 error:(id)arg2 resultCode:(long long)arg3 toURI:(id)arg4 fromURI:(id)arg5 service:(id)arg6 fromIdentity:(id)arg7;	// IMP=0x0010000000204625
- (long long)effectiveMaxPayloadSizeIfCanUseLargePayload:(_Bool)arg1;	// IMP=0x001000000020446a
- (void)handler:(id)arg1 isConnectedChanged:(_Bool)arg2;	// IMP=0x0010000000203d07
- (void)addTokenURINegativeCacheClearBlock;	// IMP=0x0010000000203a43
- (_Bool)isSupportedEngramVersionNumber:(long long)arg1;	// IMP=0x0010000000203a20
- (long long)groupCryptoMinVersionNumber;	// IMP=0x0010000000203933
- (_Bool)shouldMinimizeBagCacheTime;	// IMP=0x001000000020392b
- (id)awdLogger;	// IMP=0x0010000000203912
- (void)dealloc;	// IMP=0x0000000000203896
- (void)setSenderKeyDistributionManager:(id)arg1;	// IMP=0x0010000000203853
- (id)init;	// IMP=0x00100000002035e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

