//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VFXTextureSource.h"

@class NSString;
@protocol MTLTexture;

@interface VFXCaptureDeviceOutputConsumerSource : VFXTextureSource
{
    struct __CVMetalTextureCache *_textureCache;	// 8 = 0x8
    struct __CVBuffer *_pixelBuffer;	// 16 = 0x10
    id <MTLTexture> _mtlTexture;	// 24 = 0x18
    _Bool _containsAlpha;	// 32 = 0x20
    _Bool _isFront;	// 33 = 0x21
    unsigned long long _width;	// 40 = 0x28
    unsigned long long _height;	// 48 = 0x30
}

- (void)setPixelBuffer:(struct __CVBuffer *)arg1 fromDevice:(id)arg2;	// IMP=0x0000000000214c12
- (void)setPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x0000000000214bfe
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromDevice:(id)arg2;	// IMP=0x0000000000214af0
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x0000000000214adc
- (id)metalTextureWithEngineContext:(struct __CFXEngineContext *)arg1 textureSampler:(struct __CFXTextureSampler *)arg2 nextFrameTime:(double *)arg3 status:(CDStruct_3d581f42 *)arg4;	// IMP=0x000000000021488c
- (void)connectToProxy:(struct __CFXImageProxy *)arg1;	// IMP=0x0000000000214807
- (void)dealloc;	// IMP=0x00000000002147a5
- (void)discardVideoData;	// IMP=0x0000000000214742
- (_Bool)containsAlpha;	// IMP=0x0000000000214732
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000002146b9
- (id)init;	// IMP=0x00000000002146a5

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsVideoMirroring;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic, getter=isVideoMirrored) _Bool videoMirrored;

@end

