//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueMutatingSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableSet
{
    NSKeyValueMutatingSetMethodSet *_mutatingMethods;	// 24 = 0x18
}

- (void)unionSet:(id)arg1;	// IMP=0x00000000007ab258
- (void)setSet:(id)arg1;	// IMP=0x00000000007ab1c6
- (void)removeObject:(id)arg1;	// IMP=0x00000000007ab0ec
- (void)removeAllObjects;	// IMP=0x00000000007ab023
- (void)minusSet:(id)arg1;	// IMP=0x00000000007aaf91
- (void)intersectSet:(id)arg1;	// IMP=0x00000000007aaeff
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x00000000007aae1d
- (void)addObject:(id)arg1;	// IMP=0x00000000007aad43
- (void)_proxyNonGCFinalize;	// IMP=0x00000000007aacd2
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000007aac45

@end

