//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, VCPVideoTrackDecoder;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPVideoAnalysisPipelineManager : NSObject
{
    struct atomic<int> _err;	// 8 = 0x8
    unsigned long long _flags;	// 16 = 0x10
    VCPVideoTrackDecoder *_decoder;	// 24 = 0x18
    _Bool _decodeDone;	// 32 = 0x20
    NSMutableArray *_frameResources;	// 40 = 0x28
    unsigned long long _maxBufferedFrames;	// 48 = 0x30
    NSArray *_pipelineBlocks;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_decodeQueue;	// 64 = 0x40
    NSMutableArray *_pipelineQueues;	// 72 = 0x48
    NSObject<OS_dispatch_group> *_group;	// 80 = 0x50
    CDUnknownBlockType _cancelBlock;	// 88 = 0x58
    NSString *_logPrefix;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000347993
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
- (int)run;	// IMP=0x000000000034769b
- (void)executePipelineStageAt:(unsigned long long)arg1 currentFrameResource:(id)arg2 nextFrameSample:(struct opaqueCMSampleBuffer *)arg3;	// IMP=0x000000000034733e
- (void)executeDecode;	// IMP=0x0000000000347051
- (int)addFrameResource:(id)arg1;	// IMP=0x0000000000346f07
- (id)lastFrameResource;	// IMP=0x0000000000346ebd
- (id)nextFrameResource;	// IMP=0x0000000000346dc8
- (int)manageFrameResources;	// IMP=0x0000000000346c54
- (void)flushFrameResources;	// IMP=0x0000000000346ba5
- (id)initWithVideoAnalysisBlocks:(id)arg1 videoDecoder:(id)arg2 maxBufferedFrames:(unsigned long long)arg3 cancelBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000034659e

@end
