//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor;

__attribute__((visibility("hidden")))
@interface SCNMovieExportOperation
{
    AVAssetWriterInput *_assetWriterInput;	// 144 = 0x90
    AVAssetWriterInputPixelBufferAdaptor *_avAdaptor;	// 152 = 0x98
    AVAssetWriter *_assetWriter;	// 160 = 0xa0
    float _rate;	// 168 = 0xa8
    _Bool _mirrored;	// 172 = 0xac
    float _supersampling;	// 176 = 0xb0
}

- (void)main;	// IMP=0x00000000002c9f17
- (void)renderAndAppendWithPresentationTime:(CDStruct_198678f7)arg1 usingAdaptor:(id)arg2 metalTextureCache:(struct __CVMetalTextureCache *)arg3 cvQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000002c9751
- (void)appendImage:(struct CGImage *)arg1 withPresentationTime:(CDStruct_198678f7)arg2 usingAdaptor:(id)arg3;	// IMP=0x00000000002c950c
- (void)_finishedExport;	// IMP=0x00000000002c9454
- (struct CGImage *)_copySnapshot:(struct CGSize)arg1;	// IMP=0x00000000002c9399
- (void)_setupMovieToWritableFile:(id)arg1;	// IMP=0x00000000002c9393
- (void)dealloc;	// IMP=0x00000000002c932d
- (id)initWithRenderer:(id)arg1 size:(struct CGSize)arg2 attributes:(id)arg3 outputURL:(id)arg4;	// IMP=0x00000000002c8d3a

@end
