//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AddressBookAddress, GEOEnhancedPlacement, GEOLabelGeometry, MKMapItem, MapsLocationOfInterest, NSArray, NSDate, NSSet, ParkedCar, PersonalizedItemClientFeatureIDAdornment, PersonalizedItemPrioritizedStringAdornment, PersonalizedItemSource, PersonalizedItemStyleAttributesAdornment, SearchResult, TrafficIncidentReport, VKLabelMarker;
@protocol SearchDotPlace;

@protocol PersonalizedItem <NSObject>
@property(readonly, nonatomic) _Bool mustRefineMapItem;
@property(readonly, nonatomic) _Bool shouldBeHiddenFromMap;
@property(readonly, nonatomic) NSArray *searchableStrings;
@property(readonly, nonatomic) AddressBookAddress *address;
@property(readonly, nonatomic) VKLabelMarker *sourceLabelMarker;
@property(readonly, nonatomic) SearchResult *searchResult;
@property(readonly, nonatomic) _Bool showsBalloonCallout;
@property(readonly, nonatomic) _Bool shouldBeClustered;
@property(readonly, nonatomic) PersonalizedItemClientFeatureIDAdornment *clientFeatureID;
@property(readonly, nonatomic) PersonalizedItemStyleAttributesAdornment *styleAttributes;
@property(readonly, nonatomic) unsigned long long sortOrder;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *subtitle;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *title;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *prefix;
@property(readonly, nonatomic) GEOLabelGeometry *labelGeometry;
@property(readonly, nonatomic) GEOEnhancedPlacement *enhancedPlacement;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(nonatomic) __weak PersonalizedItemSource *source;
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) unsigned long long priority;
@property(readonly, nonatomic) NSSet *keys;

@optional
@property(readonly, nonatomic) long long preferredDisplayedSearchResultType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly, nonatomic) id <SearchDotPlace> searchDotPlace;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<SearchDotPlace>",?,R,N

@property(readonly, nonatomic) _Bool wantsDisplayedSearchResultsTypePoints;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) MapsLocationOfInterest *locationOfInterest;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"MapsLocationOfInterest",?,R,N

@property(readonly, nonatomic) TrafficIncidentReport *incidentReport;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"TrafficIncidentReport",?,R,N

@property(readonly, nonatomic) ParkedCar *parkedCar;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"ParkedCar",?,R,N

@property(readonly, nonatomic) NSDate *eventDate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSDate",?,R,N

@property(readonly, nonatomic) _Bool needsToPreserveSelection;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool isRouteStartOrEnd;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@end

