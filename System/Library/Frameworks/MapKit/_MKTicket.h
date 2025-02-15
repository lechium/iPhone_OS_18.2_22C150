//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOCategorySearchResultSection, GEODirectionIntent, GEOGuideSummaryLayoutMetadata, GEOMapRegion, GEOMapServiceTraits, GEOPDPlaceSummaryLayoutMetadata, GEORelatedSearchSuggestion, GEOResolvedItem, GEOResultRefinementGroup, GEOSearchAutoRedoThreshold, GEOSearchRedoButtonThreshold, GEOSearchSectionList, GEOSearchSessionData, MKMapItemIdentifier, NSArray, NSError, NSString;
@protocol GEOMapServiceTicket;

__attribute__((visibility("hidden")))
@interface _MKTicket : NSObject
{
    id <GEOMapServiceTicket> _ticket;	// 8 = 0x8
    NSArray *_exactMapItems;	// 16 = 0x10
    NSArray *_refinedMapItems;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000ef712
@property(readonly, nonatomic) int mapDisplayType;
@property(readonly, nonatomic) GEOSearchSessionData *searchSessionData;
@property(readonly, nonatomic) MKMapItemIdentifier *mapItemIdentifierForSpotlight;
@property(readonly, nonatomic) _Bool enableStructuredRAPAffordance;
@property(readonly, nonatomic) int searchResultViewType;
@property(readonly, nonatomic) _Bool disableAdditionalViewportPadding;
@property(readonly, nonatomic) GEOSearchSectionList *searchSectionList;
@property(readonly, nonatomic) GEOResultRefinementGroup *resultRefinementGroup;
@property(readonly, nonatomic) GEOGuideSummaryLayoutMetadata *guideSummaryLayoutMetadata;
@property(readonly, nonatomic) GEOPDPlaceSummaryLayoutMetadata *placeSummaryLayoutMetadata;
@property(readonly, nonatomic) GEOSearchRedoButtonThreshold *searchRedoButtonThreshold;
@property(readonly, nonatomic) GEOSearchAutoRedoThreshold *searchAutoRedoThreshold;
@property(readonly, nonatomic) NSArray *dotPlaces;
@property(readonly, nonatomic) NSArray *publisherResults;
@property(readonly, nonatomic) NSArray *collectionResults;
@property(readonly, nonatomic) NSArray *relatedEntitySections;
@property(readonly, nonatomic) GEOCategorySearchResultSection *categorySearchResultSection;
@property(readonly, nonatomic) NSArray *searchResultSections;
@property(readonly, nonatomic) NSString *sectionHeader;
@property(readonly, nonatomic) _Bool showDymSuggestionCloseButton;
@property(readonly, nonatomic) unsigned int dymSuggestionVisibleTime;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) _Bool shouldAllowManualRedoButton;
@property(readonly, nonatomic) _Bool shouldEnableRedoSearch;
@property(readonly, nonatomic) NSArray *displayHeaderSubstitutes;
@property(readonly, nonatomic) NSString *resultDisplayHeader;
@property(readonly, nonatomic) GEODirectionIntent *directionIntent;
@property(readonly, nonatomic) NSArray *retainedSearchMetadata;
@property(readonly, nonatomic) GEOResolvedItem *clientResolvedResult;
@property(readonly, nonatomic) int searchResultType;
@property(readonly, nonatomic) NSArray *browseCategories;
@property(readonly, nonatomic) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property(readonly, nonatomic) NSArray *relatedSearchSuggestions;
@property(readonly, nonatomic, getter=isChainResultSet) _Bool chainResultSet;
@property(readonly, nonatomic) GEOMapRegion *boundingRegion;
@property(readonly, nonatomic) NSArray *refinedMapItems;
@property(readonly, nonatomic) NSArray *exactMapItems;
- (void)applyToPlaceInfo:(id)arg1;	// IMP=0x00000000000ef398
- (void)applyToCorrectedSearch:(id)arg1;	// IMP=0x00000000000ef382
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)cancel;	// IMP=0x00000000000ef356
- (void)submitWithHandler:(CDUnknownBlockType)arg1 timeout:(long long)arg2 queue:(id)arg3 networkActivity:(CDUnknownBlockType)arg4;	// IMP=0x00000000000eef3d
- (void)submitWithHandler:(CDUnknownBlockType)arg1 queue:(id)arg2 networkActivity:(CDUnknownBlockType)arg3;	// IMP=0x00000000000eef23
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;	// IMP=0x00000000000eef0c
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;	// IMP=0x00000000000eeeee
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 timeout:(long long)arg2 networkActivity:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ee6fc
- (void)submitWithHandler:(CDUnknownBlockType)arg1 timeout:(long long)arg2 networkActivity:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ee6e0
@property(readonly, copy) NSString *description;
- (id)initWithTicket:(id)arg1;	// IMP=0x00000000000ee5dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

