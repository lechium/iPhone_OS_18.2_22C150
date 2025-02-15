//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CustomPOIsController, MKMapView, MapCameraController, MapSelectionManager, NSArray, NSHashTable, NSString, PlaceCardLinkedPlacesItemSource, RouteStartEndItemSource, SearchDotPlacesItemSource, SearchPinsManagerShowSearchResultsAnimation, SearchResult, SearchResultsDebugOverlay, SearchResultsItemSource, VKLabelMarker, VenuesManager;
@protocol POIShape, SearchPinsManagerDelegate;

@interface SearchPinsManager : NSObject
{
    SearchResult *_hiddenStartPin;	// 8 = 0x8
    SearchPinsManagerShowSearchResultsAnimation *_showSearchResultsAnimation;	// 16 = 0x10
    VKLabelMarker *_selectedLabelMarker;	// 24 = 0x18
    id <POIShape> _startPOIShape;	// 32 = 0x20
    NSArray *_endPOIShapes;	// 40 = 0x28
    NSHashTable *_poiShapeLoadingObservers;	// 48 = 0x30
    _Bool _useAlternateDirectionsPins;	// 56 = 0x38
    _Bool _hasAutoSelectedResult;	// 57 = 0x39
    SearchResult *_startPin;	// 64 = 0x40
    NSArray *_endPins;	// 72 = 0x48
    SearchResult *_droppedPin;	// 80 = 0x50
    SearchResultsItemSource *_searchResultsItemSource;	// 88 = 0x58
    SearchResultsItemSource *_droppedPinsItemSource;	// 96 = 0x60
    SearchResultsItemSource *_collectionPinsItemSource;	// 104 = 0x68
    SearchResultsItemSource *_singleSearchResultItemSource;	// 112 = 0x70
    id <SearchPinsManagerDelegate> _delegate;	// 120 = 0x78
    RouteStartEndItemSource *_routeStartEndItemSource;	// 128 = 0x80
    PlaceCardLinkedPlacesItemSource *_placeCardLinkedPlacesItemSource;	// 136 = 0x88
    SearchDotPlacesItemSource *_searchDotPlacesItemSource;	// 144 = 0x90
    MapCameraController *_mapCameraController;	// 152 = 0x98
    CustomPOIsController *_customPOIsController;	// 160 = 0xa0
    MapSelectionManager *_mapSelectionManager;	// 168 = 0xa8
    VenuesManager *_venuesManager;	// 176 = 0xb0
    SearchResultsDebugOverlay *_searchResultsDebugOverlay;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0020000000a77d73
@property(retain, nonatomic) SearchResultsDebugOverlay *searchResultsDebugOverlay; // @synthesize searchResultsDebugOverlay=_searchResultsDebugOverlay;
@property(nonatomic) __weak VenuesManager *venuesManager; // @synthesize venuesManager=_venuesManager;
@property(nonatomic) __weak MapSelectionManager *mapSelectionManager; // @synthesize mapSelectionManager=_mapSelectionManager;
@property(nonatomic) __weak CustomPOIsController *customPOIsController; // @synthesize customPOIsController=_customPOIsController;
@property(retain, nonatomic) MapCameraController *mapCameraController; // @synthesize mapCameraController=_mapCameraController;
@property(readonly, nonatomic) SearchDotPlacesItemSource *searchDotPlacesItemSource; // @synthesize searchDotPlacesItemSource=_searchDotPlacesItemSource;
@property(readonly, nonatomic) PlaceCardLinkedPlacesItemSource *placeCardLinkedPlacesItemSource; // @synthesize placeCardLinkedPlacesItemSource=_placeCardLinkedPlacesItemSource;
@property(readonly, nonatomic) RouteStartEndItemSource *routeStartEndItemSource; // @synthesize routeStartEndItemSource=_routeStartEndItemSource;
@property(nonatomic) __weak id <SearchPinsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SearchResultsItemSource *singleSearchResultItemSource; // @synthesize singleSearchResultItemSource=_singleSearchResultItemSource;
@property(readonly, nonatomic) SearchResultsItemSource *collectionPinsItemSource; // @synthesize collectionPinsItemSource=_collectionPinsItemSource;
@property(readonly, nonatomic) SearchResultsItemSource *droppedPinsItemSource; // @synthesize droppedPinsItemSource=_droppedPinsItemSource;
- (id);	// IMP=0x0010000000a77c69
@property(readonly, nonatomic) _Bool hasAutoSelectedResult; // @synthesize hasAutoSelectedResult=_hasAutoSelectedResult;
@property(readonly, nonatomic) _Bool useAlternateDirectionsPins; // @synthesize useAlternateDirectionsPins=_useAlternateDirectionsPins;
@property(readonly, nonatomic) SearchResult *droppedPin; // @synthesize droppedPin=_droppedPin;
@property(readonly, nonatomic) NSArray *endPins; // @synthesize endPins=_endPins;
@property(readonly, nonatomic) SearchResult *startPin; // @synthesize startPin=_startPin;
- (_Bool)_canDroppedPinBeVisibleInVenue;	// IMP=0x0010000000a7795f
- (void)_updateDroppedPinVisibility;	// IMP=0x0010000000a7786b
- (void)didChangeFocusedVenue:(id)arg1 focusedBuilding:(id)arg2 displayedFloorOrdinal:(short)arg3;	// IMP=0x0010000000a77850
- (void)_startLoadingNewEndPOIShapes;	// IMP=0x0010000000a77408
- (void)_startLoadingNewStartPOIShape;	// IMP=0x0010000000a76fe0
- (void)_notifyDidLoadStartPOIShape:(id)arg1 endPOIShapes:(id)arg2;	// IMP=0x0010000000a76aab
- (void)_setEndPOIShapes:(id)arg1;	// IMP=0x0010000000a767fe
- (void)_setStartPOIShape:(id)arg1;	// IMP=0x0010000000a765a0
- (void)removePOIShapeLoadingObserver:(id)arg1;	// IMP=0x0010000000a7639f
- (void)addPOIShapeLoadingObserver:(id)arg1;	// IMP=0x0010000000a7619e
@property(readonly, nonatomic) NSArray *endPOIShapesIfLoaded;
@property(readonly, nonatomic) id <POIShape> startPOIShapeIfLoaded;
- (void)clearLinkedPlacesAndPolygon;	// IMP=0x0010000000a760a7
- (void)showLinkedPlacesAndPolygonForPlaceCardItem:(id)arg1;	// IMP=0x0010000000a75fd7
- (void)mapSelectionManagerDidDeselectSearchResult:(id)arg1;	// IMP=0x0010000000a75f0a
- (void)selectAndShowSearchResult:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000a75a59
- (void)dropPinsForSearchResults:(id)arg1 animate:(_Bool)arg2;	// IMP=0x0010000000a75a42
- (void)dropPinsForSearchResults:(id)arg1 searchDotPlaces:(id)arg2 selectedSearchResult:(id)arg3 animate:(_Bool)arg4 itemSource:(id)arg5;	// IMP=0x0010000000a753b0
- (void)dropPinsForSearchResults:(id)arg1 selectedSearchResult:(id)arg2 animate:(_Bool)arg3;	// IMP=0x0010000000a75385
- (void)selectLabelMarkerForSearchResult:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000a74f82
@property(readonly, nonatomic) struct UIEdgeInsets carRecommendedMapPadding;
- (void)_completeShowSearchResultsAnimation;	// IMP=0x0010000000a74f29
- (void)_clearShowSearchResultsAnimation;	// IMP=0x0010000000a74c8d
- (void)mapViewDidBecomeFullyDrawn;	// IMP=0x0010000000a74a81
- (void)_animateShowingSearchResults:(id)arg1 selectedSearchResult:(id)arg2 historyItem:(id)arg3 suggestedMapRegion:(id)arg4 minZoom:(id)arg5 maxZoom:(id)arg6 disableAdditionalViewportPadding:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0010000000a7446c
- (void)setSearchPinsFromSearchInfo:(id)arg1 scrollToResults:(_Bool)arg2 displayPlaceCardForResult:(id)arg3 historyItem:(id)arg4 animated:(_Bool)arg5 itemSource:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000a73529
- (void)setSearchPinsFromSearchInfo:(id)arg1 scrollToResults:(_Bool)arg2 displayPlaceCardForResult:(id)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000a73501
- (void)setCollectionsPinsFromSearchInfo:(id)arg1 scrollToResults:(_Bool)arg2 displayPlaceCardForResult:(id)arg3 animated:(_Bool)arg4;	// IMP=0x0010000000a734da
- (void)setSingleSearchPinFromSearchInfo:(id)arg1 scrollToResults:(_Bool)arg2 displayPlaceCardForResult:(id)arg3 historyItem:(id)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000a734b2
- (_Bool)_isShowingDirectionsPins;	// IMP=0x0010000000a73446
- (void)clearCollectionPins;	// IMP=0x0010000000a72d4a
- (void)clearSingleResultPins;	// IMP=0x0010000000a725f8
- (void)clearDroppedPin;	// IMP=0x0010000000a721a8
- (void)clearSearchPins;	// IMP=0x0010000000a719d5
- (void)clearDirectionsPins;	// IMP=0x0010000000a71755
- (void)_clearEndPins;	// IMP=0x0010000000a713fb
- (void)_clearStartPin;	// IMP=0x0010000000a711a8
@property(nonatomic) _Bool disableEndPins;
@property(nonatomic) _Bool disableStartPin;
- (_Bool)canSelectPin:(id)arg1;	// IMP=0x0010000000a70f55
- (void)selectDroppedPinIsAnimated:(_Bool)arg1;	// IMP=0x0010000000a70e6e
- (void)setDroppedPin:(id)arg1 animated:(_Bool)arg2 shouldSelect:(_Bool)arg3;	// IMP=0x0010000000a70cf7
- (void)setStartPin:(id)arg1 endPins:(id)arg2 useAlternateDirectionsPins:(_Bool)arg3;	// IMP=0x0010000000a700ac
- (void)setStartPin:(id)arg1 endPin:(id)arg2 useAlternateDirectionsPins:(_Bool)arg3;	// IMP=0x0010000000a6ffa4
- (void)setStartPin:(id)arg1 endPins:(id)arg2;	// IMP=0x0010000000a6ff8f
- (void)setStartPin:(id)arg1 endPin:(id)arg2;	// IMP=0x0010000000a6ff7a
- (void)setSearchPins:(id)arg1 selectedPin:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000a6f8e5
@property(readonly, nonatomic) SearchResult *endPin;
- (id)_setOfPinsForPinType:(unsigned long long)arg1;	// IMP=0x0010000000a6f78b
- (id)allSearchResults;	// IMP=0x0010000000a6f775
@property(readonly, nonatomic) MKMapView *mapView;
- (void)dealloc;	// IMP=0x0010000000a6f2af
- (id)initWithMapViewCameraController:(id)arg1;	// IMP=0x0010000000a6ef30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SearchResultsItemSource *searchResultsItemSource; // @synthesize searchResultsItemSource=_searchResultsItemSource;
@property(readonly) Class superclass;

@end

