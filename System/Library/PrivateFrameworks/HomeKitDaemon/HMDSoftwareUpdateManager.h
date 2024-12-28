//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAppleMediaAccessory, NSHashTable, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSoftwareUpdateManager : HMFObject
{
    HMDAppleMediaAccessory *_accessory;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_clientQueue;	// 24 = 0x18
    NSHashTable *_activeClients;	// 32 = 0x20
}

+ (_Bool)isSupported;	// IMP=0x0010000000e880d6
- (void).cxx_destruct;	// IMP=0x0000000000e87a03
@property(readonly, nonatomic) NSHashTable *activeClients; // @synthesize activeClients=_activeClients;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak HMDAppleMediaAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

- (id)messageDestination;	// IMP=0x0000000000e87928
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)startUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000e87838
- (void)_handleStop:(id)arg1;	// IMP=0x0000000000e87753
- (void)_handleStart:(id)arg1;	// IMP=0x0000000000e8757d
- (void)registerForMessages;	// IMP=0x0000000000e8742e
- (id)messageDispatcher;	// IMP=0x0000000000e87415
- (id)init;	// IMP=0x0000000000e871f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
