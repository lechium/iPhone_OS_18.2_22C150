//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUTPromise.h"

@class CUTResult, NSMutableArray, NSRecursiveLock;

@interface _CUTLockingPromise : CUTPromise
{
    NSRecursiveLock *_lock;	// 8 = 0x8
    _Bool _done;	// 16 = 0x10
    CUTResult *_result;	// 24 = 0x18
    NSMutableArray *_resultBlocks;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000078b3
@property(retain, nonatomic) CUTResult *result; // @synthesize result=_result;
@property(retain, nonatomic) NSMutableArray *resultBlocks; // @synthesize resultBlocks=_resultBlocks;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool done; // @synthesize done=_done;
- (void)registerResultBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007757
- (void)_fulfillWithResult:(id)arg1;	// IMP=0x0000000000007538
- (id)init;	// IMP=0x00000000000074aa

@end

