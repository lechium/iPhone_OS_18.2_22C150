//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSPointerArray;
@protocol OS_dispatch_queue;

@interface SCATBluetoothManager : NSObject
{
    NSPointerArray *_deviceListeners;	// 8 = 0x8
    struct BTSessionImpl *_session;	// 16 = 0x10
    struct BTLocalDeviceImpl *_localDevice;	// 24 = 0x18
    struct BTAccessoryManagerImpl *_accessoryManager;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSMutableArray *_activationReasons;	// 48 = 0x30
    NSMutableDictionary *_addressToDeviceMap;	// 56 = 0x38
    int _sessionState;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x004000000003ae4a
+ (id)superNew;	// IMP=0x001000000003ae14
- (void).cxx_destruct;	// IMP=0x002000000003cd73
- (void)sendConfigurationMessageToDevice:(id)arg1 ofType:(unsigned char)arg2 value:(unsigned int)arg3;	// IMP=0x001000000003ca90
- (void)sendCustomMessageToDevice:(id)arg1 ofType:(int)arg2 withData:(id)arg3;	// IMP=0x001000000003c722
- (void)getExtantDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003c654
- (void)removeDeviceListener:(id)arg1;	// IMP=0x001000000003c525
- (void)addDeviceListener:(id)arg1;	// IMP=0x001000000003c479
- (void)checkIfActiveForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003c385
- (void)removeActivationReason:(id)arg1;	// IMP=0x001000000003c2bd
- (void)addActivationReason:(id)arg1;	// IMP=0x001000000003c1f3
- (void)_accessoryCustomMessageForAccessoryManager:(struct BTAccessoryManagerImpl *)arg1 device:(struct BTDeviceImpl *)arg2 customMessageType:(int)arg3 data:(char *)arg4 dataSize:(unsigned long long)arg5;	// IMP=0x001000000003c020
- (void)_serviceEventForDevice:(struct BTDeviceImpl *)arg1 serviceMask:(unsigned int)arg2 eventType:(int)arg3 specificEvent:(unsigned int)arg4 result:(int)arg5;	// IMP=0x001000000003c00e
- (void)_accessoryEventForManager:(struct BTAccessoryManagerImpl *)arg1 event:(int)arg2 device:(struct BTDeviceImpl *)arg3 state:(int)arg4;	// IMP=0x001000000003bffc
- (void)_sessionEventForSession:(struct BTSessionImpl *)arg1 event:(int)arg2 result:(int)arg3;	// IMP=0x001000000003bde1
- (void)_didDisconnect;	// IMP=0x001000000003bd7f
- (void)_didConnectWithSession:(struct BTSessionImpl *)arg1;	// IMP=0x001000000003bc45
- (void)_probeAccessories;	// IMP=0x001000000003b351
- (void)_beginStateTransitionIfNecessary;	// IMP=0x001000000003b154
- (void)_beginDetach;	// IMP=0x001000000003b0f0
- (void)_beginAttach;	// IMP=0x001000000003afbd
- (int)_desiredSessionState;	// IMP=0x001000000003af9a
- (int)_sessionState;	// IMP=0x001000000003af91
- (id)init;	// IMP=0x001000000003aeaf

@end

