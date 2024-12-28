//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol HMDCloudShareMessengerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCloudShareMessenger : HMFObject
{
    _Bool _configured;	// 8 = 0x8
    NSUUID *_messageTargetUUID;	// 16 = 0x10
    id <HMDCloudShareMessengerDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    HMFMessageDispatcher *_messageDispatcher;	// 40 = 0x28
    HMDHome *_home;	// 48 = 0x30
    CDUnknownBlockType _shareInvitationRetryHandler;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x0010000000471c88
- (void).cxx_destruct;	// IMP=0x0000000000470d35
@property(copy) CDUnknownBlockType shareInvitationRetryHandler; // @synthesize shareInvitationRetryHandler=_shareInvitationRetryHandler;
@property(getter=isConfigured) _Bool configured; // @synthesize configured=_configured;
@property __weak HMDHome *home; // @synthesize home=_home;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDCloudShareMessengerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (id)logIdentifier;	// IMP=0x0000000000470c00
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

- (void)handleShareRevokeMessage:(id)arg1;	// IMP=0x0000000000470a4c
- (void)handleShareRequestInviteMessage:(id)arg1;	// IMP=0x0000000000470564
- (void)handleShareInviteMessage:(id)arg1;	// IMP=0x000000000047023c
- (void)_requestShareInvitationDataFromUser:(id)arg1 retryCount:(unsigned long long)arg2 activity:(id)arg3;	// IMP=0x000000000046fea7
- (void)_sendShareInvitationData:(id)arg1 toDestination:(id)arg2 retryCount:(unsigned long long)arg3 activity:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000046fb0c
- (void)notifyOfShareAccessRevocationForUser:(id)arg1;	// IMP=0x000000000046f81c
- (void)requestShareInvitationDataFromUser:(id)arg1;	// IMP=0x000000000046f750
- (void)sendShareInvitationData:(id)arg1 toDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000046f5f3
- (void)sendShareInvitationData:(id)arg1 toUser:(id)arg2 minimumHomeKitVersion:(id)arg3 requiredSupportedFeatures:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000046f185
- (void)unconfigure;	// IMP=0x000000000046f060
- (void)configure;	// IMP=0x000000000046eddb
- (id)initWithMessageTargetUUID:(id)arg1 workQueue:(id)arg2 home:(id)arg3 messageDispatcher:(id)arg4;	// IMP=0x000000000046ec80
- (id)initWithMessageTargetUUID:(id)arg1 workQueue:(id)arg2 home:(id)arg3;	// IMP=0x000000000046ebd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
