//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, PXSearchQueryMatchInfo;
@protocol PUAssetHighlightTimeRangesProducerDelegate, PXDisplayAsset;

@interface PUAssetHighlightTimeRangesProducer : NSObject
{
    MISSING_TYPE *asset;	// 8 = 0x8
    MISSING_TYPE *searchQueryMatchInfo;	// 16 = 0x10
    MISSING_TYPE *delegate;	// 24 = 0x18
    MISSING_TYPE *highlightTimeRanges;	// 32 = 0x20
    MISSING_TYPE *mediaAnalyzer;	// 40 = 0x28
    MISSING_TYPE *analysisProgress;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000114657
- (void)dealloc;	// IMP=0x000000000011463a
@property(nonatomic, copy) NSArray *highlightTimeRanges;
@property(nonatomic) __weak id <PUAssetHighlightTimeRangesProducerDelegate> delegate; // @synthesize delegate;
@property(nonatomic, retain) PXSearchQueryMatchInfo *searchQueryMatchInfo; // @synthesize searchQueryMatchInfo;
@property(nonatomic, retain) id <PXDisplayAsset> asset; // @synthesize asset;
- (id)initWithMediaAnalyzer:(id)arg1;	// IMP=0x00000000001135f6
- (id)init;	// IMP=0x0000000000113529

@end
