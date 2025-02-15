//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PDNotificationStreamManager : NSObject
{
    _Bool _started;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_group;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_internalSerialQueue;	// 24 = 0x18
    struct os_unfair_lock_s _consumerLock;	// 32 = 0x20
    NSHashTable *_consumers;	// 40 = 0x28
    NSMapTable *_consumerRegistrationState;	// 48 = 0x30
    _Atomic _Bool _needsRegistrationUpdate;	// 56 = 0x38
    NSMutableDictionary *_registeredNotificationNames;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000322b9d
- (void)_queue_stopObservingNotification:(id)arg1 forStream:(long long)arg2;	// IMP=0x0010000000322b97
- (void)_queue_startObservingNotification:(id)arg1 forStream:(long long)arg2;	// IMP=0x0010000000322b91
- (id)_notificationStreamNameForStream:(long long)arg1;	// IMP=0x0010000000322b6c
- (id)_notificationNameKeyForStream:(long long)arg1;	// IMP=0x0010000000322b47
- (void)receivedXPCEvent:(id)arg1 forEventStream:(id)arg2;	// IMP=0x00100000003224c7
- (void)_queue_updateEventStreamRegistrationForStream:(long long)arg1;	// IMP=0x001000000032204a
- (void)_queue_updateEventStreamRegistration;	// IMP=0x001000000032200d
- (void)_scheduleEventStreamRegistrationUpdateWhileInternalQueue:(_Bool)arg1;	// IMP=0x0010000000321f75
- (void)start;	// IMP=0x0010000000321eef
- (void)recalculateNotificationNames;	// IMP=0x0010000000321e1c
- (void)_unregisterConsumer:(id)arg1;	// IMP=0x0010000000321daf
- (void)_updateConsumers:(id)arg1 requiresRegistration:(_Bool)arg2;	// IMP=0x0010000000321a31
- (void)unregisterConsumer:(id)arg1;	// IMP=0x00100000003219fb
- (void)registerConsumer:(id)arg1;	// IMP=0x0010000000321938
- (id)init;	// IMP=0x001000000032182c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

