//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GEOTransitRouteUpdateResponse, GEOTransitRouteUpdater, NSArray, NSError, NSSet;

@protocol GEOTransitRouteUpdaterDelegate <NSObject>

@optional
- (void)transitRouteUpdater:(GEOTransitRouteUpdater *)arg1 didTimeoutForRouteIDs:(NSSet *)arg2;
- (void)transitRouteUpdater:(GEOTransitRouteUpdater *)arg1 didFailUpdateForRouteIDs:(NSSet *)arg2 withError:(NSError *)arg3;
- (void)transitRouteUpdater:(GEOTransitRouteUpdater *)arg1 didUpdateTransitRoutes:(NSArray *)arg2;
- (void)transitRouteUpdater:(GEOTransitRouteUpdater *)arg1 willUpdateTransitForRouteIDs:(NSSet *)arg2;
- (void)transitRouteUpdater:(GEOTransitRouteUpdater *)arg1 didReceiveResponse:(GEOTransitRouteUpdateResponse *)arg2;
- (void)transitRouteUpdater:(GEOTransitRouteUpdater *)arg1 willSendRequests:(NSSet *)arg2;
@end

