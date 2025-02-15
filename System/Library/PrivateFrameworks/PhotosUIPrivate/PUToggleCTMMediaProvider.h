//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUEditableMediaProvider.h"

@class PUBrowsingViewModel, PUMediaProvider;

__attribute__((visibility("hidden")))
@interface PUToggleCTMMediaProvider : PUEditableMediaProvider
{
    PUBrowsingViewModel *_viewModel;	// 8 = 0x8
    PUMediaProvider *_mediaProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004e585c
@property(readonly, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) PUBrowsingViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)cancelImageRequest:(int)arg1;	// IMP=0x00000000004e57fc
- (int)requestAsynchronousVideoURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000004e5756
- (int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000004e56b0
- (int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000004e5693
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000004e52d3
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000004e5098
- (int)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000004e4d78
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000004e4aa5
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000004e4701
- (id)_requestOptions;	// IMP=0x00000000004e46c9
- (id)_ctmPairedVideoResourceForAsset:(id)arg1;	// IMP=0x00000000004e46af
- (id)_ctmVideoResourceForAsset:(id)arg1;	// IMP=0x00000000004e4695
- (id)_ctmImageResourceForAsset:(id)arg1;	// IMP=0x00000000004e467b
- (id)_resourceOfType:(long long)arg1 forAsset:(id)arg2;	// IMP=0x00000000004e45ba
- (id)_imageWithSize:(struct CGSize)arg1 string:(id)arg2;	// IMP=0x00000000004e44db
- (_Bool)_shouldToggleCTMForAsset:(id)arg1;	// IMP=0x00000000004e44d3
- (id)initWithViewModel:(id)arg1 mediaProvider:(id)arg2;	// IMP=0x00000000004e4431

@end

