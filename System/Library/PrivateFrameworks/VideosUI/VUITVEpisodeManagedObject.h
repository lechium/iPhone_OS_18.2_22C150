//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, VUITVSeasonManagedObject, VUITVSeriesManagedObject;

__attribute__((visibility("hidden")))
@interface VUITVEpisodeManagedObject
{
}


// Remaining properties
@property(copy, nonatomic) NSNumber *episodeNumberInSeason; // @dynamic episodeNumberInSeason;
@property(copy, nonatomic) NSNumber *episodeNumberInSeries; // @dynamic episodeNumberInSeries;
@property(copy, nonatomic) NSNumber *fractionalEpisodeNumberInSeason; // @dynamic fractionalEpisodeNumberInSeason;
@property(retain, nonatomic) VUITVSeasonManagedObject *season; // @dynamic season;
@property(retain, nonatomic) VUITVSeriesManagedObject *series; // @dynamic series;
@end
