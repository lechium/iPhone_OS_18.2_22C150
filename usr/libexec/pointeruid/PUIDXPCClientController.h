//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnectionListener, MISSING_TYPE, NSMapTable, NSString;
@protocol OS_dispatch_queue, PUIDXPCClientControllerDelegate;

@interface PUIDXPCClientController : NSObject
{
    struct os_unfair_lock_s _clientServiceCollectionMapLock;	// 8 = 0x8
    NSMapTable *_launchingConnectionToPointerClientMap;	// 16 = 0x10
    NSMapTable *_nonLaunchingConnectionToPointerClientMap;	// 24 = 0x18
    NSMapTable *_pointerClientToNonLaunchingConnectionMap;	// 32 = 0x20
    BSServiceConnectionListener *_nonLaunchingConnectionListener;	// 40 = 0x28
    BSServiceConnectionListener *_launchingConnectionListener;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 56 = 0x38
    id <PUIDXPCClientControllerDelegate> _delegate;	// 64 = 0x40
    long long __clientInteractionState;	// 72 = 0x48
    long long __pointerVisibilityState;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000016caa
@property long long _pointerVisibilityState; // @synthesize _pointerVisibilityState=__pointerVisibilityState;
@property long long _clientInteractionState; // @synthesize _clientInteractionState=__clientInteractionState;
@property(nonatomic) __weak id <PUIDXPCClientControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_removeNonLaunchingMapBetweenServiceConnection:(id)arg1 pointerClient:(id)arg2;	// IMP=0x0010000000016bd1
- (id)_pointerClientForNonLaunchingServiceConnection:(id)arg1;	// IMP=0x0010000000016b6a
- (id)_nonLaunchingServiceConnectionForPointerClient:(id)arg1;	// IMP=0x0010000000016b03
- (void)_addNonLaunchingMapBetweenServiceConnection:(id)arg1 pointerClient:(id)arg2;	// IMP=0x0010000000016a0c
- (void)_removeLaunchingMapBetweenServiceConnection:(id)arg1 pointerClient:(id)arg2;	// IMP=0x00100000000169b8
- (id)_launchingPointerClientForServiceConnection:(id)arg1;	// IMP=0x0010000000016951
- (void)_addLaunchingMapBetweenServiceConnection:(id)arg1 pointerClient:(id)arg2;	// IMP=0x00100000000168ac
- (void)_handleDisconnectForNonLaunchingConnection:(id)arg1;	// IMP=0x001000000001678f
- (void)_handleDisconnectForLaunchingConnection:(id)arg1;	// IMP=0x0010000000016672
- (void)setPointerVisibilityState:(long long)arg1;	// IMP=0x001000000001637f
- (void)setClientInteractionState:(long long)arg1;	// IMP=0x001000000001608c
- (oneway void)setWantsServiceKeepAlive:(id)arg1;	// IMP=0x0010000000015ecc
- (MISSING_TYPE *)setOverridesHoverRegions:display: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000015c9a
- (oneway void)setSystemPointerInteractionContextID:(id)arg1 display:(id)arg2;	// IMP=0x0010000000015aae
- (oneway void)setPointerPersistentlyVisibleForReasons:(id)arg1;	// IMP=0x0010000000015850
- (oneway void)setPointerPersistentlyHiddenForReasons:(id)arg1;	// IMP=0x00100000000155f2
- (oneway void)autohidePointerForReason:(id)arg1;	// IMP=0x0010000000015411
- (oneway void)setActiveHoverRegion:(id)arg1 transitionCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015163
- (oneway void)invalidateContentMatchMoveSources:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014e4c
- (oneway void)createContentMatchMoveSourcesForDisplay:(id)arg1 countValue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000148fc
- (oneway void)invalidatePointerPortalSourceCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000146fc
- (oneway void)createPointerPortalSourceCollectionForDisplay:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000144b7
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x0010000000013b9d
- (void)invalidatedPortalSourceCollections:(id)arg1 matchMoveSources:(id)arg2 forClient:(id)arg3;	// IMP=0x00100000000139b4
- (void)adjustedDecelerationTargetForPointerClient:(id)arg1 withTargetPointerPosition:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3 inContextID:(unsigned int)arg4 cursorRegionLookupRadius:(double)arg5 cursorRegionLookupResolution:(double)arg6 lookupConeAngle:(double)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0010000000013431
- (id)init;	// IMP=0x0010000000013105

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

