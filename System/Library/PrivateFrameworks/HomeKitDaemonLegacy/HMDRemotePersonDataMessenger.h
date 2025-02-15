//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>

@class HMDHome, HMFTimer, HMIExternalPersonManager, HMIHomePersonManager, NSObject, NSString, NSUUID;
@protocol HMDPersonDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDRemotePersonDataMessenger : HMFObject <HMFMessageReceiver>
{
    NSUUID *_UUID;	// 8 = 0x8
    HMDHome *_home;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    id <HMDPersonDataSource> _dataSource;	// 32 = 0x20
    HMFTimer *_notifyResidentsOfUpdatedDataDebounceTimer;	// 40 = 0x28
    CDUnknownBlockType _notifyResidentsOfUpdatedDataDebounceTimerFactory;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0010000000baaadb
- (void).cxx_destruct;	// IMP=0x0000000000baa9a1
@property(copy) CDUnknownBlockType notifyResidentsOfUpdatedDataDebounceTimerFactory; // @synthesize notifyResidentsOfUpdatedDataDebounceTimerFactory=_notifyResidentsOfUpdatedDataDebounceTimerFactory;
@property(retain) HMFTimer *notifyResidentsOfUpdatedDataDebounceTimer; // @synthesize notifyResidentsOfUpdatedDataDebounceTimer=_notifyResidentsOfUpdatedDataDebounceTimer;
@property __weak id <HMDPersonDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void)handleUpdatedSettings:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x0000000000baa7ac
- (void)handleRemovedFaceCropWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x0000000000baa68b
- (void)handleRemovedPersonWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x0000000000baa56a
- (void)handleUpdatedPersonFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x0000000000baa449
- (void)handleUpdatedPerson:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x0000000000baa328
- (void)configureWithDataSource:(id)arg1 home:(id)arg2;	// IMP=0x0000000000baa16b
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000baa0ac
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x0000000000baa038
- (void)handlePerformCloudPullMessage:(id)arg1;	// IMP=0x0000000000ba9e6f
- (void)_notifyResidentsOfUpdatedFaceClassificationDependentData;	// IMP=0x0000000000ba9983
- (void)_startDebounceTimerToNotifyResidentsOfUpdatedFaceClassificationDependentData;	// IMP=0x0000000000ba974a
- (id)initWithUUID:(id)arg1 home:(id)arg2 workQueue:(id)arg3;	// IMP=0x0000000000ba960f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) HMIHomePersonManager *homePersonManager;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"HMIHomePersonManager",?,R

@property(readonly) HMIExternalPersonManager *photosPersonManager;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"HMIExternalPersonManager",?,R

@property(readonly) Class superclass;

@end

