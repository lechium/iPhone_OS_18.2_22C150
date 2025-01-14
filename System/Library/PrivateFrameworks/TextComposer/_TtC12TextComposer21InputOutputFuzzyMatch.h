//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC12TextComposer21InputOutputFuzzyMatch : NSObject
{
    MISSING_TYPE *input;	// 8 = 0x8
    MISSING_TYPE *inputTokens;	// 16 = 0x10
    MISSING_TYPE *stopWords;	// 24 = 0x18
    MISSING_TYPE *exemptionRegexList;	// 32 = 0x20
}

+ (id)tokenize:(id)arg1;	// IMP=0x0060000000074320
- (void).cxx_destruct;	// IMP=0x0000000000075700
- (id)init;	// IMP=0x0000000000075680
- (_Bool)isFuzzyMatchWithOutputWordTokens:(id)arg1 threshold:(float)arg2 alwaysAllowOneMistake:(_Bool)arg3;	// IMP=0x00000000000755a0
- (_Bool)isExactMatchWithOutputWordTokens:(id)arg1 threshold:(float)arg2 alwaysAllowOneMistake:(_Bool)arg3;	// IMP=0x0000000000074e90
- (id)initWithInput:(id)arg1 stopWords:(id)arg2 exemptionRegexStringList:(id)arg3;	// IMP=0x0000000000074990

@end

