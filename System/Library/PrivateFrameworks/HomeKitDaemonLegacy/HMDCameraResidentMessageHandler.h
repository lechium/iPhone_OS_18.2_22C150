//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, HMDDevice, HMDMessageDispatcher, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraResidentMessageHandler : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMDAccessory *_accessory;	// 16 = 0x10
    HMDMessageDispatcher *_messageDispatcher;	// 24 = 0x18
    NSString *_logIdentifier;	// 32 = 0x20
    NSMutableDictionary *_queuedMessagesByDeviceIdentifier;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000005c96f5
- (void).cxx_destruct;	// IMP=0x00000000005c933d
@property(readonly) NSMutableDictionary *queuedMessagesByDeviceIdentifier; // @synthesize queuedMessagesByDeviceIdentifier=_queuedMessagesByDeviceIdentifier;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) HMDMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
- (void)sendNextMessageForDeviceIdentifier:(id)arg1;	// IMP=0x00000000005c9137
- (id)nextMessageForDeviceIdentifier:(id)arg1;	// IMP=0x00000000005c9066
- (void)dequeueRespondedMessageForDeviceIdentifier:(id)arg1;	// IMP=0x00000000005c8f57
- (void)enqueueMessage:(id)arg1 forDeviceIdentifier:(id)arg2;	// IMP=0x00000000005c8def
@property(readonly, getter=isRemoteAccessDeviceReachable) _Bool remoteAccessDeviceReachable;
@property(readonly, getter=isUsingCompanionForRemoteAccessDevice) _Bool usingCompanionForRemoteAccessDevice;
@property(readonly) HMDDevice *remoteAccessDevice;
- (void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000005c88f7
- (void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 device:(id)arg5 responseQueue:(id)arg6 responseHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000005c84a7
- (id)initWithAccessory:(id)arg1 logIdentifier:(id)arg2 messageDispatcher:(id)arg3;	// IMP=0x00000000005c834a
- (id)initWithAccessory:(id)arg1 logIdentifier:(id)arg2;	// IMP=0x00000000005c82b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
