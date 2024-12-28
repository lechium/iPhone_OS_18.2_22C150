//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface MTKTextureLoaderKTX
{
    NSData *_imageData;	// 8 = 0x8
    struct MTLPixelFormatInfo _pixelFormatInfo;	// 16 = 0x10
    _Bool _packedRowStride;	// 72 = 0x48
}

+ (_Bool)isKTXFile:(id)arg1;	// IMP=0x006000000000f098
- (unsigned long long)determineFormatFromSizedFormat:(unsigned long long)arg1;	// IMP=0x0000000000010494
- (unsigned long long)determineFormatFromType:(unsigned int)arg1 format:(unsigned int)arg2 internalFormat:(unsigned int)arg3 baseInternalFormat:(unsigned int)arg4;	// IMP=0x0000000000010262
- (id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long *)arg5 bytesPerImage:(unsigned long long *)arg6;	// IMP=0x000000000000ff0a
- (_Bool)parseKey:(id)arg1 value:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000fdfa
- (_Bool)parseKeyValueBytes:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000000fcda
- (void)dealloc;	// IMP=0x000000000000fc8c
- (id)initWithData:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000f0f3

@end
