//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDCameraIDSDeviceConnectionReceiver, NSError;

@protocol HMDCameraIDSDeviceConnectionReceiverDelegate <NSObject>
- (void)deviceConnectionReceiver:(HMDCameraIDSDeviceConnectionReceiver *)arg1 didEndSessionWithError:(NSError *)arg2;
- (void)deviceConnectionReceiver:(HMDCameraIDSDeviceConnectionReceiver *)arg1 didSetUpWithError:(NSError *)arg2;
@end
