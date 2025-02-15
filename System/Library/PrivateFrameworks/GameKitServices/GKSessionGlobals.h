//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GKSessionGlobals : NSObject
{
    unsigned int *_activePIDList;	// 8 = 0x8
    unsigned long long _activePIDListSize;	// 16 = 0x10
    unsigned long long _activePIDListCount;	// 24 = 0x18
    struct _opaque_pthread_mutex_t _lock;	// 32 = 0x20
}

- (void)unlock;	// IMP=0x0000000000050ae9
- (void)lock;	// IMP=0x0000000000050a7b
- (_Bool)hasActivePID:(unsigned int)arg1;	// IMP=0x0000000000050a42
- (void)unregisterPID:(unsigned int)arg1;	// IMP=0x00000000000509f1
- (void)registerPID:(unsigned int)arg1;	// IMP=0x000000000005098b
- (id)init;	// IMP=0x00000000000508de

@end

