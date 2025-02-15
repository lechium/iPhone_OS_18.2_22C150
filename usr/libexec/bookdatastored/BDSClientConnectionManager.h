//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BDSServiceNotificationStore, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BDSClientConnectionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_callQueue;	// 8 = 0x8
    struct os_unfair_lock_s _stateLock;	// 16 = 0x10
    NSMutableArray *_clients;	// 24 = 0x18
    NSMutableDictionary *_clientsByConnection;	// 32 = 0x20
    BDSServiceNotificationStore *_notificationStore;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000031ff9
@property(retain, nonatomic) BDSServiceNotificationStore *notificationStore; // @synthesize notificationStore=_notificationStore;
@property(retain, nonatomic) NSMutableDictionary *clientsByConnection; // @synthesize clientsByConnection=_clientsByConnection;
@property(retain, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
- (void)cq_postServiceNotificationNames:(id)arg1 latestChangeToken:(long long)arg2 forClients:(id)arg3;	// IMP=0x0010000000031d2a
- (void)_postServiceNotificationNames:(id)arg1 latestChangeToken:(long long)arg2 forClients:(id)arg3;	// IMP=0x0010000000031b54
- (void)_postServiceNotificationNames:(id)arg1 latestChangeToken:(long long)arg2;	// IMP=0x0010000000031949
- (void)_handleServiceNotification:(id)arg1;	// IMP=0x0010000000031737
- (void)_handleFetchNotificationNames:(id)arg1 latestChangeToken:(long long)arg2 forClient:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000003161d
- (void)monitorServiceNotificationsWithConnection:(id)arg1 changeToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000312b2
- (id)_keyForConnection:(id)arg1;	// IMP=0x0010000000031299
- (void)removeClient:(id)arg1 reason:(id)arg2;	// IMP=0x001000000003106b
- (void)addClient:(id)arg1;	// IMP=0x0010000000030e77
- (void)dealloc;	// IMP=0x0010000000030dec
- (id)init;	// IMP=0x0010000000030cc1

@end

