//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIReusePool : NSObject
{
    NSMutableSet *_reuseSet;	// 8 = 0x8
    unsigned long long _purgePolicy;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_reuseSetAccessQueue;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x0060000000ce8215
+ (void)__applicationWillEnterForeground:(id)arg1;	// IMP=0x0060000000ce8207
+ (void)__applicationDidEnterBackground:(id)arg1;	// IMP=0x0060000000ce7fbe
- (void).cxx_destruct;	// IMP=0x0000000000ce87d4
- (void)drainPool;	// IMP=0x0000000000ce876f
@property(readonly, nonatomic) unsigned long long purgePolicy;
- (id)reusableObject;	// IMP=0x0000000000ce8618
- (void)addObject:(id)arg1;	// IMP=0x0000000000ce8536
- (id)initWithPolicy:(unsigned long long)arg1;	// IMP=0x0000000000ce83fa
- (id)init;	// IMP=0x0000000000ce83e3

@end

