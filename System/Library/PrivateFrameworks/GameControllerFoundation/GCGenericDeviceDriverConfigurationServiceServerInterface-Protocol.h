//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GCGenericDeviceDriverModel;

@protocol GCGenericDeviceDriverConfigurationServiceServerInterface
- (void)applyConfiguration:(GCGenericDeviceDriverModel *)arg1 withReply:(void (^)(_Bool, NSError *))arg2;
- (void)fetchDeviceSnapshotWithReply:(void (^)(GCHIDDeviceSnapshot *))arg1;
@end

