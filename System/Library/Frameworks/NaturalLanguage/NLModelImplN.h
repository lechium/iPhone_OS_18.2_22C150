//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLModelConfiguration, NSDictionary;

__attribute__((visibility("hidden")))
@interface NLModelImplN
{
    void *_nlModel;	// 8 = 0x8
    void *_modelContainer;	// 16 = 0x10
    NLModelConfiguration *_configuration;	// 24 = 0x18
    NSDictionary *_labelMap;	// 32 = 0x20
    unsigned long long _numberOfTrainingInstances;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000038474
- (id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x0000000000037ccc
- (id)predictedLabelForString:(id)arg1;	// IMP=0x00000000000379dd
- (id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x000000000003735b
- (id)predictedLabelsForTokens:(id)arg1;	// IMP=0x0000000000036e31
- (id)predictedLabelHypothesesDictionaryForString:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x0000000000036e0e
- (id)predictedLabelsDictionaryForString:(id)arg1;	// IMP=0x0000000000036dee
- (unsigned long long)numberOfTrainingInstances;	// IMP=0x0000000000036ddd
- (id)labelMap;	// IMP=0x0000000000036dc8
- (id)configuration;	// IMP=0x0000000000036db3
- (id)modelData;	// IMP=0x0000000000036d25
- (void)dealloc;	// IMP=0x0000000000036cca
- (id)initWithModelTrainer:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000035ae6
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id *)arg8;	// IMP=0x000000000003586a
- (id)initWithModelContainer:(void *)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7;	// IMP=0x0000000000035729

@end
