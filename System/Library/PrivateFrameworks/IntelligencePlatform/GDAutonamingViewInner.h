//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface GDAutonamingViewInner : NSObject
{
    MISSING_TYPE *subgraph;	// 8 = 0x8
    MISSING_TYPE *context;	// 16 = 0x10
    MISSING_TYPE *feedbackService;	// 24 = 0x18
    MISSING_TYPE *isForLiveServing;	// 32 = 0x20
    MISSING_TYPE *rejectedIdentifiers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004fc73
- (id)init;	// IMP=0x000000000004fc32
- (void)rejectWithIdentifier:(id)arg1 person:(id)arg2 confirmationType:(long long)arg3;	// IMP=0x000000000004fb6f
- (void)confirmWithIdentifier:(id)arg1 person:(id)arg2 confirmationType:(long long)arg3;	// IMP=0x000000000004f953
- (void)didUpdateUserFeedback;	// IMP=0x000000000004f528
- (id)objCPersonFor:(id)arg1;	// IMP=0x000000000004e283
- (void)_reset;	// IMP=0x000000000004ffda
- (id)initWithViewName:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004fe83

@end
