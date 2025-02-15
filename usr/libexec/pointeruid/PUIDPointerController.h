//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSHIDEventHitTestClientContext, BKSHIDEventPointerAttributes, BKSMousePointerDevicePreferences, NSArray, NSMapTable, NSMutableDictionary, NSString, NSTimer, PSPointerHoverRegion, PUIDDisplayContext, PUIDPointerClient, PUIDPointerRecenteringContext, PUIDPointerSettings, PUIDPointerState, PUIDTouchHistory, PUIDXPCClientController;
@protocol BSInvalidatable, OS_dispatch_queue, OS_os_transaction, PUIDDisplayContextFactory, PUIDPointerEventStreamProviding;

@interface PUIDPointerController : NSObject
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
    id <PUIDDisplayContextFactory> _displayContextFactory;	// 16 = 0x10
    NSMutableDictionary *_displayContextsByDisplay;	// 24 = 0x18
    NSMutableDictionary *_systemPointerInteractionContextByDisplay;	// 32 = 0x20
    NSMutableDictionary *_hoverRegionOverridingClientsByDisplay;	// 40 = 0x28
    PUIDDisplayContext *_activeDisplayContext;	// 48 = 0x30
    NSMapTable *_pointerClientToClientStateMap;	// 56 = 0x38
    NSMapTable *_pointerClientToWantsServiceKeepAliveMap;	// 64 = 0x40
    struct __IOHIDEvent *_lastPointerEvent;	// 72 = 0x48
    BKSHIDEventPointerAttributes *_lastPointerEventPointerAttributes;	// 80 = 0x50
    NSArray *_lastPointerHitTestContexts;	// 88 = 0x58
    id <PUIDPointerEventStreamProviding> _pointerEventStreamProvider;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_transformUpdateQueue;	// 104 = 0x68
    PUIDXPCClientController *_xpcClientContextController;	// 112 = 0x70
    PUIDPointerState *_previousPointerState;	// 120 = 0x78
    PUIDPointerClient *_previousPointerClient;	// 128 = 0x80
    unsigned long long _decelerationLookupGenerationID;	// 136 = 0x88
    _Bool _hasPointerVelocityCrossedHighThreshold;	// 144 = 0x90
    PUIDPointerClient *_highVelocityAllowedPointerClient;	// 152 = 0x98
    PSPointerHoverRegion *_highVelocityAllowedHoverRegion;	// 160 = 0xa0
    struct CGPoint _pointerVelocity;	// 168 = 0xa8
    PUIDTouchHistory *_touchHistory;	// 184 = 0xb8
    id <BSInvalidatable> _buttonDownRepositionAssertion;	// 192 = 0xc0
    PUIDPointerRecenteringContext *_buttonDownRepositionAssertionContext;	// 200 = 0xc8
    BKSMousePointerDevicePreferences *_globalDevicePreferences;	// 208 = 0xd0
    id <BSInvalidatable> _globalDevicePreferencesObservationAssertion;	// 216 = 0xd8
    NSTimer *_pointerUnpressedStateIsLockedOut;	// 224 = 0xe0
    BKSHIDEventHitTestClientContext *_lockedContext;	// 232 = 0xe8
    long long _latchingState;	// 240 = 0xf0
    NSTimer *_autohidePointerTimer;	// 248 = 0xf8
    NSTimer *_delayedPointerUnhideTimer;	// 256 = 0x100
    NSTimer *_provisionalPromotionTimer;	// 264 = 0x108
    NSTimer *_delayedMouseRecenteringTimer;	// 272 = 0x110
    NSTimer *_periodicClientTransformRefreshTimer;	// 280 = 0x118
    _Bool _isFingerDown;	// 288 = 0x120
    _Bool _isButtonPressDownTransition;	// 289 = 0x121
    _Bool _isButtonPressUpTransition;	// 290 = 0x122
    _Bool _pointerIsAutohidden;	// 291 = 0x123
    _Bool _isProvisionallyVisible;	// 292 = 0x124
    _Bool _pointerHiddenByEntitledClient;	// 293 = 0x125
    _Bool _pointerForcedVisibleByEntitledClient;	// 294 = 0x126
    _Bool _focusedOnItem;	// 295 = 0x127
    _Bool _hasSetupPointerState;	// 296 = 0x128
    _Bool _deferMaterialChanges;	// 297 = 0x129
    _Bool _isPerformingPeriodicClientTransformRefresh;	// 298 = 0x12a
    _Bool _shouldPeriodicallyRefreshClientTransform;	// 299 = 0x12b
    _Bool _pointerPressedStateIsLockedOut;	// 300 = 0x12c
    _Bool _loggedRange;	// 301 = 0x12d
    _Bool _loggedTouchingDigitizerAndTrackpad;	// 302 = 0x12e
    NSTimer *_activeGestureResetTimer;	// 304 = 0x130
    unsigned long long _activeGestureMask;	// 312 = 0x138
    _Bool _isHiddenForActiveGesture;	// 320 = 0x140
    PUIDPointerSettings *_settings;	// 328 = 0x148
}

