//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _PFMutex : NSObject
{
    struct _opaque_pthread_mutex_t _lock;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x001000000007d481
- (void)unlock;	// IMP=0x000000000007d5e0
- (_Bool)tryLock;	// IMP=0x000000000007d5cc
- (void)lock;	// IMP=0x000000000007d5be
- (void)dealloc;	// IMP=0x000000000007d50c
- (id)init;	// IMP=0x000000000007d49e

@end

