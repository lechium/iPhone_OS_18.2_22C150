//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface XCTDRemoteRunnerConnectionBroker : NSObject
{
    MISSING_TYPE *connectionListener;	// 8 = 0x8
    MISSING_TYPE *remoteRunnerProcessID;	// 16 = 0x10
    MISSING_TYPE *connectionTransferCompletedState;	// 24 = 0x18
    MISSING_TYPE *transport;	// 32 = 0x20
    MISSING_TYPE *hostObserverCompletion;	// 40 = 0x28
    MISSING_TYPE *runnerObserverCompletion;	// 56 = 0x38
    MISSING_TYPE *connection;	// 72 = 0x48
    MISSING_TYPE *queue;	// 80 = 0x50
    MISSING_TYPE *xpcConnection;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000718c0
- (void)_XCT_isReadyForRemoteRunnerConnectionWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00100000000717d0
- (void)_XCT_requestTransportForRemoteRunnerWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000006da90
- (void)observeStateOfRemoteRunnerWithPID:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006c1f0
- (void)transferConnection:(id)arg1 toRemoteRunnerWithPID:(int)arg2;	// IMP=0x001000000006bd50
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000067f10
- (id)init;	// IMP=0x0010000000066200

@end
