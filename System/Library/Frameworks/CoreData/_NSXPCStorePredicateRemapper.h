//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSXPCStorePredicateRemapper : NSObject
{
}

+ (id)defaultInstance;	// IMP=0x0010000000066741
+ (void)initialize;	// IMP=0x0010000000066706
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x0000000000066829
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x0000000000066823
- (void)visitPredicate:(id)arg1;	// IMP=0x000000000006681d
- (id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2;	// IMP=0x000000000006680b
- (id)createPredicateForFetchFromPredicate:(id)arg1;	// IMP=0x00000000000667c4
- (void)dealloc;	// IMP=0x0000000000066795
- (id)init;	// IMP=0x0000000000066766

@end

