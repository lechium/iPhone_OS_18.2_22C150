//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EARCustomLMBuilder : NSObject
{
    struct unique_ptr<quasar::CustomLMBuilder, std::default_delete<quasar::CustomLMBuilder>> _customLMBuilder;	// 8 = 0x8
    unique_ptr_69213b6f _tokenizer;	// 16 = 0x10
}

+ (void)initialize;	// IMP=0x0060000000609c52
- (id).cxx_construct;	// IMP=0x000000000060a52a
- (void).cxx_destruct;	// IMP=0x000000000060a4f6
- (_Bool)getFstGrammar:(id)arg1 overrideFolder:(id)arg2 weight:(float)arg3 errorOut:(id *)arg4;	// IMP=0x0000000000609eee
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000609c63

@end

