//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NSPredicate;

__attribute__((visibility("hidden")))
@interface _OSLogPredicateMapper : NSObject
{
    int _pass;	// 8 = 0x8
    NSMutableArray *_validationErrors;	// 16 = 0x10
    unsigned long long _flags;	// 24 = 0x18
    NSPredicate *_predicate;	// 32 = 0x20
    NSMutableArray *_stack;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000022014
@property(readonly, nonatomic) NSArray *validationErrors; // @synthesize validationErrors=_validationErrors;
@property(retain, nonatomic) NSMutableArray *stack; // @synthesize stack=_stack;
@property(readonly, nonatomic) NSPredicate *mappedPredicate; // @synthesize mappedPredicate=_predicate;
@property(readonly, nonatomic) unsigned long long flags; // @synthesize flags=_flags;
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x0000000000021fa7
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x0000000000021f8c
- (void)validateExpression:(id)arg1;	// IMP=0x0000000000021d72
- (void)processCompoundPredicate:(id)arg1;	// IMP=0x0000000000021c23
- (void)processComparisonPredicate:(id)arg1;	// IMP=0x0000000000021ad7
- (void)mapLeftExpression:(id *)arg1 andRightExpression:(id *)arg2;	// IMP=0x0000000000021777
- (id)mapSignpostTypeExpression:(id)arg1;	// IMP=0x00000000000216fc
- (id)mapSignpostScopeExpression:(id)arg1;	// IMP=0x0000000000021681
- (id)mapMessageTypeExpression:(id)arg1;	// IMP=0x0000000000021606
- (id)mapEventTypeExpression:(id)arg1;	// IMP=0x000000000002158b
- (id)mapKeywordToConstantExpression:(id)arg1 keywordMap:(id)arg2;	// IMP=0x0000000000021317
@property(readonly, nonatomic) NSMutableSet *validKeyPaths;
- (void)visitPredicate:(id)arg1;	// IMP=0x000000000002125e
- (id)initWithPredicate:(id)arg1;	// IMP=0x000000000002124c
- (id)initWithPredicate:(id)arg1 andValidate:(_Bool)arg2;	// IMP=0x0000000000021133

@end
