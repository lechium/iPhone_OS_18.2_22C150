//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOAdvisoriesInfo, NSDictionary, Result, RouteLoadingController;

@protocol RouteLoadingControllerDelegate
- (void)routeLoadingController:(RouteLoadingController *)arg1 didReceiveUpdates:(NSDictionary *)arg2 forRoutesResult:(Result *)arg3;
- (void)routeLoadingController:(RouteLoadingController *)arg1 didReceiveRoutesResult:(Result *)arg2 forTransportType:(long long)arg3 advisoryInfo:(GEOAdvisoriesInfo *)arg4;
@end
