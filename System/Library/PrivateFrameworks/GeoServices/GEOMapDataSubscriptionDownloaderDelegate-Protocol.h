//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOMapDataSubscriptionDownloader, NSDictionary, NSError;

@protocol GEOMapDataSubscriptionDownloaderDelegate <NSObject>
- (void)subscriptionDownloader:(GEOMapDataSubscriptionDownloader *)arg1 didFinishWithError:(NSError *)arg2;

@optional
- (void)subscriptionDownloader:(GEOMapDataSubscriptionDownloader *)arg1 willUseOfflineDataVersions:(NSDictionary *)arg2 completionHandler:(void (^)(_Bool))arg3;
@end

