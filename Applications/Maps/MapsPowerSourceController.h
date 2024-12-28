//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable;
@protocol OS_dispatch_queue;

@interface MapsPowerSourceController : NSObject
{
    int _anyPowerSourceToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 24 = 0x18
    GEOObserverHashTable *_powerSourceObservers;	// 32 = 0x20
    long long _chargingState;	// 40 = 0x28
}

+ (id)sharedController;	// IMP=0x0020000000d3279e
- (void).cxx_destruct;	// IMP=0x0020000000d3375d
- (void)_handleNotifyCallback;	// IMP=0x0010000000d336b9
- (void)_updateChargingState;	// IMP=0x0010000000d32eed
@property(readonly, nonatomic) long long chargingState;
- (void)unregisterObserver:(id)arg1;	// IMP=0x0010000000d32d76
- (void)registerObserver:(id)arg1;	// IMP=0x0010000000d32ca5
- (void)dealloc;	// IMP=0x0010000000d32beb
- (id)init;	// IMP=0x0010000000d327f3

@end
