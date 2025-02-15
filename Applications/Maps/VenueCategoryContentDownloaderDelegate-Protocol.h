//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MKMapItem, NSArray, NSError, VenueCategoryContentDownloader;

@protocol VenueCategoryContentDownloaderDelegate <NSObject>
- (void)venueCategoryContentDownloader:(VenueCategoryContentDownloader *)arg1 didReceiveAutoCompleteSubcategories:(NSArray *)arg2 subcategoriesType:(int)arg3;
- (void)venueCategoryContentDownloader:(VenueCategoryContentDownloader *)arg1 didReceiveSearchResults:(NSArray *)arg2 shouldSwitchToBestFloor:(_Bool)arg3;
- (void)venueCategoryContentDownloaderDidCancel:(VenueCategoryContentDownloader *)arg1;
- (void)venueCategoryContentDownloaderDidFail:(VenueCategoryContentDownloader *)arg1;
- (void)venueCategoryContentDownloader:(VenueCategoryContentDownloader *)arg1 didFailToFetchMapItemWithError:(NSError *)arg2;
- (void)venueCategoryContentDownloader:(VenueCategoryContentDownloader *)arg1 didChangeMapItem:(MKMapItem *)arg2;
- (void)venueCategoryContentDownloaderDidStart:(VenueCategoryContentDownloader *)arg1;

@optional
- (void)venueDidReceiveEVChargerUpdates:(NSArray *)arg1;
@end

