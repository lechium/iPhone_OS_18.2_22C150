//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface _IKDOMMutationRuleSet : NSObject
{
    NSArray *_mutationRules;	// 8 = 0x8
    NSSet *_dependentPathStrings;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000090384
@property(readonly, copy, nonatomic) NSSet *dependentPathStrings; // @synthesize dependentPathStrings=_dependentPathStrings;
@property(readonly, copy, nonatomic) NSArray *mutationRules; // @synthesize mutationRules=_mutationRules;
- (id)initWithMutationRules:(id)arg1;	// IMP=0x00000000000902fd

@end

