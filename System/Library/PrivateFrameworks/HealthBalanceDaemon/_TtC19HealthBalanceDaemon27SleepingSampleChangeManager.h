//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC19HealthBalanceDaemon27SleepingSampleChangeManager : NSObject
{
    MISSING_TYPE *dataManager;	// 8 = 0x8
    MISSING_TYPE *observers;	// 16 = 0x10
    MISSING_TYPE *settingsProvider;	// 24 = 0x18
    MISSING_TYPE *debounceQueue_removalOperation;	// 32 = 0x20
    MISSING_TYPE *debounceQueue;	// 40 = 0x28
    MISSING_TYPE *unitTest_didBeginObservingSleepingSampleDataTypes;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000021060
- (id)init;	// IMP=0x0000000000022110
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000021fd0
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;	// IMP=0x0000000000021af0
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;	// IMP=0x0000000000021910
- (void)profileDidBecomeReady:(id)arg1;	// IMP=0x0000000000021370
- (void)dealloc;	// IMP=0x0000000000021040

@end
