//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, geo_isolater;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOSystemMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    geo_isolater *_isolater;	// 16 = 0x10
    GEOObserverHashTable *_systemSleepObservers;	// 24 = 0x18
    struct IONotificationPort *_notifyPortRef;	// 32 = 0x20
    unsigned int _notifier;	// 40 = 0x28
    GEOObserverHashTable *_powerAdapterObservers;	// 48 = 0x30
    GEOObserverHashTable *_chargingOnlyBatteryObservers;	// 56 = 0x38
    GEOObserverHashTable *_batteryObservers;	// 64 = 0x40
    int _powerAdapterNotifyToken;	// 72 = 0x48
    int _batteryPercentNotifyToken;	// 76 = 0x4c
    _Bool _powerPluggedIn;	// 80 = 0x50
    unsigned long long _batteryLevel;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x004000000142eec5
- (void).cxx_destruct;	// IMP=0x000000000143116d
@property(readonly, nonatomic) unsigned long long batteryLevel;
@property(readonly, nonatomic, getter=isPowerAdapterConnected) _Bool powerAdapterConnected;
- (void)removeBatteryLevelObserver:(id)arg1;	// IMP=0x0000000001430933
- (void)addBatteryLevelObserver:(id)arg1 onlyWhenCharging:(_Bool)arg2 queue:(id)arg3;	// IMP=0x000000000143055e
- (void)removePowerAdapterObserver:(id)arg1;	// IMP=0x0000000001430445
- (void)addPowerAdapterObserver:(id)arg1 queue:(id)arg2;	// IMP=0x0000000001430121
- (void)removeSystemSleepObserver:(id)arg1;	// IMP=0x000000000143001d
- (void)addSystemSleepObserver:(id)arg1 queue:(id)arg2;	// IMP=0x000000000142fdcb
- (void)dealloc;	// IMP=0x000000000142f07c
- (_Bool)isBackgroundAppRefreshEnabledForBundleIdentifier:(id)arg1 isDisabledGlobally:(_Bool *)arg2;	// IMP=0x000000000142efac
- (id)init;	// IMP=0x000000000142ef1a

@end

