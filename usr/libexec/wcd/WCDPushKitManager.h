//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSHashTable, NSMutableDictionary, NSString, NSXPCListener;

@interface WCDPushKitManager : NSObject
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
    APSConnection *_productionConnection;	// 16 = 0x10
    APSConnection *_developmentConnection;	// 24 = 0x18
    NSMutableDictionary *_bundleIDToClient;	// 32 = 0x20
    NSHashTable *_clientsDeniedComplicationRegister;	// 40 = 0x28
}

+ (id)topicsFromBundleIDs:(id)arg1;	// IMP=0x002000000002f9f3
+ (id)topicFromBundleId:(id)arg1;	// IMP=0x001000000002f9c7
+ (id)bundleIDsFromTopics:(id)arg1;	// IMP=0x001000000002f7e3
+ (id)bundleIDFromTopic:(id)arg1;	// IMP=0x001000000002f769
+ (id)sharedPushKitManager;	// IMP=0x001000000002c6f2
- (void).cxx_destruct;	// IMP=0x002000000002fc09
@property(readonly, copy, nonatomic) NSHashTable *clientsDeniedComplicationRegister; // @synthesize clientsDeniedComplicationRegister=_clientsDeniedComplicationRegister;
@property(readonly, copy, nonatomic) NSMutableDictionary *bundleIDToClient; // @synthesize bundleIDToClient=_bundleIDToClient;
@property(readonly, nonatomic) APSConnection *developmentConnection; // @synthesize developmentConnection=_developmentConnection;
@property(readonly, nonatomic) APSConnection *productionConnection; // @synthesize productionConnection=_productionConnection;
@property(readonly, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (void)releaseAssertionForClient:(id)arg1;	// IMP=0x001000000002f630
- (void)launchClient:(id)arg1;	// IMP=0x001000000002ef32
- (void)releaseAssertionForBundleID:(id)arg1;	// IMP=0x001000000002ee24
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x001000000002eb2e
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x001000000002e98c
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x001000000002e5a4
- (void)clientRequestingComplicationUnregister:(id)arg1;	// IMP=0x001000000002e3d2
- (void)clientRequestingComplicationRegister:(id)arg1;	// IMP=0x001000000002dec5
- (void)clientXPCConnectionDidDisconnect:(id)arg1;	// IMP=0x001000000002ddb0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000002db4b
- (void)systemObserverComplicationsInstalledChanged;	// IMP=0x001000000002d412
- (void)systemObserverActiveComplicationsChanged;	// IMP=0x001000000002cd70
- (void)dealloc;	// IMP=0x001000000002cc6e
- (void)setUpInitialState;	// IMP=0x001000000002cc40
@property(readonly) NSString *state;
- (id)init;	// IMP=0x001000000002c777

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

