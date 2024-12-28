//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPointerArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUObserverRegistry : NSObject
{
    NSPointerArray *__observers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *__observerQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000039ee6e
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_observerQueue; // @synthesize _observerQueue=__observerQueue;
@property(readonly, nonatomic) NSPointerArray *_observers; // @synthesize _observers=__observers;
- (void)enumerateObserversWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000039ed37
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000000039eca1
- (void)registerObserver:(id)arg1;	// IMP=0x000000000039ec0b
- (id)init;	// IMP=0x000000000039eb84

@end
