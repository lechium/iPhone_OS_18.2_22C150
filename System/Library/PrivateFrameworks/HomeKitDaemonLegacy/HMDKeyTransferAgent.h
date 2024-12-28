//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>

@class HMDHomeManager, HMFMessageDestination, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDKeyTransferAgent : HMFObject <HMFMessageReceiver>
{
    NSString *_progressState;	// 8 = 0x8
    unsigned long long _residentProvisioningStatus;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    HMDHomeManager *_homeManager;	// 32 = 0x20
    NSUUID *_uuid;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000006c7fc2
- (void).cxx_destruct;	// IMP=0x00000000006c7f71
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) unsigned long long residentProvisioningStatus; // @synthesize residentProvisioningStatus=_residentProvisioningStatus;
@property(retain, nonatomic) NSString *progressState; // @synthesize progressState=_progressState;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly, copy) HMFMessageDestination *messageDestination;
- (void)resetConfig;	// IMP=0x00000000006c7d56
- (void)beginPairingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000006c7c1e
- (id)initWithHomeManager:(id)arg1;	// IMP=0x00000000006c7aad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
