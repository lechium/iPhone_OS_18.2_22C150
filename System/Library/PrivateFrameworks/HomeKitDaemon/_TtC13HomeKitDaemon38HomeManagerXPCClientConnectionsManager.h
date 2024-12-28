//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSUUID, OS_dispatch_queue;

@interface _TtC13HomeKitDaemon38HomeManagerXPCClientConnectionsManager : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *messageDispatcher;	// 16 = 0x10
    MISSING_TYPE *accessoryBrowser;	// 24 = 0x18
    MISSING_TYPE *xpcTransport;	// 32 = 0x20
    MISSING_TYPE *logEventSubmitter;	// 40 = 0x28
    MISSING_TYPE *notificationCenter;	// 48 = 0x30
    MISSING_TYPE *messageTargetUUID;	// 0 = 0x0
    MISSING_TYPE *lockedState;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000010ed30
- (id)init;	// IMP=0x000000000010ecd0
- (void)handleProcessInfoStateChangedNotification:(id)arg1;	// IMP=0x000000000010ebe0
- (void)handleXPCConnectionDidInvalidateNotification:(id)arg1;	// IMP=0x000000000010e650
- (void)handleXPCConnectionDidStartNotification:(id)arg1;	// IMP=0x000000000010df20
- (void)handleActiveAssertionUpdateStateMessage:(id)arg1;	// IMP=0x000000000010d880
@property(nonatomic, readonly) _Bool hasActiveConnections;
- (void)configure;	// IMP=0x000000000010b670
@property(nonatomic, readonly) NSUUID *messageTargetUUID;
@property(nonatomic, readonly) OS_dispatch_queue *messageReceiveQueue;

@end
