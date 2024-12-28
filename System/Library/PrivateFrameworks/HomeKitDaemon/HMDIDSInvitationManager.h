//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHomeManager, HMDRemoteAccountManager, HMFMessageDispatcher, IDSInvitationManager, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDIDSInvitationManager : NSObject
{
    IDSInvitationManager *_idsInvitationManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMDHomeManager *_homeManager;	// 24 = 0x18
    HMFMessageDispatcher *_messageDispatcher;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 40 = 0x28
    HMDRemoteAccountManager *_remoteAccountManager;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0010000000743dae
- (void).cxx_destruct;	// IMP=0x0000000000742834
@property(readonly, nonatomic) HMDRemoteAccountManager *remoteAccountManager; // @synthesize remoteAccountManager=_remoteAccountManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) IDSInvitationManager *idsInvitationManager; // @synthesize idsInvitationManager=_idsInvitationManager;
- (void)handleForwardedAcceptance:(id)arg1;	// IMP=0x00000000007420fc
- (void)manager:(id)arg1 receiverDidDeclineInvitation:(id)arg2;	// IMP=0x0000000000741db4
- (void)manager:(id)arg1 receiverDidAcceptInvitation:(id)arg2;	// IMP=0x0000000000741052
- (void)manager:(id)arg1 senderDidCancelInvitation:(id)arg2;	// IMP=0x0000000000740ebf
- (void)manager:(id)arg1 incomingInvitation:(id)arg2;	// IMP=0x0000000000740b27
- (_Bool)_resolveAccountWithMergeID:(id)arg1 fromAddress:(id)arg2;	// IMP=0x00000000007408c4
- (void)cancelInvitationWithIDSIdentifier:(id)arg1 homeInvitationID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000740418
- (void)acceptInvitationWithIDSIdentifier:(id)arg1 homeInvitationID:(id)arg2 dictionary:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000073fedb
- (void)declineInvitationWithIDSIdentifier:(id)arg1 homeInvitationID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000073f9ea
- (void)_cancelPendingIDSSentInvitationForHomeInvitationID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000073f52e
- (void)sendInvitationToDestination:(id)arg1 expirationDate:(id)arg2 dictionary:(id)arg3 homeInvitationID:(id)arg4 isRestrictedGuestInvitation:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000000073f219
- (void)_cancelIDSSentInvitations:(id)arg1;	// IMP=0x000000000073edf9
- (void)auditIDSSentInvitationsUsingCurrentInvitationUUIDs:(id)arg1;	// IMP=0x000000000073eb69
- (id)_sendOptions:(_Bool)arg1;	// IMP=0x000000000073e838
- (id)_receivedInvitationWithUniqueID:(id)arg1;	// IMP=0x000000000073e697
- (id)_sentInvitationWithUniqueID:(id)arg1;	// IMP=0x000000000073e4f6
- (id)initWithHomeManager:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 remoteAccountManager:(id)arg4;	// IMP=0x000000000073de19

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
