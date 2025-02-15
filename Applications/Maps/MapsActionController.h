//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppCoordinator, AppStateManager, CarStateManager, IOSChromeViewController, RichMapsActivity;
@protocol ActionCoordination, NavActionCoordination;

@interface MapsActionController : NSObject
{
    RichMapsActivity *_pendingActivityToApplyAfterNavEnd;	// 8 = 0x8
    _Bool _isRestoringState;	// 16 = 0x10
    AppCoordinator *_appCoordinator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000b88a72
@property(nonatomic) __weak AppCoordinator *appCoordinator; // @synthesize appCoordinator=_appCoordinator;
- (void)_applyActivity:(id)arg1 assumedSourceFidelity:(unsigned long long)arg2 source:(long long)arg3;	// IMP=0x0010000000b889d1
- (void)_performAction:(id)arg1;	// IMP=0x0010000000b889b5
- (void)applyRichMapsActivity:(id)arg1;	// IMP=0x0010000000b882a7
- (void)getUserLocationIfneededFor:(id)arg1;	// IMP=0x0010000000b87eeb
- (void)applyRichMapsActivityOrWaitForLocation:(id)arg1;	// IMP=0x0010000000b87d5a
- (void)navigationEnded;	// IMP=0x0010000000b87c0c
- (_Bool)pendingAction;	// IMP=0x0010000000b87bfe
- (void)entryPointsCoordinator:(id)arg1 didMergedRichMapsActivity:(id)arg2;	// IMP=0x0010000000b873f1
- (void)entryPointsCoordinator:(id)arg1 performErrorAction:(id)arg2;	// IMP=0x0010000000b8732c
@property(readonly, nonatomic) CarStateManager *carStateManager;
@property(readonly, nonatomic, getter=isCarPlayOnlyContext) _Bool carPlayOnlyContext;
- (_Bool)isNavigationTurnByTurnOrStepping;	// IMP=0x0010000000b872e5
@property(readonly, nonatomic, getter=isRestoringState) _Bool isRestoringState;
@property(readonly, nonatomic) AppStateManager *appStateManager;
@property(readonly, nonatomic) id <NavActionCoordination> navActionCoordinator;
@property(readonly, nonatomic) id <ActionCoordination> coordinator;
@property(readonly, nonatomic) IOSChromeViewController *chrome;
- (id)init;	// IMP=0x0010000000b870e6
- (void)checkHandlersForActionClasses;	// IMP=0x0010000000b870e0

@end

