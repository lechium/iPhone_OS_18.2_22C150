//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableArray, PDDatabaseManager;
@protocol OS_dispatch_queue, PDSharingStatefulProvisioningManagerDelegate;

@interface PDSharingStatefulProvisioningManager : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    id <PDSharingStatefulProvisioningManagerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_replyQueue;	// 32 = 0x20
    NSMutableArray *_operations;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000000b914
- (_Bool)_isPassProvisioningComplete:(id)arg1;	// IMP=0x001000000000b8c2
- (void)_recalculateOperations;	// IMP=0x001000000000b39f
- (void)_enumerateOperations:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b2b4
- (void)addOperation:(id)arg1;	// IMP=0x001000000000b048
- (void)channelEndpointWasTerminatedRemotely:(id)arg1;	// IMP=0x001000000000abf3
- (void)userDidEnterActivationCodeForShare:(id)arg1 activationCode:(id)arg2;	// IMP=0x001000000000a942
- (void)userDidTerminatePendingShareActivationForShare:(id)arg1;	// IMP=0x001000000000a572
- (void)_operationDidTimeout:(id)arg1;	// IMP=0x001000000000a385
- (void)passAddedOrUpdated:(id)arg1;	// IMP=0x0010000000009dc5
- (void)didReceiverActivationCodeFailureForShare:(id)arg1 attemptsRemaining:(unsigned long long)arg2 transportIdentifier:(id)arg3;	// IMP=0x001000000000980a
- (MISSING_TYPE *)pendingShares;	// IMP=0x0010000000009792
- (id)operations;	// IMP=0x0010000000009698
- (id)initWithQueue:(id)arg1 replyQueue:(id)arg2 databaseManager:(id)arg3 delegate:(id)arg4;	// IMP=0x0010000000009592
- (id)init;	// IMP=0x0010000000009584

@end

