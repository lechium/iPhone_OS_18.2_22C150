//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LibraryExpressionClassifier, NSMutableArray;

@interface LibraryQueryPlanner : NSObject
{
    LibraryExpressionClassifier *_classifier;	// 8 = 0x8
    NSMutableArray *_stack;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000002197f0
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x00100000002197ea
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x00100000002197e4
- (void)visitPredicate:(id)arg1;	// IMP=0x001000000021907b

@end

