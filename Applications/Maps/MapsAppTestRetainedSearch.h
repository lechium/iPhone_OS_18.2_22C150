//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MapsAppTestRetainedSearch
{
    NSString *_query;	// 8 = 0x8
    long long _autocompleteResultIndex;	// 16 = 0x10
    long long _searchResultIndex;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000005383d0
- (void)returnToSearchResults;	// IMP=0x00100000005382e1
- (void)returnToRetainedAutoComplete;	// IMP=0x001000000053809f
- (void)didPresentPlaceCard:(id)arg1;	// IMP=0x0010000000537fbf
- (void)searchSessionDidChangeSearchResults:(id)arg1;	// IMP=0x0010000000537daa
- (void)startSearchTest;	// IMP=0x0010000000537cdd
- (void)searchAutoCompleteTestReceiveResponse:(id)arg1;	// IMP=0x00100000005376ee
- (void)startAutoCompleteTest;	// IMP=0x001000000053761e
- (void)startAutoCompleteOrSearchTest;	// IMP=0x0010000000537595
- (_Bool)runTest;	// IMP=0x0010000000537165

@end
