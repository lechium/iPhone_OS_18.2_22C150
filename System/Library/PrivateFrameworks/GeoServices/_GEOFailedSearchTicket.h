//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOCategorySearchResultSection, GEODirectionIntent, GEOGuideSummaryLayoutMetadata, GEOMapItemIdentifier, GEOMapRegion, GEOMapServiceTraits, GEOPDMerchantLookupResult, GEOPDPlaceSummaryLayoutMetadata, GEORelatedSearchSuggestion, GEOResolvedItem, GEOResultRefinementGroup, GEOSearchAutoRedoThreshold, GEOSearchRedoButtonThreshold, GEOSearchSectionList, GEOSearchSessionData, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOFailedSearchTicket
{
    NSString *searchQuery;	// 304 = 0x130
    NSString *_searchQuery;	// 312 = 0x138
}

- (void).cxx_destruct;	// IMP=0x00000000006f8e12
@property(readonly, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
- (id)initWithError:(id)arg1 searchQuery:(id)arg2 traits:(id)arg3;	// IMP=0x00000000006f8d60

// Remaining properties
@property(readonly, nonatomic) NSArray *browseCategories;
@property(nonatomic) unsigned long long cachePolicy;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, nonatomic) GEOCategorySearchResultSection *categorySearchResultSection;
@property(readonly, nonatomic, getter=isChainResultSet) _Bool chainResultSet;
@property(readonly, nonatomic) GEOResolvedItem *clientResolvedResult;
@property(readonly, nonatomic) NSArray *collectionResults;
@property(readonly, nonatomic) CDStruct_026435ec dataRequestKind;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, nonatomic) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) GEODirectionIntent *directionIntent;
@property(readonly, nonatomic) _Bool disableAdditionalViewportPadding;
@property(readonly, nonatomic) NSArray *displayHeaderSubstitutes;
@property(readonly, nonatomic) NSArray *dotPlaces;
@property(readonly, nonatomic) unsigned int dymSuggestionVisibleTime;
@property(readonly, nonatomic) _Bool enableStructuredRAPAffordance;
@property(readonly, nonatomic) GEOMapItemIdentifier *geoMapItemIdentifierForSpotlight;
@property(readonly, nonatomic) GEOGuideSummaryLayoutMetadata *guideSummaryLayoutMetadata;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) int mapDisplayType;
@property(readonly, nonatomic) GEOPDMerchantLookupResult *merchantLookupResult;
@property(readonly, nonatomic) GEOPDPlaceSummaryLayoutMetadata *placeSummaryLayoutMetadata;
@property(readonly, nonatomic) NSArray *publisherResults;
@property(readonly, nonatomic) NSArray *relatedEntitySections;
@property(readonly, nonatomic) NSArray *relatedSearchSuggestions;
@property(readonly, nonatomic) GEOMapRegion *resultBoundingRegion;
@property(readonly, nonatomic) NSString *resultDisplayHeader;
@property(readonly, nonatomic) GEOResultRefinementGroup *resultRefinementGroup;
@property(readonly, nonatomic) NSString *resultSectionHeader;
@property(readonly, nonatomic) NSArray *retainedSearchMetadata;
@property(readonly, nonatomic) GEOSearchAutoRedoThreshold *searchAutoRedoThreshold;
@property(readonly, nonatomic) GEOSearchRedoButtonThreshold *searchRedoButtonThreshold;
@property(readonly, nonatomic) NSArray *searchResultSections;
@property(readonly, nonatomic) int searchResultType;
@property(readonly, nonatomic) int searchResultViewType;
@property(readonly, nonatomic) GEOSearchSectionList *searchSectionList;
@property(readonly, nonatomic) GEOSearchSessionData *searchSessionData;
@property(readonly, nonatomic) _Bool shouldAllowManualRedoSearch;
@property(readonly, nonatomic) _Bool shouldEnableRedoSearch;
@property(readonly, nonatomic) _Bool showDymSuggestionCloseButton;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end

