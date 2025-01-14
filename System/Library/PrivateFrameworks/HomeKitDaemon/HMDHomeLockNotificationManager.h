//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol HMDHomeLockNotificationManagerDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeLockNotificationManager : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    HMDHome *_home;	// 24 = 0x18
    HMFMessageDispatcher *_msgDispatcher;	// 32 = 0x20
    id <HMDHomeLockNotificationManagerDataSource> _dataSource;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000007f97dd
+ (id)findEcosystemName:(id)arg1;	// IMP=0x00100000009d0fdd
- (void).cxx_destruct;	// IMP=0x00000000007f86e7
@property(readonly) id <HMDHomeLockNotificationManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)logIdentifier;	// IMP=0x00000000007f8601
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)contextResolutionResultFromNFCContextId:(id)arg1;	// IMP=0x00000000007f82fc
- (id)contextResolutionResultFromHAPContextId:(id)arg1;	// IMP=0x00000000007f801b
- (id)contextResolutionResultFromAccessCode:(id)arg1;	// IMP=0x00000000007f7c2b
- (void)_resolveKeypadContextIdentifier:(id)arg1 accessoryUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000007f79de
- (void)_sendResolveLockNotificationContextIdentifierMessage:(id)arg1 accessoryUUID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000007f74ba
- (void)resolveKeypadContextIdentifier:(id)arg1 accessoryUUID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000007f7279
- (id)displayNameForNotificationContextResolutionResult:(id)arg1;	// IMP=0x00000000007f6ee6
- (void)resolveEncodedCharacteristicNotificationContext:(id)arg1 accessoryUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000007f69c4
- (void)handleResolveNotificationContextIdentifierMessage:(id)arg1;	// IMP=0x00000000007f669e
- (_Bool)shouldResolveNotificationContextForCharacteristic:(id)arg1;	// IMP=0x00000000007f65b3
@property(readonly) _Bool hasReachablePrimaryResidentSupportingLockNotificationContext;
- (void)configureWithHome:(id)arg1;	// IMP=0x00000000007f60f2
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 dataSource:(id)arg3;	// IMP=0x00000000007f601a
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2;	// IMP=0x00000000007f5f94
- (void)sendLockUserChangeEventNotification:(id)arg1 lockDataType:(unsigned char)arg2 accessory:(id)arg3 dataOperationType:(unsigned char)arg4 fabricIndex:(id)arg5 flow:(id)arg6;	// IMP=0x00000000009cd422
- (void)sendDoorLockAlarmEventNotification:(id)arg1 accessory:(id)arg2 flow:(id)arg3;	// IMP=0x00000000009ccef0
- (void)sendLockOperationEventNotification:(id)arg1 userUniqueID:(id)arg2 lockOperationType:(id)arg3 lockOperationSource:(id)arg4 fabricIndex:(id)arg5 accessory:(id)arg6 timestamp:(id)arg7 flow:(id)arg8;	// IMP=0x00000000009cc076
- (void)handleLockUserChangeEvent:(id)arg1 forAccessory:(id)arg2 flow:(id)arg3;	// IMP=0x00000000009cbb15
- (void)handleLockOperationEvent:(id)arg1 forAccessory:(id)arg2 flow:(id)arg3;	// IMP=0x00000000009cb43c
- (void)handleDoorLockAlarmEvent:(id)arg1 forAccessory:(id)arg2 flow:(id)arg3;	// IMP=0x00000000009cb01b
- (void)handleDoorLockEventReport:(id)arg1 forAccessory:(id)arg2 flow:(id)arg3;	// IMP=0x00000000009cad66

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

