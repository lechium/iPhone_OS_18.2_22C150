//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSManagedObjectContext, NSSet, NSString, RMSharedLock;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

@interface RMExternalStatusPublisher : NSObject
{
    NSSet *_allEvents;	// 8 = 0x8
    NSManagedObjectContext *_context;	// 16 = 0x10
    RMSharedLock *_persistLock;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    NSObject<OS_xpc_event_publisher> *_XPCEventPublisher;	// 40 = 0x28
    NSArray *_plugins;	// 48 = 0x30
    NSDictionary *_publisherByEventKey;	// 56 = 0x38
    NSDictionary *_eventsByStatusKey;	// 64 = 0x40
    NSSet *_statusKeys;	// 72 = 0x48
    NSDictionary *_predicateStatusKeysByStoreIdentifier;	// 80 = 0x50
}

+ (void)start;	// IMP=0x00200000000344d3
+ (id)sharedPublisher;	// IMP=0x00100000000343d7
- (void).cxx_destruct;	// IMP=0x0020000000039fb9
@property(retain, nonatomic) NSDictionary *predicateStatusKeysByStoreIdentifier; // @synthesize predicateStatusKeysByStoreIdentifier=_predicateStatusKeysByStoreIdentifier;
@property(retain, nonatomic) NSSet *statusKeys; // @synthesize statusKeys=_statusKeys;
@property(retain, nonatomic) NSDictionary *eventsByStatusKey; // @synthesize eventsByStatusKey=_eventsByStatusKey;
@property(retain, nonatomic) NSDictionary *publisherByEventKey; // @synthesize publisherByEventKey=_publisherByEventKey;
@property(copy, nonatomic) NSArray *plugins; // @synthesize plugins=_plugins;
@property(retain, nonatomic) NSObject<OS_xpc_event_publisher> *XPCEventPublisher; // @synthesize XPCEventPublisher=_XPCEventPublisher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) RMSharedLock *persistLock; // @synthesize persistLock=_persistLock;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSSet *allEvents; // @synthesize allEvents=_allEvents;
- (id)_buildDictionaryFromArrayValue:(id)arg1;	// IMP=0x0010000000039ce5
- (id)_filteredArray:(id)arg1 metadata:(id)arg2 lastAcknowledgedDate:(id)arg3;	// IMP=0x00100000000397d4
- (void)_mergeOldArrayValue:(id)arg1 oldValueMetadata:(id)arg2 newValue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000038ec9
- (id)_mergeOldStatus:(id)arg1 newStatus:(id)arg2 changedStatusKeyPaths:(id)arg3 error:(id *)arg4;	// IMP=0x001000000003853c
- (id)_subscribedStatusKeyPathsByStoreForKeyPaths:(id)arg1;	// IMP=0x0010000000037bdd
- (void)_buildPredicateStatusKeyPaths;	// IMP=0x0010000000037756
- (id)_fetchSubscribedStatusKeyPaths;	// IMP=0x001000000003750b
- (id)reportDetails;	// IMP=0x0010000000037365
- (void)publishStatusKeys:(id)arg1 storeIdentifier:(id)arg2;	// IMP=0x0010000000036ff4
- (void)_notifyChangesWithStoreIdentifier:(id)arg1 statusKeyPaths:(id)arg2;	// IMP=0x0010000000036e4e
- (_Bool)persistStatusWithStoreIdentifier:(id)arg1 status:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000036903
- (void)publishAllSubscribedStatus;	// IMP=0x001000000003637a
- (id)statusForChannel:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000360ec
- (id)_queryForFilteredStatusWithKeyPaths:(id)arg1 lastAcknowledgedDateByKeyPath:(id)arg2 onBehalfOfManagementChannel:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000035bdd
- (id)queryForUnacknowledgedStatusWithKeyPaths:(id)arg1 lastAcknowledgedDateByKeyPath:(id)arg2 onBehalfOfManagementChannel:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000035bcb
- (id)queryForStatusWithKeyPaths:(id)arg1 onBehalfOfManagementChannel:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000035bb1
@property(readonly, nonatomic) NSSet *supportedKeyPaths;
- (void)_waitForQueueWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000035aea
- (void)didReceiveNotificationForStream:(id)arg1 notificationName:(id)arg2;	// IMP=0x001000000003572d
- (void)listenToNotificationsForSubscribedKeyPaths:(id)arg1;	// IMP=0x001000000003513b
- (void)listenToNotificationsForAllKeyPaths;	// IMP=0x001000000003504d
- (void)_loadAllStatusPublishers;	// IMP=0x00100000000347c4
- (void)_start;	// IMP=0x001000000003468d
- (id)initWithContext:(id)arg1;	// IMP=0x0010000000034574

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

