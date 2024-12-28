//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KCSharingDaemonGroupManager, KCSharingSyncController, NSMutableArray, NSString, NSXPCListener;
@protocol KCSharingEntitlementBearerProtocol, OS_dispatch_queue;

@interface KCSharingXPCListenerDelegate : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSMutableArray *_clientConnections;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 24 = 0x18
    KCSharingDaemonGroupManager *_groupManager;	// 32 = 0x20
    KCSharingSyncController *_syncController;	// 40 = 0x28
    id <KCSharingEntitlementBearerProtocol> _entitlementBearer;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0020000000218449
- (void).cxx_destruct;	// IMP=0x0020000000217dcf
@property(retain, nonatomic) id <KCSharingEntitlementBearerProtocol> entitlementBearer; // @synthesize entitlementBearer=_entitlementBearer;
@property(nonatomic) __weak KCSharingSyncController *syncController; // @synthesize syncController=_syncController;
@property(nonatomic) __weak KCSharingDaemonGroupManager *groupManager; // @synthesize groupManager=_groupManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) NSMutableArray *clientConnections; // @synthesize clientConnections=_clientConnections;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (void)accountChanged;	// IMP=0x0010000000217ca4
- (void)groupsUpdated;	// IMP=0x0010000000217c33
- (void)connectionWasInvalidated:(id)arg1;	// IMP=0x0010000000217af6
- (void)connectionWasInterrupted:(id)arg1;	// IMP=0x0010000000217a44
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000002175cd
- (id)allowedProtocolForEntitlementBearer:(id)arg1;	// IMP=0x001000000021755e
- (id)initWithListener:(id)arg1 queue:(id)arg2 daemonGroupManager:(id)arg3 syncController:(id)arg4 entitlementBearer:(id)arg5;	// IMP=0x001000000021738f
- (id)init;	// IMP=0x001000000021726a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
