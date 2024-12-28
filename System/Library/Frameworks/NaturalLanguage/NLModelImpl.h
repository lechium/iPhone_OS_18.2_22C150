//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NLEmbedding, NLGazetteer, NLModelConfiguration, NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface NLModelImpl : NSObject
{
}

- (id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x0000000000010f0b
- (id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x0000000000010efe
- (id)predictedLabelArraysForTokenArrays:(id)arg1;	// IMP=0x0000000000010d2f
- (id)predictedLabelsForTokens:(id)arg1;	// IMP=0x0000000000010d22
- (id)predictedLabelForString:(id)arg1;	// IMP=0x0000000000010d1a
@property(readonly, copy) NSData *embeddingData;
@property(readonly, copy) NLEmbedding *embedding;
@property(readonly, copy) NLGazetteer *gazetteer;
@property(readonly, copy) NSDictionary *trainingInfo;
@property(readonly) unsigned long long numberOfTrainingInstances;
@property(readonly, copy) NSData *customEmbeddingData;
@property(readonly, copy) NSDictionary *documentFrequencyMap;
@property(readonly, copy) NSDictionary *vocabularyMap;
@property(readonly, copy) NSDictionary *labelMap;
@property(readonly) unsigned long long systemVersion;
@property(readonly, copy) NLModelConfiguration *configuration;
- (id)modelData;	// IMP=0x0000000000010c07
- (id)initWithModelTrainer:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010bf9
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id *)arg8;	// IMP=0x0000000000010beb

@end
