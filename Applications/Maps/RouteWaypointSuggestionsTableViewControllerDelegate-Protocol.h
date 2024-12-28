//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GEOLatLng, GEOMapServiceTraits, NSDictionary, PersonalizedItemManager, RouteWaypointSuggestionsTableViewController, SearchFieldItem, UserLocationSearchResult;

@protocol RouteWaypointSuggestionsTableViewControllerDelegate <NSObject>
- (void)routeSearchController:(RouteWaypointSuggestionsTableViewController *)arg1 doSearchItem:(SearchFieldItem *)arg2 userInfo:(NSDictionary *)arg3;
- (void)routeSearchController:(RouteWaypointSuggestionsTableViewController *)arg1 didSelectItem:(id)arg2;
- (_Bool)waypointsIncludeCurrentLocationForRouteSearchTableViewController:(RouteWaypointSuggestionsTableViewController *)arg1;
- (_Bool)routeSearchController:(RouteWaypointSuggestionsTableViewController *)arg1 waypointsIncludeObject:(id)arg2;
- (SearchFieldItem *)selectedSearchFieldItem;
- (GEOMapServiceTraits *)traitsForRouteSearchTableViewController:(RouteWaypointSuggestionsTableViewController *)arg1;
- (GEOLatLng *)latLngForRouteSearchTableViewController:(RouteWaypointSuggestionsTableViewController *)arg1;
- (UserLocationSearchResult *)userLocationSearchResultForRouteSearchTableViewController:(RouteWaypointSuggestionsTableViewController *)arg1;
- (PersonalizedItemManager *)personalizedItemManagerForRouteSearchTableViewController:(RouteWaypointSuggestionsTableViewController *)arg1;

@optional
- (void)didTapOnQueryAcceleratorWithItem:(id)arg1;
@end
