//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNGazeAnalysis : NSObject
{
    float *_inputData;	// 8 = 0x8
    VCPCNNModelEspresso *_modelEspresso;	// 16 = 0x10
    struct Scaler _scaler;	// 24 = 0x18
}

+ (id)sharedModel:(id)arg1;	// IMP=0x006000000029de6c
- (id).cxx_construct;	// IMP=0x000000000029e493
- (void).cxx_destruct;	// IMP=0x000000000029e462
- (int)detectEyeOpennessForFace:(struct CGRect)arg1 inBuffer:(struct __CVBuffer *)arg2 eyeOpenness:(_Bool *)arg3;	// IMP=0x000000000029e38a
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 faceBounds:(struct CGRect)arg5;	// IMP=0x000000000029e263
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2;	// IMP=0x000000000029dfed
- (void)dealloc;	// IMP=0x000000000029dfa4
- (id)init;	// IMP=0x000000000029dc06

@end

