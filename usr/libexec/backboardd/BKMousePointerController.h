//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKCADisplayMonitor, BKDisplayController, BKDisplayLink, BKHIDClientConnectionManager, BKKeyboardHIDEventProcessor, BKMouseEventAccumulator, BKMousePointerAnalyticsReporter, BKMousePointerAnnotationController, BKMousePointerControllerConfiguration, BKMousePointerDeviceAvailabilityMonitor, BKMousePointerEventStatisticsLogger, BKMousePointerRegion, BKMousePointerRegionArrangement, BKMousePointerServiceServer, BKOrientationManager, BKSLocalDefaults, BKSMousePointerDevicePreferences, BKSmartCoverHIDEventProcessor, BKTouchPadManager, BSAbsoluteMachTimer, NSArray, NSDictionary, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSSet, NSString;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface BKMousePointerController : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    struct os_unfair_lock_s _preferencesLock;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_pointerDeviceAvailabilityMonitorQueue;	// 16 = 0x10
    BKMousePointerControllerConfiguration *_configuration;	// 24 = 0x18
    double _mainDisplayCornerRadius;	// 32 = 0x20
    BKMousePointerDeviceAvailabilityMonitor *_pointerDeviceAvailabilityMonitor;	// 40 = 0x28
    BKMousePointerAnalyticsReporter *_analyticsReporter;	// 48 = 0x30
    BKCADisplayMonitor *_displayMonitor;	// 56 = 0x38
    id <BSInvalidatable> _displayMonitorObservingAssertion;	// 64 = 0x40
    NSString *_mainDisplayUUID;	// 72 = 0x48
    NSDictionary *_regionArrangementByCoalitionID;	// 80 = 0x50
    NSDictionary *_regionArrangementByDisplayUUID;	// 88 = 0x58
    NSArray *_interestingDisplays;	// 96 = 0x60
    NSArray *_displayArrangement;	// 104 = 0x68
    BKMousePointerRegionArrangement *_regionArrangement;	// 112 = 0x70
    BKMousePointerRegion *_pointerRegion;	// 120 = 0x78
    NSMutableArray *_activePointerAnimations;	// 128 = 0x80
    unsigned long long _pointerAnimationRevisionID;	// 136 = 0x88
    struct CGPoint _pointerRegionPoint;	// 144 = 0x90
    unsigned char _pointerRegionEdgeMask;	// 160 = 0xa0
    NSMutableSet *_disableEventsPIDs;	// 168 = 0xa8
    unsigned long long _interpolatedEventMask;	// 176 = 0xb0
    BKDisplayLink *_displayLink;	// 184 = 0xb8
    unsigned long long _displayLinkPauseTime;	// 192 = 0xc0
    unsigned long long _displayLinkUnpauseTime;	// 200 = 0xc8
    BSAbsoluteMachTimer *_displayLinkPauseTimer;	// 208 = 0xd0
    BKMouseEventAccumulator *_eventAccumulator;	// 216 = 0xd8
    NSSet *;	// 224 = 0xe0
    long long _mainDisplayInterfaceOrientation;	// 232 = 0xe8
    long long _rawDeviceOrientation;	// 240 = 0xf0
    NSMutableDictionary *_senderPropertiesBySenderID;	// 248 = 0xf8
    long long _activeKeyboardModifiers;	// 256 = 0x100
    BKTouchPadManager *_touchPadManager;	// 264 = 0x108
    BKKeyboardHIDEventProcessor *_keyboardEventProcessor;	// 272 = 0x110
    BKSmartCoverHIDEventProcessor *_smartCoverEventProcessor;	// 280 = 0x118
    BKDisplayController *_displayController;	// 288 = 0x120
    BKOrientationManager *_orientationManager;	// 296 = 0x128
    id <BSInvalidatable> _orientationManagerObservationAssertion;	// 304 = 0x130
    id <BSInvalidatable> _displayBlankingObservationAssertion;	// 312 = 0x138
    id <BSInvalidatable> _keyboardEventObservationAssertion;	// 320 = 0x140
    id <BSInvalidatable> _smartCoverObservationAssertion;	// 328 = 0x148
    BKMousePointerAnnotationController *_annotationController;	// 336 = 0x150
    BKMousePointerServiceServer *_ipcServer_do_not_access_directly;	// 344 = 0x158
    NSMutableArray *_lifecycleObservers;	// 352 = 0x160
    BKMousePointerEventStatisticsLogger *_statisticsLogger;	// 360 = 0x168
    NSHashTable *_globalDevicePreferencesObservers;	// 368 = 0x170
    NSMutableOrderedSet *_buttonDownRepositionAssertions;	// 376 = 0x178
    NSMutableDictionary *_globalEventRoutesByDisplayID;	// 384 = 0x180
    NSMutableSet *_globalContextsPinnedByMouse;	// 392 = 0x188
    NSMutableSet *_hitTestContextsPinnedByMouse;	// 400 = 0x190
    NSMutableDictionary *_modelUpdateSuppressionAssertionsByDisplayID;	// 408 = 0x198
    _Bool _debugVisualizationEnabled;	// 416 = 0x1a0
    _Bool _displayLinkDisabled;	// 417 = 0x1a1
    _Bool _readyToReceiveEvents;	// 418 = 0x1a2
    _Bool _eventsPaused;	// 419 = 0x1a3
    _Bool _displayLinkPaused;	// 420 = 0x1a4
    _Bool _haveUnassociatedMouse;	// 421 = 0x1a5
    _Bool _haveDisplayAssociatedMouse;	// 422 = 0x1a6
    struct atomic_flag _invalid;	// 423 = 0x1a7
    _Bool _eventsDisabled;	// 424 = 0x1a8
    BKSLocalDefaults *_localDefaults;	// 432 = 0x1b0
    BKHIDClientConnectionManager *_HIDConnectionManager;	// 440 = 0x1b8
}

