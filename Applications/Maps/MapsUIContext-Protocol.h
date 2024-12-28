//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AppCoordinator, AppStateManager, CarStateManager, IOSChromeViewController;
@protocol ActionCoordination, NavActionCoordination;

@protocol MapsUIContext
@property(readonly, nonatomic) CarStateManager *carStateManager;
@property(readonly, nonatomic) id <NavActionCoordination> navActionCoordinator;
@property(readonly, nonatomic) id <ActionCoordination> coordinator;
@property(readonly, nonatomic) IOSChromeViewController *chrome;
@property(readonly, nonatomic) AppStateManager *appStateManager;
@property(readonly, nonatomic) AppCoordinator *appCoordinator;
@property(readonly, nonatomic, getter=isCarPlayOnlyContext) _Bool carPlayOnlyContext;
@end
