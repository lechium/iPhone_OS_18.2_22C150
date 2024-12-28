//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesCloud/NSObject-Protocol.h>

@protocol ICCloudAvailability <NSObject>
- (_Bool)canShowCloudVideo;
- (_Bool)canShowCloudMusic;
- (_Bool)canShowCloudDownloadButtons;
- (_Bool)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (_Bool)isCellularDataRestrictedForStoreApps;
- (_Bool)shouldProhibitVideosActionForCurrentNetworkConditions;
- (_Bool)isCellularDataRestrictedForVideos;
- (_Bool)shouldProhibitMusicActionForCurrentNetworkConditions;
- (_Bool)isCellularDataRestrictedForMusic;
- (_Bool)hasProperNetworkConditionsToShowCloudMedia;
- (_Bool)hasProperNetworkConditionsToPlayMedia;
@end
