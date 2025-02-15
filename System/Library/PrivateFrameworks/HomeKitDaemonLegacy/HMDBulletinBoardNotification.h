//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>

@class HMDBulletinBoardNotificationServiceGroup, HMDHome, HMDService, HMFMessageDispatcher, NSObject, NSPredicate, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDBulletinBoardNotification : HMFObject <HMFMessageReceiver>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _enabled;	// 12 = 0xc
    NSPredicate *_condition;	// 16 = 0x10
    HMDBulletinBoardNotificationServiceGroup *_notificationServiceGroup;	// 24 = 0x18
    NSUUID *_messageTargetUUID;	// 32 = 0x20
    HMDService *_service;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    HMFMessageDispatcher *_msgDispatcher;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002b43ee
+ (id)logCategory;	// IMP=0x00100000002b43be
+ (_Bool)supportsBulletinNotificationGroup:(id)arg1;	// IMP=0x00100000002b42eb
- (void).cxx_destruct;	// IMP=0x00000000002b4260
@property(retain) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSPredicate *condition; // @synthesize condition=_condition;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002b4097
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002b3dbd
- (id)attributeDescriptions;	// IMP=0x00000000002b3c60
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (id)logIdentifier;	// IMP=0x00000000002b3991
- (void)registerForCharacteristicNotifications;	// IMP=0x00000000002b330f
- (id)dumpState;	// IMP=0x00000000002b319b
- (void)_updateLocalSettingsWithEnabled:(_Bool)arg1 condition:(id)arg2 forMessage:(id)arg3;	// IMP=0x00000000002b2f2d
- (void)_handleBulletinBoardNotificationCommitRequest:(id)arg1;	// IMP=0x00000000002b2925
- (void)configureBulletinNotification;	// IMP=0x00000000002b28e8
@property(readonly) HMDHome *home;
@property(retain, nonatomic) HMDBulletinBoardNotificationServiceGroup *notificationServiceGroup; // @synthesize notificationServiceGroup=_notificationServiceGroup;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)registerNotificationHandlers;	// IMP=0x00000000002b266d
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x00000000002b2581
- (void)dealloc;	// IMP=0x00000000002b2513
- (id)initWithService:(id)arg1;	// IMP=0x00000000002b239b
- (id)init;	// IMP=0x00000000002b235c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

