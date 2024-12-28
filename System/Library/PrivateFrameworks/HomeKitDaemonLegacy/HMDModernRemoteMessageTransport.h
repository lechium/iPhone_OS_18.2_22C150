//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDModernTransportMessageContextManager, HMDRemoteMessageTransport, NSMutableOrderedSet, NSObject, NSString;
@protocol HMDDateProvider, HMDDeviceResidencyProvider, HMDTimerProvider, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDModernRemoteMessageTransport
{
    _Bool _started;	// 8 = 0x8
    _Bool _rapportLinkSlow;	// 9 = 0x9
    _Bool _isWatch;	// 10 = 0xa
    id <HMDDeviceResidencyProvider> _residencyProvider;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    HMDRemoteMessageTransport *_rapportTransport;	// 32 = 0x20
    HMDRemoteMessageTransport *_idsTransport;	// 40 = 0x28
    HMDModernTransportMessageContextManager *_contextManager;	// 48 = 0x30
    id <HMDDateProvider> _systemDateProvider;	// 56 = 0x38
    id <HMDDateProvider> _idsDateProvider;	// 64 = 0x40
    id <HMDTimerProvider> _timerProvider;	// 72 = 0x48
    NSMutableOrderedSet *_messageIDDedupeBuffer;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x0010000000631208
+ (id)timeToLiveHeaderKey;	// IMP=0x00100000006311fb
+ (id)requestStartTimeHeaderKey;	// IMP=0x00100000006311ee
- (void).cxx_destruct;	// IMP=0x000000000062bb09
@property(readonly, nonatomic) _Bool isWatch; // @synthesize isWatch=_isWatch;
@property(nonatomic, getter=isRapportLinkSlow) _Bool rapportLinkSlow; // @synthesize rapportLinkSlow=_rapportLinkSlow;
@property(readonly, nonatomic) NSMutableOrderedSet *messageIDDedupeBuffer; // @synthesize messageIDDedupeBuffer=_messageIDDedupeBuffer;
@property(readonly, nonatomic) id <HMDTimerProvider> timerProvider; // @synthesize timerProvider=_timerProvider;
@property(readonly, nonatomic) id <HMDDateProvider> idsDateProvider; // @synthesize idsDateProvider=_idsDateProvider;
@property(readonly, nonatomic) id <HMDDateProvider> systemDateProvider; // @synthesize systemDateProvider=_systemDateProvider;
@property(readonly, nonatomic) HMDModernTransportMessageContextManager *contextManager; // @synthesize contextManager=_contextManager;
@property(readonly, nonatomic) HMDRemoteMessageTransport *idsTransport; // @synthesize idsTransport=_idsTransport;
@property(readonly, nonatomic) HMDRemoteMessageTransport *rapportTransport; // @synthesize rapportTransport=_rapportTransport;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(getter=isStarted) _Bool started; // @synthesize started=_started;
@property __weak id <HMDDeviceResidencyProvider> residencyProvider; // @synthesize residencyProvider=_residencyProvider;
- (void)configureWithHomeMembershipVerifier:(id)arg1;	// IMP=0x000000000062b978
- (void)transport:(id)arg1 idsIdentifier:(id)arg2 didAppearReachable:(_Bool)arg3;	// IMP=0x000000000062b901
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x000000000062b823
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000062b574
- (_Bool)canSendMessage:(id)arg1;	// IMP=0x000000000062b3bc
- (id)start;	// IMP=0x000000000062b15a
- (long long)qualityOfService;	// IMP=0x000000000062b14f
- (_Bool)isSecure;	// IMP=0x000000000062b147
- (id)initWithAccountRegistry:(id)arg1 rapportTransport:(id)arg2 idsTransport:(id)arg3 contextManager:(id)arg4 systemDateProvider:(id)arg5 idsDateProvider:(id)arg6 timerProvider:(id)arg7 isWatch:(_Bool)arg8;	// IMP=0x000000000062aef4
- (id)initWithAccountRegistry:(id)arg1;	// IMP=0x000000000062adcf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
