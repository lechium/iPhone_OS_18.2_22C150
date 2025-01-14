//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSPersistentHistoryPredicateRemapper : NSObject
{
    NSString *_storeID;	// 8 = 0x8
    _Bool _previousKeyPathExpressionWasToken;	// 16 = 0x10
}

+ (id)defaultInstance;	// IMP=0x001000000006587d
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x00000000000661f7
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x00000000000659b6
- (void)visitPredicate:(id)arg1;	// IMP=0x00000000000659b0
- (id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000000065925
- (id)createPredicateForFetchFromPredicate:(id)arg1;	// IMP=0x0000000000065911
- (void)dealloc;	// IMP=0x00000000000658d6
- (id)initWithStoreIdentifier:(id)arg1;	// IMP=0x00000000000658a2

@end

