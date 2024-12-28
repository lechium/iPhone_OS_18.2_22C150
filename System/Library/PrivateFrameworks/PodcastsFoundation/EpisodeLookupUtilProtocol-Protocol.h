//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PodcastsFoundation/NSObject-Protocol.h>

@class MTEpisode, MTEpisodeLookupRequest, MTPodcast, NSManagedObjectContext, NSString;

@protocol EpisodeLookupUtilProtocol <NSObject>
- (MTPodcast *)findPodcastWithFeedUrl:(NSString *)arg1;
- (MTEpisode *)findEpisodeWithRequest:(MTEpisodeLookupRequest *)arg1 context:(NSManagedObjectContext *)arg2;
- (MTEpisode *)findEpisodeWithRequest:(MTEpisodeLookupRequest *)arg1;
@end
