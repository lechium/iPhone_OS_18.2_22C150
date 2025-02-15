//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDSiriAccessoryMonitor;

@protocol HMDSiriAccessoryMonitorDelegate
- (void)monitorHasNoAccessoriesForDragonSiri:(HMDSiriAccessoryMonitor *)arg1;
- (void)monitor:(HMDSiriAccessoryMonitor *)arg1 willNotAllowAccessoryForDragonSiri:(id)arg2;
- (void)monitor:(HMDSiriAccessoryMonitor *)arg1 willAllowAccessoryForDragonSiri:(id)arg2;
- (void)monitor:(HMDSiriAccessoryMonitor *)arg1 needsSiriCapabilityForAccessory:(id)arg2;
@end

