//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCStreamOutputManager : NSObject
{
    NSMutableDictionary *_streamOutputSourceForStreamToken;	// 8 = 0x8
    NSMutableDictionary *_streamOutputs;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_stateQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;	// 32 = 0x20
    _Bool _useFigRemoteQueue;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x001000000033b687
- (void)releaseQueueForStreamToken:(long long)arg1;	// IMP=0x000000000033d46b
- (void)connectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;	// IMP=0x000000000033d465
- (void)networkQualityDidDegrade:(_Bool)arg1 isLocalNetworkQualityDegraded:(_Bool)arg2 streamToken:(long long)arg3;	// IMP=0x000000000033d45f
- (void)remoteVideoDidDegrade:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x000000000033d3c8
- (void)remoteVideoDidSuspend:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x000000000033d331
- (void)remoteVideoDidPause:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x000000000033d29a
- (void)remoteMediaDidStall:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x000000000033d203
- (void)dispatchedRemoteVideoDidSuspend:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x000000000033d05f
- (void)dispatchedRemoteVideoDidPause:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x000000000033cebb
- (void)dispatchedRemoteVideoDidDegrade:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x000000000033cd17
- (void)dispatchedRemoteMediaDidStall:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x000000000033cb73
- (void)deregisterBlocksForService;	// IMP=0x000000000033caf1
- (void)registerBlocksForService;	// IMP=0x000000000033c81a
- (id)serviceHandlerStreamOutputTerminateWithArguments:(id)arg1 error:(id *)arg2;	// IMP=0x000000000033c6dd
- (id)serviceHandlerStreamOutputNotifyCacheWithArguments:(id)arg1 error:(id *)arg2;	// IMP=0x000000000033c562
- (id)serviceHandlerStreamOutputInitializeWithArguments:(id)arg1 error:(id *)arg2;	// IMP=0x000000000033c1dc
- (_Bool)sourceExistsForStreamToken:(long long)arg1;	// IMP=0x000000000033c0cd
- (id)allocDispatchedStreamOutputWithStreamToken:(long long)arg1 clientPid:(int)arg2 options:(id)arg3 errorCode:(int *)arg4;	// IMP=0x000000000033c086
- (id)allocStreamOutputWithStreamToken:(long long)arg1 clientPid:(int)arg2 options:(id)arg3 errorCode:(int *)arg4;	// IMP=0x000000000033bf42
- (void)dispatchedDeregisterStreamOutputSourceForStreamToken:(long long)arg1;	// IMP=0x000000000033bb99
- (void)deregisterStreamOutputSourceForStreamToken:(long long)arg1;	// IMP=0x000000000033bb0a
- (void)dispatchedRegisterStreamOutputSource:(id)arg1 forStreamToken:(long long)arg2;	// IMP=0x000000000033b764
- (void)registerStreamOutputSource:(id)arg1 forStreamToken:(long long)arg2;	// IMP=0x000000000033b6cc
- (void)dispatchedCleanupStreamOutput:(id)arg1;	// IMP=0x000000000033b606
- (void)cleanupStreamOutput:(id)arg1;	// IMP=0x000000000033b577
- (void)dealloc;	// IMP=0x000000000033b4ee
- (id)init;	// IMP=0x000000000033b28b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
