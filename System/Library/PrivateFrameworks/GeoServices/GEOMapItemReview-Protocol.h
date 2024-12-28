//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol GEOMapItemReview <NSObject>
@property(readonly, nonatomic, getter=_identifier) NSString *identifier;
@property(readonly, nonatomic, getter=_reviewerImageURLString) NSString *reviewerImageURLString;
@property(readonly, nonatomic, getter=_reviewerName) NSString *reviewerName;
@property(readonly, nonatomic, getter=_date) NSDate *date;
@property(readonly, nonatomic, getter=_localizedSnippetLocale) NSString *localizedSnippetLocale;
@property(readonly, nonatomic, getter=_localizedSnippet) NSString *localizedSnippet;
@property(readonly, nonatomic, getter=_normalizedScore) double normalizedScore;
@property(readonly, nonatomic, getter=_maxScore) double maxScore;
@property(readonly, nonatomic, getter=_score) double score;
@end
