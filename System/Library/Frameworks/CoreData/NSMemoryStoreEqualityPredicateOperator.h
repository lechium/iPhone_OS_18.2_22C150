//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEqualityPredicateOperator.h>

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface NSMemoryStoreEqualityPredicateOperator : NSEqualityPredicateOperator
{
    NSManagedObjectContext *_context;	// 40 = 0x28
}

- (_Bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;	// IMP=0x000000000011e750
- (void)setContext:(id)arg1;	// IMP=0x000000000011e712
- (void)dealloc;	// IMP=0x000000000011e6d0

@end
