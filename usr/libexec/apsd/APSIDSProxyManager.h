//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSMutableDictionary, NSString, PCPersistentTimer;
@protocol APSIDSProxyManagerDelegate, APSIDSService;

@interface APSIDSProxyManager : NSObject
{
    id <APSIDSService> _idsService;	// 8 = 0x8
    id <APSIDSProxyManagerDelegate> _delegate;	// 16 = 0x10
    NSMapTable *_environmentToListener;	// 24 = 0x18
    _Bool _nearby;	// 32 = 0x20
    NSString *_recentDaemonAliveGuid;	// 40 = 0x28
    NSMutableDictionary *_apsOutgoingMessageMap;	// 48 = 0x30
    NSMutableArray *_deviceNotFoundMessageQueue;	// 56 = 0x38
    PCPersistentTimer *_deviceNotFoundTimer;	// 64 = 0x40
}

+ (_Bool)shouldAssertWiFi;	// IMP=0x0020000000095d94
+ (id)_idsSendQueue;	// IMP=0x0010000000090ad4
- (void).cxx_destruct;	// IMP=0x0020000000096aa8
@property(retain, nonatomic) PCPersistentTimer *deviceNotFoundTimer; // @synthesize deviceNotFoundTimer=_deviceNotFoundTimer;
@property(retain, nonatomic) NSMutableArray *deviceNotFoundMessageQueue; // @synthesize deviceNotFoundMessageQueue=_deviceNotFoundMessageQueue;
@property(copy, nonatomic) NSString *recentDaemonAliveGuid; // @synthesize recentDaemonAliveGuid=_recentDaemonAliveGuid;
@property(readonly, nonatomic, getter=isNearby) _Bool nearby; // @synthesize nearby=_nearby;
@property(nonatomic) __weak id <APSIDSProxyManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000968f8
- (void)service:(id)arg1 linkedDevicesChanged:(id)arg2;	// IMP=0x0010000000096849
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x00100000000967e4
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0010000000096725
- (void)_updateTimerIfNecessaryWithDevices:(id)arg1;	// IMP=0x001000000009671f
- (void)_retrieveAllDevicesAndDo:(CDUnknownBlockType)arg1;	// IMP=0x00100000000965a5
- (void)_onQueue_checkNearbyDevices:(id)arg1;	// IMP=0x0010000000096074
- (void)_checkNearbyDevices:(id)arg1;	// IMP=0x0010000000095f97
- (void)_assertWiFiIfPossible;	// IMP=0x0010000000095f15
- (void)__assertWiFiIfPossible;	// IMP=0x0010000000095d9c
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000009416f
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x0010000000093f1c
- (void)removeAllPendingAPSMessages;	// IMP=0x0010000000093e82
- (void)sendProxyIsConnected:(_Bool)arg1 guid:(id)arg2 environmentName:(id)arg3;	// IMP=0x0010000000093d7b
- (void)sendAppTokenGenerateResponse:(id)arg1 error:(id)arg2 guid:(id)arg3 environmentName:(id)arg4;	// IMP=0x0010000000093c02
- (void)sendExpiredNonceWithServerTime:(id)arg1 shouldRollToken:(_Bool)arg2 guid:(id)arg3 environmentName:(id)arg4;	// IMP=0x0010000000093aad
- (void)sendReversePushResponse:(long long)arg1 messageGUID:(id)arg2 messageId:(unsigned long long)arg3 guid:(id)arg4 environmentName:(id)arg5;	// IMP=0x001000000009394b
- (void)sendMessage:(id)arg1 guid:(id)arg2 environmentName:(id)arg3;	// IMP=0x0010000000093845
- (void)sendTokenGenerateMessageWithTopicHash:(id)arg1 baseToken:(id)arg2 appId:(unsigned short)arg3 expirationTTL:(unsigned int)arg4 vapidPublicKeyHash:(id)arg5 type:(long long)arg6 guid:(id)arg7 environmentName:(id)arg8;	// IMP=0x0010000000093547
- (void)sendMessageTracingStatus:(int)arg1 topic:(id)arg2 tracingUUID:(id)arg3 token:(id)arg4 guid:(id)arg5 environmentName:(id)arg6;	// IMP=0x00100000000933d9
- (void)sendResponse:(long long)arg1 messageId:(id)arg2 token:(id)arg3 connectionType:(long long)arg4 generation:(unsigned long long)arg5 guid:(id)arg6 environmentName:(id)arg7;	// IMP=0x0010000000093208
- (void)sendInactiveWithEnvironmentName:(id)arg1 guid:(id)arg2;	// IMP=0x0010000000093183
- (void)sendPubSubChannelListRequest:(long long)arg1 environmentName:(id)arg2 guid:(id)arg3;	// IMP=0x0010000000093027
- (void)sendPubSubUpdateMessage:(id)arg1 connectionType:(long long)arg2 environmentName:(id)arg3 guid:(id)arg4;	// IMP=0x0010000000092ea0
- (void)sendPubSubChannelListResponse:(id)arg1 environmentName:(id)arg2 guid:(id)arg3;	// IMP=0x0010000000092d58
- (void)sendPubSubChannelList:(id)arg1 messageID:(unsigned int)arg2 token:(id)arg3 connectionType:(long long)arg4 environmentName:(id)arg5 guid:(id)arg6;	// IMP=0x0010000000092b71
- (void)sendFilterWithEnvironmentName:(id)arg1 guid:(id)arg2 enabledTopics:(id)arg3 ignoredTopics:(id)arg4 opportunisticTopics:(id)arg5 nonWakingTopics:(id)arg6 topicSalts:(id)arg7;	// IMP=0x00100000000928c1
- (void)sendPresenceWithEnvironmentName:(id)arg1 guid:(id)arg2 token:(id)arg3 hwVersion:(id)arg4 swVersion:(id)arg5 swBuild:(id)arg6 certificate:(id)arg7 nonce:(id)arg8 signature:(id)arg9 hostCertificateInfo:(id)arg10;	// IMP=0x00100000000925ef
- (void)sendReceivedPush:(id)arg1 forConnectionType:(long long)arg2 generation:(unsigned long long)arg3 guid:(id)arg4 environmentName:(id)arg5;	// IMP=0x0000000000092400
- (void)sendLargeMessageSize:(unsigned long long)arg1 guid:(id)arg2 environmentName:(id)arg3;	// IMP=0x0010000000092282
- (void)sendMessageSize:(unsigned long long)arg1 guid:(id)arg2 environmentName:(id)arg3;	// IMP=0x0010000000092104
- (void)sendPushToken:(id)arg1 guid:(id)arg2 environmentName:(id)arg3;	// IMP=0x0010000000091fa7
- (void)_sendDaemonAliveMessage;	// IMP=0x0010000000091ed7
- (void)_flushDeviceNotFoundMessageQueue;	// IMP=0x0010000000091be3
- (void)_deviceNotFoundTimerFired;	// IMP=0x0010000000091b00
- (void)_scheduleDeviceNotFoundTimer;	// IMP=0x00100000000919a2
- (void)sendProxyMessage:(id)arg1 forAPSMessage:(id)arg2;	// IMP=0x00100000000911b7
- (void)sendProxyMessage:(id)arg1;	// IMP=0x00100000000911a3
- (id)_recipientDevice;	// IMP=0x0010000000091032
- (void)removeListener:(id)arg1 environment:(id)arg2;	// IMP=0x0010000000090f15
- (void)setListener:(id)arg1 environment:(id)arg2;	// IMP=0x0010000000090e56
@property(readonly, nonatomic) _Bool canUseProxy;
- (void)dealloc;	// IMP=0x0010000000090d6a
- (id)init;	// IMP=0x0010000000090b2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

