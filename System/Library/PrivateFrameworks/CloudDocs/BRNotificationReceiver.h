//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRNotificationQueue, NSMutableDictionary, NSString;
@protocol BRItemNotificationSending, BRNotificationReceiverDelegate, NSObject, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRNotificationReceiver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_ipcQueue;	// 16 = 0x10
    BRNotificationQueue *_notifs;	// 24 = 0x18
    id <BRItemNotificationSending> _sender;	// 32 = 0x20
    _Atomic int _gatherDones;	// 40 = 0x28
    id <BRNotificationReceiverDelegate> _delegate;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_source;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_timer;	// 64 = 0x40
    unsigned long long _receivedChanges;	// 72 = 0x48
    unsigned long long _batchingChanges;	// 80 = 0x50
    double _batchingDelay;	// 88 = 0x58
    unsigned long long _lastBatchTime;	// 96 = 0x60
    NSMutableDictionary *_progressObserverByID;	// 104 = 0x68
    NSMutableDictionary *_itemInTransferByID;	// 112 = 0x70
    _Atomic int _suspendCount;	// 120 = 0x78
    int _networkReachabilityToken;	// 124 = 0x7c
    _Bool _isNetworkReachable;	// 128 = 0x80
    _Bool _isInvalidated;	// 129 = 0x81
    id <NSObject> _accountTokenDidChangeNotificationObserver;	// 136 = 0x88
    NSString *_personaID;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000003c756
@property(retain, nonatomic) id <BRNotificationReceiverDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double batchingDelay; // @synthesize batchingDelay=_batchingDelay;
@property(nonatomic) unsigned long long batchingChanges; // @synthesize batchingChanges=_batchingChanges;
- (void)enableUpdatesFromIPCAfterStitching;	// IMP=0x000000000003c703
- (void)disableUpdatesFromIPCBeforeStitching;	// IMP=0x000000000003c6d5
- (void)receiveStitchingUpdates:(id)arg1;	// IMP=0x000000000003c62b
- (void)networkDidChangeReachabilityStatusTo:(_Bool)arg1;	// IMP=0x000000000003c2cc
- (void)receiveProgressUpdates:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000003be1a
- (void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000003b545
- (void)_receiveUpdates:(id)arg1;	// IMP=0x000000000003ae05
- (void)_signalSourceIfNeeded;	// IMP=0x000000000003a8ba
- (oneway void)invalidateAndDontNotifyDelegate;	// IMP=0x000000000003a8a6
- (oneway void)invalidate;	// IMP=0x000000000003a88f
- (void)invalidateAndNotify:(_Bool)arg1;	// IMP=0x000000000003a6e6
- (void)_invalidateAndNotify:(_Bool)arg1;	// IMP=0x000000000003a40a
- (void)flush;	// IMP=0x000000000003a390
- (void)resume;	// IMP=0x000000000003a215
- (void)suspend;	// IMP=0x000000000003a10b
- (void)watchUbiquitousScopes:(id)arg1 bundleID:(id)arg2 predicate:(id)arg3;	// IMP=0x000000000003a001
- (void)_watchUbiquitousScopes:(id)arg1 bundleID:(id)arg2 predicate:(id)arg3;	// IMP=0x0000000000038777
- (id)_obtainNotificationSenderFromDaemon;	// IMP=0x00000000000377ed
- (void)dequeue:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000003779c
@property(readonly, nonatomic) unsigned long long pendingCount;
- (void)dealloc;	// IMP=0x0000000000037473
- (id)init;	// IMP=0x00000000000370a7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
