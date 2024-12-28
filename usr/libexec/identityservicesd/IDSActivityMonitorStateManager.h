//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTMessageDelivery, IDSActivityPushListener, IDSDAccountController, IDSDServiceController, IDSPeerIDManager, NSMutableDictionary, NSMutableSet, NSString;
@protocol IDSActivityStateProvider;

@interface IDSActivityMonitorStateManager : NSObject
{
    NSMutableSet *_listeningOnActivities;	// 8 = 0x8
    NSMutableDictionary *_topicStringToSubscribedInfo;	// 16 = 0x10
    NSMutableDictionary *_listenersByActivity;	// 24 = 0x18
    id <IDSActivityStateProvider> _stateProvider;	// 32 = 0x20
    IDSActivityPushListener *_pushListener;	// 40 = 0x28
    FTMessageDelivery *_messageDelivery;	// 48 = 0x30
    IDSPeerIDManager *_peerIDManager;	// 56 = 0x38
    IDSDAccountController *_accountController;	// 64 = 0x40
    IDSDServiceController *_serviceController;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x00200000000295bc
- (void).cxx_destruct;	// IMP=0x002000000002c5e2
@property(retain, nonatomic) IDSDServiceController *serviceController; // @synthesize serviceController=_serviceController;
@property(retain, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) IDSPeerIDManager *peerIDManager; // @synthesize peerIDManager=_peerIDManager;
@property(retain, nonatomic) FTMessageDelivery *messageDelivery; // @synthesize messageDelivery=_messageDelivery;
@property(retain, nonatomic) IDSActivityPushListener *pushListener; // @synthesize pushListener=_pushListener;
@property(retain, nonatomic) id <IDSActivityStateProvider> stateProvider; // @synthesize stateProvider=_stateProvider;
@property(retain, nonatomic) NSMutableDictionary *listenersByActivity; // @synthesize listenersByActivity=_listenersByActivity;
@property(retain, nonatomic) NSMutableDictionary *topicStringToSubscribedInfo; // @synthesize topicStringToSubscribedInfo=_topicStringToSubscribedInfo;
@property(retain, nonatomic) NSMutableSet *listeningOnActivities; // @synthesize listeningOnActivities=_listeningOnActivities;
- (void)pushListener:(id)arg1 receivedUpdatePush:(id)arg2;	// IMP=0x001000000002bc09
- (void)_updateListener;	// IMP=0x001000000002ba65
- (void)_subscribeForInfo:(id)arg1 withDescription:(id)arg2 resolvedTokens:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002b2ba
- (void)unsubscribeForActivity:(id)arg1 subActivity:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002ad6d
- (void)subscribeForInfo:(id)arg1 onActivity:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002a263
- (void)ackUpdatesForActivity:(id)arg1;	// IMP=0x001000000002a1f8
- (id)currentSubscriptionsForActivity:(id)arg1;	// IMP=0x001000000002a17e
- (void)removeSubscriptionForActivity:(id)arg1 subActivity:(id)arg2;	// IMP=0x001000000002a0f3
- (void)storeSubscription:(id)arg1 forActivity:(id)arg2;	// IMP=0x001000000002a068
- (id)storedUpdatesForActivity:(id)arg1;	// IMP=0x0010000000029fd5
- (_Bool)isListeningOnActivity:(id)arg1;	// IMP=0x0010000000029fbf
- (_Bool)stopListeningOnActivity:(id)arg1;	// IMP=0x0010000000029e67
- (_Bool)startListeningOnActivity:(id)arg1;	// IMP=0x0010000000029cfc
- (void)removeListener:(id)arg1 forActivity:(id)arg2;	// IMP=0x0010000000029bc5
- (void)addListener:(id)arg1 forActivity:(id)arg2;	// IMP=0x0010000000029ab6
- (void)setup;	// IMP=0x0010000000029a36
- (id)initWithStateProvider:(id)arg1 messageDelivery:(id)arg2 peerIDManager:(id)arg3 accountController:(id)arg4 serviceController:(id)arg5 queue:(id)arg6;	// IMP=0x00100000000298ab
- (id)initWithStateProvider:(id)arg1 messageDelivery:(id)arg2 peerIDManager:(id)arg3 accountController:(id)arg4 serviceController:(id)arg5 pushListener:(id)arg6;	// IMP=0x0010000000029785

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
