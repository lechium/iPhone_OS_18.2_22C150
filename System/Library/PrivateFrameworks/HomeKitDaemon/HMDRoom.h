//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDApplicationData, HMDHome, HMFMessageDispatcher, NSDictionary, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDRoom : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
    NSUUID *_spiClientIdentifier;	// 32 = 0x20
    HMDHome *_home;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    HMFMessageDispatcher *_msgDispatcher;	// 56 = 0x38
    HMDApplicationData *_appData;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x001000000097de7e
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000097de76
+ (id)messageBindingsForDispatcher:(id)arg1;	// IMP=0x001000000097dd2b
- (void).cxx_destruct;	// IMP=0x000000000097dbb4
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, copy) NSUUID *spiClientIdentifier; // @synthesize spiClientIdentifier=_spiClientIdentifier;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)attributeDescriptions;	// IMP=0x000000000097d9d3
- (id)privateDescription;	// IMP=0x000000000097d9c1
- (id)logIdentifier;	// IMP=0x000000000097d971
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x000000000097d79e
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x000000000097d55e
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000097d2c8
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

- (id)messageDestination;	// IMP=0x000000000097d24d
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000097d0d2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000097cf4b
- (void)_handleRemoveAppDataModel:(id)arg1 message:(id)arg2;	// IMP=0x000000000097cec7
- (void)_handleUpdateAppDataModel:(id)arg1 message:(id)arg2;	// IMP=0x000000000097cc51
- (void)_handleUpdateRoomModel:(id)arg1 message:(id)arg2;	// IMP=0x000000000097c6c3
- (void)_handleRenameRequest:(id)arg1;	// IMP=0x000000000097c273
- (void)_registerForMessages;	// IMP=0x000000000097c13e
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)dumpState;	// IMP=0x000000000097bed4
@property(readonly, nonatomic) NSString *serializedIdentifier;
- (void)configure:(id)arg1 queue:(id)arg2;	// IMP=0x000000000097bd64
- (void)dealloc;	// IMP=0x000000000097bc9e
- (id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3;	// IMP=0x000000000097bacd
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

