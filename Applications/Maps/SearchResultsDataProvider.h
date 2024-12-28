//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, GEORelatedSearchSuggestion, NSArray, NSMutableDictionary, NSString, RelatedSearchSuggestion, SearchInfo, SearchSession;
@protocol ActionCoordination;

@interface SearchResultsDataProvider : NSObject
{
    GEOObserverHashTable *_observers;	// 8 = 0x8
    NSMutableDictionary *_venues;	// 16 = 0x10
    SearchSession *_searchSession;	// 24 = 0x18
    SearchInfo *_originalSearchInfo;	// 32 = 0x20
    _Bool _active;	// 40 = 0x28
    _Bool _isLoading;	// 41 = 0x29
    NSArray *_searchResults;	// 48 = 0x30
    id <ActionCoordination> _actionCoordinator;	// 56 = 0x38
    SearchInfo *_searchInfo;	// 64 = 0x40
    NSArray *_suggestions;	// 72 = 0x48
    GEORelatedSearchSuggestion *_currentSuggestion;	// 80 = 0x50
    RelatedSearchSuggestion *_relatedSuggestion;	// 88 = 0x58
    NSString *_errorString;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000003cc9c5
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(readonly, nonatomic) NSString *errorString; // @synthesize errorString=_errorString;
@property(readonly, nonatomic) RelatedSearchSuggestion *relatedSuggestion; // @synthesize relatedSuggestion=_relatedSuggestion;
@property(readonly, nonatomic) GEORelatedSearchSuggestion *currentSuggestion; // @synthesize currentSuggestion=_currentSuggestion;
@property(readonly, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(readonly, nonatomic) SearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(nonatomic) __weak id <ActionCoordination> actionCoordinator; // @synthesize actionCoordinator=_actionCoordinator;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void)searchSessionManagerSessionWillPerformSearch;	// IMP=0x00100000003cc8b4
- (void)searchSessionManagerSessionDidReceiveUpdate;	// IMP=0x00100000003cc80c
- (void)searchSessionManagerSessionDidInvalidate;	// IMP=0x00100000003cc764
- (void)searchSessionManagerSessionDidFail;	// IMP=0x00100000003cc6bc
- (void)venueCategoryContentDownloader:(id)arg1 didReceiveAutoCompleteSubcategories:(id)arg2 subcategoriesType:(int)arg3;	// IMP=0x00100000003cc5d5
- (void)venueCategoryContentDownloader:(id)arg1 didReceiveSearchResults:(id)arg2 shouldSwitchToBestFloor:(_Bool)arg3;	// IMP=0x00100000003cc36b
- (void)venueCategoryContentDownloaderDidCancel:(id)arg1;	// IMP=0x00100000003cc284
- (void)venueCategoryContentDownloaderDidFail:(id)arg1;	// IMP=0x00100000003cc19d
- (void)venueCategoryContentDownloader:(id)arg1 didFailToFetchMapItemWithError:(id)arg2;	// IMP=0x00100000003cc0c0
- (void)venueCategoryContentDownloader:(id)arg1 didChangeMapItem:(id)arg2;	// IMP=0x00100000003cbedb
- (void)venueCategoryContentDownloaderDidStart:(id)arg1;	// IMP=0x00100000003cbdf4
- (void)_setSearchSession:(id)arg1;	// IMP=0x00100000003cbcbe
- (void)_updateCurrentSearchSession;	// IMP=0x00100000003cbc46
- (void)performSearchForSuggestion:(id)arg1;	// IMP=0x00100000003cbb44
- (void)selectCategory:(id)arg1 forVenueWithVenueIdentifier:(id)arg2;	// IMP=0x00100000003cba69
- (void)handleVenueSearchResultsWithSelectedSearchResult:(id)arg1 searchFieldItem:(id)arg2 browseCategories:(id)arg3;	// IMP=0x00100000003cb8b7
- (void)presentVenueWithVenueCardItem:(id)arg1;	// IMP=0x00100000003cb76e
- (void)addVenueProviderForMapItem:(id)arg1;	// IMP=0x00100000003cb5fd
- (void)downloadVenueInfoForMapItem:(id)arg1;	// IMP=0x00100000003cb58d
- (id)venueProviderForMapItem:(id)arg1;	// IMP=0x00100000003cb52d
- (id)_identifierForVenueCardItem:(id)arg1;	// IMP=0x00100000003cb4ad
- (id)_identifierForMapItem:(id)arg1;	// IMP=0x00000000003cb37f
- (id)_searchSessionErrorString;	// IMP=0x00100000003cb2ca
@property(readonly, nonatomic) GEOObserverHashTable *observers;
- (id)_orderedCurrentSearchResults;	// IMP=0x00100000003cad9c
- (void)searchSessionManagerReceiveEVChargersUpdate:(id)arg1;	// IMP=0x00100000003cad86
- (void)_notifyObservers;	// IMP=0x00100000003cacb6
- (void)_updateAndNotifyObservers:(_Bool)arg1;	// IMP=0x00100000003ca347
- (_Bool)isInVenueBrowseMode;	// IMP=0x00100000003ca307
@property(readonly, nonatomic) _Bool hasInitialData;
@property(readonly, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
- (_Bool)_isItemVenue:(id)arg1;	// IMP=0x00100000003ca11a
- (void)dealloc;	// IMP=0x00100000003ca06b
- (id)init;	// IMP=0x00100000003c9ef8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
