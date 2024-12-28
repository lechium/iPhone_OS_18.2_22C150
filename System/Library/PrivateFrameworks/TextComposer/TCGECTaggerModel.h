//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface TCGECTaggerModel : NSObject
{
    NSString *_modelPath;	// 8 = 0x8
    void *_embeddings;	// 16 = 0x10
    struct MontrealNeuralNetwork *_gecClassifier;	// 24 = 0x18
    struct MontrealNeuralNetwork *_vscClassifier;	// 32 = 0x20
    NSArray *_gecClassifierLabels;	// 40 = 0x28
    NSDictionary *_labelsToIssueType;	// 48 = 0x30
    NSDictionary *_indicationThresholds;	// 56 = 0x38
    NSDictionary *_autocorrectionThresholds;	// 64 = 0x40
    NSDictionary *_detailedIssueTypes;	// 72 = 0x48
    unsigned long long _keepLabelIndex;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000002b3da
- (void)enumerateIssuesForSentence:(id)arg1 checkTermination:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000002a5c0
- (_Bool)loadDetailedIssueTypesFromURL:(id)arg1;	// IMP=0x000000000002a148
- (_Bool)loadAutocorrectionThresholdsFromURL:(id)arg1;	// IMP=0x0000000000029e01
- (_Bool)loadIndicationThresholdsFromURL:(id)arg1;	// IMP=0x0000000000029aba
- (_Bool)loadErrorClassesFromURL:(id)arg1;	// IMP=0x00000000000292e9
- (id)correctionForPredictedClass:(unsigned long long)arg1 withProbability:(float)arg2;	// IMP=0x0000000000029149
- (id)classifierPrediction:(struct MontrealNeuralNetwork *)arg1 labelCount:(unsigned long long)arg2 input:(id)arg3 tokenCount:(unsigned long long)arg4;	// IMP=0x0000000000028eab
- (_Bool)isTerminatedSentence:(id)arg1 embeddings:(id)arg2;	// IMP=0x0000000000028cb6
- (id)classifierPredictions:(id)arg1 tokenCount:(unsigned long long)arg2;	// IMP=0x0000000000028c23
@property(readonly, nonatomic) unsigned long long embeddingDimension;
- (id)embeddingsForTokenizedSentence:(id)arg1;	// IMP=0x0000000000028531
@property(readonly, nonatomic) unsigned long long numCategories;
- (void)dealloc;	// IMP=0x00000000000284c0
- (id)initWithModelPath:(id)arg1 OTABundlePath:(id)arg2 options:(id)arg3;	// IMP=0x0000000000027af4
- (_Bool)useANEWithOptions:(id)arg1;	// IMP=0x0000000000027a1d

@end
