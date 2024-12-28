//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NLLanguageModelSession.h"

__attribute__((visibility("hidden")))
@interface NLNLPLanguageModelSession : NLLanguageModelSession
{
    struct CoreLanguageModelWithState *_model;	// 16 = 0x10
}

- (void)enumeratePredictionsForContext:(id)arg1 maximumPredictions:(unsigned long long)arg2 maximumTokensPerPrediction:(unsigned long long)arg3 withBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000002bc5c
- (id)predictionInitialCharacterSet;	// IMP=0x000000000002bbf7
- (id)predictionOptionsForMaximumPredictions:(unsigned long long)arg1 maximumTokensPerPrediction:(unsigned long long)arg2;	// IMP=0x000000000002bad6
- (id)stateWithOptions:(id)arg1;	// IMP=0x000000000002ba51
- (id)conditionalProbabilitiesForStrings:(id)arg1 context:(id)arg2;	// IMP=0x000000000002b953
- (id)conditionalProbabilityForString:(id)arg1 context:(id)arg2;	// IMP=0x000000000002b644
- (id)conditionalProbabilityForToken:(id)arg1 context:(id)arg2;	// IMP=0x000000000002b4a1
- (id)description;	// IMP=0x000000000002b386
- (void)dealloc;	// IMP=0x000000000002b340
- (id)initWithLanguageModel:(id)arg1 options:(id)arg2;	// IMP=0x000000000002b1f1

@end
