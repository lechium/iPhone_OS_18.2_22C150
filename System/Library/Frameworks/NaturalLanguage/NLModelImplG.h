//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLGazetteer;

__attribute__((visibility("hidden")))
@interface NLModelImplG
{
    NLGazetteer *_gazetteer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000005024
- (id)predictedLabelsForTokens:(id)arg1;	// IMP=0x0000000000004f2a
- (id)predictedLabelForString:(id)arg1;	// IMP=0x0000000000004f0d
- (id)modelData;	// IMP=0x0000000000004ef0
- (id)gazetteer;	// IMP=0x0000000000004edb
- (unsigned long long)systemVersion;	// IMP=0x0000000000004ed0
- (id)initWithModelTrainer:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004ec2
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id *)arg8;	// IMP=0x0000000000004e29
- (id)initWithGazetteer:(id)arg1;	// IMP=0x0000000000004dbb

@end
