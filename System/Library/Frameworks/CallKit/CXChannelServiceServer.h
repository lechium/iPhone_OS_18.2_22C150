//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection, BSServiceConnectionListener, CXChannelServiceDefinition, CXTransactionGroup, CXTransactionManager, NSArray, NSMutableDictionary, NSString;
@protocol CXChannelServiceServerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CXChannelServiceServer : NSObject
{
    struct os_unfair_lock_s _accessorLock;	// 8 = 0x8
    id <CXChannelServiceServerDelegate> _delegate;	// 16 = 0x10
    BSServiceConnection *_connection;	// 24 = 0x18
    CXChannelServiceDefinition *_definition;	// 32 = 0x20
    NSMutableDictionary *_identifierToClient;	// 40 = 0x28
    BSServiceConnectionListener *_listener;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    CXTransactionManager *_transactionManager;	// 64 = 0x40
    CXTransactionGroup *_uncommittedTransactionGroup;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000004777
@property(retain, nonatomic) CXTransactionGroup *uncommittedTransactionGroup; // @synthesize uncommittedTransactionGroup=_uncommittedTransactionGroup;
@property(readonly, nonatomic) CXTransactionManager *transactionManager; // @synthesize transactionManager=_transactionManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) BSServiceConnectionListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) NSMutableDictionary *identifierToClient; // @synthesize identifierToClient=_identifierToClient;
@property(readonly, nonatomic) CXChannelServiceDefinition *definition; // @synthesize definition=_definition;
@property(readonly, nonatomic) BSServiceConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
@property(nonatomic) __weak id <CXChannelServiceServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)commitUncommittedTransactions;	// IMP=0x000000000000437b
- (void)failOutstandingActionsForChannelWithUUID:(id)arg1;	// IMP=0x0000000000004272
- (void)addAction:(id)arg1 toUncommittedTransactionForServiceClient:(id)arg2;	// IMP=0x00000000000040ac
- (void)serviceClient:(id)arg1 requestedTransaction:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004009
- (void)serviceClient:(id)arg1 reportedIncomingTransmissionStartedForChannelWithUUID:(id)arg2 update:(id)arg3 shouldReplaceOutgoingTransmission:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000003f34
- (void)serviceClient:(id)arg1 reportedIncomingTransmissionEndedForChannelWithUUID:(id)arg2 reason:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000003e89
- (void)serviceClient:(id)arg1 reportedChannelWithUUID:(id)arg2 updated:(id)arg3;	// IMP=0x0000000000003de6
- (void)serviceClient:(id)arg1 reportedChannelWithUUID:(id)arg2 startedConnectingAtDate:(id)arg3;	// IMP=0x0000000000003d43
- (void)serviceClient:(id)arg1 reportedChannelWithUUID:(id)arg2 disconnectedAtDate:(id)arg3 disconnectedReason:(long long)arg4;	// IMP=0x0000000000003c95
- (void)serviceClient:(id)arg1 reportedChannelWithUUID:(id)arg2 connectedAtDate:(id)arg3;	// IMP=0x0000000000003bf2
- (void)serviceClient:(id)arg1 reportedAudioFinishedForChannelWithUUID:(id)arg2;	// IMP=0x0000000000003b64
- (void)serviceClient:(id)arg1 registeredWithConfiguration:(id)arg2;	// IMP=0x0000000000003ad6
- (void)serviceClient:(id)arg1 actionCompleted:(id)arg2;	// IMP=0x0000000000003a48
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x0000000000003484
- (void)removeClient:(id)arg1;	// IMP=0x0000000000003311
@property(readonly, nonatomic) NSArray *clients;
- (id)clientForIdentifier:(id)arg1;	// IMP=0x00000000000031e6
- (void)addClient:(id)arg1;	// IMP=0x00000000000030df
- (void)invalidate;	// IMP=0x00000000000030a2
- (void)activate;	// IMP=0x0000000000002fb7
- (void)dealloc;	// IMP=0x0000000000002f75
- (id)init;	// IMP=0x0000000000002c98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

