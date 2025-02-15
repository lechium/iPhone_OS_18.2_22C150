//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoordinationCore/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSObject, NSString, RPCompanionLinkDevice;
@protocol OS_dispatch_queue;

@protocol COCompanionLinkClientProtocol <NSObject>
- (void)sendRequestID:(NSString *)arg1 request:(NSDictionary *)arg2 options:(NSDictionary *)arg3 responseHandler:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg4;
- (void)sendEventID:(NSString *)arg1 event:(NSDictionary *)arg2 options:(NSDictionary *)arg3 completion:(void (^)(NSError *))arg4;
- (void)deregisterRequestID:(NSString *)arg1;
- (void)registerRequestID:(NSString *)arg1 options:(NSDictionary *)arg2 handler:(void (^)(NSDictionary *, NSDictionary *, void (^)(NSDictionary *, NSDictionary *, NSError *)))arg3;
- (void)deregisterEventID:(NSString *)arg1;
- (void)registerEventID:(NSString *)arg1 options:(NSDictionary *)arg2 handler:(void (^)(NSDictionary *, NSDictionary *))arg3;
- (void)invalidate;
- (void)activateWithCompletion:(void (^)(NSError *))arg1;
- (unsigned long long)errorFlags;
- (_Bool)usingOnDemandConnection;
- (void)setEventIDRegistrationCompletion:(void (^)(NSString *))arg1;
- (void (^)(NSString *))eventIDRegistrationCompletion;
- (void)setRequestIDRegistrationCompletion:(void (^)(NSString *))arg1;
- (void (^)(NSString *))requestIDRegistrationCompletion;
- (void)setDeviceChangedHandler:(void (^)(RPCompanionLinkDevice *, unsigned int))arg1;
- (void (^)(RPCompanionLinkDevice *, unsigned int))deviceChangedHandler;
- (void)setLocalDeviceUpdatedHandler:(void (^)(RPCompanionLinkDevice *))arg1;
- (void (^)(RPCompanionLinkDevice *))localDeviceUpdatedHandler;
- (void)setDeviceLostHandler:(void (^)(RPCompanionLinkDevice *))arg1;
- (void (^)(RPCompanionLinkDevice *))deviceLostHandler;
- (void)setDeviceFoundHandler:(void (^)(RPCompanionLinkDevice *))arg1;
- (void (^)(RPCompanionLinkDevice *))deviceFoundHandler;
- (void)setInvalidationHandler:(void (^)(void))arg1;
- (void (^)(void))invalidationHandler;
- (void)setDisconnectHandler:(void (^)(void))arg1;
- (void (^)(void))disconnectHandler;
- (void)setErrorFlagsChangedHandler:(void (^)(void))arg1;
- (void (^)(void))errorFlagsChangedHandler;
- (void)setStateUpdatedHandler:(void (^)(void))arg1;
- (void (^)(void))stateUpdatedHandler;
- (void)setInterruptionHandler:(void (^)(void))arg1;
- (void (^)(void))interruptionHandler;
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (void)setControlFlags:(unsigned long long)arg1;
- (unsigned long long)controlFlags;
- (NSArray *)activeDevices;
- (RPCompanionLinkDevice *)destinationDevice;
- (RPCompanionLinkDevice *)localDevice;
@end

