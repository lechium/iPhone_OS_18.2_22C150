//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSObserverList : NSObject
{
    id _owner;	// 8 = 0x8
    id _observers;	// 16 = 0x10
    _Atomic unsigned int _observerCount;	// 24 = 0x18
    struct os_unfair_lock_s _observersLock;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000092a7b8
- (id)description;	// IMP=0x000000000092a5f3
- (id)debugDescription;	// IMP=0x000000000092a5e1
- (void)dealloc;	// IMP=0x000000000092a588
- (void)_receiveBox:(id)arg1;	// IMP=0x000000000092a08d
- (void)removeObservation:(id)arg1;	// IMP=0x000000000092a078
- (void)finishObserving;	// IMP=0x0000000000929f1f
- (id)init;	// IMP=0x0000000000929c63

@end
