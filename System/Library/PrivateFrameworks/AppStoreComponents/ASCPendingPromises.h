//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSRecursiveLock;

__attribute__((visibility("hidden")))
@interface ASCPendingPromises : NSObject
{
    NSRecursiveLock *_stateLock;	// 8 = 0x8
    NSMutableArray *_binaryPromisesIfLoaded;	// 16 = 0x10
    NSMutableArray *_promisesIfLoaded;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000063ca1
@property(retain, nonatomic) NSMutableArray *promisesIfLoaded; // @synthesize promisesIfLoaded=_promisesIfLoaded;
@property(retain, nonatomic) NSMutableArray *binaryPromisesIfLoaded; // @synthesize binaryPromisesIfLoaded=_binaryPromisesIfLoaded;
@property(readonly, nonatomic) NSRecursiveLock *stateLock; // @synthesize stateLock=_stateLock;
- (void)finishAllWithError:(id)arg1;	// IMP=0x0000000000063b5c
- (void)cancelAll;	// IMP=0x0000000000063b12
- (void)enumerateBinaryPromises:(CDUnknownBlockType)arg1 andPromises:(CDUnknownBlockType)arg2;	// IMP=0x00000000000637ed
- (void)addPromise:(id)arg1;	// IMP=0x0000000000063510
- (_Bool)containsPromise:(id)arg1;	// IMP=0x0000000000063385
@property(readonly, nonatomic) _Bool hasPromises;
- (void)addBinaryPromise:(id)arg1;	// IMP=0x0000000000062e45
- (_Bool)containsBinaryPromise:(id)arg1;	// IMP=0x0000000000062c43
@property(readonly, nonatomic) NSMutableArray *promises;
@property(readonly, nonatomic) NSMutableArray *binaryPromises;
- (void)withLock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000062a86
- (id)init;	// IMP=0x0000000000062a30

@end
