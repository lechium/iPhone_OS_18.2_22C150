//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ChromeViewController, GEOMapServiceTraits, IOSTransitContainerViewController, NSString, NavIdleTimeoutTimer, NavigationDebugViewsController, PlaceCardItem, PlaceCardViewController, StatusBarBackgroundViewStyle, TransitNavigationTrayViewController, TransitSteppingAnalyticsDelegate, UIButton, UIScrollView, UIView;
@protocol StatusBarSupplementaryView;

@interface IOSTransitNavigationContext
{
    IOSTransitContainerViewController *_containerViewController;	// 8 = 0x8
    TransitNavigationTrayViewController *_trayViewController;	// 16 = 0x10
    PlaceCardViewController *_placeCardViewController;	// 24 = 0x18
    NavigationDebugViewsController *_debugViewsController;	// 32 = 0x20
    TransitSteppingAnalyticsDelegate *_analyticsDelegate;	// 40 = 0x28
    UIButton *_recenterButton;	// 48 = 0x30
    NavIdleTimeoutTimer *_arrivalEndTimer;	// 56 = 0x38
    _Bool _cameraPanningOrZoomed;	// 64 = 0x40
    _Bool _trayPresented;	// 65 = 0x41
    CDUnknownBlockType _whenTrayPresentedBlock;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000006ccc00
@property(readonly, nonatomic) UIScrollView *pptTestScrollView;
- (void)pptTestDismissTrayAnimated:(_Bool)arg1 assertTrayType:(long long)arg2;	// IMP=0x00100000006ccbb8
- (_Bool)pptTestIsTrayType:(long long)arg1;	// IMP=0x00100000006ccbac
- (void)pptTestUpdateTrayLayout:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x00100000006cca31
@property(readonly, nonatomic) _Bool pptTestCanUpdateTrayLayout;
- (_Bool)pptTestMoveToBoardStep;	// IMP=0x00100000006cc9c3
- (void)pptTestMoveToNextStep;	// IMP=0x00100000006cc9a6
@property(readonly, nonatomic) _Bool pptTestHasNextStep;
@property(readonly, nonatomic) long long pptTestCurrentStepIndex;
@property(readonly, nonatomic) _Bool pptTestSupportStepping;
- (void)navigationDebugViewsTracePlaybackDidSeekToGuideMePortionOfTransitSegment:(id)arg1;	// IMP=0x00100000006cc949
- (void)navigationDebugViewsTracePlaybackDidSeek:(id)arg1;	// IMP=0x00100000006cc943
- (void)navigationDebugViewsTracePlaybackSpeedDidChange:(id)arg1 speedMultiplier:(double)arg2;	// IMP=0x00100000006cc93d
- (void);	// IMP=0x00100000006cc937
- (void)placeCardViewControllerRemovedObservingHandle:(id)arg1;	// IMP=0x00100000006cc931
- (void)placeCardViewControllerShowOfflineMaps:(id)arg1;	// IMP=0x00100000006cc92b
- (void)placeCardViewController:(id)arg1 showOfflineMapRegionSelectorForRegion:(id)arg2 name:(id)arg3 shouldShowDataManagementAfterDownload:(_Bool)arg4;	// IMP=0x00100000006cc925
- (void)placeCardViewController:(id)arg1 presentPOIEnrichmentWithCoordinator:(id)arg2;	// IMP=0x00100000006cc91f
- (void)placeCardViewController:(id)arg1 dismissAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000006cc919
- (void)placeCardViewController:(id)arg1 seeAllCollections:(id)arg2 usingTitle:(id)arg3 usingCollectionIds:(id)arg4;	// IMP=0x00100000006cc913
- (void)placeCardViewController:(id)arg1 selectExploreGuidesWithGuideLocation:(id)arg2;	// IMP=0x00100000006cc90d
- (void)placeCardViewController:(id)arg1 showCuratedCollection:(id)arg2;	// IMP=0x00100000006cc907
- (void)placeCardViewController:(id)arg1 editShortcut:(id)arg2;	// IMP=0x00100000006cc901
- (void)placeCardViewController:(id)arg1 showRelatedMapItems:(id)arg2 withTitle:(id)arg3 originalMapItem:(id)arg4 analyticsDelegate:(id)arg5;	// IMP=0x00100000006cc8fb
- (void)placeCardViewController:(id)arg1 editCollection:(id)arg2;	// IMP=0x00100000006cc8f5
- (void)placeCardViewController:(id)arg1 showCollection:(id)arg2;	// IMP=0x00100000006cc8ef
- (void)placeCardViewController:(id)arg1 requestCopyLinkToClipboard:(id)arg2;	// IMP=0x00100000006cc8e9
- (_Bool)placeCardViewController:(id)arg1 shouldShowTransitScheduleForMapItem:(id)arg2 departureSequence:(id)arg3;	// IMP=0x00100000006cc8e1
- (void)placeCardViewController:(id)arg1 showTransitScheduleForMapItem:(id)arg2 departureSequence:(id)arg3;	// IMP=0x00100000006cc8db
- (void)placeCardViewController:(id)arg1 editNameOfMapItem:(id)arg2 saveHandler:(CDUnknownBlockType)arg3 cancelHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000006cc8d5
- (void)placeCardViewController:(id)arg1 createNewCollectionWithSession:(id)arg2;	// IMP=0x00100000006cc8cf
- (void)placeCardViewController:(id)arg1 pickCollectionWithSession:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;	// IMP=0x00100000006cc8c9
- (void)placeCardViewController:(id)arg1 doSearchItem:(id)arg2 withUserInfo:(id)arg3;	// IMP=0x00100000006cc8c3
- (void)placeCardViewController:(id)arg1 didUpdateLinkedPlacesFromPlaceCardItem:(id)arg2;	// IMP=0x00100000006cc8bd
- (void)placeCardViewController:(id)arg1 didSelectParent:(id)arg2;	// IMP=0x00100000006cc8b7
- (void)placeCardViewController:(id)arg1 presentPlacesForMapItem:(id)arg2 searchCategory:(id)arg3;	// IMP=0x00100000006cc8b1
- (void)placeCardViewController:(id)arg1 presentCategoryPlacesListForMapItem:(id)arg2 searchCategory:(id)arg3;	// IMP=0x00100000006cc8ab
- (void)placeCardViewController:(id)arg1 displayStoreViewControllerForAppWithiTunesIdentifier:(id)arg2;	// IMP=0x00100000006cc8a5
- (void)placeCardViewController:(id)arg1 enterLookAroundForMapItem:(id)arg2 lookAroundView:(id)arg3;	// IMP=0x00100000006cc89f
- (void)placeCardViewController:(id)arg1 enterFlyoverForMapItem:(id)arg2;	// IMP=0x00100000006cc899
- (void)placeCardViewController:(id)arg1 createDroppedPin:(id)arg2;	// IMP=0x00100000006cc893
- (void)placeCardViewController:(id)arg1 editLocationOfMarkedLocation:(id)arg2;	// IMP=0x00100000006cc88d
- (void)placeCardViewController:(id)arg1 removeDroppedPin:(id)arg2;	// IMP=0x00100000006cc887
- (void)placeCardViewController:(id)arg1 selectDisplayedAddressFromPlaceCardItem:(id)arg2;	// IMP=0x00100000006cc881
- (void)placeCardViewController:(id)arg1 openURL:(id)arg2;	// IMP=0x00100000006cc812
- (void)placeCardViewController:(id)arg1 showTransitIncidents:(id)arg2;	// IMP=0x00100000006cc7fd
- (void)placeCardViewController:(id)arg1 selectTransitLineItem:(id)arg2;	// IMP=0x00100000006cc7f7
- (void)placeCardViewController:(id)arg1 selectMapItem:(id)arg2 address:(id)arg3;	// IMP=0x00100000006cc7f1
- (void)placeCardViewController:(id)arg1 doDirectionItem:(id)arg2 userInfo:(id)arg3;	// IMP=0x00100000006cc7eb
- (void)placeCardViewController:(id)arg1 mapItemDidChange:(id)arg2;	// IMP=0x00100000006cc7e5
- (void)placeCardViewController:(id)arg1 placeCardItemWillChange:(id)arg2;	// IMP=0x00100000006cc7df
@property(readonly, nonatomic) long long displayedViewMode;
@property(readonly, nonatomic) GEOMapServiceTraits *newTraits;
- (void)_presentPlaceCardViewControllerForMapItem:(id)arg1 modally:(_Bool)arg2;	// IMP=0x00100000006cc588
- (id)_placeCardViewController;	// IMP=0x00100000006cc4f0
- (void)_presentIncidents:(id)arg1;	// IMP=0x00100000006cc3c9
- (void)presentAdvisory:(id)arg1;	// IMP=0x00100000006cc1f0
- (void)idleTimerDidTimeout:(id)arg1;	// IMP=0x00100000006cc0c0
- (void)_updateArrivalEndTimerIfNeeded;	// IMP=0x00100000006cbdff
- (void)_backlightLuminanceDidChange;	// IMP=0x00100000006cbd75
- (void)_updateRecenterButtonVisibility;	// IMP=0x00100000006cbc60
- (void)canRecenterDidChange;	// IMP=0x00100000006cbc4e
- (void)_recenterButtonTapped:(id)arg1;	// IMP=0x00100000006cbc3c
- (id)_recenterButton;	// IMP=0x00100000006cb94f
- (void)didTapMapView:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00100000006cb731
- (void)chromeNavigationDisplay:(id)arg1 userDidTapMap:(id)arg2 atPoint:(struct CGPoint)arg3;	// IMP=0x00100000006cb71c
- (void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2;	// IMP=0x00100000006cb6a8
- (void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2;	// IMP=0x00100000006cb5fc
- (_Bool)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2;	// IMP=0x00100000006cb5e4
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;	// IMP=0x00100000006cb5de
- (_Bool)wantsMapSelectionControl;	// IMP=0x00100000006cb5d6
- (void)container:(id)arg1 didChangeContainerStyle:(unsigned long long)arg2;	// IMP=0x00100000006cb5c4
- (void)container:(id)arg1 didPresentContainee:(id)arg2 finished:(_Bool)arg3;	// IMP=0x00100000006cb50c
- (void)_performWhenTrayPresented:(CDUnknownBlockType)arg1;	// IMP=0x00100000006cb4ba
- (void)containeeViewControllerGoToPreviousState:(id)arg1 withSender:(id)arg2;	// IMP=0x00100000006cb3ce
- (void)transitDirectionsStepsListDataSource:(id)arg1 didTapGetTicketsForSegments:(id)arg2;	// IMP=0x00100000006cb20d
- (void)transitDirectionsStepsListDataSource:(id)arg1 willExpandItem:(id)arg2;	// IMP=0x00100000006cb1c0
- (void)transitDirectionsStepsListDataSource:(id)arg1 didUpdateActiveGuidanceStep:(id)arg2;	// IMP=0x00100000006cb046
- (void)transitDirectionsStepsListDataSource:(id)arg1 didUpdateDisplayedGuidanceStep:(id)arg2;	// IMP=0x00100000006caeae
- (void)transitDirectionsStepsListDataSource:(id)arg1 didTapClusteredVehiclesCell:(id)arg2;	// IMP=0x00100000006caa6d
- (void)didReselectDisplayedStep;	// IMP=0x00100000006ca98b
- (void)transitDirectionsStepsListDataSource:(id)arg1 didSelectTrip:(id)arg2;	// IMP=0x00100000006ca876
- (void)directionsStepsListDidTapRAPButton:(id)arg1;	// IMP=0x00100000006ca745
- (void)directionsStepsListDidTapShareButton:(id)arg1;	// IMP=0x00100000006ca610
- (void)transitNavigationTrayDidTapClose:(id)arg1;	// IMP=0x00100000006ca4bb
- (void)didEndDisplayingInLockScreen;	// IMP=0x00100000006ca4b5
- (void)willBeginDisplayingInSecureLockScreen;	// IMP=0x00100000006ca498
- (void)willManuallyFrameStep;	// IMP=0x00100000006ca487
- (void)_didReturnToDefaultZoomPan;	// IMP=0x00100000006ca462
- (void)_didLeaveDefaultZoomPan;	// IMP=0x00100000006ca3f2
- (_Bool)isCameraPanningOrZoomed;	// IMP=0x00100000006ca3e2
- (void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x00100000006ca3d0
- (void)mapViewNavigationCameraDidReturnToDefaultZoom:(id)arg1;	// IMP=0x00100000006ca3be
- (void)mapViewNavigationCameraHasStoppedPanning:(id)arg1;	// IMP=0x00100000006ca3ac
- (void)mapViewNavigationCameraHasStartedPanning:(id)arg1;	// IMP=0x00100000006ca39a
- (void)mapViewNavigationCameraDidLeaveDefaultZoom:(id)arg1;	// IMP=0x00100000006ca388
- (void)recenterOnActiveStep;	// IMP=0x00100000006ca279
- (void)stopRequestingRealtimeUpdates;	// IMP=0x00100000006ca207
- (void)startRequestingRealtimeUpdates;	// IMP=0x00100000006ca199
- (_Bool)isDisplayingManuallySelectedStep;	// IMP=0x00100000006ca0c3
- (id)fetchLastLocation;	// IMP=0x00100000006ca06c
- (id)fetchCurrentRoute;	// IMP=0x00100000006c9f7f
@property(readonly, nonatomic) _Bool shouldResetStateAfterResigning;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (_Bool)permitsLookAroundShowing;	// IMP=0x00100000006c9ec9
- (_Bool)permitsWeatherShowing;	// IMP=0x00100000006c9ec1
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x00100000006c9d43
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x00100000006c9798
- (_Bool)requiresStaleMapEffect;	// IMP=0x00100000006c9790
- (id)fullscreenViewController;	// IMP=0x00100000006c977b
- (id)init;	// IMP=0x00100000006c95ac

// Remaining properties
@property(nonatomic) __weak ChromeViewController *chromeViewController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"ChromeViewController",?,W,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PlaceCardItem *placeCardItemForLookAroundButton;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"PlaceCardItem",?,R,N

@property(readonly, nonatomic) _Bool showsMapView;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) StatusBarBackgroundViewStyle *statusBarBackgroundViewStyle;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"StatusBarBackgroundViewStyle",?,R,N

@property(readonly, nonatomic) UIView<StatusBarSupplementaryView> *statusBarSupplementaryView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView<StatusBarSupplementaryView>",?,R,N

@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsMapInsetsToRespectSafeAreaInsets;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N


@end
