//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHAPAccessory, HMDService, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterController : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    HMDHAPAccessory *_accessory;	// 16 = 0x10
    HMDService *_routerService;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0010000000afb58f
- (void).cxx_destruct;	// IMP=0x0000000000af9615
@property(nonatomic) __weak HMDService *routerService; // @synthesize routerService=_routerService;
@property(nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)handleAccessoryConfiguredNotification:(id)arg1;	// IMP=0x0000000000af9542
- (void)handleCharacteristicsChangedNotification:(id)arg1;	// IMP=0x0000000000af948a
- (void)_handleAccessoryConnected;	// IMP=0x0000000000af9100
- (void)_handleCharacteristicsChangedPayload:(id)arg1;	// IMP=0x0000000000af8e32
- (void)_handleCharacteristicChanges:(id)arg1;	// IMP=0x0000000000af8c8c
- (void)_handleNetworkAccessViolationUpdate;	// IMP=0x0000000000af89fb
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000af8886
- (void)_writeTLVWithValueInResponse:(id)arg1 characteristicType:(id)arg2 operationName:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000af8490
- (void)_writeValueIfDifferent:(id)arg1 characteristicType:(id)arg2 operationName:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000af80ec
- (void)_writeClientConfigurationControlRequest:(id)arg1 operationName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000af7f15
- (void)resetAccessViolationForClientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000af7dab
- (void)fetchAccessViolationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000af7cda
- (void)removeClientConfigurationWithClientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000af7b66
- (void)updateClientConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000af7a3d
- (void)readClientConfigurationWithClientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000af78c9
- (void)addClientConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000af77a0
- (void)getClientStatusWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000af768f
- (void)getClientStatusWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000af7487
- (void)writeManagedNetworkEnable:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000af744d
@property(readonly) NSString *wiFiSSID;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000af7158
- (void)configure;	// IMP=0x0000000000af6f3b
- (id)initWithAccessory:(id)arg1 service:(id)arg2 workQueue:(id)arg3;	// IMP=0x0000000000af6e87

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
