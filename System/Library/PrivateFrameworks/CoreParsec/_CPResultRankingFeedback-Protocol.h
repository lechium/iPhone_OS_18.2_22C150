//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, _CPSearchResultForFeedback;

@protocol _CPResultRankingFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) double personalizationScore;
@property(nonatomic) unsigned int localResultPosition;
@property(copy, nonatomic) NSArray *duplicateResults;
@property(copy, nonatomic) NSArray *hiddenResults;
@property(retain, nonatomic) _CPSearchResultForFeedback *result;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_CPSearchResultForFeedback *)duplicateResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)duplicateResultsCount;
- (void)addDuplicateResults:(_CPSearchResultForFeedback *)arg1;
- (void)clearDuplicateResults;
- (_CPSearchResultForFeedback *)hiddenResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)hiddenResultsCount;
- (void)addHiddenResults:(_CPSearchResultForFeedback *)arg1;
- (void)clearHiddenResults;
@end

