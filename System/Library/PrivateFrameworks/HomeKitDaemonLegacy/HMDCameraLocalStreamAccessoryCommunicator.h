//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraStreamSessionID, HMDHAPAccessory, HMDService, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraLocalStreamAccessoryCommunicator : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    HMDCameraStreamSessionID *_sessionID;	// 16 = 0x10
    HMDHAPAccessory *_accessory;	// 24 = 0x18
    HMDService *_streamManagementService;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x001000000097c8d1
- (void).cxx_destruct;	// IMP=0x000000000097c800
@property(readonly) HMDService *streamManagementService; // @synthesize streamManagementService=_streamManagementService;
@property __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)logIdentifier;	// IMP=0x000000000097c741
- (void)_handleSelectedStreamConfigurationWriteResponses:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000097c3e2
- (void)_writeSelectedStreamConfigurationData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000097c0f9
- (void)_handleSetupEndPointReadResponses:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000097bae9
- (void)_handleSetupEndPointWriteResponses:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000097b56e
- (void)_handleReadSupportedConfigurationsResponses:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000097a924
- (void)writeReselectedStreamConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000097a7a0
- (void)writeSelectedStreamConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000097a61c
- (void)readSetupEndPointWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000097a2b7
- (void)writeSetupEndPoint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000979ef8
- (void)readSupportedConfigurationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000979a94
- (id)initWithWorkQueue:(id)arg1 sessionID:(id)arg2 accessory:(id)arg3 streamManagementService:(id)arg4;	// IMP=0x000000000097993f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

