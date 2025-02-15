//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFSearchResult.h>

@class NSString;

@interface SFSearchResult (SSFeedbackSupport)
@property(readonly) NSString *feedbackSectionIdentifier;
@property(readonly) _Bool isWebClip;
@property(readonly) _Bool isAppClip;
- (void)copyBasePropertiesOverToResult:(id)arg1;	// IMP=0x00300000000f7b8e
- (id)objectForFeedback;	// IMP=0x00300000000f7aa4
- (void)setFeedbackPropertiesOnResultCopy:(id)arg1;	// IMP=0x00300000000f78bb
- (id)PRSRankingItemAdditions_correctedQuery;	// IMP=0x0030000000118319
- (id)PRSRankingItemAdditions_completedQuery;	// IMP=0x003000000011830f
- (id)PRSRankingItemAdditions_url;	// IMP=0x003000000011820a
- (id)PRSRankingItemAdditions_description;	// IMP=0x0030000000117dd0
- (id)PRSRankingItemAdditions_title;	// IMP=0x00300000001176b4
- (float)PRSRankingItemAdditions_webVideoNumYearsAgo:(double)arg1;	// IMP=0x0030000000117294
- (float)PRSRankingItemAdditions_anyTophitNo;	// IMP=0x0030000000116fd5
- (float)PRSRankingItemAdditions_anyTophitMustBe;	// IMP=0x0030000000116fb0
- (float)PRSRankingItemAdditions_epubBookNumYearsAgo:(double)arg1;	// IMP=0x0030000000116ecb
- (float)PRSRankingItemAdditions_movieNumYearsAgo:(double)arg1;	// IMP=0x0030000000116d99
- (float)PRSRankingItemAdditions_tvshowNumYearsAgo:(double)arg1;	// IMP=0x0030000000116c38
- (float)PRSRankingItemAdditions_songNumYearsAgo:(double)arg1;	// IMP=0x0030000000116b08
- (float)PRSRankingItemAdditions_albumNumYearsAgo:(double)arg1;	// IMP=0x00300000001169db
- (float)PRSRankingItemAdditions_movieStarRating;	// IMP=0x0030000000116900
- (float)PRSRankingItemAdditions_movieReviewRating;	// IMP=0x0030000000116857
- (float)PRSRankingItemAdditions_podcastStarRating;	// IMP=0x00300000001167a1
- (float)PRSRankingItemAdditions_epubBookStarRating;	// IMP=0x00300000001166eb
- (float)PRSRankingItemAdditions_appStarRating;	// IMP=0x00300000001165be
- (float)PRSRankingItemAdditions_webVideoNumViews;	// IMP=0x00300000001164b1
- (float)PRSRankingItemAdditions_profileNumFollowers;	// IMP=0x0030000000115d13
- (float)PRSRankingItemAdditions_epubBookNumReviews;	// IMP=0x0030000000115c67
- (float)PRSRankingItemAdditions_appNumReviews;	// IMP=0x0030000000115ade
- (float)PRSRankingItemAdditions_albumStarRating;	// IMP=0x00300000001159c1
@end

