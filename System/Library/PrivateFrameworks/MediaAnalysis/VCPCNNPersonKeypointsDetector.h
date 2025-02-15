//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNPersonKeypointsDetector : NSObject
{
    int _maxNumRegions;	// 8 = 0x8
    float *_inputData;	// 16 = 0x10
    VCPCNNModelEspresso *_modelEspresso;	// 24 = 0x18
    int _inputWidth;	// 32 = 0x20
    int _inputHeight;	// 36 = 0x24
    int _outputWidth;	// 40 = 0x28
    int _outputHeight;	// 44 = 0x2c
    int _padX;	// 48 = 0x30
    int _padY;	// 52 = 0x34
    struct Scaler _scaler;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x00000000002b3ccc
- (void).cxx_destruct;	// IMP=0x00000000002b3c9b
- (int)parseKeypoints:(id)arg1;	// IMP=0x00000000002b3916
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withBox:(id)arg2 keypoints:(id)arg3 padX:(int *)arg4 padY:(int *)arg5;	// IMP=0x00000000002b3802
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 box:(id)arg5;	// IMP=0x00000000002b33fb
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4;	// IMP=0x00000000002b3129
- (void)dealloc;	// IMP=0x00000000002b30e0
- (id)initWithForceCPU:(_Bool)arg1 sharedModel:(_Bool)arg2;	// IMP=0x00000000002b2cd0

@end

