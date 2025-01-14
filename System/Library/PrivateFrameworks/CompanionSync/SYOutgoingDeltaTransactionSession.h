//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SYSession.h"

@class NSObject, _SYCountedSemaphore, _SYMessageTimerTable;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_activity;

__attribute__((visibility("hidden")))
@interface SYOutgoingDeltaTransactionSession : SYSession
{
    NSObject<OS_dispatch_source> *_stateUpdateSource;	// 8 = 0x8
    NSObject<OS_os_activity> *_sessionActivity;	// 16 = 0x10
    unsigned int _state;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_changeFetcherQueue;	// 32 = 0x20
    _SYCountedSemaphore *_changeConcurrencySemaphore;	// 40 = 0x28
    NSObject<OS_os_activity> *_changeWaitActivity;	// 48 = 0x30
    _SYMessageTimerTable *_timers;	// 56 = 0x38
    _Bool _canRestart;	// 64 = 0x40
    _Bool _canRollback;	// 65 = 0x41
    _Bool _cancelled;	// 66 = 0x42
}

- (void).cxx_destruct;	// IMP=0x000000000001d00d
- (_Bool)wasCancelled;	// IMP=0x000000000001cffb
- (void)setCanRollback:(_Bool)arg1;	// IMP=0x000000000001cfeb
- (_Bool)canRollback;	// IMP=0x000000000001cfd9
- (void)setCanRestart:(_Bool)arg1;	// IMP=0x000000000001cfc9
- (_Bool)canRestart;	// IMP=0x000000000001cfb7
- (void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000001cf9a
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000001cf1f
- (void)cancelWithError:(id)arg1;	// IMP=0x000000000001ce54
- (void)start:(CDUnknownBlockType)arg1;	// IMP=0x000000000001c76f
- (void)_installStateListener;	// IMP=0x000000000001c657
- (void)_setMessageTimerForSeqno:(unsigned long long)arg1;	// IMP=0x000000000001c5ac
- (void)_processNextState;	// IMP=0x000000000001c36c
- (void)_messageExpiredWithSeqno:(unsigned long long)arg1 identifier:(id)arg2;	// IMP=0x000000000001c287
- (void)_notifySessionComplete;	// IMP=0x000000000001c062
- (void)_sendSyncBatch:(id)arg1 nextState:(unsigned int)arg2;	// IMP=0x000000000001bcc3
- (void)_fetchNextBatch;	// IMP=0x000000000001b77e
- (void)_waitForMessageWindow;	// IMP=0x000000000001b570
- (void)_setupChangeConcurrency;	// IMP=0x000000000001b4a0
- (unsigned long long)protocolVersion;	// IMP=0x000000000001b495
- (_Bool)isSending;	// IMP=0x000000000001b48d
- (_Bool)isResetSync;	// IMP=0x000000000001b485
- (void)_setStateQuietly:(unsigned int)arg1;	// IMP=0x000000000001b348
- (void)setState:(unsigned int)arg1;	// IMP=0x000000000001b1bc
- (unsigned int)state;	// IMP=0x000000000001b1ac
- (id)initWithService:(id)arg1;	// IMP=0x000000000001ae80

@end

