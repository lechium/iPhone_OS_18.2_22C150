//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AddressBookAddress, GEOEnhancedPlacement, GEOLabelGeometry, GEOServerResultScoreMetadata, MKMapItem, MapsLocationOfInterest, MapsSuggestionsEntry, NSArray, NSDate, NSSet, NSString, ParkedCar, PersonalizedItemClientFeatureIDAdornment, PersonalizedItemPrioritizedStringAdornment, PersonalizedItemSource, PersonalizedItemStyleAttributesAdornment, SearchResult, TrafficIncidentReport, VKLabelMarker;
@protocol SearchDotPlace;

@interface SuggestionsItem : NSObject
{
    MapsSuggestionsEntry *_suggestion;	// 8 = 0x8
    MKMapItem *_mapItem;	// 16 = 0x10
    unsigned short _order;	// 24 = 0x18
    _Bool _hasPriorityOverride;	// 26 = 0x1a
    long long _sourceType;	// 32 = 0x20
    long long _sourceSubtype;	// 40 = 0x28
    long long _priorityOverride;	// 48 = 0x30
    PersonalizedItemSource *source;	// 56 = 0x38
    ParkedCar *parkedCar;	// 64 = 0x40
    NSSet *_keys;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000002f2252
@property(readonly, nonatomic) NSSet *keys; // @synthesize keys=_keys;
@property(retain, nonatomic) ParkedCar *parkedCar; // @synthesize parkedCar;
@property(nonatomic) __weak PersonalizedItemSource *source; // @synthesize source;
@property(readonly, nonatomic) long long priorityOverride; // @synthesize priorityOverride=_priorityOverride;
@property(readonly, nonatomic) _Bool hasPriorityOverride; // @synthesize hasPriorityOverride=_hasPriorityOverride;
@property(readonly, nonatomic) long long sourceSubtype; // @synthesize sourceSubtype=_sourceSubtype;
@property(readonly, nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, nonatomic) long long suggestionType;
@property(readonly, nonatomic) id <SearchDotPlace> searchDotPlace;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<SearchDotPlace>",?,R,N

- (id)leafPersonalizedAutocompleteItems;	// IMP=0x00100000002f2161
@property(readonly, nonatomic) _Bool isCompoundPersonalizedAutocompleteItem;
@property(readonly, nonatomic) unsigned long long serverItemIndexInSection;
@property(readonly, nonatomic) unsigned long long serverSectionIndex;
@property(readonly, nonatomic) _Bool hasServerItemIndex;
@property(readonly, nonatomic) NSArray *autocompletionStrings;
@property(readonly, nonatomic) id autocompleteObject;
@property(readonly, nonatomic) NSArray *searchableStrings;
@property(readonly, nonatomic) NSDate *eventDate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSDate",?,R,N

@property(readonly, nonatomic) _Bool mustRefineMapItem;
@property(readonly, nonatomic) _Bool shouldBeHiddenFromMap;
@property(readonly, nonatomic) _Bool shouldBeClustered;
@property(readonly, nonatomic) _Bool showsBalloonCallout;
@property(readonly, nonatomic) PersonalizedItemClientFeatureIDAdornment *clientFeatureID;
@property(readonly, nonatomic) PersonalizedItemStyleAttributesAdornment *styleAttributes;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *subtitle;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *prefix;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *title;
@property(readonly, nonatomic) unsigned long long sortOrder;
@property(readonly, nonatomic) AddressBookAddress *address;
- (id)suggestion;	// IMP=0x00100000002f17bc
@property(readonly, nonatomic) VKLabelMarker *sourceLabelMarker;
@property(readonly, nonatomic) SearchResult *searchResult;
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) GEOLabelGeometry *labelGeometry;
@property(readonly, nonatomic) GEOEnhancedPlacement *enhancedPlacement;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, nonatomic) GEOServerResultScoreMetadata *serverResultScoreMetadata;
@property(readonly, nonatomic) unsigned long long priority;
- (id)initWithSuggestion:(id)arg1 order:(unsigned short)arg2 sourceType:(long long)arg3 sourceSubtype:(long long)arg4 hasPriorityOverride:(_Bool)arg5 priorityOverride:(long long)arg6;	// IMP=0x00100000002f1217

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) TrafficIncidentReport *incidentReport;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"TrafficIncidentReport",?,R,N

@property(readonly, nonatomic) _Bool isRouteStartOrEnd;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) MapsLocationOfInterest *locationOfInterest;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"MapsLocationOfInterest",?,R,N

@property(readonly, nonatomic) _Bool needsToPreserveSelection;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) long long preferredDisplayedSearchResultType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsDisplayedSearchResultsTypePoints;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N


@end

