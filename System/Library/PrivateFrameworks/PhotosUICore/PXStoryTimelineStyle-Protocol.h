//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PXStoryMultipartPanoramaParameters;
@protocol PXStoryClipComposition, PXStoryDisplayAsset, PXStoryDisplayAssetFetchResult;

@protocol PXStoryTimelineStyle
@property(readonly, nonatomic) _Bool allowsIncompleteTimelines;
@property(readonly, nonatomic) PXStoryMultipartPanoramaParameters *defaultVerticalMultipartPanoramaParameters;
@property(readonly, nonatomic) PXStoryMultipartPanoramaParameters *defaultHorizontalMultipartPanoramaParameters;
@property(readonly, nonatomic) CDStruct_198678f7 defaultDisplayAssetPresentationDuration;
- (NSArray *)sortedCropContentsRectsForMultipartPanoramaWithDisplayAsset:(id <PXStoryDisplayAsset>)arg1 startTime:(CDStruct_198678f7)arg2 proposedCropContentsRects:(NSArray *)arg3 axis:(long long)arg4 normalizedKenBurnsEffectParameters:(CDStruct_3d940f03 *)arg5 durationInfos:(CDStruct_8c3ca2df *)arg6 transitionInfos:(CDStruct_316aa24c *)arg7;
- (_Bool)allowsMultipartPanoramaForDisplayAsset:(id <PXStoryDisplayAsset>)arg1 startTime:(CDStruct_198678f7)arg2;
- (CDStruct_2f782ce9)audioInfoForDisplayAsset:(id <PXStoryDisplayAsset>)arg1;
- (CDStruct_316aa24c)transitionInfoForSegmentWithClipComposition:(id <PXStoryClipComposition>)arg1 displayAssets:(id <PXStoryDisplayAssetFetchResult>)arg2;
- (void)enumerateAllowedKenBurnsEffectParametersForSegmentWithClipComposition:(id <PXStoryClipComposition>)arg1 displayAssets:(id <PXStoryDisplayAssetFetchResult>)arg2 assetContentInfos:(const CDStruct_ea4f5066 *)arg3 finalPlaybackStyles:(const long long *)arg4 startTime:(CDStruct_198678f7)arg5 durationInfo:(CDStruct_8c3ca2df)arg6 separatorEffectParameters:(const CDStruct_5eb12be8 *)arg7 separatorEffectContext:(long long)arg8 buffer:(CDStruct_3d940f03 *)arg9 usingBlock:(void (^)(struct *))arg10;
- (void)enumerateAllowedSeparatorEffectParametersForSegmentWithClipComposition:(id <PXStoryClipComposition>)arg1 displayAssets:(id <PXStoryDisplayAssetFetchResult>)arg2 finalPlaybackStyles:(const long long *)arg3 startTime:(CDStruct_198678f7)arg4 durationInfo:(CDStruct_8c3ca2df)arg5 buffer:(CDStruct_5eb12be8 *)arg6 usingBlock:(void (^)(struct *, long long))arg7;
- (long long)finalNUpPlaybackStyleForOriginalPlaybackStyle:(long long)arg1;
- (long long)finalOneUpPlaybackStyleForDisplayAsset:(id <PXStoryDisplayAsset>)arg1 originalPlaybackStyle:(long long)arg2;
- (_Bool)isOriginalPlaybackStyleAllowedInNUp:(long long)arg1;
- (CDStruct_ea4f5066)contentInfoForDisplayAsset:(id <PXStoryDisplayAsset>)arg1;
- (double)composabilityScoreForSegmentWithDisplayAssets:(id <PXStoryDisplayAssetFetchResult>)arg1;
- (NSArray *)allowedClipCompositionsWithStartTime:(CDStruct_198678f7)arg1 nextDisplayAssets:(id <PXStoryDisplayAssetFetchResult>)arg2;
- (id <PXStoryClipComposition>)clipCompositionForKeyAsset:(id <PXStoryDisplayAsset>)arg1 contentInfo:(const CDStruct_ea4f5066 *)arg2 finalPlaybackStyle:(long long)arg3;
- (CDStruct_8c3ca2df)durationInfoForSegmentWithDisplayAssets:(id <PXStoryDisplayAssetFetchResult>)arg1 startTime:(CDStruct_198678f7)arg2;
@end
