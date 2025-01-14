//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>
#import <GeoServices/NSProgressReporting-Protocol.h>

@class GEOMapDataSubscription, NSString;
@protocol GEOMapDataSubscriptionDataDownloaderDelegate;

@protocol GEOMapDataSubscriptionDataDownloader <NSObject, NSProgressReporting>
+ (NSString *)loggingDescription;
@property(readonly, nonatomic) __weak id <GEOMapDataSubscriptionDataDownloaderDelegate> delegate;
@property(readonly, nonatomic) GEOMapDataSubscription *subscription;
- (void)cancel;
- (void)pause;
- (void)resume;
@end