- (void).cxx_destruct;	// IMP=0x0020000000011d63
@property(retain, nonatomic) PUIDDisplayContext *activeDisplayContext; // @synthesize activeDisplayContext=_activeDisplayContext;
@property(retain, nonatomic) PUIDPointerSettings *settings; // @synthesize settings=_settings;
- (struct CGPoint)_pointerPositionFromPointerEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0010000000011cc6
- (void)_transformForLayer:(unsigned long long)arg1 inContext:(unsigned int)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000011ba1
- (_Bool)_underlappingContentAllowedForPointerAttributes:(id)arg1;	// IMP=0x0010000000011b99
- (void)_updateServiceKeepAlive;	// IMP=0x0010000000011ac7
- (void)_updatePointerWithOptions:(unsigned long long)arg1 updateHandlerCollection:(id)arg2;	// IMP=0x001000000000f650
- (void)_requestPointerUpdate;	// IMP=0x001000000000f63a
- (struct CGPoint)_transformVelocity:(struct CGPoint)arg1 intoCoordinateSpaceForPointerClient:(id)arg2;	// IMP=0x001000000000f37d
- (void)_setShouldPeriodicallyRefreshClientTransform:(_Bool)arg1;	// IMP=0x001000000000f305
- (id)_recenteringContextRelativePointerPositionForPointerClient:(id)arg1;	// IMP=0x001000000000eb80
- (void)_invalidateEffectSourcesPassingTest:(CDUnknownBlockType)arg1 displayContext:(id)arg2;	// IMP=0x001000000000e36e
- (void)_invalidateHoverRegionsForAllPointerClientsExcludingPointerClient:(id)arg1 hoverRegion:(id)arg2;	// IMP=0x001000000000e0cf
- (void)_refreshClientTransformWithReason:(unsigned long long)arg1;	// IMP=0x001000000000dd0e
- (void)_handlePeriodicRefreshTimerAction;	// IMP=0x001000000000dc9a
- (void)_handleAccessibilityPointerSizePreferencesDidChange;	// IMP=0x001000000000dc57
- (void)_updatePointerVisibleByEntitledClients;	// IMP=0x001000000000d9f8
- (void)_updatePointerHiddenByEntitledClients;	// IMP=0x001000000000d799
- (double)_decelerationRate;	// IMP=0x001000000000d6f5
- (void)_getTransformForHoverRegion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d1f8
- (void)_beginPeriodicClientTransformRefreshTimer;	// IMP=0x001000000000d0cf
- (id)_systemPointerClients;	// IMP=0x001000000000cf42
- (id)_displayContextForPointerRenderingContextID:(unsigned int)arg1;	// IMP=0x001000000000cdf6
- (id)_displayContextForPointerEventContextID:(unsigned int)arg1;	// IMP=0x001000000000ccaa
- (void)_movePointerToDisplay:(id)arg1;	// IMP=0x001000000000cb33
- (id)overridingHoverRegionClientsForDisplayContext:(id)arg1;	// IMP=0x001000000000ca96
- (id)systemPointerInteractionContextForDisplayContext:(id)arg1;	// IMP=0x001000000000c9b2
- (void)xpcClientContextController:(id)arg1 setPointerPersistentlyVisibleForReasons:(id)arg2 forClient:(id)arg3;	// IMP=0x001000000000c7c3
- (void)xpcClientContextController:(id)arg1 setPointerPersistentlyHiddenForReasons:(id)arg2 forClient:(id)arg3;	// IMP=0x001000000000c5d4
- (void)xpcClientContextController:(id)arg1 autohidePointerForReason:(unsigned long long)arg2 forClient:(id)arg3;	// IMP=0x001000000000c02e
- (void)_removeOverridingHoverRegionClient:(id)arg1 forDisplay:(id)arg2;	// IMP=0x001000000000beb3
- (void)xpcClientContextController:(id)arg1 didSetOverridesHoverRegions:(_Bool)arg2 display:(id)arg3 forClient:(id)arg4;	// IMP=0x001000000000bd39
- (void)xpcClientContextController:(id)arg1 didSetSystemPointerInteractionContextID:(unsigned int)arg2 display:(id)arg3 forClient:(id)arg4;	// IMP=0x001000000000bb3d
- (void)xpcClientContextController:(id)arg1 setWantsServiceKeepAlive:(_Bool)arg2 forClient:(id)arg3;	// IMP=0x001000000000b9b2
- (void)xpcClientContextController:(id)arg1 invalidateContentMatchMoveSource:(id)arg2 forClient:(id)arg3;	// IMP=0x001000000000b87e
- (id)xpcClientContextController:(id)arg1 createContentMatchMoveSourceForDisplay:(id)arg2 client:(id)arg3 error:(id *)arg4;	// IMP=0x001000000000b45e
- (void)xpcClientContextController:(id)arg1 invalidatePointerPortalSourceCollection:(id)arg2 forClient:(id)arg3;	// IMP=0x001000000000b2ca
- (id)xpcClientContextController:(id)arg1 createPointerPortalSourceCollectionForDisplay:(id)arg2 client:(id)arg3 error:(id *)arg4;	// IMP=0x001000000000ae1b
- (void)xpcClientContextController:(id)arg1 didUpdateHoverRegion:(id)arg2 forClient:(id)arg3 transitionCompletion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000a831
- (void)xpcClientContextController:(id)arg1 didRemovePointerClient:(id)arg2;	// IMP=0x001000000000a467
- (void)xpcClientContextController:(id)arg1 didAddPointerClient:(id)arg2;	// IMP=0x001000000000a461
- (void)pointerVisibilityDidChange:(id)arg1;	// IMP=0x001000000000a42c
- (_Bool)isActiveOnMainDisplay;	// IMP=0x001000000000a3b8
- (void)_unhidePointerForReason:(id)arg1;	// IMP=0x001000000000a260
- (void)_hidePointerForReason:(id)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x001000000000a060
- (void)_hidePointerForReason:(id)arg1;	// IMP=0x001000000000a04c
- (_Bool)_shouldHideWhileGesturingForEventSource:(int)arg1;	// IMP=0x001000000000a033
- (double)_autohideDurationForEventSource:(int)arg1 isFocusedOnItem:(_Bool)arg2 settings:(id)arg3;	// IMP=0x0010000000009fc0
- (void)_cancelActiveGestureResetTimer;	// IMP=0x0010000000009f85
- (void)_restartActiveGestureResetTimer;	// IMP=0x0010000000009e6a
- (void)_cancelAutohideTimer;	// IMP=0x0010000000009e2f
- (void)_restartAutohideTimer;	// IMP=0x0010000000009b96
- (void)_cancelProvisionalPromotionTimer;	// IMP=0x0010000000009b5b
- (void)_startProvisionalPromotionTimer;	// IMP=0x00100000000099aa
- (void)_cancelDelayedUnhideTimer;	// IMP=0x001000000000996f
- (void)_startDelayedUnhideTimer;	// IMP=0x00100000000097ab
- (void)_updatePointerHiddenStateForTouchUp:(_Bool)arg1 fingerDown:(_Bool)arg2 withEvent:(struct __IOHIDEvent *)arg3 attributes:(id)arg4 previousEvent:(struct __IOHIDEvent *)arg5 previousPointerEventAttributes:(id)arg6;	// IMP=0x0010000000008f90
- (void)_resetPointerVelocity;	// IMP=0x0010000000008f79
- (_Bool)_updatePointerVelocityWithPointerParentEvent:(struct __IOHIDEvent *)arg1 previousEvent:(struct __IOHIDEvent *)arg2;	// IMP=0x0010000000008d11
- (void)_adjustDecelerationTargetForProjectedPosition:(struct CGPoint)arg1 liftOffPointerPosition:(struct CGPoint)arg2 pointerVelocity:(struct CGPoint)arg3 hitTestContext:(id)arg4 locationInsideHitTestedContext:(struct CGPoint)arg5 projectedDisplayContext:(id)arg6 withLookupGenerationID:(unsigned long long)arg7 withCompletion:(CDUnknownBlockType)arg8;	// IMP=0x0010000000008455
- (void)_adjustDecelerationTargetForProjectedPosition:(struct CGPoint)arg1 liftOffPointerPosition:(struct CGPoint)arg2 pointerVelocity:(struct CGPoint)arg3 hitTestContexts:(id)arg4 locationsInsideHitTestContexts:(id)arg5 projectedDisplayContext:(id)arg6 withLookupGenerationID:(unsigned long long)arg7;	// IMP=0x0010000000008072
- (_Bool)_performDecelerationAnimationWithPointerParentEvent:(struct __IOHIDEvent *)arg1 previousEvent:(struct __IOHIDEvent *)arg2;	// IMP=0x0010000000007bd8
- (void)_performRecenteringForActiveFocusRegion;	// IMP=0x001000000000791e
- (void)_cancelDelayedMouseRecenteringTimer;	// IMP=0x00100000000078e3
- (void)_restartDelayedMouseRecenteringTimer;	// IMP=0x0010000000007798
- (void)pointerEventStreamProvider:(id)arg1 didReceiveNonPointerEvent:(struct __IOHIDEvent *)arg2;	// IMP=0x00100000000076b9
- (_Bool)_eventSourceWantsDecelerationOrRecentering:(int)arg1;	// IMP=0x00100000000076ad
- (void)_updateActiveGestureMask:(struct __IOHIDEvent *)arg1;	// IMP=0x0010000000007603
- (void)pointerEventStreamProvider:(id)arg1 didReceivePointerEvent:(struct __IOHIDEvent *)arg2;	// IMP=0x0010000000006ca2
- (void)mousePointerGlobalDevicePreferencesDidChange:(id)arg1;	// IMP=0x0010000000006bd9
- (void)displayDetached:(id)arg1;	// IMP=0x0010000000006948
- (void)displayAttached:(id)arg1 pointerRenderingScene:(id)arg2 systemPointerScene:(id)arg3;	// IMP=0x0010000000006214
- (void)dealloc;	// IMP=0x0010000000006178
- (id)initWithPointerEventStreamProvider:(id)arg1 initialDisplay:(id)arg2 pointerRenderingScene:(id)arg3 systemPointerScene:(id)arg4 displayContextFactory:(id)arg5 xpcClientController:(id)arg6;	// IMP=0x0010000000005e74
- (id)initWithPointerEventStreamProvider:(id)arg1 initialDisplay:(id)arg2 pointerRenderingScene:(id)arg3 systemPointerScene:(id)arg4;	// IMP=0x0010000000005d88

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

