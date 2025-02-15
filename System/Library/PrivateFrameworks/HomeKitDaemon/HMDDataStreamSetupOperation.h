//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHAPAccessory, HMDService, NSMutableSet, NSString;
@protocol HMDDataStreamSetupOperationDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDDataStreamSetupOperation : NSObject
{
    id <HMDDataStreamSetupOperationDelegate> _delegate;	// 8 = 0x8
    HMDHAPAccessory *_accessory;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSString *_logIdentifier;	// 32 = 0x20
    HMDService *_transferManagementService;	// 40 = 0x28
    NSMutableSet *_pendingBulkSendListeners;	// 48 = 0x30
}

+ (id)hapSetupOperationWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4 maxControllerTransportMTU:(unsigned long long)arg5 setupOperationReadRequired:(_Bool)arg6;	// IMP=0x00600000003d3818
+ (id)tcpSetupOperationWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4;	// IMP=0x00600000003d376c
- (void).cxx_destruct;	// IMP=0x00000000003d366c
@property(readonly, nonatomic) NSMutableSet *pendingBulkSendListeners; // @synthesize pendingBulkSendListeners=_pendingBulkSendListeners;
@property(readonly, nonatomic) HMDService *transferManagementService; // @synthesize transferManagementService=_transferManagementService;
@property(readonly, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(nonatomic) __weak id <HMDDataStreamSetupOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)movePendingBulkSendListenersToBulkSendProtocol:(id)arg1;	// IMP=0x00000000003d33b1
- (_Bool)removeBulkSendListener:(id)arg1;	// IMP=0x00000000003d31b1
- (void)addBulkSendListener:(id)arg1 fileType:(id)arg2;	// IMP=0x00000000003d30d3
- (void)processTransportSetupResponse:(id)arg1;	// IMP=0x00000000003d3041
- (void)cancelSetup;	// IMP=0x00000000003d302f
- (void)startSetup;	// IMP=0x00000000003d2fa6
- (void)_clearPendingBulkSendListeners;	// IMP=0x00000000003d2d90
- (void)continueStreamSetupWithResponse:(id)arg1;	// IMP=0x00000000003d2326
- (void)postDidSucceedWithTransport:(id)arg1 sessionEncryption:(id)arg2;	// IMP=0x00000000003d2248
- (void)postDidFailWithError:(id)arg1;	// IMP=0x00000000003d2190
- (void)dealloc;	// IMP=0x00000000003d2152
- (id)initWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4;	// IMP=0x00000000003d2040

@end