+ (id)standardConfiguration;	// IMP=0x00200000000688b6
- (void).cxx_destruct;	// IMP=0x002000000005c451
@property(retain, nonatomic) BKHIDClientConnectionManager *HIDConnectionManager; // @synthesize HIDConnectionManager=_HIDConnectionManager;
@property(retain, nonatomic) BKSLocalDefaults *localDefaults; // @synthesize localDefaults=_localDefaults;
@property(readonly, nonatomic) _Bool eventsDisabled; // @synthesize eventsDisabled=_eventsDisabled;
- (void)_displayLinkFired:(id)arg1;	// IMP=0x001000000005c178
- (void)globalKeyboardModifiersDidChange:(long long)arg1;	// IMP=0x001000000005c104
- (void)smartCoverStateDidChange:(int)arg1;	// IMP=0x001000000005c046
- (void)monitor:(id)arg1 activeDisplayPropertiesDidChange:(id)arg2;	// IMP=0x001000000005bf67
- (void)monitor:(id)arg1 displayDidBecomeInactive:(id)arg2;	// IMP=0x001000000005be88
- (void)monitor:(id)arg1 displayDidBecomeActive:(id)arg2;	// IMP=0x001000000005bda9
- (void)display:(id)arg1 didBecomeBlank:(_Bool)arg2;	// IMP=0x001000000005bd26
- (void)mousePointerIOHIDServicesRemoved:(id)arg1;	// IMP=0x001000000005b8ca
- (void)mousePointerIOHIDServicesAdded:(id)arg1;	// IMP=0x001000000005ad28
- (void)mousePointerDeviceAvailabilityMonitorDidChangeAvailability:(id)arg1;	// IMP=0x001000000005ab57
- (void)orientationManager:(id)arg1 deviceOrientationMayHaveChanged:(long long)arg2 changeSource:(long long)arg3 isDeviceOrientationLocked:(_Bool)arg4;	// IMP=0x001000000005aa59
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x001000000005a0a3
- (_Bool)destinationPIDMatchesHapticFeedbackRequestPID:(int)arg1;	// IMP=0x0010000000059f3a
- (void)setEventsDisabled:(_Bool)arg1 pid:(int)arg2;	// IMP=0x0010000000059c81
- (void)setDisplayArrangement:(id)arg1;	// IMP=0x0010000000059bb5
- (void)removeGlobalDevicePreferencesObserver:(id)arg1;	// IMP=0x0010000000059b37
- (void)addGlobalDevicePreferencesObserver:(id)arg1;	// IMP=0x0010000000059aae
- (void)removeLifecycleObserver:(id)arg1;	// IMP=0x0010000000059a6d
- (void)addLifecycleObserver:(id)arg1;	// IMP=0x0010000000059a2c
@property(retain, nonatomic) BKSMousePointerDevicePreferences *globalDevicePreferences;
- (void)setPreferences:(id)arg1 forDevice:(id)arg2;	// IMP=0x001000000005957a
- (id)preferencesForDevice:(id)arg1;	// IMP=0x0010000000059523
- (void)hitTestRegionsDidChange:(id)arg1 forDisplayUUID:(id)arg2;	// IMP=0x0010000000059423
- (void)stopRoutingGlobalEventsForPID:(int)arg1;	// IMP=0x001000000005937b
- (void)setGlobalPointerEventRoutes:(id)arg1 forPID:(int)arg2 displayUUID:(id)arg3;	// IMP=0x00100000000590b0
- (void)getHitTestContextsAtPoint:(id)arg1 withAdditionalContexts:(id)arg2 onDisplay:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000058b1e
- (id)acquireButtonDownPointerRepositionAssertionForReason:(id)arg1 contextRelativePointerPosition:(id)arg2 onDisplay:(id)arg3 restrictingToPID:(int)arg4;	// IMP=0x00100000000585da
- (void)setContextRelativePointerPosition:(id)arg1 withInitialVelocity:(id)arg2 onDisplay:(id)arg3 withDecelerationRate:(double)arg4 restrictingToPID:(int)arg5 auditPID:(int)arg6;	// IMP=0x001000000005843d
- (void)setContextRelativePointerPosition:(id)arg1 onDisplay:(id)arg2 withAnimationParameters:(id)arg3 restrictingToPID:(int)arg4 auditPID:(int)arg5;	// IMP=0x0010000000058368
- (void)setPointerPosition:(struct CGPoint)arg1 onDisplay:(id)arg2 withAnimationParameters:(id)arg3 auditPID:(int)arg4;	// IMP=0x001000000005818d
- (void)setGlobalPointerPosition:(struct CGPoint)arg1 synthesizeEvents:(_Bool)arg2 process:(id)arg3;	// IMP=0x001000000005807f
- (void)setGlobalPointerPosition:(struct CGPoint)arg1 process:(id)arg2;	// IMP=0x0010000000058065
@property(readonly, nonatomic) struct CGPoint globalPointerPosition;
@property(readonly, nonatomic) struct CGPoint normalizedGlobalPointerPosition;
- (id)suppressPointerModelUpdatesAssertionForDisplay:(id)arg1 reason:(id)arg2;	// IMP=0x0010000000057d58
@property(readonly, nonatomic) NSArray *availableDevices;
- (void)invalidate;	// IMP=0x00100000000579f8
- (void)dealloc;	// IMP=0x00100000000579ba
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0010000000057242
- (id)init;	// IMP=0x00100000000571e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

