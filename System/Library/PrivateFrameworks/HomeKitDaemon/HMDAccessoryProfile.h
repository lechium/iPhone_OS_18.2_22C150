//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, HMFMessageDispatcher, NSArray, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessoryProfile : HMFObject
{
    HMFMessageDispatcher *_msgDispatcher;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSUUID *_uniqueIdentifier;	// 24 = 0x18
    HMDAccessory *_accessory;	// 32 = 0x20
    NSArray *_services;	// 40 = 0x28
    NSString *_logIdentifier;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000a60154
+ (id)logCategory;	// IMP=0x0010000000a60124
- (void).cxx_destruct;	// IMP=0x0000000000a60059
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly, nonatomic) NSArray *services; // @synthesize services=_services;
@property(readonly) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a5fedc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a5fd1c
- (id)findServiceWithType:(id)arg1;	// IMP=0x0000000000a5fb49
- (id)runtimeState;	// IMP=0x0000000000a5fb3c
- (void)removeCloudData;	// IMP=0x0000000000a5fb36
- (void)unconfigure;	// IMP=0x0000000000a5fb30
- (void)configureWithMessageDispatcher:(id)arg1 configurationTracker:(id)arg2;	// IMP=0x0000000000a5f96c
- (void)handleInitialState;	// IMP=0x0000000000a5f966
- (void)registerForMessages;	// IMP=0x0000000000a5f960
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly, copy) NSString *description;
- (id)dumpState;	// IMP=0x0000000000a5f863
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a5f788
@property(readonly) unsigned long long hash;
- (id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3 workQueue:(id)arg4;	// IMP=0x0000000000a5f54d
- (id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3;	// IMP=0x0000000000a5f44a
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end
