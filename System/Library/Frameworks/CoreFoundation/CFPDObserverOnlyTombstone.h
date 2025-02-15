//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CFPDObserverOnlyTombstone : NSObject
{
    struct __CFString *_domain;	// 8 = 0x8
    struct __CFString *_userOrContainer;	// 16 = 0x10
    union {
        NSObject<OS_xpc_object> *_single;
        struct __CFSet *_multiple;
    } _observers;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    unsigned short _shmemIndex;	// 36 = 0x24
    unsigned int _isManaged:1;	// 38 = 0x26
    unsigned int _notificationInProgress:1;	// 38 = 0x26
    unsigned int _needToNotify:1;	// 38 = 0x26
}

- (void)notifyObservers;	// IMP=0x000000000018ef39
- (_Bool)managed;	// IMP=0x000000000018ecf4
- (id)description;	// IMP=0x000000000018ec62
- (void)transferObservingConnectionsToSource:(id)arg1;	// IMP=0x000000000018e9dc
- (void)removeObservingConnection:(id)arg1 daemon:(id)arg2;	// IMP=0x000000000018e7d7
- (unsigned long long)hash;	// IMP=0x000000000018e793
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018e6fd
- (void)dealloc;	// IMP=0x000000000018e667
- (void)alreadyLocked_transferObservingConnectionsFromSource:(id)arg1;	// IMP=0x000000000018e201
- (id)initMatchingSource:(id)arg1;	// IMP=0x000000000018e105

@end

