//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NLLanguageModel.h"

__attribute__((visibility("hidden")))
@interface NLLMSLanguageModel : NLLanguageModel
{
    struct LanguageModel _model;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x000000000003384a
- (void).cxx_destruct;	// IMP=0x0000000000033839
- (void *)_underlyingModel;	// IMP=0x0000000000033829
- (id)sessionWithOptions:(id)arg1;	// IMP=0x00000000000337c5
- (_Bool)generatesPredictions;	// IMP=0x00000000000337bd
- (id)initWithLocalization:(id)arg1 options:(id)arg2;	// IMP=0x00000000000332ec

@end

