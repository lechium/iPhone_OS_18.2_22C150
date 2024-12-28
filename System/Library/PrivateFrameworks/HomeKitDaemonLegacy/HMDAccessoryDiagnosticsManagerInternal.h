//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>

@class HMDAccessory, HMDAccessoryDiagnosticsSessionInternal, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessoryDiagnosticsManagerInternal : HMFObject <HMFMessageReceiver>
{
    HMDAccessory *_accessory;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMFMessageDispatcher *_msgDispatcher;	// 24 = 0x18
    NSString *_clientIdentifier;	// 32 = 0x20
    HMDAccessoryDiagnosticsSessionInternal *_currentDiagnosticsSession;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000003cb1d6
- (void).cxx_destruct;	// IMP=0x00000000003cafb7
@property(retain) HMDAccessoryDiagnosticsSessionInternal *currentDiagnosticsSession; // @synthesize currentDiagnosticsSession=_currentDiagnosticsSession;
@property(readonly, copy) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
- (id)logIdentifier;	// IMP=0x00000000003caee5
- (id)attributeDescriptions;	// IMP=0x00000000003cadf7
- (void)handleDiagnosticsTransferWithOptions:(id)arg1 message:(id)arg2;	// IMP=0x00000000003cad33
- (void)shutDown;	// IMP=0x00000000003cac8b
- (void)start;	// IMP=0x00000000003cabe3
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)notifyClientsOfDiagnosticsTransferSupport:(_Bool)arg1 supportDiagnosticsTransfer:(id)arg2;	// IMP=0x00000000003caaca
- (void)_handleDiagnosticsTransferRequest:(id)arg1;	// IMP=0x00000000003ca707
- (void)_registerForMessages;	// IMP=0x00000000003ca576
- (id)initWithAccessory:(id)arg1;	// IMP=0x00000000003ca401

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
