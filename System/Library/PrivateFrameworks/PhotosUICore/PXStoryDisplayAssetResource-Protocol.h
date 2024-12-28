//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXStoryResource-Protocol.h>

@class NSData, NSSet, PFVideoAdjustments;
@protocol PXDisplayAsset;

@protocol PXStoryDisplayAssetResource <PXStoryResource>
@property(readonly, nonatomic) long long px_storyResourceFetchFaceCount;
@property(readonly, nonatomic) double px_storyResourceFetchCurationScore;
@property(readonly, nonatomic) NSSet *px_storyResourceFetchSceneClassifications;
@property(readonly, nonatomic) PFVideoAdjustments *px_storyResourceFetchVideoAdjustments;
@property(readonly, nonatomic) NSData *px_storyResourceFetchNormalizationData;
@property(readonly, nonatomic) struct CGRect px_storyResourceFetchBestPlaybackRect;
@property(readonly, nonatomic) CDStruct_3c1748cc px_storyResourceFetchBestPlaybackRange;
@property(readonly, nonatomic) id <PXDisplayAsset> px_storyResourceDisplayAsset;
@end
