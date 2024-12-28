//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VFXTextureSource.h"

@class AVCaptureDevice, AVCaptureSession, NSString;
@protocol MTLTexture;

@interface VFXCaptureDeviceSource : VFXTextureSource
{
    AVCaptureDevice *_captureDevice;	// 8 = 0x8
    AVCaptureSession *_captureSession;	// 16 = 0x10
    struct __CVMetalTextureCache *_textureCache;	// 24 = 0x18
    struct __CVBuffer *_pixelBuffer;	// 32 = 0x20
    id <MTLTexture> _mtlTexture;	// 40 = 0x28
    _Bool _isFront;	// 48 = 0x30
    unsigned long long _width;	// 56 = 0x38
    unsigned long long _height;	// 64 = 0x40
}

- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;	// IMP=0x00000000002145de
- (id)metalTextureWithEngineContext:(struct __CFXEngineContext *)arg1 textureSampler:(struct __CFXTextureSampler *)arg2 nextFrameTime:(double *)arg3 status:(CDStruct_3d581f42 *)arg4;	// IMP=0x00000000002141a9
- (void)connectToProxy:(struct __CFXImageProxy *)arg1;	// IMP=0x0000000000214131
@property(retain, nonatomic) AVCaptureDevice *captureDevice;
- (void)dealloc;	// IMP=0x0000000000213ff9
- (void)discardVideoData;	// IMP=0x0000000000213f96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
