//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString;
@protocol VCVideoSource;

__attribute__((visibility("hidden")))
@interface VCStreamInputCaptureSource
{
    int _captureSourceID;	// 8 = 0x8
    long long _streamInputID;	// 16 = 0x10
    struct opaqueCMFormatDescription *_formatDescription;	// 24 = 0x18
    id _delegate;	// 32 = 0x20
    struct _opaque_pthread_mutex_t _sinkMutex;	// 40 = 0x28
    NSMutableDictionary *_videoSinkState;	// 104 = 0x68
    unsigned int _frameRate;	// 112 = 0x70
    id <VCVideoSource> _cannedVideoCapture;	// 120 = 0x78
    int _cannedVideoWidth;	// 128 = 0x80
    int _cannedVideoHeight;	// 132 = 0x84
}

+ (_Bool)readUint32FromConfig:(id)arg1 key:(id)arg2 value:(unsigned int *)arg3;	// IMP=0x00100000004d98b1
+ (_Bool)readIntegerFromConfig:(id)arg1 key:(id)arg2 value:(long long *)arg3;	// IMP=0x00100000004d9748
@property(readonly, nonatomic) unsigned int frameRate; // @synthesize frameRate=_frameRate;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *formatDescription; // @synthesize formatDescription=_formatDescription;
@property(nonatomic) int captureSourceID; // @synthesize captureSourceID=_captureSourceID;
@property(readonly, nonatomic) long long streamInputID; // @synthesize streamInputID=_streamInputID;
- (int)getCaptureFrameRateForSource:(int)arg1;	// IMP=0x00000000004da791
- (void)setCFAvailabilityChange:(_Bool)arg1;	// IMP=0x00000000004da78b
- (void)setCaptureFrameRate:(int)arg1;	// IMP=0x00000000004da785
- (void)setCameraZoomAvailable:(_Bool)arg1 currentZoomFactor:(double)arg2 maxZoomFactor:(double)arg3;	// IMP=0x00000000004da77f
- (void)handleCaptureEvent:(id)arg1 subType:(id)arg2;	// IMP=0x00000000004da779
- (void)handleCaptureEvent:(id)arg1;	// IMP=0x00000000004da773
- (void)onCaptureScreenFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 orientation:(int)arg3;	// IMP=0x00000000004da715
- (void)didResumeVideoSink:(id)arg1;	// IMP=0x00000000004da60a
- (void)didSuspendVideoSink:(id)arg1;	// IMP=0x00000000004da4ff
- (_Bool)allSinksSuspended;	// IMP=0x00000000004da3e8
- (unsigned int)removeSink:(id)arg1;	// IMP=0x00000000004da2f1
- (unsigned int)addSink:(id)arg1;	// IMP=0x00000000004da1cb
- (CDUnknownBlockType)copyOnVideoFrameBlock;	// IMP=0x00000000004da137
- (void)sourceFrameRateDidChange:(unsigned int)arg1;	// IMP=0x00000000004da131
- (_Bool)onVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 attribute:(CDStruct_51555cf6)arg3;	// IMP=0x00000000004da101
- (void)setDelegate:(id)arg1;	// IMP=0x00000000004d9f39
- (_Bool)setupDataFormatWithConfiguration:(id)arg1;	// IMP=0x00000000004d9e63
- (_Bool)setupVideoFormatWithConfiguration:(id)arg1;	// IMP=0x00000000004d9c88
- (_Bool)setupFormatWithConfiguration:(id)arg1;	// IMP=0x00000000004d9a1a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004d96d6
- (void)dealloc;	// IMP=0x00000000004d9626
- (void)loadCannedVideoReplay;	// IMP=0x00000000004d9620
- (id)initWithCaptureSourceID:(int)arg1 configuration:(id)arg2;	// IMP=0x00000000004d92c4

// Remaining properties
@property(readonly, nonatomic) int bestCameraCaptureFrameRate;
// Preceding property had unknown attributes: ?
// Original attribute string: Ti,?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool followSystemCamera;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool is1080pCameraAvailable;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly) Class superclass;

@end
