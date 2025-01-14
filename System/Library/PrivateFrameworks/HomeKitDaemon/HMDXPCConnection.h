//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFProcessInfo, NSObject, NSString, NSXPCConnection, NSXPCInterface;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDXPCConnection : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSXPCConnection *_xpcConnection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000c758c0
@property(readonly) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (id)attributeDescriptions;	// IMP=0x0000000000c7574e
- (void)invalidate;	// IMP=0x0000000000c75711
- (void)resume;	// IMP=0x0000000000c756d4
- (void)activate;	// IMP=0x0000000000c75697
- (id)valueForEntitlement:(id)arg1;	// IMP=0x0000000000c7561d
@property(copy) CDUnknownBlockType invalidationHandler;
@property(copy) CDUnknownBlockType interruptionHandler;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000c7546f
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000c753f5
@property(readonly) id remoteObjectProxy;
@property(retain) NSXPCInterface *remoteObjectInterface;
@property(retain) NSXPCInterface *exportedInterface;
@property(retain) id exportedObject;
@property(retain) NSObject<OS_dispatch_queue> *queue;
@property(readonly) CDStruct_6ad76789 auditToken;
@property(readonly) int processIdentifier;
@property(readonly) HMFProcessInfo *processInfo;
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0000000000c74ed7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

