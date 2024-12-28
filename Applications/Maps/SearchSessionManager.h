//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOLatLng, GEOObserverHashTable, GEOPDViewportInfo, GEOSearchSessionData, NSString, SearchSession;
@protocol ActionCoordination, SearchSessionManagerDelegate;

@interface SearchSessionManager : NSObject
{
    SearchSession *_searchSession;	// 8 = 0x8
    id <SearchSessionManagerDelegate> _delegate;	// 16 = 0x10
    id <ActionCoordination> _coordinator;	// 24 = 0x18
    GEOObserverHashTable *_observers;	// 32 = 0x20
    GEOPDViewportInfo *_lastSearchSessionViewport;	// 40 = 0x28
    GEOLatLng *_searchOriginationPreviousLatlng;	// 48 = 0x30
    GEOSearchSessionData *_previousSearchSessionData;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000ed42f9
@property(retain, nonatomic) GEOSearchSessionData *previousSearchSessionData; // @synthesize previousSearchSessionData=_previousSearchSessionData;
@property(retain, nonatomic) GEOLatLng *searchOriginationPreviousLatlng; // @synthesize searchOriginationPreviousLatlng=_searchOriginationPreviousLatlng;
- (id);	// IMP=0x0010000000ed42c3
@property(retain, nonatomic) GEOPDViewportInfo *lastSearchSessionViewport; // @synthesize lastSearchSessionViewport=_lastSearchSessionViewport;
@property(retain, nonatomic) GEOObserverHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak id <ActionCoordination> coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) __weak id <SearchSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_spotlightMatchingSearchResult:(id)arg1 searchInfo:(id)arg2;	// IMP=0x0010000000ed3e1c
- (void)_presentLoadingResults:(id)arg1;	// IMP=0x0010000000ed3d93
- (void)_handleSearchAlongRouteSearchSession:(id)arg1;	// IMP=0x0010000000ed39cf
- (_Bool)isSearchAlongTheRoute;	// IMP=0x0010000000ed3886
- (long long)_userInterfaceIdiom;	// IMP=0x0010000000ed37d5
@property(readonly, nonatomic) _Bool singleResultMode;
- (void)_clearSearchField;	// IMP=0x0010000000ed375b
- (void)_handleUpdateSearchFieldWithSearchFieldItem:(id)arg1;	// IMP=0x0010000000ed36ea
- (void)clearLastSearchSessionViewport;	// IMP=0x0010000000ed36d6
- (void)clearSearchSession;	// IMP=0x0010000000ed35ec
- (void)restoreSearchForItem:(id)arg1 withResults:(id)arg2 sessionOrigin:(unsigned long long)arg3;	// IMP=0x0010000000ed3522
- (void)performSearchForSearchItem:(id)arg1 withUserInfo:(id)arg2 refinementsQuery:(id)arg3 recentAutocompleteSessionData:(id)arg4;	// IMP=0x0010000000ed2920
- (void)performSearchForSearchItem:(id)arg1 withUserInfo:(id)arg2 recentAutocompleteSessionData:(id)arg3;	// IMP=0x0010000000ed2908
- (void)searchSessionDidInvalidate:(id)arg1 reason:(unsigned long long)arg2;	// IMP=0x0010000000ed27da
- (void)searchSessionDidFail:(id)arg1;	// IMP=0x0010000000ed2568
- (void)searchSessionDidChangeSearchResults:(id)arg1;	// IMP=0x0010000000ed106d
- (void)refreshedEVChargersReceieved:(id)arg1;	// IMP=0x0010000000ed0f1a
- (void)searchSessionDidChangeSearchFieldItem:(id)arg1;	// IMP=0x0010000000ed0db9
- (void)searchSessionWillPerformSearch:(id)arg1;	// IMP=0x0010000000ed0b11
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000ed0aa8
- (void)addObserver:(id)arg1;	// IMP=0x0010000000ed0a3f
- (void)_searchSessionWillStart:(id)arg1;	// IMP=0x0010000000ed0988
@property(readonly, nonatomic) SearchSession *currentSearchSession; // @synthesize currentSearchSession=_searchSession;
- (id)init;	// IMP=0x0010000000ed08b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
