//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAsset, AVAssetWriter, AVAssetWriterInput, NSMutableArray, NSObject, NSURL;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface MADHEVCAlphaSequenceWriter
{
    NSURL *_url;	// 8 = 0x8
    AVAsset *_asset;	// 16 = 0x10
    AVAssetWriter *_writer;	// 24 = 0x18
    AVAssetWriterInput *_input;	// 32 = 0x20
    NSMutableArray *_sampleQueue;	// 40 = 0x28
    NSObject<OS_dispatch_semaphore> *_enqueueSemaphore;	// 48 = 0x30
    NSObject<OS_dispatch_semaphore> *_dequeueSemaphore;	// 56 = 0x38
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;	// 64 = 0x40
    struct atomic<int> _status;	// 72 = 0x48
}

+ (id)assetWriterWithURL:(id)arg1;	// IMP=0x0060000000006257
- (void).cxx_destruct;	// IMP=0x0000000000006f99
- (id)finishWithEndTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000006f0f
- (int)addPixelBuffer:(struct __CVBuffer *)arg1 withTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000006dae
- (int)createAssetWriterInputWithFormatDescription:(struct opaqueCMFormatDescription *)arg1;	// IMP=0x00000000000069bd
- (void)processMediaRequest;	// IMP=0x000000000000684a
- (struct opaqueCMSampleBuffer *)popSample;	// IMP=0x000000000000676b
- (void)pushSample:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x00000000000066c9
- (void)dealloc;	// IMP=0x00000000000062bc
- (id)initWithFrameCount:(unsigned long long)arg1;	// IMP=0x0000000000005b80

@end

