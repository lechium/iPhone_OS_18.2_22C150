//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKMousePointerController, BSServiceConnectionListener, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface BKMousePointerServiceServer : NSObject
{
    BKMousePointerController *_mousePointerController;	// 8 = 0x8
    BSServiceConnectionListener *_connectionListener;	// 16 = 0x10
    NSMutableSet *_deviceObservingConnections;	// 24 = 0x18
    NSMutableSet *_preferenceObservingConnections;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000000773e
- (_Bool)_accessStateForReason:(id)arg1 entitlement:(id)arg2 logEntitlementOnFailure:(_Bool)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000074d5
- (void)_assertModelUpdatesSuppressed:(_Bool)arg1 displayUUID:(id)arg2 clientDisplayInfo:(id)arg3;	// IMP=0x0010000000007205
- (id)_perDisplayClientInfoForCurrentConnectionWithDisplayUUID:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x0010000000007106
- (void)_queue_removeConnection:(id)arg1;	// IMP=0x0010000000006ee8
- (id)_pointerDevicesFromIOHIDServices:(id)arg1;	// IMP=0x0010000000006e7b
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x0010000000006d5c
- (void)mousePointerGlobalDevicePreferencesDidChange:(id)arg1;	// IMP=0x0010000000006ccf
- (oneway void)setGlobalDevicePreferences:(id)arg1;	// IMP=0x0010000000006c0d
- (id)globalDevicePreferences;	// IMP=0x0010000000006afc
- (oneway void)setPreferences:(id)arg1 forDevice:(id)arg2;	// IMP=0x0010000000006a12
- (id)preferencesForDevice:(id)arg1;	// IMP=0x00100000000068c1
- (oneway void)setMousePointerPreferenceObservationEnabled:(id)arg1;	// IMP=0x00100000000067fb
- (oneway id)setMousePointerDeviceObservationEnabled:(id)arg1;	// IMP=0x00100000000066d8
- (oneway void)getHitTestContextsAtPoint:(id)arg1 withAdditionalContexts:(id)arg2 onDisplay:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000006477
- (oneway void)setGlobalPointerEventRoutes:(id)arg1 forDisplay:(id)arg2;	// IMP=0x001000000000638d
- (oneway void)invalidateButtonDownPointerRepositionAssertionWithUniqueIdentifier:(id)arg1 onDisplay:(id)arg2;	// IMP=0x0010000000006285
- (oneway void)acquireButtonDownPointerRepositionAssertionWithUniqueIdentifier:(id)arg1 forReason:(id)arg2 contextRelativePointerPosition:(id)arg3 onDisplay:(id)arg4 restrictingToPID:(id)arg5;	// IMP=0x0010000000006022
- (oneway void)setSuppressAllEvents:(id)arg1;	// IMP=0x0010000000005f60
- (oneway void)applyAssertionParametersOnDisplay:(id)arg1 withOptionsMask:(id)arg2;	// IMP=0x0010000000005e82
- (oneway void)setContextRelativePointerPosition:(id)arg1 withInitialVelocity:(id)arg2 onDisplay:(id)arg3 withDecelerationRate:(id)arg4 restrictingToPID:(id)arg5;	// IMP=0x0010000000005cf5
- (oneway void)setContextRelativePointerPosition:(id)arg1 onDisplay:(id)arg2 withAnimationParameters:(id)arg3 restrictingToPID:(id)arg4;	// IMP=0x0010000000005bad
- (oneway void)setPointerPosition:(id)arg1 onDisplay:(id)arg2 withAnimationParameters:(id)arg3;	// IMP=0x0010000000005a86
- (oneway void)setGlobalPointerPosition:(id)arg1;	// IMP=0x00100000000059ce
- (id)normalizedGlobalPointerPosition;	// IMP=0x00100000000058b7
- (id)globalPointerPosition;	// IMP=0x00100000000057a0
- (void)invalidate;	// IMP=0x001000000000579a
- (void)pointingDevicesDidChange:(id)arg1;	// IMP=0x001000000000570c
- (void)activateWithMousePointerController:(id)arg1;	// IMP=0x001000000000563a
- (void)dealloc;	// IMP=0x00100000000054b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
