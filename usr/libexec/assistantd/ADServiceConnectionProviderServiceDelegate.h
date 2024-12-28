//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADServiceConnection, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ADServiceConnectionProviderServiceDelegate : NSObject
{
    ADServiceConnection *_serviceConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_syncQueue;	// 16 = 0x10
    NSMutableDictionary *_syncRequestsByUUID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000277263
- (oneway void)assistantServiceWillCrashForStuckSyncPluginAtPath:(id)arg1;	// IMP=0x0010000000277102
- (oneway void)getTimeoutSuspendedWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000277099
- (oneway void)handleCommand:(id)arg1 executionInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000276fc9
- (oneway void)fetchContextsForKeys:(id)arg1 forRequestID:(id)arg2 includesNearbyDevices:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000276f28
- (oneway void)prepareForAudioHandoffFailedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000276e67
- (oneway void)prepareForAudioHandoffWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000276da4
- (oneway void)getWatchAuthenticatedWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000276d3b
- (oneway void)getStarkModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000276cd2
- (oneway void)getCarDNDModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000276c69
- (oneway void)getLockStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000276c00
- (oneway void)dismissAssistantWithReason:(long long)arg1;	// IMP=0x0010000000276bad
- (oneway void)dismissAssistant;	// IMP=0x0010000000276b69
- (oneway void)openURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000276ae2
- (oneway void)syncChunksWithPreAnchor:(id)arg1 postAnchor:(id)arg2 updates:(id)arg3 deletes:(id)arg4 validity:(id)arg5 forRequestUUID:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x0010000000276942
- (void)clearSyncRequestWithUUID:(id)arg1;	// IMP=0x00100000002768b9
- (void)setSyncRequest:(id)arg1 forUUID:(id)arg2;	// IMP=0x00100000002768a3
- (id)syncRequestForUUID:(id)arg1;	// IMP=0x001000000027688d
- (id)initWithServiceConnection:(id)arg1 syncQueue:(id)arg2;	// IMP=0x00100000002767cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
