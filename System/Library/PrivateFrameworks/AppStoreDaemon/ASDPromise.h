//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASDPromiseResult, NSMutableArray, NSRecursiveLock;

__attribute__((visibility("hidden")))
@interface ASDPromise : NSObject
{
    NSMutableArray *_observers;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    NSRecursiveLock *_stateLock;	// 24 = 0x18
    ASDPromiseResult *_result;	// 32 = 0x20
}

+ (id)promiseWithError:(id)arg1;	// IMP=0x006000000006c2a8
+ (id)promiseWithValue:(id)arg1;	// IMP=0x006000000006c25f
+ (id)onScheduler:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x006000000006c1f1
- (void).cxx_destruct;	// IMP=0x000000000006d6c8
@property(readonly) ASDPromiseResult *result; // @synthesize result=_result;
- (void)rejectWithError:(id)arg1;	// IMP=0x000000000006d3c0
- (void)resolveWithValue:(id)arg1;	// IMP=0x000000000006d171
- (CDUnknownBlockType)completionHandlerAdapter;	// IMP=0x000000000006d0f4
- (id)joinWithPromise:(id)arg1;	// IMP=0x000000000006cdd0
- (id)flatMapUsingTransformer:(CDUnknownBlockType)arg1 onScheduler:(id)arg2;	// IMP=0x000000000006cb37
- (id)mapUsingTransformer:(CDUnknownBlockType)arg1 onScheduler:(id)arg2;	// IMP=0x000000000006c98d
- (void)thenPerform:(CDUnknownBlockType)arg1 orCatchError:(CDUnknownBlockType)arg2 onScheduler:(id)arg3;	// IMP=0x000000000006c740
- (void)catchError:(CDUnknownBlockType)arg1 onScheduler:(id)arg2;	// IMP=0x000000000006c71b
- (void)alwaysPerform:(CDUnknownBlockType)arg1 onScheduler:(id)arg2;	// IMP=0x000000000006c61c
@property(readonly, getter=isResolved) _Bool resolved;
- (id)initOnScheduler:(id)arg1 withExecutor:(CDUnknownBlockType)arg2;	// IMP=0x000000000006c452
- (id)initWithError:(id)arg1;	// IMP=0x000000000006c405
- (id)initWithValue:(id)arg1;	// IMP=0x000000000006c3b8
- (id)init;	// IMP=0x000000000006c2f1

@end
