//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAppleMediaAccessoryDiagnosticInfoController, NSObject, NSString, RPCompanionLinkClient;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDDeviceSetupConfiguringController : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    CDUnknownBlockType _rpCompanionLinkClientFactory;	// 16 = 0x10
    HMDAppleMediaAccessoryDiagnosticInfoController *_diagnosticInfoController;	// 24 = 0x18
    RPCompanionLinkClient *_client;	// 32 = 0x20
    unsigned long long _requestIDRegistrationDelay;	// 40 = 0x28
    unsigned long long _restartRPClientDelay;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00100000009f4b17
- (void).cxx_destruct;	// IMP=0x00000000009f349a
@property unsigned long long restartRPClientDelay; // @synthesize restartRPClientDelay=_restartRPClientDelay;
@property unsigned long long requestIDRegistrationDelay; // @synthesize requestIDRegistrationDelay=_requestIDRegistrationDelay;
@property(retain, nonatomic) RPCompanionLinkClient *client; // @synthesize client=_client;
@property(retain, nonatomic) HMDAppleMediaAccessoryDiagnosticInfoController *diagnosticInfoController; // @synthesize diagnosticInfoController=_diagnosticInfoController;
@property(copy, nonatomic) CDUnknownBlockType rpCompanionLinkClientFactory; // @synthesize rpCompanionLinkClientFactory=_rpCompanionLinkClientFactory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)_setupRPClientAfter:(long long)arg1;	// IMP=0x00000000009f3224
- (void)_setupCompanionLinkClient;	// IMP=0x00000000009f2b82
- (_Bool)_shouldRegisterRequest;	// IMP=0x00000000009f2b4f
- (void)_registerRequest:(id)arg1;	// IMP=0x00000000009f27d7
- (id)_activeDevicesWithMediaRouteIdentifier:(id)arg1;	// IMP=0x00000000009f2453
- (void)_tearDownCompanionLinkClient;	// IMP=0x00000000009f2337
- (void)_queryWithRequestID:(id)arg1 mediaRouteIdentifier:(id)arg2 rpDevice:(id)arg3 additionalKeys:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x00000000009f1e63
- (void)_registerRequest:(id)arg1 after:(long long)arg2;	// IMP=0x00000000009f1ca6
- (void)registerRequestID;	// IMP=0x00000000009f1b65
- (void)queryConfiguringState:(id)arg1 additionalKeys:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000009f1a58
- (void)setupRPClient;	// IMP=0x00000000009f19e7
- (id)initWithQueue:(id)arg1 rpCompanionLinkClientFactory:(CDUnknownBlockType)arg2 diagnosticInfoController:(id)arg3;	// IMP=0x00000000009f18f9
- (id)initWithDiagnosticInfoControllerInternal:(id)arg1;	// IMP=0x00000000009f1865
- (id)initWithDiagnosticInfoController:(id)arg1;	// IMP=0x00000000009f1853
- (id)init;	// IMP=0x00000000009f183f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
