//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NUArticleScrollPosition, SXScrollPosition;
@protocol FCHeadlineProviding;

@protocol NUArticleScrollPositionManagerType
- (NUArticleScrollPosition *)scrollPositionForHeadline:(id <FCHeadlineProviding>)arg1;
- (void)setPosition:(SXScrollPosition *)arg1 headline:(id <FCHeadlineProviding>)arg2;
@end

