//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

@class HMDAccountRegistry, HMDCloudDataSyncStateFilter, HMDRemoteDeviceMonitor, HMDRemoteMessageNotifications, HMFFuture, HMFPromise, NSArray, NSMutableSet, NSObject, NSString;
@protocol HMDSecureRemoteMessageTransportDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSecureRemoteMessageTransport : HMFMessageTransport
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct os_unfair_lock_s _responseHandlerLock;	// 16 = 0x10
    NSMutableSet *_secureRemoteSessions;	// 24 = 0x18
    NSArray *_transports;	// 32 = 0x20
    HMDRemoteDeviceMonitor *_deviceMonitor;	// 40 = 0x28
    HMFFuture *_startFuture;	// 48 = 0x30
    id <HMDSecureRemoteMessageTransportDataSource> _dataSource;	// 56 = 0x38
    HMDAccountRegistry *_accountRegistry;	// 64 = 0x40
    HMFPromise *_startPromise;	// 72 = 0x48
    HMDRemoteMessageNotifications *_sessionNotifications;	// 80 = 0x50
    HMDCloudDataSyncStateFilter *_cloudDataSyncStateFilter;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x001000000080932c
+ (_Bool)isDeviceValidDestination:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000809273
+ (id)shortDescription;	// IMP=0x0010000000809261
+ (id)defaultTransport;	// IMP=0x00100000008091fe
- (void).cxx_destruct;	// IMP=0x00000000008051da
@property(retain) HMDCloudDataSyncStateFilter *cloudDataSyncStateFilter; // @synthesize cloudDataSyncStateFilter=_cloudDataSyncStateFilter;
@property(retain, nonatomic) HMDRemoteMessageNotifications *sessionNotifications; // @synthesize sessionNotifications=_sessionNotifications;
@property(readonly, nonatomic) HMFPromise *startPromise; // @synthesize startPromise=_startPromise;
@property(readonly, nonatomic) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
@property(readonly, nonatomic) id <HMDSecureRemoteMessageTransportDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) HMFFuture *startFuture; // @synthesize startFuture=_startFuture;
@property(readonly) HMDRemoteDeviceMonitor *deviceMonitor; // @synthesize deviceMonitor=_deviceMonitor;
@property(readonly, copy) NSArray *transports; // @synthesize transports=_transports;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x0000000000805016
- (id)dumpState;	// IMP=0x0000000000804dea
- (void)secureRemoteSession:(id)arg1 receivedRequestToSendMessage:(id)arg2;	// IMP=0x0000000000804dd3
- (void)secureRemoteSession:(id)arg1 didCloseWithError:(id)arg2;	// IMP=0x0000000000804d15
- (void)_handleSecureMessage:(id)arg1 fromDevice:(id)arg2 transport:(id)arg3;	// IMP=0x00000000008049a6
- (id)_openSecureSessionToDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000804743
- (void)openSecureSessionToDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000804685
- (void)_sendSecureMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000080425e
- (id)_secureRemoteSessionForDevice:(id)arg1;	// IMP=0x00000000008041b1
- (void)_handleNotificationMessage:(id)arg1;	// IMP=0x0000000000803ed9
- (void)_sendPingToDevice:(id)arg1 timeout:(double)arg2 restriction:(unsigned long long)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000803d93
- (void)_pingDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000803c68
- (void)pingDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000803baa
- (void)_handlePingMessage:(id)arg1;	// IMP=0x00000000008039bd
- (void)_updateDeviceInformationFromMessage:(id)arg1;	// IMP=0x0000000000803600
- (void)_handleElectDeviceForUserResponse:(id)arg1 error:(id)arg2 responseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000008030d5
- (void)electDeviceForHH1User:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000802c3c
- (_Bool)_handleReceivedMessage:(id)arg1 transport:(id)arg2;	// IMP=0x0000000000802a5e
- (id)_preferredTransportForMessage:(id)arg1;	// IMP=0x0000000000802835
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000802313
- (void)_reset;	// IMP=0x00000000008020bb
- (void)reset;	// IMP=0x0000000000802069
- (id)start;	// IMP=0x0000000000802005
- (void)configureWithCloudDataSyncStateFilter:(id)arg1 homeMembershipVerifier:(id)arg2;	// IMP=0x0000000000801e97
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x0000000000801d83
- (id)shortDescription;	// IMP=0x0000000000801d69
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000008018fd

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
