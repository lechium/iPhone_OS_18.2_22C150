//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC24TokenGenerationInference28ThreeStageSpeculativeDecoder : _TtCs12_SwiftObject
{
    MISSING_TYPE *tinyModel;	// 16 = 0x10
    MISSING_TYPE *tinyNode;	// 56 = 0x38
    MISSING_TYPE *draftModel;	// 64 = 0x40
    MISSING_TYPE *draftNode;	// 104 = 0x68
    MISSING_TYPE *targetModel;	// 112 = 0x70
    MISSING_TYPE *targetNode;	// 152 = 0x98
    MISSING_TYPE *draftingBehavior;	// 160 = 0xa0
    MISSING_TYPE *sampler;	// 200 = 0xc8
    MISSING_TYPE *targetPresampler;	// 240 = 0xf0
    MISSING_TYPE *draftPresampler;	// 280 = 0x118
    MISSING_TYPE *draftCount;	// 320 = 0x140
    MISSING_TYPE *bufferedTokens;	// 328 = 0x148
    MISSING_TYPE *mustProcessPrompt;	// 336 = 0x150
    MISSING_TYPE *countTotalAcceptedTinyModelNodes;	// 344 = 0x158
    MISSING_TYPE *countTotalGeneratedTinyModelNodes;	// 352 = 0x160
    MISSING_TYPE *countTotalAcceptedDraftTokens;	// 360 = 0x168
    MISSING_TYPE *countTotalGeneratedDraftTokenTreeLayers;	// 368 = 0x170
    MISSING_TYPE *countTotalOutputTokens;	// 376 = 0x178
    MISSING_TYPE *countTotalOutputTokensDirectlyFromTargetModel;	// 384 = 0x180
    MISSING_TYPE *countSpeculationSuccess;	// 392 = 0x188
    MISSING_TYPE *countSpeculationBatchCount;	// 400 = 0x190
}

@end
