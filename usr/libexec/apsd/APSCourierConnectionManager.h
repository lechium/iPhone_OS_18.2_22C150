//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnectionHistory, APSCourierConnection, APSCourierConnectionProtocolConnection, APSEnvironment, APSNetworkMonitor, APSNoOpPowerAssertion, APSOutgoingQueue, APSPowerAssertion, APSRateLimiter, APSReachabilityHandler, APSServerTimeTracker, CoreTelephonyClient, NSArray, NSCountedSet, NSDate, NSNumber, NSString, NSTimer, PCCarrierBundleHelper, PCPersistentTimer;
@protocol APSConnectionRetryStateManaging, APSCourierConnectionManagerDelegate;

@interface APSCourierConnectionManager : NSObject
{
    NSNumber *_tcpHandshakeTimeMilliseconds[2];	// 8 = 0x8
    NSNumber *_dnsResolutionTimeMilliseconds[2];	// 24 = 0x18
    NSNumber *_tlsHandshakeTimeMilliseconds[2];	// 40 = 0x28
    _Bool _secureHandshakeEnabled[2];	// 56 = 0x38
    NSCountedSet *_consecutiveConnectionFailureReason[2];	// 64 = 0x40
    NSNumber *_connectionTime[2];	// 80 = 0x50
    APSCourierConnectionProtocolConnection *_protocolConnections[2];	// 96 = 0x60
    NSNumber *_maxMessageSizes[2];	// 112 = 0x70
    NSNumber *_maxLargeMessageSizes[2];	// 128 = 0x80
    NSTimer *_filterMessageTimer[2];	// 144 = 0x90
    _Bool _enabled;	// 160 = 0xa0
    _Bool _enableCriticalReliability;	// 161 = 0xa1
    _Bool _pendingPostSuspensionWWANFlush;	// 162 = 0xa2
    _Bool _remainsConnectedWhenWWANSuspends;	// 163 = 0xa3
    _Bool _shouldUseInternet;	// 164 = 0xa4
    _Bool _shouldRun;	// 165 = 0xa5
    _Bool _handlingFailure;	// 166 = 0xa6
    int _interfacePreference;	// 168 = 0xa8
    int _lastPushRAT;	// 172 = 0xac
    int _lastPushLQ;	// 176 = 0xb0
    id <APSCourierConnectionManagerDelegate> _delegate;	// 184 = 0xb8
    APSCourierConnection *_courierConnection;	// 192 = 0xc0
    PCCarrierBundleHelper *_carrierBundleHelper;	// 200 = 0xc8
    unsigned long long _consecutiveConnectionFailureCount;	// 208 = 0xd0
    unsigned long long _consecutiveTLSConnectionFailureCount;	// 216 = 0xd8
    PCPersistentTimer *_delayedReconnectTimer;	// 224 = 0xe0
    NSDate *_lastConnectionAttempt;	// 232 = 0xe8
    APSNetworkMonitor *_networkMonitor;	// 240 = 0xf0
    unsigned long long _cmaType;	// 248 = 0xf8
    unsigned long long _lastIPCachingPercentage;	// 256 = 0x100
    APSEnvironment *_environment;	// 264 = 0x108
    double _lastIPCachingTTLSeconds;	// 272 = 0x110
    NSTimer *_resetInterfacePreferenceTimer;	// 280 = 0x118
    PCPersistentTimer *_pendingMessageReconnectTimer;	// 288 = 0x120
    id <APSConnectionRetryStateManaging> _connectionRetryManager;	// 296 = 0x128
    double _delayedReconnectTLSInterval;	// 304 = 0x130
    long long _delayedReconnectTLSIntervalTrigger;	// 312 = 0x138
    PCPersistentTimer *_delayedSuspendKeepAliveTimer;	// 320 = 0x140
    double _startedDarkWake;	// 328 = 0x148
    unsigned long long _findKeepAliveProxyInterfaceFailureCount;	// 336 = 0x150
    unsigned long long _forceKeepAliveProxyInterfaceFailureCount;	// 344 = 0x158
    unsigned long long _obtainKeepAliveProxyFailureCount;	// 352 = 0x160
    APSConnectionHistory *_connectionHistory;	// 360 = 0x168
    NSNumber *_serverMaxKeepAliveInterval;	// 368 = 0x170
    NSNumber *_serverExpectedKeepAliveInterval;	// 376 = 0x178
    NSNumber *_serverMinKeepAliveInterval;	// 384 = 0x180
    double _delayedSuspendKeepAliveInterval;	// 392 = 0x188
    APSRateLimiter *_suspendToggleHourlyLimiter;	// 400 = 0x190
    APSRateLimiter *_suspendToggleDailyLimiter;	// 408 = 0x198
    long long _suspendToggleHourlyLimit;	// 416 = 0x1a0
    long long _suspendToggleDailyLimit;	// 424 = 0x1a8
    double _keepAliveV2TimeDriftMaximum;	// 432 = 0x1b0
    double _lastClientRequestedKeepaliveTime;	// 440 = 0x1b8
    APSPowerAssertion *_delayedKeepAlivePowerAssertion;	// 448 = 0x1c0
    NSString *_latestGeoRegion;	// 456 = 0x1c8
    double _filterMessageTimeout;	// 464 = 0x1d0
    CoreTelephonyClient *_ctClient;	// 472 = 0x1d8
    struct __SecIdentity *_clientIdentity;	// 480 = 0x1e0
    NSTimer *_criticalFlushTimer;	// 488 = 0x1e8
    PCPersistentTimer *_criticalReliabilityTimer;	// 496 = 0x1f0
    APSPowerAssertion *_criticalReliabilityPowerAssertion;	// 504 = 0x1f8
    APSNoOpPowerAssertion *_waitForConnectionAttemptsPowerAssertion;	// 512 = 0x200
    APSReachabilityHandler *_reachabilityHandler;	// 520 = 0x208
    APSServerTimeTracker *_serverTimeTracker;	// 528 = 0x210
    APSOutgoingQueue *_outgoingSendMessageQueue;	// 536 = 0x218
    APSOutgoingQueue *_outgoingConnectMessageQueue;	// 544 = 0x220
    APSOutgoingQueue *_tokenGenerateResponseQueue;	// 552 = 0x228
    APSOutgoingQueue *_outgoingFilterQueue;	// 560 = 0x230
}

