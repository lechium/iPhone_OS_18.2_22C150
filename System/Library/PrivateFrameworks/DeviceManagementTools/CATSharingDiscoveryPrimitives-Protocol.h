//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagementTools/CATSharingPrimitives-Protocol.h>

@class CATSharingDevice;
@protocol CATSharingDeviceSession;

@protocol CATSharingDiscoveryPrimitives <CATSharingPrimitives>
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
- (id <CATSharingDeviceSession>)sessionForDevice:(CATSharingDevice *)arg1;
@end

