//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, NSOrderedSet, NSString;
@protocol MTFeedChannel;

@interface MTServerPodcast
{
    MISSING_TYPE *episodes;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003aa820
- (id)toFeed;	// IMP=0x0000000000111ee0
@property(nonatomic, readonly) NSOrderedSet *categories;
@property(nonatomic, readonly) NSString *showSpecificUpsellCopy;
@property(nonatomic, readonly) id <MTFeedChannel> channelItem;
@property(nonatomic, readonly) NSString *artworkTextQuaternaryColor;
@property(nonatomic, readonly) NSString *artworkTextTertiaryColor;
@property(nonatomic, readonly) NSString *artworkTextSecondaryColor;
@property(nonatomic, readonly) NSString *artworkTextPrimaryColor;
@property(nonatomic, readonly) NSString *artworkPrimaryColor;
@property(nonatomic, readonly) NSString *artworkTemplateURL;
@property(nonatomic, readonly) NSString *imageURL;
@property(nonatomic, readonly) NSString *uberArtworkTextQuaternaryColor;
@property(nonatomic, readonly) NSString *uberArtworkTextTertiaryColor;
@property(nonatomic, readonly) NSString *uberArtworkTextSecondaryColor;
@property(nonatomic, readonly) NSString *uberArtworkTextPrimaryColor;
@property(nonatomic, readonly) NSString *uberBackgroundJoeColor;
@property(nonatomic, readonly) NSString *uberBackgroundImageURL;
@property(nonatomic, readonly) NSArray *offers;
@property(nonatomic, readonly) NSString *displayType;
@property(nonatomic, readonly) NSString *podcastStoreId;
@property(nonatomic, readonly) NSString *webpageURL;
@property(nonatomic, readonly) NSString *showType;
@property(nonatomic, readonly) NSString *shareURL;
@property(nonatomic, readonly) _Bool isNotSubscribable;
@property(nonatomic, readonly) _Bool isExplicit;
@property(nonatomic, readonly) NSString *title;
@property(nonatomic, readonly) NSString *resolvedFeedURL;
@property(nonatomic, readonly) NSString *updatedFeedURL;
@property(nonatomic, readonly) NSString *provider;
@property(nonatomic, readonly) _Bool hasEpisodes;
@property(nonatomic, readonly) NSString *globalImageURL;
@property(nonatomic, readonly) NSString *category;
@property(nonatomic, readonly) NSString *author;
@property(nonatomic, readonly) NSString *feedDescription;

@end
