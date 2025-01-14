//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MISSING_TYPE, NSArray, NSString, RoutePlanningWaypointListView, SearchFieldItem;

@protocol RoutePlanningWaypointListViewDelegate <NSObject>
- (void)waypointListViewDidSelectAddStop:(RoutePlanningWaypointListView *)arg1;

@optional
- (MISSING_TYPE *)waypointListView:didReceiveItem: /* Error: Ran out of types for this method. */;
- (void)didInteractWithWaypointFields;
- (void)waypointListView:(RoutePlanningWaypointListView *)arg1 didDeleteWaypointAtIndex:(unsigned long long)arg2;
- (void)waypointListView:(RoutePlanningWaypointListView *)arg1 didMoveWaypoint:(SearchFieldItem *)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)waypointListView:(RoutePlanningWaypointListView *)arg1 didClearInputTextForWaypointAtIndex:(unsigned long long)arg2;
- (void)invokeSearchWithText:(NSString *)arg1;
- (void)updateAutoCompleteWithText:(NSString *)arg1;
- (void)waypointListView:(RoutePlanningWaypointListView *)arg1 didSelectCollapsedWaypoints:(NSArray *)arg2;
- (void)waypointListView:(RoutePlanningWaypointListView *)arg1 didStartEditingWaypointAtIndex:(unsigned long long)arg2;
- (void)waypointListView:(RoutePlanningWaypointListView *)arg1 didSelectWaypoint:(SearchFieldItem *)arg2 atIndex:(unsigned long long)arg3;
@end

