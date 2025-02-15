//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "FBSSerialQueue.h"

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FBSDispatchSerialQueue : FBSSerialQueue
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _main;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000078603
- (id)description;	// IMP=0x0000000000078549
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000784ca
- (unsigned long long)hash;	// IMP=0x00000000000784ad
- (void)performAsync:(CDUnknownBlockType)arg1 withHandoff:(id)arg2;	// IMP=0x0000000000078439
- (id)backingQueueIfExists;	// IMP=0x0000000000078424
- (void)assertBarrierOnQueue;	// IMP=0x000000000007835c
- (void)performAfter:(double)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000782f3
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000000000782d5

@end

