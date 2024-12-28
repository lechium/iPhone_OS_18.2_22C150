//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAVItem.h>

@class AVPlayerItem, ICUserIdentity, NSArray, NSData, NSNumber, NSString, NSURL;
@protocol MFGaplessParameters, MPCReportingIdentityPropertiesLoading;

@interface MPAVItem (MediaPlaybackCore)
@property(readonly, nonatomic) id contentIdentifier;
@property(nonatomic, readonly) NSString *podcastPageContext;
@property(nonatomic, readonly) NSArray *musicSubscriptionInformation;
@property(nonatomic, readonly) NSString *newsSubscriptionInformation;
@property(nonatomic, readonly) NSString *podcastContentGUID;
@property(nonatomic, readonly) NSString *podcastPriceType;
@property(nonatomic, readonly) NSString *podcastMediaType;
@property(nonatomic, readonly) NSString *podcastItemType;
@property(nonatomic, readonly) NSString *podcastAssetURL;
@property(nonatomic, readonly) NSString *podcastFeedURL;
@property(nonatomic, readonly) NSString *podcastSubscriptionState;
@property(nonatomic, readonly) _Bool podcastIsSubscribable;
@property(nonatomic, readonly) NSString *podcastStoreID;
- (id)observeChapters:(CDUnknownBlockType)arg1;	// IMP=0x00200000000e2da4
@property(readonly, nonatomic) long long playerItemType;
@property(readonly, nonatomic) ICUserIdentity *playbackRequestUserIdentity;
- (_Bool)_isInContiguousAlbumWith:(id)arg1;	// IMP=0x002000000029f225
- (id)activeFormat;	// IMP=0x002000000029f1d7
- (_Bool)shouldPerformOverlappingTransitionWith:(id)arg1;	// IMP=0x002000000029f108
- (_Bool)shouldPerformGaplessTransitionWith:(id)arg1;	// IMP=0x002000000029f0ba
@property(readonly, nonatomic) id <MFGaplessParameters> gaplessParameters;
- (void)prepareForReuse;	// IMP=0x002000000029f02b
- (void)reset;	// IMP=0x002000000029eff4
- (void)setCurrentItemTransition:(long long)arg1;	// IMP=0x002000000029efc2
@property(readonly, nonatomic) double effectivePlaybackStartTime;
@property(readonly, nonatomic) double playbackStartTime;
@property(nonatomic) double playbackStartTimeOverride;
@property(readonly, nonatomic) _Bool isSpokenAudio;
@property(readonly, nonatomic) _Bool isMovieOrTVShow;
@property(nonatomic) _Bool isVideoContent;
@property(readonly, nonatomic) _Bool isFullyDownloaded;
@property(readonly, nonatomic) _Bool hasLoadableAsset;
@property(readonly, nonatomic) double time;
@property(readonly, nonatomic) AVPlayerItem *avPlayerItem;
@property(copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSData *mpcReporting_trackInfo;
@property(readonly, copy, nonatomic) NSNumber *mpcReporting_siriInitiated;
@property(readonly, nonatomic) _Bool mpcReporting_shouldUseRelativeTimePositions;
@property(readonly, nonatomic) _Bool mpcReporting_shouldReportPlayEventsToStore;
@property(readonly, copy, nonatomic) NSString *mpcReporting_requestingBundleVersion;
@property(readonly, copy, nonatomic) NSString *mpcReporting_requestingBundleIdentifier;
@property(readonly, copy, nonatomic) NSData *mpcReporting_jingleTimedMetadata;
@property(readonly, nonatomic) unsigned long long mpcReporting_itemType;
@property(readonly, nonatomic) _Bool mpcReporting_isValidReportingItem;
@property(readonly, nonatomic) long long mpcReporting_equivalencySourceAdamID;
@property(readonly, nonatomic) id <MPCReportingIdentityPropertiesLoading> mpcReporting_identityPropertiesLoader;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *adjunctErrors;
@property(copy, nonatomic) NSString *contentItemID;
@property(readonly, copy, nonatomic) NSString *description;
@property(readonly, nonatomic) _Bool isAlwaysLive;
@property(readonly, nonatomic) _Bool isAssetLoaded;
@property(nonatomic) _Bool isStartItem;
@property(readonly, nonatomic) _Bool prefersSeekOverSkip;
@property(readonly, copy, nonatomic) NSURL *url;
@end
