//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSProgress;
@protocol PXDisplayAssetFetchResult, PXStoryMovieHighlightsCollection;

@protocol PXStoryMovieHighlightsProducer
- (NSProgress *)requestMovieHighlightsForAssets:(id <PXDisplayAssetFetchResult>)arg1 partialCollection:(id <PXStoryMovieHighlightsCollection>)arg2 options:(unsigned long long)arg3 resultHandler:(void (^)(PXStoryProducerResult *))arg4;
@end

