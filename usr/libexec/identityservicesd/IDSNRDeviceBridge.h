//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSNRDeviceMonitor, NSString, NSUUID;
@protocol IDSNRDeviceBridgeDelegate, OS_dispatch_queue;

@interface IDSNRDeviceBridge : NSObject
{
    unsigned char _latestLinkType;	// 8 = 0x8
    id <IDSNRDeviceBridgeDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_nrMonitorQueue;	// 24 = 0x18
    IDSNRDeviceMonitor *_nrDeviceMonitor;	// 32 = 0x20
    NSUUID *_deviceIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000224ab
@property(nonatomic) unsigned char latestLinkType; // @synthesize latestLinkType=_latestLinkType;
@property(retain, nonatomic) NSUUID *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) IDSNRDeviceMonitor *nrDeviceMonitor; // @synthesize nrDeviceMonitor=_nrDeviceMonitor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *nrMonitorQueue; // @synthesize nrMonitorQueue=_nrMonitorQueue;
@property(nonatomic) __weak id <IDSNRDeviceBridgeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyIDSNanoRegistryPluginManagerOnWatch:(_Bool)arg1;	// IMP=0x001000000002241a
- (void)_notifyWirelessRadioManagerAboutLinkChange:(unsigned char)arg1;	// IMP=0x0010000000022414
- (void)deviceIsClassCConnectedDidChange:(id)arg1 isClassCConnected:(_Bool)arg2;	// IMP=0x0010000000022217
- (void)deviceLinkTypeDidChange:(id)arg1 linkType:(unsigned char)arg2;	// IMP=0x0010000000021f6e
- (void)deviceIsAsleepDidChange:(id)arg1 isAsleep:(_Bool)arg2;	// IMP=0x0010000000021d6d
- (void)deviceIsCloudConnectedDidChange:(id)arg1 isCloudConnected:(_Bool)arg2;	// IMP=0x0010000000021b70
- (void)deviceIsNearbyDidChange:(id)arg1 isNearby:(_Bool)arg2;	// IMP=0x0010000000021973
- (void)deviceIsConnectedDidChange:(id)arg1 isConnected:(_Bool)arg2;	// IMP=0x0010000000021762
- (_Bool)isClassCConnected;	// IMP=0x001000000002171e
- (_Bool)isDevicesIdentifierEqualTo:(id)arg1;	// IMP=0x00100000000216b0
- (_Bool)isRegistered;	// IMP=0x001000000002166c
- (_Bool)isConnected;	// IMP=0x0010000000021628
- (_Bool)isNearby;	// IMP=0x00100000000215e4
- (void)_startNRDeviceMonitor:(id)arg1;	// IMP=0x0010000000021373
- (void)dealloc;	// IMP=0x00100000000212b8
- (id)initWithDeviceIdentifier:(id)arg1 delegate:(id)arg2 startMonitor:(_Bool)arg3;	// IMP=0x0010000000021182
- (id)initWithDeviceIdentifier:(id)arg1 delegate:(id)arg2;	// IMP=0x001000000002116a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

