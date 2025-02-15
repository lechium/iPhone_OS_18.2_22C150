//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, Protocol, geo_isolater;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MNObserverHashTable : NSObject
{
    Protocol *_protocol;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    geo_isolater *_observerLock;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000017e65
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (id)description;	// IMP=0x0000000000017aaa
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000017672
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000175f3
- (void)unregisterObserver:(id)arg1;	// IMP=0x0000000000017440
- (void)registerObserver:(id)arg1;	// IMP=0x0000000000017200
@property(readonly) _Bool hasObservers;
- (unsigned long long)count;	// IMP=0x0000000000016f8d
- (id)initWithProtocol:(id)arg1;	// IMP=0x0000000000016ef5

@end