- (void).cxx_destruct;	// IMP=0x00200000000b6c77
@property(nonatomic) int lastPushLQ; // @synthesize lastPushLQ=_lastPushLQ;
@property(nonatomic) int lastPushRAT; // @synthesize lastPushRAT=_lastPushRAT;
@property(retain, nonatomic) APSOutgoingQueue *outgoingFilterQueue; // @synthesize outgoingFilterQueue=_outgoingFilterQueue;
@property(retain, nonatomic) APSOutgoingQueue *tokenGenerateResponseQueue; // @synthesize tokenGenerateResponseQueue=_tokenGenerateResponseQueue;
@property(retain, nonatomic) APSOutgoingQueue *outgoingConnectMessageQueue; // @synthesize outgoingConnectMessageQueue=_outgoingConnectMessageQueue;
@property(retain, nonatomic) APSOutgoingQueue *outgoingSendMessageQueue; // @synthesize outgoingSendMessageQueue=_outgoingSendMessageQueue;
@property(retain, nonatomic) APSServerTimeTracker *serverTimeTracker; // @synthesize serverTimeTracker=_serverTimeTracker;
@property(retain, nonatomic) APSReachabilityHandler *reachabilityHandler; // @synthesize reachabilityHandler=_reachabilityHandler;
@property(retain, nonatomic) APSNoOpPowerAssertion *waitForConnectionAttemptsPowerAssertion; // @synthesize waitForConnectionAttemptsPowerAssertion=_waitForConnectionAttemptsPowerAssertion;
@property(retain, nonatomic) APSPowerAssertion *criticalReliabilityPowerAssertion; // @synthesize criticalReliabilityPowerAssertion=_criticalReliabilityPowerAssertion;
@property(retain, nonatomic) PCPersistentTimer *criticalReliabilityTimer; // @synthesize criticalReliabilityTimer=_criticalReliabilityTimer;
@property(retain, nonatomic) NSTimer *criticalFlushTimer; // @synthesize criticalFlushTimer=_criticalFlushTimer;
@property(nonatomic) _Bool handlingFailure; // @synthesize handlingFailure=_handlingFailure;
@property(nonatomic) _Bool shouldRun; // @synthesize shouldRun=_shouldRun;
@property(nonatomic) _Bool shouldUseInternet; // @synthesize shouldUseInternet=_shouldUseInternet;
@property(nonatomic) struct __SecIdentity *clientIdentity; // @synthesize clientIdentity=_clientIdentity;
@property(retain, nonatomic) CoreTelephonyClient *ctClient; // @synthesize ctClient=_ctClient;
@property(nonatomic) double filterMessageTimeout; // @synthesize filterMessageTimeout=_filterMessageTimeout;
@property(retain, nonatomic) NSString *latestGeoRegion; // @synthesize latestGeoRegion=_latestGeoRegion;
@property(retain, nonatomic) APSPowerAssertion *delayedKeepAlivePowerAssertion; // @synthesize delayedKeepAlivePowerAssertion=_delayedKeepAlivePowerAssertion;
@property(nonatomic) double lastClientRequestedKeepaliveTime; // @synthesize lastClientRequestedKeepaliveTime=_lastClientRequestedKeepaliveTime;
@property(nonatomic) double keepAliveV2TimeDriftMaximum; // @synthesize keepAliveV2TimeDriftMaximum=_keepAliveV2TimeDriftMaximum;
@property(nonatomic) long long suspendToggleDailyLimit; // @synthesize suspendToggleDailyLimit=_suspendToggleDailyLimit;
@property(nonatomic) long long suspendToggleHourlyLimit; // @synthesize suspendToggleHourlyLimit=_suspendToggleHourlyLimit;
@property(retain, nonatomic) APSRateLimiter *suspendToggleDailyLimiter; // @synthesize suspendToggleDailyLimiter=_suspendToggleDailyLimiter;
@property(retain, nonatomic) APSRateLimiter *suspendToggleHourlyLimiter; // @synthesize suspendToggleHourlyLimiter=_suspendToggleHourlyLimiter;
@property(nonatomic) double delayedSuspendKeepAliveInterval; // @synthesize delayedSuspendKeepAliveInterval=_delayedSuspendKeepAliveInterval;
@property(retain, nonatomic) NSNumber *serverMinKeepAliveInterval; // @synthesize serverMinKeepAliveInterval=_serverMinKeepAliveInterval;
@property(retain, nonatomic) NSNumber *serverExpectedKeepAliveInterval; // @synthesize serverExpectedKeepAliveInterval=_serverExpectedKeepAliveInterval;
@property(retain, nonatomic) NSNumber *serverMaxKeepAliveInterval; // @synthesize serverMaxKeepAliveInterval=_serverMaxKeepAliveInterval;
@property(retain, nonatomic) APSConnectionHistory *connectionHistory; // @synthesize connectionHistory=_connectionHistory;
@property(nonatomic) unsigned long long obtainKeepAliveProxyFailureCount; // @synthesize obtainKeepAliveProxyFailureCount=_obtainKeepAliveProxyFailureCount;
@property(nonatomic) unsigned long long forceKeepAliveProxyInterfaceFailureCount; // @synthesize forceKeepAliveProxyInterfaceFailureCount=_forceKeepAliveProxyInterfaceFailureCount;
@property(nonatomic) unsigned long long findKeepAliveProxyInterfaceFailureCount; // @synthesize findKeepAliveProxyInterfaceFailureCount=_findKeepAliveProxyInterfaceFailureCount;
@property(nonatomic) double startedDarkWake; // @synthesize startedDarkWake=_startedDarkWake;
@property(nonatomic) _Bool remainsConnectedWhenWWANSuspends; // @synthesize remainsConnectedWhenWWANSuspends=_remainsConnectedWhenWWANSuspends;
@property(nonatomic) _Bool pendingPostSuspensionWWANFlush; // @synthesize pendingPostSuspensionWWANFlush=_pendingPostSuspensionWWANFlush;
@property(retain, nonatomic) PCPersistentTimer *delayedSuspendKeepAliveTimer; // @synthesize delayedSuspendKeepAliveTimer=_delayedSuspendKeepAliveTimer;
@property(nonatomic) long long delayedReconnectTLSIntervalTrigger; // @synthesize delayedReconnectTLSIntervalTrigger=_delayedReconnectTLSIntervalTrigger;
@property(nonatomic) double delayedReconnectTLSInterval; // @synthesize delayedReconnectTLSInterval=_delayedReconnectTLSInterval;
@property(retain, nonatomic) id <APSConnectionRetryStateManaging> connectionRetryManager; // @synthesize connectionRetryManager=_connectionRetryManager;
@property(retain, nonatomic) PCPersistentTimer *pendingMessageReconnectTimer; // @synthesize pendingMessageReconnectTimer=_pendingMessageReconnectTimer;
@property(nonatomic) _Bool enableCriticalReliability; // @synthesize enableCriticalReliability=_enableCriticalReliability;
@property(retain, nonatomic) NSTimer *resetInterfacePreferenceTimer; // @synthesize resetInterfacePreferenceTimer=_resetInterfacePreferenceTimer;
@property(nonatomic) double lastIPCachingTTLSeconds; // @synthesize lastIPCachingTTLSeconds=_lastIPCachingTTLSeconds;
@property(nonatomic) int interfacePreference; // @synthesize interfacePreference=_interfacePreference;
@property(retain, nonatomic) APSEnvironment *environment; // @synthesize environment=_environment;
@property(nonatomic) unsigned long long lastIPCachingPercentage; // @synthesize lastIPCachingPercentage=_lastIPCachingPercentage;
@property(nonatomic) unsigned long long cmaType; // @synthesize cmaType=_cmaType;
@property(retain, nonatomic) APSNetworkMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(retain, nonatomic) NSDate *lastConnectionAttempt; // @synthesize lastConnectionAttempt=_lastConnectionAttempt;
@property(retain, nonatomic) PCPersistentTimer *delayedReconnectTimer; // @synthesize delayedReconnectTimer=_delayedReconnectTimer;
@property(nonatomic) unsigned long long consecutiveTLSConnectionFailureCount; // @synthesize consecutiveTLSConnectionFailureCount=_consecutiveTLSConnectionFailureCount;
@property(nonatomic) unsigned long long consecutiveConnectionFailureCount; // @synthesize consecutiveConnectionFailureCount=_consecutiveConnectionFailureCount;
@property(retain, nonatomic) PCCarrierBundleHelper *carrierBundleHelper; // @synthesize carrierBundleHelper=_carrierBundleHelper;
@property(retain, nonatomic) APSCourierConnection *courierConnection; // @synthesize courierConnection=_courierConnection;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) id <APSCourierConnectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleReachabilityChange:(unsigned int)arg1;	// IMP=0x00100000000b65ed
- (long long)interfaceConstraintForInterface:(long long)arg1;	// IMP=0x00100000000b65ca
- (void)setMaxLargeMessageSize:(id)arg1 forInterface:(long long)arg2;	// IMP=0x00100000000b6580
- (id)maxLargeMessageSizeForInterface:(long long)arg1;	// IMP=0x00100000000b6511
- (void)setMaxMessageSize:(id)arg1 forInterface:(long long)arg2;	// IMP=0x00100000000b64ca
- (id)maxMessageSizeForInterface:(long long)arg1;	// IMP=0x00100000000b645e
- (void)setConnectionTime:(id)arg1 forInterface:(long long)arg2;	// IMP=0x00100000000b6417
- (id)connectionTimeForInterface:(long long)arg1;	// IMP=0x00100000000b63f2
- (void)appendPrettyStatusToStatusPrinter:(id)arg1;	// IMP=0x00100000000b5e68
- (id)JSONDebugState;	// IMP=0x00100000000b593b
- (id)aps_prettyDescription;	// IMP=0x00100000000b5575
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (id)description;	// IMP=0x00100000000b538e
- (void)_switchToKeepAliveProxyInterface;	// IMP=0x00100000000b52a3
- (_Bool)_neededToSwitchToKeepAliveProxyInterface;	// IMP=0x00100000000b5154
- (void)_useInteractivePowerAssertionIfNeededWithReason:(id)arg1;	// IMP=0x00100000000b4ff7
- (void)_resetInterfacePreferenceTimerFired:(id)arg1;	// IMP=0x00100000000b4e52
- (void)_clearResetInterfacePreferenceTimer;	// IMP=0x00100000000b4e0b
- (void)_startResetInterfacePreferenceTimer;	// IMP=0x00100000000b4cea
- (void)prepareForFullWake;	// IMP=0x00100000000b4b00
- (void)prepareForDarkWake;	// IMP=0x00100000000b49b9
- (void)prepareForSleep;	// IMP=0x00100000000b4944
- (void)sendMessageTransportAcknowledgeMessageOnInterface:(long long)arg1;	// IMP=0x00100000000b48f8
@property(readonly, nonatomic) _Bool isKeepAliveProxyConfiguredOnAnyConnection;
- (_Bool)isPiggybacking;	// IMP=0x00100000000b4870
- (void)notePush;	// IMP=0x00100000000b486a
- (void)_criticalReliabilityTimerFired;	// IMP=0x00100000000b47bb
- (void)setKeepAliveConfiguration:(unsigned long long)arg1;	// IMP=0x00100000000b476f
- (void)refreshCriticalReliabilityTimerWithShortKeepAlive:(_Bool)arg1;	// IMP=0x00100000000b44f8
- (void)refreshCriticalReliability;	// IMP=0x00100000000b44e1
- (void)triggerCriticalReliability;	// IMP=0x00100000000b431c
- (void)recalculateCriticalReliability;	// IMP=0x00100000000b4091
- (void)stopManagerOnInterface:(long long)arg1;	// IMP=0x00100000000b4045
- (void)setServerSupportsDualMode:(_Bool)arg1;	// IMP=0x00100000000b3ffb
@property(readonly, nonatomic) _Bool allowedToHaveMultipleOpenInterfaces;
- (unsigned char)redirectCount;	// IMP=0x00100000000b3f9d
- (void)setKeepAliveV2Supported:(_Bool)arg1 onInterface:(long long)arg2;	// IMP=0x00100000000b3f4c
- (_Bool)keepAliveV2SupportedOnInterface:(long long)arg1;	// IMP=0x00100000000b3efb
- (_Bool)isKeepAliveProxyConfiguredOnAnyInterface;	// IMP=0x00100000000b3eb7
- (_Bool)isKeepAliveProxyConfiguredOnInterface:(long long)arg1;	// IMP=0x00100000000b3e66
- (void)sendConnectMessageWithToken:(id)arg1 state:(int)arg2 presenceFlags:(unsigned int)arg3 metadata:(id)arg4 certificates:(id)arg5 nonce:(id)arg6 signature:(id)arg7 hostCertificateInfo:(id)arg8 redirectCount:(unsigned char)arg9 withCompletion:(CDUnknownBlockType)arg10 onInterface:(long long)arg11;	// IMP=0x00100000000b3bfd
- (void)sendConnectMessageWithToken:(id)arg1 interface:(long long)arg2 activeInterval:(unsigned int)arg3 presenceFlags:(unsigned int)arg4 metadata:(id)arg5 certificates:(id)arg6 nonce:(id)arg7 signature:(id)arg8 hostCertificateInfo:(id)arg9 redirectCount:(unsigned char)arg10 tcpHandshakeTimeMilliseconds:(double)arg11 dnsResolveTimeMilliseconds:(double)arg12 tlsHandshakeTimeMilliseconds:(double)arg13 consecutiveConnectionFailureReason:(id)arg14 withCompletion:(CDUnknownBlockType)arg15 onInterface:(long long)arg16;	// IMP=0x00100000000b387d
- (void)sendConnectMessageWithToken:(id)arg1 state:(int)arg2 interface:(long long)arg3 activeInterval:(unsigned int)arg4 presenceFlags:(unsigned int)arg5 metadata:(id)arg6 certificates:(id)arg7 nonce:(id)arg8 signature:(id)arg9 redirectCount:(unsigned char)arg10 withCompletion:(CDUnknownBlockType)arg11 onInterface:(long long)arg12;	// IMP=0x00100000000b359c
- (void)sendFilterMessageWithEnabledHashes:(id)arg1 ignoredHashes:(id)arg2 opportunisticHashes:(id)arg3 nonWakingHashes:(id)arg4 pausedHashes:(id)arg5 token:(id)arg6 version:(unsigned long long)arg7 expectsResponse:(_Bool)arg8 onInterface:(long long)arg9 withCompletion:(CDUnknownBlockType)arg10;	// IMP=0x00100000000b3280
- (void)sendTaskControlMessageWithMetadata:(id)arg1 messageId:(unsigned long long)arg2 onInterface:(long long)arg3;	// IMP=0x00100000000b3206
@property(readonly, nonatomic) _Bool isAttemptingToReconnect;
- (_Bool)sendMessageWithTopicHash:(id)arg1 identifier:(unsigned long long)arg2 payload:(id)arg3 token:(id)arg4 isPlistFormat:(_Bool)arg5 lastRTT:(id)arg6 onInterface:(long long)arg7 withCompletion:(CDUnknownBlockType)arg8;	// IMP=0x00100000000b2ff4
- (double)currentKeepAliveIntervalOnInterface:(long long)arg1;	// IMP=0x00100000000b2f9d
- (void)sendMessageAcknowledgeMessageWithResponse:(long long)arg1 messageId:(id)arg2 token:(id)arg3 onInterface:(long long)arg4;	// IMP=0x00100000000b2f0d
- (_Bool)generationMatches:(unsigned long long)arg1 forInterface:(long long)arg2;	// IMP=0x00100000000b2eb7
- (void)sendActivityTrackingRequestWithMessageID:(unsigned long long)arg1 pushToken:(id)arg2 salt:(unsigned long long)arg3 trackingFlag:(unsigned int)arg4 timestamp:(unsigned long long)arg5 onInterface:(long long)arg6;	// IMP=0x00100000000b2e24
- (void)sendPubSubChannelListWithMetadata:(id)arg1 baseToken:(id)arg2 messageID:(unsigned int)arg3 onInterface:(long long)arg4;	// IMP=0x00100000000b2d94
- (void)sendTokenGenerateMessageWithTopicHash:(id)arg1 baseToken:(id)arg2 appId:(unsigned short)arg3 expirationTTL:(unsigned int)arg4 vapidPublicKeyHash:(id)arg5 type:(long long)arg6 withCompletion:(CDUnknownBlockType)arg7 onInterface:(long long)arg8;	// IMP=0x00100000000b2bb7
- (void)sendMessageTracingAckWithTopicHash:(id)arg1 tracingUUID:(id)arg2 status:(int)arg3 token:(id)arg4 onInterface:(long long)arg5;	// IMP=0x00100000000b2b07
- (id)_sendOutgoingMessage:(id)arg1 topicHash:(id)arg2 lastRTT:(id)arg3 token:(id)arg4 onInterface:(long long)arg5 ultraConstrainedAllowed:(_Bool)arg6 withCompletion:(CDUnknownBlockType)arg7;	// IMP=0x00100000000b2068
- (void)sendSetActiveState:(_Bool)arg1 forInterval:(unsigned int)arg2 onInterface:(long long)arg3;	// IMP=0x00100000000b2008
- (id)serverHostnameForInterface:(long long)arg1;	// IMP=0x00100000000b1fa9
- (id)serverIPAddressForInterface:(long long)arg1;	// IMP=0x00100000000b1f4a
- (void)holdPowerAssertionUntilStreamsQuiesce;	// IMP=0x00100000000b1f0d
- (_Bool)hasOpenConnectionOnInterface:(long long)arg1;	// IMP=0x00100000000b1ebc
- (_Bool)isSuspendedOnInterface:(long long)arg1;	// IMP=0x00100000000b1e6b
- (_Bool)isConnectedOnInterface:(long long)arg1;	// IMP=0x00100000000b1e1a
- (id)tcpInfoDescription;	// IMP=0x00100000000b1dca
- (_Bool)didPushCauseWake;	// IMP=0x00100000000b1d86
- (id)currentKeepAliveStateOnInterface:(long long)arg1;	// IMP=0x00100000000b1d27
@property(readonly, nonatomic) unsigned long long countOpenConnections;
@property(readonly, nonatomic) unsigned long long countConnectedInterfaces;
- (_Bool)hasOpenConnection;	// IMP=0x00100000000b1c5b
- (long long)preferredInterface;	// IMP=0x00100000000b1c17
- (_Bool)isConnected;	// IMP=0x00100000000b1bd3
- (void)sendFlushOnAllConnectionshWithPaddingLength:(unsigned long long)arg1;	// IMP=0x00100000000b1bc1
- (void)handleConnectionFailureOnInterface:(long long)arg1 forceDelayedReconnect:(_Bool)arg2 withReason:(unsigned int)arg3;	// IMP=0x00100000000b1baf
- (void)performKeepAliveOnInterface:(long long)arg1;	// IMP=0x00100000000b1aa4
- (void)adjustConnectionsIfNeeded;	// IMP=0x00100000000b19ce
- (void)forceAdjustConnections;	// IMP=0x00100000000b19a0
- (void)disconnectAllStreamsWithReason:(unsigned int)arg1;	// IMP=0x00100000000b198e
- (void)disconnectStreamForInterface:(long long)arg1 withReason:(unsigned int)arg2;	// IMP=0x00100000000b197c
- (id)tcpHandshakeTimeMillisecondsOnInterface:(long long)arg1;	// IMP=0x00100000000b1891
- (id)tlsHandshakeTimeMillisecondsOnInterface:(long long)arg1;	// IMP=0x00100000000b17a6
- (id)dnsResolutionTimeMillisecondsOnInterface:(long long)arg1;	// IMP=0x00100000000b16bb
@property(readonly, nonatomic) unsigned long long serverTimeInNanoSeconds;
- (void)_dumpLogsForInconsistencyIfNecessary;	// IMP=0x00100000000b1671
- (void)interfaceRadioHotnessChanged:(id)arg1;	// IMP=0x00100000000b14b7
- (void)interfaceReachabilityChanged:(id)arg1;	// IMP=0x00100000000b14a5
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;	// IMP=0x00100000000b1333
- (void)networkMonitor:(id)arg1 enableWiFiAssertionForPiggybackConnection:(_Bool)arg2;	// IMP=0x00100000000b125a
- (void)networkMonitorWiFiBecameAssociated:(id)arg1;	// IMP=0x00100000000b11ad
- (void)networkMonitor:(id)arg1 evaluateDualModeState:(_Bool)arg2;	// IMP=0x00100000000b1038
- (void)updateKeepAliveInterval:(double)arg1;	// IMP=0x00100000000b0f77
- (void)_submitKeepAliveSucceededAWDonInterface:(long long)arg1;	// IMP=0x00100000000b0de7
- (void)_handleKeepAliveResponseMessage:(id)arg1 onInterface:(long long)arg2 didWake:(_Bool)arg3;	// IMP=0x00100000000b0664
- (void)_resetKeepAliveOnInterface:(long long)arg1;	// IMP=0x00100000000b05e8
- (void)_requestKeepAlive:(_Bool)arg1 orConnection:(_Bool)arg2;	// IMP=0x00100000000b05cd
- (void);	// IMP=0x00100000000b0590
- (void)requestConnectionIfNeeded;	// IMP=0x00100000000b04dc
- (void)_requestKeepAlive:(_Bool)arg1 orConnection:(_Bool)arg2 shortInterval:(_Bool)arg3 onInterface:(long long)arg4;	// IMP=0x00100000000b0152
- (void)_startKeepAliveResponseTimerOnInterface:(long long)arg1 shortInterval:(_Bool)arg2;	// IMP=0x00100000000b010e
- (void)_performKeepAliveOnInterface:(long long)arg1 shortInterval:(_Bool)arg2 withAction:(int)arg3;	// IMP=0x00100000000afa41
- (void)_handleDelayKeepAliveCancelMessageOnInterface:(long long)arg1;	// IMP=0x00100000000af927
- (void)__delayedPerformKeepAliveOnInterface:(id)arg1;	// IMP=0x00100000000af8ae
- (void)_delayedPerformKeepAliveOnInterface:(long long)arg1 withDelay:(double)arg2;	// IMP=0x00100000000af5f0
- (void)_delayedPerformKeepAliveOnInterface:(long long)arg1;	// IMP=0x00100000000af5db
- (void)_handleFlushMessage:(id)arg1 onInterface:(long long)arg2;	// IMP=0x00100000000af40a
- (void)_performFlushWithPaddingLength:(unsigned long long)arg1;	// IMP=0x00100000000af21b
- (void)_invokeInFailureHandlingContext:(CDUnknownBlockType)arg1;	// IMP=0x00100000000af1be
- (void)_resetServerKeepAliveStatsOnInterface:(long long)arg1;	// IMP=0x00100000000af121
- (void)_handleConnectionAfterSuspensionRecoveryOnInterface:(long long)arg1 withKeepAlive:(_Bool)arg2;	// IMP=0x00100000000aef6b
- (void)_delayedSuspendKeepAliveTimerFired:(id)arg1;	// IMP=0x00100000000aee4f
- (void)_handleConnectionRecoverFromSuspensionOnInterface:(long long)arg1;	// IMP=0x00100000000aeb1d
- (void)_handleConnectionSuspendedOnInterface:(long long)arg1;	// IMP=0x00100000000ae9eb
- (void)setConnectionStatistics:(id)arg1 onInterface:(long long)arg2;	// IMP=0x00100000000ae7dc
- (void)_submitKeepAliveFailedAWDonInterface:(long long)arg1;	// IMP=0x00100000000ae692
- (_Bool)_handleRedirectMessage:(id)arg1 onInterface:(long long)arg2;	// IMP=0x00100000000ae46a
- (void)clearConsecutiveConnectionFailureReasonOnInterface:(long long)arg1;	// IMP=0x00100000000ae371
- (void)setConnectionFailure:(id)arg1 onInterface:(long long)arg2;	// IMP=0x00100000000ae202
- (id)consecutiveConnectionFailureReasonOnInterface:(long long)arg1;	// IMP=0x00100000000ae117
- (unsigned long long)courierConnection:(id)arg1 dataReceived:(id)arg2 onInterface:(long long)arg3 withGeneration:(unsigned long long)arg4 isWakingMessage:(_Bool)arg5;	// IMP=0x00100000000ac119
- (void)_handleKeepAliveAckMessage:(id)arg1 onInterface:(long long)arg2;	// IMP=0x00100000000abe58
- (void)courierConnection:(id)arg1 failedToFindKeepAliveProxyOnInterface:(long long)arg2;	// IMP=0x00100000000abe4b
- (void)courierConnection:(id)arg1 failedToObtainKeepAliveProxyOnInterface:(long long)arg2;	// IMP=0x00100000000abe3e
- (void)courierConnection:(id)arg1 failedToForceKeepAliveProxyOnInterface:(long long)arg2;	// IMP=0x00100000000abe31
- (void)courierConnection:(id)arg1 connectionEstablishTimerFiredOnInterface:(long long)arg2;	// IMP=0x00100000000abb3a
- (void)courierConnection:(id)arg1 keepAliveResponseTimerFiredOnInterface:(long long)arg2;	// IMP=0x00100000000ab7e3
- (void)courierConnectionHasConnected:(id)arg1 context:(id)arg2 enabledPackedFormat:(_Bool)arg3 secureHandshakeEnabled:(_Bool)arg4 onInterface:(long long)arg5;	// IMP=0x00100000000ab4c5
- (void)courierConnection:(id)arg1 hasDeterminedServerHostname:(id)arg2 onInterface:(long long)arg3;	// IMP=0x00100000000ab3a1
- (void)courierConnection:(id)arg1 receivedServerBag:(id)arg2;	// IMP=0x00100000000aa57f
@property(readonly, nonatomic) double currentKeepAliveInterval;
- (void)courierConnection:(id)arg1 errorOccured:(id)arg2 onInterface:(long long)arg3;	// IMP=0x00100000000aa0a8
- (void)courierConnection:(id)arg1 aboutToWriteDataOnConnectedInterface:(long long)arg2;	// IMP=0x00100000000a9fe8
- (void)courierConnection:(id)arg1 parserErrorMessage:(id)arg2 OnInterface:(long long)arg3;	// IMP=0x00100000000a9e93
- (void)courierConnection:(id)arg1 streamEndedOnInterface:(long long)arg2 withReason:(unsigned int)arg3;	// IMP=0x00100000000a9b80
- (void)courierConnection:(id)arg1 disconnectStreamOnInterface:(long long)arg2 withReason:(unsigned int)arg3;	// IMP=0x00100000000a9928
- (void)courierConnection:(id)arg1 connectionManager:(id)arg2 handleEvent:(int)arg3 context:(id)arg4 onInterface:(long long)arg5;	// IMP=0x00100000000a8a9f
- (void)carrierBundleDidChange;	// IMP=0x00100000000a88f2
- (id)protocolConnectionForInterface:(long long)arg1;	// IMP=0x00100000000a88cd
- (void)clearProtocolConnectionForInterface:(long long)arg1;	// IMP=0x00100000000a88a9
@property(readonly, nonatomic) NSArray *activeProtocolConnections;
@property(readonly, nonatomic) NSString *currentLinkQualityString;
- (void)clearDNSResolutionAndTLSHandshakeOnInterface:(long long)arg1;	// IMP=0x00100000000a867c
- (id)dailySuspendToggleRateLimiter;	// IMP=0x00100000000a8605
- (id)hourlySuspendToggleRateLimiter;	// IMP=0x00100000000a858e
- (_Bool)_isInternetReachableOnInterface:(long long)arg1;	// IMP=0x00100000000a8533
- (_Bool)useServerKeepAliveStatsOnInterface:(long long)arg1;	// IMP=0x00100000000a84db
- (unsigned int)_keepAliveVersionForInterface:(long long)arg1;	// IMP=0x00100000000a84bc
- (id)copyOperatorName;	// IMP=0x00100000000a8497
- (_Bool)_useShortKeepAliveInterval;	// IMP=0x00100000000a848f
- (_Bool)isCellularWatch;	// IMP=0x00100000000a8416
- (int)_linkQualityForInterface:(long long)arg1;	// IMP=0x00100000000a83c0
- (_Bool)_requestKeepAliveProxy;	// IMP=0x00100000000a83b8
- (_Bool)_isWiFiLinkQualityBetter;	// IMP=0x00100000000a82ba
- (id)pcPersistentInterfaceManager;	// IMP=0x00100000000a82a1
- (id)pcInterfaceMonitorOnInterface:(long long)arg1;	// IMP=0x00100000000a825d
- (id)pcInterfaceMonitorNonCellular;	// IMP=0x00100000000a8246
- (id)pcInterfaceMonitorWWAN;	// IMP=0x00100000000a8232
@property(readonly, nonatomic) NSString *ifname;
- (void)_filterMessageTimeoutTimerFired:(id)arg1;	// IMP=0x00100000000a817a
- (void)_clearFilterMessageTimerOnInterface:(long long)arg1;	// IMP=0x00100000000a812a
- (void)_startFilterMessageTimerOnInterface:(long long)arg1;	// IMP=0x00100000000a8071
- (void)_clearKeepAliveResponseTimerOnInterface:(long long)arg1;	// IMP=0x00100000000a8058
- (void)_clearConnectionEstablishTimerOnInterface:(long long)arg1;	// IMP=0x00100000000a803f
- (void)_startConnectionEstablishTimerOnInterface:(long long)arg1;	// IMP=0x00100000000a7ffe
- (_Bool)_connectStreamWithInterfacePreference:(long long)arg1;	// IMP=0x00100000000a66b3
- (void)_clearPostSuspensionFlushState;	// IMP=0x00100000000a6670
- (void)_useCachedLastIPIfPossible:(long long)arg1;	// IMP=0x00100000000a637e
- (void)_cacheIPAddress:(id)arg1 onInterface:(long long)arg2;	// IMP=0x00100000000a60ab
- (void)_disconnectStreamForInterface:(long long)arg1 withReason:(unsigned int)arg2;	// IMP=0x00100000000a5b6f
- (void)_pendingMessageReconnectTimerFired;	// IMP=0x00100000000a5a7c
- (void)_clearDelayedReconnectTimer;	// IMP=0x00100000000a59ae
- (void)_delayedReconnectTimerFired;	// IMP=0x00100000000a58bb
- (void)_handleConnectionFailureOnInterface:(long long)arg1 forceDelayedReconnect:(_Bool)arg2 withReason:(unsigned int)arg3;	// IMP=0x00100000000a4c62
- (void)_disconnectAllStreamsWithReason:(unsigned int)arg1;	// IMP=0x00100000000a4c16
- (_Bool)_adjustConnectionWithInterfacePreference:(long long)arg1;	// IMP=0x00100000000a47ca
- (void)_adjustConnection;	// IMP=0x00100000000a47b3
- (void)markInitiallyConnectedOnInterface:(long long)arg1;	// IMP=0x00100000000a4265
- (void)dealloc;	// IMP=0x00100000000a41e3
- (id)initWithEnvironment:(id)arg1 courierConnection:(id)arg2 carrierBundleHelper:(id)arg3 networkMonitor:(id)arg4 connectionRetryManager:(id)arg5 delegate:(id)arg6;	// IMP=0x00100000000a3c6f
- (id)initWithEnvironment:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000000a3b68

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

