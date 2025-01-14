//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, MSPSharedTripGroupSession, MSPSharedTripSharingIdentity, MSPSharedTripStorageController, NSArray, NSMutableDictionary, NSString;
@protocol MSPSharedTripAvailabiltyDelegate, MSPSharedTripRelayDelegate;

__attribute__((visibility("hidden")))
@interface MSPSharedTripRelay : NSObject
{
    IDSService *_sharingService;	// 8 = 0x8
    NSString *_clientID;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    MSPSharedTripGroupSession *_sharingETAGroupSession;	// 32 = 0x20
    NSMutableDictionary *_sharedTripGroupIDSSessions;	// 40 = 0x28
    NSMutableDictionary *_packetBuckets;	// 48 = 0x30
    MSPSharedTripStorageController *_storageController;	// 56 = 0x38
    id <MSPSharedTripRelayDelegate> _delegate;	// 64 = 0x40
    id <MSPSharedTripAvailabiltyDelegate> _availabilityDelegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000085fb6
@property(nonatomic) __weak id <MSPSharedTripAvailabiltyDelegate> availabilityDelegate; // @synthesize availabilityDelegate=_availabilityDelegate;
@property(nonatomic) __weak id <MSPSharedTripRelayDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MSPSharedTripStorageController *storageController; // @synthesize storageController=_storageController;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x0000000000085ef1
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 fromID:(id)arg4 hasBeenDeliveredWithContext:(id)arg5;	// IMP=0x0000000000085dff
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x0000000000085cd4
- (void)service:(id)arg1 account:(id)arg2 receivedGroupSessionParticipantUpdate:(id)arg3;	// IMP=0x0000000000085c29
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x00000000000859a8
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000000085816
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000000008569b
- (void)_removeFinishedSession:(id)arg1;	// IMP=0x00000000000855d1
- (void)_handleIncomingMessage:(id)arg1 info:(id)arg2 fromID:(id)arg3 receivingHandle:(id)arg4 receivingAccountIdentifier:(id)arg5;	// IMP=0x00000000000853a4
- (void)_handleCommand:(id)arg1 fromID:(id)arg2;	// IMP=0x0000000000085281
- (void)_handleChunk:(id)arg1 fromID:(id)arg2 receivingHandle:(id)arg3 receivingAccountIdentifier:(id)arg4;	// IMP=0x0000000000084a68
- (id)groupSessionForIdentifier:(id)arg1;	// IMP=0x0000000000084871
- (void)stopSharing;	// IMP=0x0000000000084857
- (id)removeSharingWith:(id)arg1;	// IMP=0x0000000000084818
- (id)startSharingGroupSessionWithTripIdentifer:(id)arg1;	// IMP=0x00000000000846a2
- (void)_startService;	// IMP=0x000000000008454b
@property(readonly, nonatomic) NSArray *accountAliases;
@property(readonly, nonatomic) _Bool hasValidIDSAccount;
@property(readonly, nonatomic) NSString *sharingHandle;
@property(readonly, nonatomic) NSString *sharingName;
@property(readonly, nonatomic) MSPSharedTripSharingIdentity *sharingIdentity;
- (void)_fetchDisplayName;	// IMP=0x00000000000841d2
- (void)dealloc;	// IMP=0x0000000000084119
- (id)init;	// IMP=0x000000000008405d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

