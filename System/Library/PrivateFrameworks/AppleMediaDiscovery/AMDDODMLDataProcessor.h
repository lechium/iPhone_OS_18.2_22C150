//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMDClient, AMDDODMLAttachmentProcessor, NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AMDDODMLDataProcessor : NSObject
{
    NSArray *_actionArray;	// 8 = 0x8
    NSMutableDictionary *_coreDictionary;	// 16 = 0x10
    NSMutableDictionary *_inputDictionary;	// 24 = 0x18
    NSMutableDictionary *_elementsInSample;	// 32 = 0x20
    NSMutableDictionary *_numberInputsBound;	// 40 = 0x28
    AMDDODMLAttachmentProcessor *_attachmentsProcessor;	// 48 = 0x30
    AMDClient *_myAMDClient;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000020c80
- (id)windowFunction:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x00000000000200d0
- (id)twoArrayMathFunction:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x000000000001f750
- (id)strideCopyAndSplitArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x000000000001eae0
- (id)strideCopyArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x000000000001e650
- (id)spliceArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x000000000001dde0
- (id)sortArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x000000000001c670
- (id)sampleFromDistribution:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x000000000001be00
- (id)requestData:(id)arg1 withUseStubs:(long long)arg2 error:(id *)arg3 errorDomain:(id)arg4;	// IMP=0x000000000001a080
- (id)replicateArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x0000000000019ce0
- (id)randomizeArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x0000000000018740
- (id)padArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x0000000000017ed0
- (id)insertRawArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x0000000000017d30
- (id)insertArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x0000000000017890
- (id)generateHashFromInputs:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x0000000000017190
- (id)ifStatement:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x0000000000015850
- (id)hashAdamIdsToIndices:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x00000000000153d0
- (id)hashFromCoreDictionary:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x0000000000014d60
- (id)getCurrentTime:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x0000000000014b60
- (id)filterArrayOnNumber:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x0000000000013460
- (id)constantValueMathFunction:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x0000000000012c10
- (id)downSampleData:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x0000000000011630
- (id)destroyArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x0000000000011440
- (id)combineArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x0000000000011010
- (id)checkIfArrayEmptyAndThrowError:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x0000000000010dc0
- (id)bindToBuffer:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x00000000000108c0
- (id)aggregateArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x0000000000010320
- (id)processForLoop:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;	// IMP=0x000000000000eee0
- (id)processForLoopHelper:(id)arg1 withNumber:(id)arg2 withDictionary:(id)arg3;	// IMP=0x000000000000ea70
- (id)parseAndCall:(id)arg1 withInputs:(id)arg2 error:(id *)arg3 errorDomain:(id)arg4;	// IMP=0x000000000000df40
- (id)processRecipe:(id *)arg1 errorDomain:(id)arg2;	// IMP=0x000000000000dd90
- (id)getElementsInSampleDictionary;	// IMP=0x000000000000dd70
- (long long)getInputSize;	// IMP=0x000000000000dae0
- (id)getInputDictionary;	// IMP=0x000000000000dac0
- (id)getElementInNumberInputsBounds:(id)arg1;	// IMP=0x000000000000da40
- (id)getElementInInputDictionary:(id)arg1;	// IMP=0x000000000000d9c0
- (id)getElementInCoreDictionary:(id)arg1;	// IMP=0x000000000000d940
- (void)setElementsInCoreDictionary:(id)arg1;	// IMP=0x000000000000d6f0
- (id)getCoreDictionary;	// IMP=0x000000000000d6d0
- (void)setElementInCoreDictionary:(id)arg1 withKey:(id)arg2;	// IMP=0x000000000000d640
- (void)resetDataProcessorWithRecipe:(id)arg1;	// IMP=0x000000000000d560
- (id)initWithActionArray:(id)arg1 withAttachmentProcessor:(id)arg2;	// IMP=0x000000000000d3c0

@end

