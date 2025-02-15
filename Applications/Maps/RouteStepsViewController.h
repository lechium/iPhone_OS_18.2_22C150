//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, MISSING_TYPE, NSString, RouteStepListViewController, TransitDirectionsListViewController, UIScrollView, UIViewController;
@protocol RoutePlanningDataCoordination, RouteStepListController, RouteStepsViewControllerDelegate;

@interface RouteStepsViewController
{
    UIViewController<RouteStepListController> *_observingHeaderOfController;	// 8 = 0x8
    RouteStepListViewController *_driveOrWalkDirectionsListViewController;	// 16 = 0x10
    TransitDirectionsListViewController *_transitDirectionsListViewController;	// 24 = 0x18
    id <RoutePlanningDataCoordination> _dataCoordinator;	// 32 = 0x20
    id <RouteStepsViewControllerDelegate> _delegate;	// 40 = 0x28
    ContainerHeaderView *_modalHeaderView;	// 48 = 0x30
}

+ (_Bool)wantsDefaultHeaderContentViews;	// IMP=0x00200000008bf372
- (void).cxx_destruct;	// IMP=0x00200000008c1567
@property(retain, nonatomic) ContainerHeaderView *modalHeaderView; // @synthesize modalHeaderView=_modalHeaderView;
@property(nonatomic) __weak id <RouteStepsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <RoutePlanningDataCoordination> dataCoordinator; // @synthesize dataCoordinator=_dataCoordinator;
- (int)currentMapViewTargetForAnalytics;	// IMP=0x00100000008c14dd
- (int)currentUITargetForAnalytics;	// IMP=0x00100000008c1483
- (void)_setupConstraints;	// IMP=0x00100000008c13b8
- (void)_setupChildViewControllerIfNeeded:(id)arg1;	// IMP=0x00100000008c1156
- (void)_clearControllerIfNeeded:(id)arg1;	// IMP=0x00100000008c108a
- (void)_updateVisibleViewsForDirectionsType:(int)arg1;	// IMP=0x00100000008c0f6f
- (id)_transitDirectionsListViewController;	// IMP=0x00100000008c0e18
- (id)_driveOrWalkDirectionsListViewController;	// IMP=0x00100000008c0d19
@property(readonly, nonatomic) UIScrollView *scrollViewForDirectionsDetailsOfCurrentRoute;
- (id)directionsListViewControllerForDirectionsType:(int)arg1;	// IMP=0x00100000008c0c03
- (void)transitDirectionsStepsListDataSource:(id)arg1 didTapGetTicketsForSegments:(id)arg2;	// IMP=0x00100000008c0a76
- (void)transitDirectionsStepsListDataSource:(id)arg1 didTapIncidentsCell:(id)arg2 withAdvisory:(id)arg3;	// IMP=0x00100000008c0a0b
- (void)transitDirectionsStepsListDataSource:(id)arg1 didTapClusteredVehiclesCell:(id)arg2;	// IMP=0x00100000008c072d
- (void)transitDirectionsStepsListDataSource:(id)arg1 didTapRowForItem:(id)arg2;	// IMP=0x00100000008c058d
- (void)transitDirectionsStepsListDataSource:(id)arg1 didSelectTrip:(id)arg2;	// IMP=0x00100000008c0466
- (void)directionsStepsList:(id)arg1 didTapRowForRouteStep:(id)arg2;	// IMP=0x00100000008c03e9
- (void)_shareRoute:(id)arg1 sourceView:(id)arg2;	// IMP=0x00100000008c031c
- (void)directionsStepsListDidTapRAPButton:(id)arg1;	// IMP=0x00100000008c007b
- (void)directionsStepsListDidTapShareButton:(id)arg1;	// IMP=0x00100000008bfd76
- (void)_didTapDoneButton:(id)arg1;	// IMP=0x00100000008bfc73
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateRouteCollection:(id)arg2;	// IMP=0x00100000008bfb31
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateOriginName:(id)arg2 destinationName:(id)arg3;	// IMP=0x00100000008bfa8c
@property(readonly, nonatomic) long long observedRoutePlanningData;
- (void)_updateHairlineVisibility:(_Bool)arg1;	// IMP=0x00100000008bfa21
- (void)_observeHeaderFlagForController:(id)arg1;	// IMP=0x00100000008bf951
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000008bf8a7
- (MISSING_TYPE *)didBecomeCurrent;	// IMP=0x00100000008bf80d
- (void)willBecomeCurrent:(_Bool)arg1;	// IMP=0x00100000008bf7bf
- (void)willChangeContainerStyle:(unsigned long long)arg1;	// IMP=0x00100000008bf65b
- (void)handleDismissAction:(id)arg1;	// IMP=0x00100000008bf649
- (void)headerViewButtonTapped:(id)arg1 buttonType:(unsigned long long)arg2;	// IMP=0x00100000008bf5fa
- (void)viewDidLoad;	// IMP=0x00100000008bf37a
- (void)_customInit;	// IMP=0x00100000008bf2e7
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000008bf289
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000008bf22b
- (void)dealloc;	// IMP=0x00100000008bf1eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

