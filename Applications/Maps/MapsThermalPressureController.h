//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MapsThermalPressureController : NSObject
{
    NSMutableDictionary *_mitigationObservers;	// 8 = 0x8
    GEOObserverHashTable *_thermalPressureObservers;	// 16 = 0x10
    _Bool _notifyInitialized;	// 24 = 0x18
    int _token;	// 28 = 0x1c
    unsigned long long _currentThermalPressureLevel;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 40 = 0x28
}

+ (id)mitigations;	// IMP=0x0020000000b5eeb0
+ (id)sharedController;	// IMP=0x0010000000b5ee5b
- (void).cxx_destruct;	// IMP=0x0020000000b60808
- (void)valueChangedForGEOConfigKey:(CDStruct_065526f1)arg1;	// IMP=0x0010000000b60774
- (void)_updateAllObservers;	// IMP=0x0010000000b605c8
- (void)_updateObserversOfMitigationNamed:(id)arg1;	// IMP=0x0010000000b6055c
- (void)_handleNotifyCallback;	// IMP=0x0010000000b60452
- (id)_observersOfMitigationNamed:(id)arg1;	// IMP=0x0010000000b603b9
- (_Bool)shouldActivateMitigationNamed:(id)arg1;	// IMP=0x0010000000b600e6
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000b5fe75
- (void)removeThermalPressureObserver:(id)arg1;	// IMP=0x0010000000b5fcc7
- (void)addThermalPressureObserver:(id)arg1;	// IMP=0x0010000000b5fb19
- (void)removeObserver:(id)arg1 forMitigationNamed:(id)arg2;	// IMP=0x0010000000b5f92e
- (void)addObserver:(id)arg1 forMitigationNamed:(id)arg2;	// IMP=0x0010000000b5f743
@property(readonly, nonatomic) int currentThermalPressureLevel;
- (void)dealloc;	// IMP=0x0010000000b5f3f8
- (id)init;	// IMP=0x0010000000b5ef00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
