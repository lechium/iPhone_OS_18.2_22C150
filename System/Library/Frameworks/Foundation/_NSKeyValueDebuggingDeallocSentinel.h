//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSKeyValueDebuggingDeallocSentinel : NSObject
{
    _Atomic _Bool _isInvalid;	// 8 = 0x8
    unsigned long long _objectPointer;	// 16 = 0x10
    CDUnknownBlockType _callbackBlock;	// 24 = 0x18
}

+ (void)_invalidateSentinelWithKey:(void *)arg1 fromObject:(id)arg2;	// IMP=0x006000000088215e
- (void)dealloc;	// IMP=0x0000000000882233
- (void)invalidate;	// IMP=0x0000000000882208
- (id)initWithObjectPointer:(unsigned long long)arg1 callbackBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000088217e

@end

