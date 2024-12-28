//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageDispatcher.h>

@class HMDHome, NSMapTable, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeAdministratorHandler : HMFMessageDispatcher
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSOperationQueue *_queue;	// 16 = 0x10
    NSMapTable *_receivers;	// 24 = 0x18
    HMDHome *_home;	// 32 = 0x20
    HMFMessageDispatcher *_dispatcher;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0010000000dda118
- (void).cxx_destruct;	// IMP=0x0000000000dd8d42
@property(readonly) HMFMessageDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
- (id)logIdentifier;	// IMP=0x0000000000dd8cc3
- (void)addOperation:(id)arg1;	// IMP=0x0000000000dd8ba0
- (id)operationForMessage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000dd8a0e
@property(readonly) _Bool shouldRelayMessages;
- (_Bool)shouldRelayMessage:(id)arg1;	// IMP=0x0000000000dd86da
- (_Bool)allowLocalFallbackForMessage:(id)arg1;	// IMP=0x0000000000dd853b
- (void)deregisterReceiver:(id)arg1;	// IMP=0x0000000000dd8467
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 selector:(SEL)arg4;	// IMP=0x0000000000dd8165
- (id)syncOperationManager;	// IMP=0x0000000000dd80eb
@property(readonly, nonatomic) NSOperationQueue *operationQueue;
- (id)wrapReceiver:(id)arg1;	// IMP=0x0000000000dd80c9
- (id)initWithHome:(id)arg1 dispatcher:(id)arg2;	// IMP=0x0000000000dd7eb8
- (id)initWithHome:(id)arg1;	// IMP=0x0000000000dd7e37
- (id)initWithTransport:(id)arg1;	// IMP=0x0000000000dd7d83

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
