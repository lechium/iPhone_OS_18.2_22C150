//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCPCNNFullConnectionBlock
{
    float *_weight;	// 56 = 0x38
    float *_bias;	// 64 = 0x40
    int _numNeurons;	// 72 = 0x48
    int _neuronType;	// 76 = 0x4c
}

+ (id)fcBlockWithNumNeurons:(int)arg1 NeuronType:(int)arg2;	// IMP=0x006000000026f805
- (_Bool)useGPU;	// IMP=0x000000000026fda8
- (_Bool)supportGPU;	// IMP=0x000000000026fda0
- (int)readFromDisk:(struct __sFILE *)arg1 quantFactor:(short)arg2;	// IMP=0x000000000026fb8d
- (int)loadWeights:(struct __sFILE *)arg1 inputDim:(int)arg2 outputDim:(int)arg3 quantFactor:(int)arg4;	// IMP=0x000000000026fb82
- (int)readWeightsBias:(struct __sFILE *)arg1 weights:(float *)arg2 bias:(float *)arg3 inputDim:(int)arg4 outputDim:(int)arg5 quantFactor:(int)arg6;	// IMP=0x000000000026fb15
- (int)constructBlock:(id)arg1 context:(id)arg2;	// IMP=0x000000000026f97d
- (void)dealloc;	// IMP=0x000000000026f90e
- (id)initWithParameters:(int)arg1 NeuronType:(int)arg2;	// IMP=0x000000000026f874

@end
