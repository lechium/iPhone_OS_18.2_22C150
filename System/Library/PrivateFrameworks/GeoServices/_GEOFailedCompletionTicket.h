//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapServiceTraits, NSString;

__attribute__((visibility("hidden")))
@interface _GEOFailedCompletionTicket
{
    NSString *searchQuery;	// 304 = 0x130
    NSString *_searchQuery;	// 312 = 0x138
}

- (void).cxx_destruct;	// IMP=0x00000000006f9056
@property(readonly, nonatomic, getter=_searchQuery) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
- (void)applyToPlaceInfo:(id)arg1;	// IMP=0x00000000006f903f
- (void)applyToCorrectedSearch:(id)arg1;	// IMP=0x00000000006f9039
- (void)submitWithAutoCompletionHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;	// IMP=0x00000000006f8f7e
- (_Bool)enableStructuredRAPAffordance;	// IMP=0x00000000006f8f76
- (long long)highlightType;	// IMP=0x00000000006f8f6e
- (id)guideSummaryLayoutMetadata;	// IMP=0x00000000006f8f66
- (id)placeSummaryLayoutMetadata;	// IMP=0x00000000006f8f5e
- (_Bool)shouldUseDistanceFeatureServerResults;	// IMP=0x00000000006f8f56
- (_Bool)showAutocompleteClientSource;	// IMP=0x00000000006f8f4e
- (_Bool)autocompleteTopSectionIsQuerySuggestions;	// IMP=0x00000000006f8f46
- (id)sortPriorityMapping;	// IMP=0x00000000006f8f3e
- (id)clientRankingModel;	// IMP=0x00000000006f8f36
- (_Bool)shouldEnableGrayscaleHighlighting;	// IMP=0x00000000006f8f2e
- (_Bool)hasShouldEnableGrayscaleHighlighting;	// IMP=0x00000000006f8f26
- (_Bool)shouldDisplayNoResults;	// IMP=0x00000000006f8f1e
- (_Bool)hasShouldDisplayNoResults;	// IMP=0x00000000006f8f16
- (double)retainSearchTime;	// IMP=0x00000000006f8f0d
- (void)applyToSuggestionEntry:(id)arg1 withAutocompleteSearchResultIdentifier:(id)arg2;	// IMP=0x00000000006f8f07
- (void)applyToSuggestionList:(id)arg1;	// IMP=0x00000000006f8f01
- (_Bool)matchesFragment:(id)arg1;	// IMP=0x00000000006f8ee4
- (id)initWithError:(id)arg1 searchQuery:(id)arg2 traits:(id)arg3;	// IMP=0x00000000006f8e43

// Remaining properties
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, nonatomic) CDStruct_026435ec dataRequestKind;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end

