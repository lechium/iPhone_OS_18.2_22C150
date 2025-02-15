//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, SCMLHandler, VCPImageBackboneAnalyzer;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MADSpotlightMovieAssetBatch : NSObject
{
    NSMutableArray *_assetEntries;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_computeGroup;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_computeQueue;	// 24 = 0x18
    CDUnknownBlockType _cancelBlock;	// 32 = 0x20
    VCPImageBackboneAnalyzer *_imageBackboneAnalyzer;	// 40 = 0x28
    NSMutableArray *_imageAssetEntries;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_requestQueue;	// 56 = 0x38
    SCMLHandler *_commSafetyHandler;	// 64 = 0x40
}

+ (id)batchWithCancelBlock:(CDUnknownBlockType)arg1;	// IMP=0x0040000000181c29
- (void).cxx_destruct;	// IMP=0x0020000000189e0d
- (int)publish;	// IMP=0x0010000000188278
- (id)createSearchableItemForAssetEntry:(id)arg1 andImageAssetEntry:(id)arg2;	// IMP=0x00100000001874c4
- (id)mergeVideoScenes:(id)arg1 withExistingResult:(id)arg2;	// IMP=0x0010000000186db9
- (void)processAssetEntry:(id)arg1;	// IMP=0x0010000000186373
- (void)_processEmbeddingResults:(id)arg1 andSummarizedEmbeddingResults:(id)arg2 forAssetEntry:(id)arg3;	// IMP=0x00100000001858d4
- (id)truncateTimeRangeResults:(id)arg1 withTimeCap:(double)arg2;	// IMP=0x0010000000185532
- (void)_processTimeRangeResults:(id)arg1 forAssetEntry:(id)arg2;	// IMP=0x00100000001847e7
- (void)_processActionResults:(id)arg1 andTimeRangeResults:(id)arg2 withAssetDuration:(double)arg3 forAssetEntry:(id)arg4;	// IMP=0x0010000000183b6e
- (void)_processSafetyResults:(id)arg1 forAssetEntry:(id)arg2;	// IMP=0x001000000018384a
- (void)_processSceneResults:(id)arg1 andTimeRangeResults:(id)arg2 forAssetEntry:(id)arg3;	// IMP=0x0010000000182f1f
- (int)process;	// IMP=0x00100000001826bd
- (int)prepare;	// IMP=0x00100000001820da
- (void)addAsset:(id)arg1;	// IMP=0x0010000000181ca9
- (id)logPrefix;	// IMP=0x0010000000181c9c
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithCancelBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000181882

@end

