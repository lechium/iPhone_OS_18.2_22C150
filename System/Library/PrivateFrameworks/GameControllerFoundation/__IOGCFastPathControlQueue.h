//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class __IOGCFastPathClient;

__attribute__((visibility("hidden")))
@interface __IOGCFastPathControlQueue : NSObject
{
    struct __CFAllocator *allocator;	// 8 = 0x8
    __IOGCFastPathClient *client;	// 16 = 0x10
    struct IOGCFastPathControlQueueInterface **queueInterface;	// 24 = 0x18
    unsigned long long queueID;	// 32 = 0x20
}

- (id)description;	// IMP=0x000000000003d8f9
- (void)dealloc;	// IMP=0x000000000003d877

@end
