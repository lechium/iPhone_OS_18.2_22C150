//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AuxiliaryTasksManager, ChromeViewController, EntryPointsCoordinator, GCDTimer, GEOObserverHashTable, NSArray, NSMutableArray, NSMutableSet, NavigationSession;
@protocol MapsSession, OS_dispatch_queue;

@interface PlatformController : NSObject
{
    NSObject<OS_dispatch_queue> *_stackLock;	// 8 = 0x8
    EntryPointsCoordinator *_entryPointsCoordinator;	// 16 = 0x10
    AuxiliaryTasksManager *_auxiliaryTasksManager;	// 24 = 0x18
    _Bool _isPrimary;	// 32 = 0x20
    _Bool _didReplaySessions;	// 33 = 0x21
    ChromeViewController *_chromeViewController;	// 40 = 0x28
    id <MapsSession> _previousSession;	// 48 = 0x30
    NSMutableArray *_stack;	// 56 = 0x38
    GEOObserverHashTable *_observers;	// 64 = 0x40
    NSMutableSet *_auxiliaryTaskCreationPreferencesSatisfied;	// 72 = 0x48
    GCDTimer *_mapViewRenderTimeoutTimer;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000b7473d
@property(nonatomic) _Bool didReplaySessions; // @synthesize didReplaySessions=_didReplaySessions;
@property(retain, nonatomic) GCDTimer *mapViewRenderTimeoutTimer; // @synthesize mapViewRenderTimeoutTimer=_mapViewRenderTimeoutTimer;
@property(retain, nonatomic) NSMutableSet *auxiliaryTaskCreationPreferencesSatisfied; // @synthesize auxiliaryTaskCreationPreferencesSatisfied=_auxiliaryTaskCreationPreferencesSatisfied;
@property(retain, nonatomic) GEOObserverHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableArray *stack; // @synthesize stack=_stack;
@property(readonly, nonatomic) id <MapsSession> previousSession; // @synthesize previousSession=_previousSession;
@property(nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(nonatomic) __weak ChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(readonly, nonatomic) AuxiliaryTasksManager *auxiliaryTasksManager; // @synthesize auxiliaryTasksManager=_auxiliaryTasksManager;
- (void)mapViewDidBecomeFullyDrawnNotification:(id)arg1;	// IMP=0x0010000000b7456e
- (void)replaySessions;	// IMP=0x0010000000b73f18
- (void)prepareToReplaySessions;	// IMP=0x0010000000b73cb9
- (id)description;	// IMP=0x0010000000b73c31
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000b73b3f
- (void)addObserver:(id)arg1;	// IMP=0x0010000000b73a4d
- (void)clearIfCurrentSessionIsKindOfClass:(Class)arg1;	// IMP=0x0010000000b73928
- (void)clearIfCurrentSession:(id)arg1;	// IMP=0x0010000000b73800
- (void)clearSessions;	// IMP=0x0010000000b7373b
- (void)removeSession:(id)arg1;	// IMP=0x0010000000b735bd
- (void)_suspendSession:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000b734b0
- (void)popUntil:(CDUnknownBlockType)arg1;	// IMP=0x0010000000b72f42
- (void)replaceCurrentSessionWithSession:(id)arg1;	// IMP=0x0010000000b72d6d
- (void)popIfCurrentSession:(id)arg1;	// IMP=0x0010000000b72c45
- (void)popSession;	// IMP=0x0010000000b72af1
- (void)pushSession:(id)arg1;	// IMP=0x0010000000b7272b
@property(readonly, nonatomic) NSArray *sessionStack;
@property(readonly, nonatomic) id <MapsSession> currentSession;
- (void)_handleInitialRouteLoaded:(id)arg1;	// IMP=0x0010000000b723d5
- (void)_createAuxiliaryTasksIfNecessaryForPreference:(long long)arg1;	// IMP=0x0010000000b70ecf
- (void)_createAllAuxiliaryTasks;	// IMP=0x0010000000b70e84
- (_Bool)_shouldCreateAuxiliaryTask:(Class)arg1 forCreationPreference:(long long)arg2;	// IMP=0x0010000000b70dde
@property(readonly, nonatomic) EntryPointsCoordinator *entryPointsCoordinator;
- (void)dealloc;	// IMP=0x0010000000b70c5b
- (id)init;	// IMP=0x0010000000b7083d
@property(nonatomic, readonly) NavigationSession *currentNavigationSession;
- (void)_continuePushNavigationWithRoute:(id)arg1 navigationMode:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000032c4a8
- (void)pushNavigationWithRoute:(id)arg1 navigationMode:(unsigned long long)arg2 shouldCheckNavSafetyAlert:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000032c112
- (id)directionsDataSource;	// IMP=0x001000000055d47e

@end
