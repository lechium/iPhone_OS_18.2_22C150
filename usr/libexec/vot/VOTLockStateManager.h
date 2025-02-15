//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSLock;

@interface VOTLockStateManager : NSObject
{
    NSHashTable *_lockStateObservers;	// 8 = 0x8
    NSLock *_lockStateObserversLock;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000013712
- (void).cxx_destruct;	// IMP=0x0020000000013acb
- (void)_notifyObserversLockStateDidChange;	// IMP=0x001000000001393f
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000138c9
- (void)addObserver:(id)arg1;	// IMP=0x0010000000013853
@property(readonly, nonatomic) _Bool isLocked;
- (void)dealloc;	// IMP=0x001000000001381c
- (id)init;	// IMP=0x0010000000013797

@end

