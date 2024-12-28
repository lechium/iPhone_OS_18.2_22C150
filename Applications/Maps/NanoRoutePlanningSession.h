//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCDTimer, GEOCompanionRouteDetails, GEOComposedRoute, GEOObserverHashTable, NSMutableDictionary, NSString, NanoRoutePlanningMutableRequest, NanoRoutePlanningMutableResponse, NanoRoutePlanningRequest, NanoRoutePlanningResponse, NanoRoutePlanningState;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface NanoRoutePlanningSession : NSObject
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_stateIsolationQueue;	// 24 = 0x18
    unsigned long long _origin;	// 32 = 0x20
    _Bool _shouldBroadcast;	// 40 = 0x28
    long long _state;	// 48 = 0x30
    NanoRoutePlanningState *_stateObject;	// 56 = 0x38
    NanoRoutePlanningMutableRequest *_request;	// 64 = 0x40
    NanoRoutePlanningMutableResponse *_response;	// 72 = 0x48
    _Atomic _Bool _invalidated;	// 80 = 0x50
    NSMutableDictionary *_classesBySessionState;	// 88 = 0x58
    GCDTimer *_staleTimer;	// 96 = 0x60
    NSMutableDictionary *_userInfo;	// 104 = 0x68
    GEOObserverHashTable *_observers;	// 112 = 0x70
}

+ (void)setDefaultClass:(Class)arg1 forSessionState:(long long)arg2;	// IMP=0x0020000000ddc69f
+ (id)_defaultClassesBySessionState;	// IMP=0x0010000000ddc54d
+ (unsigned long long)defaultOrigin;	// IMP=0x0010000000ddb05a
+ (void)processRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000dde681
- (void).cxx_destruct;	// IMP=0x0020000000dddcef
@property(retain, nonatomic) GEOObserverHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) _Bool isInvalidated;
- (void)_assertNotInvalidated;	// IMP=0x0010000000dddcc3
- (void)_endTransaction;	// IMP=0x0010000000dddc11
- (void)_startTransaction;	// IMP=0x0010000000dddab5
- (void)unregisterObserver:(id)arg1;	// IMP=0x0010000000ddd9b7
- (void)registerObserver:(id)arg1;	// IMP=0x0010000000ddd8a9
- (_Bool)_hasReceivedAllExpectedRoutes;	// IMP=0x0010000000ddd7d3
- (_Bool)hasReceivedAllExpectedRoutes;	// IMP=0x0010000000ddd6c3
- (void)_setSelectedRouteWithRouteID:(id)arg1;	// IMP=0x0010000000ddd62a
- (void)setSelectedRouteWithRouteID:(id)arg1;	// IMP=0x0010000000ddd576
@property(retain, nonatomic) GEOCompanionRouteDetails *selectedCompanionRoute;
@property(retain, nonatomic) GEOComposedRoute *selectedRoute;
- (void)_notifyDidChangeFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x0010000000ddd123
- (void)replaceWithStateOfClass:(Class)arg1;	// IMP=0x0010000000ddd035
- (void)_triggerStalenessTimer;	// IMP=0x0010000000ddd02f
- (void)_transitionToState:(long long)arg1 withClass:(Class)arg2;	// IMP=0x0010000000ddcde8
- (void)_transitionToState:(long long)arg1;	// IMP=0x0010000000ddcd88
- (void)updateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000ddc84a
- (Class)_classForState:(long long)arg1;	// IMP=0x0010000000ddc777
- (void)setNextClass:(Class)arg1 forSessionState:(long long)arg2;	// IMP=0x0010000000ddc71b
- (void)_notifyDidInvalidate;	// IMP=0x0010000000ddc3e3
- (void)_notifySessionDidFail;	// IMP=0x0010000000ddc247
- (void)_notifySessionDidUpdateResponse;	// IMP=0x0010000000ddc0ab
- (void)_notifySessionDidStartLoading;	// IMP=0x0010000000ddbf0f
- (void)_broadcastIfNeeded;	// IMP=0x0010000000ddbd6c
- (void)setUserInfoKey:(id)arg1 andValue:(id)arg2;	// IMP=0x0010000000ddbc45
- (id)valueForUserInfoKey:(id)arg1;	// IMP=0x0010000000ddbab4
- (void)_setResponse:(id)arg1;	// IMP=0x0010000000ddb9d4
- (void)setResponse:(id)arg1;	// IMP=0x0010000000ddb927
- (void)setRequest:(id)arg1;	// IMP=0x0010000000ddb87e
@property(readonly, nonatomic) _Bool isLoading;
@property(nonatomic) _Bool shouldBroadcast;
@property(readonly, nonatomic) NanoRoutePlanningResponse *response;
@property(readonly, nonatomic) NanoRoutePlanningRequest *request;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) unsigned long long origin;
- (void)_cancelRequestIfNeeded;	// IMP=0x0010000000ddb343
- (void)_prepareForRequest:(id)arg1;	// IMP=0x0010000000ddb23c
- (void)_processRequest:(id)arg1;	// IMP=0x0010000000ddb10f
- (void)processRequest:(id)arg1;	// IMP=0x0010000000ddb065
- (void)invalidate;	// IMP=0x0010000000ddaf40
- (id)_description;	// IMP=0x0010000000ddae90
@property(readonly, copy) NSString *description;
- (id)initWithOrigin:(unsigned long long)arg1;	// IMP=0x0010000000ddaabe
- (id)init;	// IMP=0x0010000000ddaa85
- (void)dealloc;	// IMP=0x0010000000dda984
- (void)_updateWithRequest:(id)arg1 response:(id)arg2;	// IMP=0x0010000000dddfa1
- (void)updateWithRequest:(id)arg1 response:(id)arg2;	// IMP=0x0010000000dddeb8
- (void)_anticipateRoutesWithRequest:(id)arg1;	// IMP=0x0010000000dddd6f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
