//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface CSAccessorySiriClientBehaviorMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x004000000009bd69
- (void).cxx_destruct;	// IMP=0x002000000009b592
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)notifyDidStopStream:(id)arg1 reason:(unsigned long long)arg2 withEventUUID:(id)arg3 forAccessory:(id)arg4;	// IMP=0x001000000009b45d
- (void)notifyWillStopStream:(id)arg1 reason:(unsigned long long)arg2 forAccessory:(id)arg3;	// IMP=0x001000000009b392
- (void)notifyDidStartStreamWithContext:(id)arg1 successfully:(_Bool)arg2 option:(id)arg3 withEventUUID:(id)arg4 forAccessory:(id)arg5;	// IMP=0x001000000009b26a
- (void)notifyWillStartStreamWithContext:(id)arg1 option:(id)arg2 forAccessory:(id)arg3;	// IMP=0x001000000009b17f
- (void)unregisterObserver:(id)arg1;	// IMP=0x001000000009b0e8
- (void)registerObserver:(id)arg1;	// IMP=0x001000000009b051
- (id)init;	// IMP=0x001000000009b005
- (void)_init;	// IMP=0x001000000009af5f

@end

