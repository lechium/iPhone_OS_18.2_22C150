//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol LAServiceManager;

@interface Daemon : NSObject
{
    id <LAServiceManager> _serviceManager;	// 8 = 0x8
    NSHashTable *_notifications;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x002000000000f26d
- (void).cxx_destruct;	// IMP=0x0020000000011ac5
@property(readonly, nonatomic) NSHashTable *notifications; // @synthesize notifications=_notifications;
- (void)dumpStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011795
- (void)_clearNotification:(id)arg1 fromPendingNotifications:(id)arg2 finally:(CDUnknownBlockType)arg3;	// IMP=0x00100000000116bd
- (void)postNotificationOfClassNamed:(id)arg1 newValue:(id)arg2 oldValue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000010dc6
- (void)addNotificationObserver:(id)arg1 className:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010bf1
- (void)notifyEvent:(long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000108f5
- (void)prearmTouchIdWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000001071e
- (void)bootstrapSessionServiceType:(id)arg1 serviceClientID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010708
- (id)_proxyWithContext:(id)arg1 callback:(id)arg2 clientId:(unsigned long long)arg3 request:(id)arg4;	// IMP=0x001000000001040e
- (void)connectToContextWithUUID:(id)arg1 callback:(id)arg2 clientId:(unsigned long long)arg3 token:(id)arg4 senderAuditTokenData:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x001000000001006b
- (void)connectToExistingContext:(id)arg1 userId:(unsigned int)arg2 connection:(id)arg3 checkEntitlementBlock:(CDUnknownBlockType)arg4 callback:(id)arg5 clientId:(unsigned long long)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x001000000000fdca
- (void)connectToExistingContext:(id)arg1 callback:(id)arg2 clientId:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000fc21
- (void)_connectToExistingContext:(id)arg1 callback:(id)arg2 clientId:(unsigned long long)arg3 processId:(int)arg4 userId:(unsigned int)arg5 auditSessionId:(int)arg6 auditToken:(CDStruct_4c969caf)arg7 cApiOrigin:(_Bool)arg8 checkEntitlementBlock:(CDUnknownBlockType)arg9 invalidationBlock:(CDUnknownBlockType)arg10 connectionHash:(unsigned long long)arg11 reply:(CDUnknownBlockType)arg12;	// IMP=0x001000000000f4a3
- (void)createContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f370
- (id)init;	// IMP=0x001000000000f2c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
