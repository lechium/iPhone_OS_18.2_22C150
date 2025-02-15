//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StocksCore/FCTagRanking-Protocol.h>

@class FCFeedPersonalizedItems, NSArray;
@protocol FCFeedPersonalizingItem;

@protocol FCFeedPersonalizing <FCTagRanking>
- (FCFeedPersonalizedItems *)sortItems:(NSArray *)arg1 options:(long long)arg2 configurationSet:(long long)arg3;
- (double)decayedPublisherDiversificationPenalty;
- (void)prepareForUseWithCompletionHandler:(void (^)(void))arg1;
- (NSArray *)limitItemsByFlowRate:(NSArray *)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3;
- (NSArray *)limitItemsByMinimumItemQuality:(NSArray *)arg1;

@optional
- (void)fetchAggregateMapForPersonalizingItem:(id <FCFeedPersonalizingItem>)arg1 completion:(void (^)(NSDictionary *))arg2;
@end

