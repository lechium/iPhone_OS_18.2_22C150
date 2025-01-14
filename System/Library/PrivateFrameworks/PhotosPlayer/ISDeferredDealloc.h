//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ISDeferredDealloc : NSObject
{
    NSObject<OS_dispatch_queue> *_deferredDeallocQueue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x006000000000c5df
- (void)dealloc;	// IMP=0x000000000000c49f
- (void)_performDeferredDealloc:(id)arg1;	// IMP=0x000000000000c436
- (void)_performDeferredDealloc:(id)arg1 withDelay:(double)arg2;	// IMP=0x000000000000c3b3
- (id)init;	// IMP=0x000000000000c356

@end

