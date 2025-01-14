//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSEnvironment, APSPowerAssertion, MISSING_TYPE, NSMutableDictionary, NSTimer;
@protocol APSOutgoingMessageQueueDelegate;

@interface APSOutgoingMessageQueue : NSObject
{
    id <APSOutgoingMessageQueueDelegate> _delegate;	// 8 = 0x8
    APSEnvironment *_environment;	// 16 = 0x10
    MISSING_TYPE *_queue;	// 24 = 0x18
    NSTimer *_timer;	// 32 = 0x20
    double _criticalMessageTimeout;	// 40 = 0x28
    NSTimer *_criticalMessageKeepAliveTimer;	// 48 = 0x30
    double _criticalMessageKeepAliveTimerDuration;	// 56 = 0x38
    unsigned long long _criticalMessageFlushCount;	// 64 = 0x40
    unsigned long long _numberOfCriticalMessageFlushesBeforeDisconnecting;	// 72 = 0x48
    unsigned long long _criticalMessageFlushSize;	// 80 = 0x50
    double _forcedShortTimeoutDuration;	// 88 = 0x58
    double _lastReceivedAckOrReconnect;	// 96 = 0x60
    APSPowerAssertion *_powerAssertion;	// 104 = 0x68
    NSMutableDictionary *_lastReversePushRTTMilliseconds;	// 112 = 0x70
    NSMutableDictionary *_shouldReportLastReversePushRTT;	// 120 = 0x78
    _Bool _powerOptimizationsForExpensiveNetworkingDisabled;	// 128 = 0x80
    unsigned long long _numberQueued;	// 136 = 0x88
    double _lastNotificationQueued;	// 144 = 0x90
    unsigned long long _numberAcked;	// 152 = 0x98
    double _lastNotificationAcked;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0020000000070353
@property(nonatomic) _Bool powerOptimizationsForExpensiveNetworkingDisabled; // @synthesize powerOptimizationsForExpensiveNetworkingDisabled=_powerOptimizationsForExpensiveNetworkingDisabled;
- (void)appendPrettyStatusToStatusPrinter:(id)arg1;	// IMP=0x00100000000701ff
- (unsigned long long)count;	// IMP=0x00100000000701e9
- (void)setForcedShortTimeoutInterval:(id)arg1;	// IMP=0x00100000000700e5
- (void)setCriticalMessageTimeout:(id)arg1;	// IMP=0x001000000006ffe1
- (void)setCriticalMessageKeepAliveTimerDuration:(id)arg1;	// IMP=0x001000000006fedd
- (void)setNumberOfCriticalMessageFlushesBeforeDisconnecting:(id)arg1;	// IMP=0x001000000006fdfe
@property(readonly, nonatomic) _Bool hasEagerMessages;
@property(readonly, nonatomic) _Bool hasPendingMessages;
- (void)_criticalMessageKeepAliveTimerFired;	// IMP=0x001000000006fb13
- (void)_clearCriticalMessageKeepAliveTimer;	// IMP=0x001000000006fa61
- (void)_clearCriticalMessageKeepAliveTimerIfAppropriate;	// IMP=0x001000000006f8fe
- (void)_startCriticalMessageFlushTimerSendingFlush;	// IMP=0x001000000006f7d8
- (_Bool)_outgoingMessageIsLateCriticalMessage:(id)arg1;	// IMP=0x001000000006f5c0
- (void)_timerFired:(id)arg1;	// IMP=0x001000000006ed55
- (void)_recalculateDisableFastDormancy;	// IMP=0x001000000006ec4b
- (void)_recalculatePowerAssertion;	// IMP=0x001000000006ea27
- (void)_recalculateTimer;	// IMP=0x001000000006e2ac
- (void)_queueChanged;	// IMP=0x001000000006e239
- (void)_deliverResult:(id)arg1 forMessage:(id)arg2;	// IMP=0x001000000006e11c
- (void)handleConnectionClosedOnInterface:(id)arg1;	// IMP=0x001000000006dd71
- (void)handleConnectionOpenedOnInterface:(id)arg1;	// IMP=0x001000000006d935
- (void)handleAcknowledgmentForOutgoingMessageWithResult:(id)arg1 ackTimestamp:(unsigned long long)arg2 linkQuality:(int)arg3 connectionType:(long long)arg4 onInterface:(id)arg5;	// IMP=0x001000000006cf73
- (id)lastReversePushRTTMillisecondsOnInterface:(id)arg1;	// IMP=0x001000000006cde1
- (void)setShouldReportLastReversePushRTT:(_Bool)arg1 onInterface:(id)arg2;	// IMP=0x001000000006cbe1
- (_Bool)shouldReportLastReversePushRTTOnInterface:(id)arg1;	// IMP=0x001000000006cb07
- (void)handleErrorSendingOutgoingMessage:(id)arg1 error:(id)arg2;	// IMP=0x001000000006c920
- (void)handleSentOutgoingMessage:(id)arg1 onInterface:(id)arg2;	// IMP=0x001000000006c76c
- (void)transferOwnershipOfPendingMessagesToHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000006c5b3
- (void)cancelOutgoingMessageWithID:(unsigned long long)arg1;	// IMP=0x001000000006c2e2
- (id)outgoingMessagesToSend;	// IMP=0x001000000006c10c
- (void)enqueueOutgoingMessage:(id)arg1 forOriginator:(id)arg2;	// IMP=0x001000000006bfe5
- (void)dealloc;	// IMP=0x001000000006bf53
- (id)initWithDelegate:(id)arg1 environment:(id)arg2;	// IMP=0x001000000006be81

@end

