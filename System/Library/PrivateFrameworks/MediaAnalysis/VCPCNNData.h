//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, VCPCNNMetalContext;

__attribute__((visibility("hidden")))
@interface VCPCNNData : NSObject
{
    _Bool _isInputOutput;	// 8 = 0x8
    NSMutableArray *_size;	// 16 = 0x10
    float *_data;	// 24 = 0x18
    VCPCNNMetalContext *_context;	// 32 = 0x20
}

+ (id)cnnDataWithPlane:(int)arg1 height:(int)arg2 width:(int)arg3 context:(id)arg4;	// IMP=0x00600000002e626b
+ (id)cnnDataWithGPUContext:(id)arg1;	// IMP=0x00600000002e61fd
+ (id)cnnData;	// IMP=0x00600000002e61e4
+ (Class)cnnDataClass;	// IMP=0x00600000002e619a
- (void).cxx_destruct;	// IMP=0x00000000002e721d
@property __weak VCPCNNMetalContext *context; // @synthesize context=_context;
@property _Bool isInputOutput; // @synthesize isInputOutput=_isInputOutput;
@property float *data; // @synthesize data=_data;
@property(retain) NSMutableArray *size; // @synthesize size=_size;
- (int)softmax;	// IMP=0x00000000002e7097
- (int)normalization;	// IMP=0x00000000002e6f5f
- (int)readFromDisk:(struct __sFILE *)arg1 quantFactor:(short)arg2;	// IMP=0x00000000002e6e1f
- (int)copyImage:(struct __CVBuffer *)arg1 withChunk:(int)arg2;	// IMP=0x00000000002e6934
- (int)reallocGPUTemporalBuffers;	// IMP=0x00000000002e6929
- (int)convertGPUData2CPU;	// IMP=0x00000000002e6921
- (int)convertCPUData2GPU;	// IMP=0x00000000002e6916
- (int)bufferAllocCPU;	// IMP=0x00000000002e6802
- (int)randInit;	// IMP=0x00000000002e666d
- (int)allocBuffers:(_Bool)arg1;	// IMP=0x00000000002e6658
- (void)dealloc;	// IMP=0x00000000002e660f
- (id)initWithParameters:(int)arg1 height:(int)arg2 width:(int)arg3 context:(id)arg4;	// IMP=0x00000000002e6454
- (id)initWithGPUContext:(id)arg1;	// IMP=0x00000000002e638f
- (id)init;	// IMP=0x00000000002e62f3

@end
