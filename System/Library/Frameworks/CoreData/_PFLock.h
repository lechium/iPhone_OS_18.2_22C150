//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _PFLock : NSObject
{
    struct _opaque_pthread_mutex_t _lock;	// 8 = 0x8
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_owner;	// 72 = 0x48
    unsigned long long _count;	// 80 = 0x50
}

+ (void)initialize;	// IMP=0x001000000007d289
- (void)unlock;	// IMP=0x000000000007d465
- (_Bool)tryLock;	// IMP=0x000000000007d433
- (void)lock;	// IMP=0x000000000007d40d
- (void)dealloc;	// IMP=0x000000000007d354
- (id)init;	// IMP=0x000000000007d2d8

@end

