//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BatteryCenter/NSObject-Protocol.h>

@class NSObject;
@protocol BCBatteryDeviceObserving, OS_dispatch_queue;

@protocol BCBatteryDeviceObservable <NSObject>
- (void)removeBatteryDeviceObserver:(id <BCBatteryDeviceObserving>)arg1;
- (void)addBatteryDeviceObserver:(id <BCBatteryDeviceObserving>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
@end

