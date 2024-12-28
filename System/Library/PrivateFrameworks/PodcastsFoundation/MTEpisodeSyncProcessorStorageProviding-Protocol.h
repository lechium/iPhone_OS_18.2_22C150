//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTManagedObjectContext, NSString;

@protocol MTEpisodeSyncProcessorStorageProviding
@property(retain, nonatomic) NSString *podcastsDomainVersion;
- (NSString *)feedUrlFromModernKey:(NSString *)arg1;
- (NSString *)modernKeyFromFeedUrl:(NSString *)arg1;
- (void)resetVersionForAllFeedUrls;
- (void)resetVersionForFeedUrl:(NSString *)arg1;
- (void)setVersion:(NSString *)arg1 forKey:(NSString *)arg2;
- (NSString *)versionForKey:(NSString *)arg1;
- (MTManagedObjectContext *)importContext;
@end
