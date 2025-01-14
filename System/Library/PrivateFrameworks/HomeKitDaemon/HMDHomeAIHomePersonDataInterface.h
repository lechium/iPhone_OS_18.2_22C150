//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMIHomePersonManager, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeAIHomePersonDataInterface
{
    HMIHomePersonManager *_homePersonManager;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0010000000a1e680
- (void).cxx_destruct;	// IMP=0x0000000000a1d5bd
@property(readonly) HMIHomePersonManager *homePersonManager; // @synthesize homePersonManager=_homePersonManager;
- (void)handleFaceMisclassificationForFaceCropData:(id)arg1 personUUID:(id)arg2;	// IMP=0x0000000000a1d38a
- (void)handleUpdatedSettings:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x0000000000a1d1de
- (void)handleUpdatedUnassociatedFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x0000000000a1d128
- (void)removeFaceprintsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a1d04a
- (void)removeFaceCropsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a1cf6c
- (void)removePersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a1ce8e
- (void)addFaceprints:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a1cdb0
- (void)addPersonFaceCrops:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a1cd9e
- (void)addFaceCrops:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a1ccc0
- (void)addPersons:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a1cbe2
- (void)fetchSettingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a1cb2a
- (void)fetchAllUnassociatedFaceCropsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a1ca72
- (id)logIdentifier;	// IMP=0x0000000000a1c9f8
- (id)initWithHomePersonManager:(id)arg1 workQueue:(id)arg2;	// IMP=0x0000000000a1c97d
- (id)initWithPersonManagerUUID:(id)arg1 homeUUID:(id)arg2 workQueue:(id)arg3;	// IMP=0x0000000000a1c8cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

