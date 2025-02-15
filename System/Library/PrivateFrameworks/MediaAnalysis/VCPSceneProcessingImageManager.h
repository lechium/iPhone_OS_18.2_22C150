//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface VCPSceneProcessingImageManager : NSObject
{
    NSMutableDictionary *_pixelBufferPools;	// 8 = 0x8
}

+ (id)imageManager;	// IMP=0x006000000038e6ea
- (void).cxx_destruct;	// IMP=0x000000000038f647
- (int)scalePixelBuffer:(struct __CVBuffer *)arg1 toPixelBuffer:(struct __CVBuffer **)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;	// IMP=0x000000000038f53e
- (int)loadFullPixelBuffer:(struct __CVBuffer **)arg1 scaledPixelBuffer299:(struct __CVBuffer **)arg2 scaledPixelBuffer360:(struct __CVBuffer **)arg3 fromImageURL:(id)arg4 abnormalDimension:(unsigned long long)arg5;	// IMP=0x000000000038f14f
- (int)_createPixelBuffer:(struct __CVBuffer **)arg1 withColorSpace:(struct CGColorSpace *)arg2 fromPixelBuffer:(struct __CVBuffer *)arg3;	// IMP=0x000000000038eec5
- (int)fullPixelBuffer:(struct __CVBuffer *)arg1 toScaledBuffer:(struct __CVBuffer *)arg2;	// IMP=0x000000000038eb9f
- (int)_pooledPixelBuffer:(struct __CVBuffer **)arg1 withDimension:(unsigned long long)arg2;	// IMP=0x000000000038e919
- (int)_createPixelBuffer:(struct __CVBuffer **)arg1 withMinorDimension:(unsigned long long)arg2 fromFullPixelBuffer:(struct __CVBuffer *)arg3;	// IMP=0x000000000038e87e
- (int)_createPixelBuffer:(struct __CVBuffer **)arg1 withWidth:(unsigned long long)arg2 andHeight:(unsigned long long)arg3;	// IMP=0x000000000038e7b4
- (void)dealloc;	// IMP=0x000000000038e704
- (id)init;	// IMP=0x000000000038e666

@end

