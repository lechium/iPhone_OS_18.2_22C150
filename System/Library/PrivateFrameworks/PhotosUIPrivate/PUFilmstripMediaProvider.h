//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUMediaProvider.h"

@class AVAsset, AVAssetImageGenerator, AVVideoComposition, NSCache, NSMutableArray, NSMutableDictionary, NSObject, UIImage;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUFilmstripMediaProvider : PUMediaProvider
{
    NSObject<OS_dispatch_queue> *_ivarQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_imageGenerationQueue;	// 16 = 0x10
    NSMutableDictionary *_ivarQueue_resultsByRequestNumber;	// 24 = 0x18
    NSMutableDictionary *_ivarQueue_completionHandlersByRequestNumber;	// 32 = 0x20
    NSMutableArray *_ivarQueue_pendingResults;	// 40 = 0x28
    _Bool _deliversImagesInOrder;	// 48 = 0x30
    AVAsset *_asset;	// 56 = 0x38
    AVVideoComposition *_videoComposition;	// 64 = 0x40
    double _timeTolerance;	// 72 = 0x48
    UIImage *_placeholderImage;	// 80 = 0x50
    AVAssetImageGenerator *__imageGenerator;	// 88 = 0x58
    long long __requestNumber;	// 96 = 0x60
    NSCache *__imageCache;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000002c0eb1
@property(retain, nonatomic, setter=_setImageCache:) NSCache *_imageCache; // @synthesize _imageCache=__imageCache;
@property(nonatomic, setter=_setRequestNumber:) long long _requestNumber; // @synthesize _requestNumber=__requestNumber;
@property(retain, nonatomic, setter=_setImageGenerator:) AVAssetImageGenerator *_imageGenerator; // @synthesize _imageGenerator=__imageGenerator;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) _Bool deliversImagesInOrder; // @synthesize deliversImagesInOrder=_deliversImagesInOrder;
@property(nonatomic) double timeTolerance; // @synthesize timeTolerance=_timeTolerance;
@property(readonly, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void)_deliverPlaceholderImage;	// IMP=0x00000000002c0cee
- (void)_deliverResult:(id)arg1;	// IMP=0x00000000002c0ae4
- (void)_deliverPendingResults;	// IMP=0x00000000002c06b5
- (void)_didGenerateImage:(id)arg1 error:(id)arg2 requestedTime:(CDStruct_1b6d18a9)arg3 actualTime:(CDStruct_1b6d18a9)arg4 generatorResult:(long long)arg5 forResult:(id)arg6;	// IMP=0x00000000002c0450
- (void)_generateImageForResult:(id)arg1;	// IMP=0x00000000002c0203
- (void)dealloc;	// IMP=0x00000000002c01ba
- (void)cancelAllRequests;	// IMP=0x00000000002c0149
- (void)cancelImageRequest:(int)arg1;	// IMP=0x00000000002c001a
- (void)_handleSourceTimeLoadedForAsset:(id)arg1 time:(double)arg2 targetSize:(struct CGSize)arg3 contentMode:(long long)arg4 requestNumber:(long long)arg5;	// IMP=0x00000000002bfed3
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002bfba2
- (void)_performIvarWrite:(CDUnknownBlockType)arg1;	// IMP=0x00000000002bfa5b
- (void)_performIvarRead:(CDUnknownBlockType)arg1;	// IMP=0x00000000002bfa43
- (id)init;	// IMP=0x00000000002bfa2d
- (id)initWithAVAsset:(id)arg1 videoComposition:(id)arg2;	// IMP=0x00000000002bf717

@end

