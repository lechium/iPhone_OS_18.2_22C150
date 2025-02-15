//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUTDeferredTaskQueue, IDSAccount, IDSAccountController, IDSGroupContextController, IDSQuickSwitchAcknowledgementTracker, IDSServiceProperties, NSArray, NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface _IDSService : NSObject
{
    IDSAccountController *_accountController;	// 8 = 0x8
    NSMutableDictionary *_uniqueIDToConnection;	// 16 = 0x10
    NSSet *_commands;	// 24 = 0x18
    NSMapTable *_delegateToInfo;	// 32 = 0x20
    id _delegateContext;	// 40 = 0x28
    NSMutableDictionary *_protobufSelectors;	// 48 = 0x30
    NSMutableSet *_lastIsActiveSet;	// 56 = 0x38
    NSMutableArray *_linkedDevices;	// 64 = 0x40
    NSMutableDictionary *_subServices;	// 72 = 0x48
    _Bool _linkedDevicesLoaded;	// 80 = 0x50
    _Bool _pretendingToBeFull;	// 81 = 0x51
    _Bool _everHadDelegate;	// 82 = 0x52
    _Bool _manuallyAckMessages;	// 83 = 0x53
    _Bool _clientIsSandboxed;	// 84 = 0x54
    unsigned int _listenerCaps;	// 88 = 0x58
    IDSGroupContextController *_groupContextController;	// 96 = 0x60
    id _idsSimulatorSupportDataHandlerToken;	// 104 = 0x68
    NSMutableDictionary *_uniqueIDToProgress;	// 112 = 0x70
    IDSQuickSwitchAcknowledgementTracker *_acknowledgementTracker;	// 120 = 0x78
    IDSServiceProperties *_serviceProperties;	// 128 = 0x80
    CDUnknownBlockType _pendingRegisteredIdentitiesBlock;	// 136 = 0x88
    _Bool _wantsPseudonymUpdates;	// 144 = 0x90
    NSDictionary *_cachedPseudonymURIMap;	// 152 = 0x98
    CUTDeferredTaskQueue *_pseudonymUpdateTaskQueue;	// 160 = 0xa0
    NSMutableDictionary *_completionBlocksByRequestID;	// 168 = 0xa8
}

+ (id)deviceForFromID:(id)arg1 fromDevices:(id)arg2;	// IMP=0x00100000000eacbd
+ (void)serviceWithIdentifier:(id)arg1 commands:(id)arg2 manuallyAckMessages:(_Bool)arg3 delegateContext:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000c3888
- (void).cxx_destruct;	// IMP=0x00000000000f047e
@property(retain, nonatomic) NSMutableDictionary *completionBlocksByRequestID; // @synthesize completionBlocksByRequestID=_completionBlocksByRequestID;
@property(retain, nonatomic) CUTDeferredTaskQueue *pseudonymUpdateTaskQueue; // @synthesize pseudonymUpdateTaskQueue=_pseudonymUpdateTaskQueue;
@property(retain, nonatomic) NSDictionary *cachedPseudonymURIMap; // @synthesize cachedPseudonymURIMap=_cachedPseudonymURIMap;
@property(nonatomic) _Bool wantsPseudonymUpdates; // @synthesize wantsPseudonymUpdates=_wantsPseudonymUpdates;
@property(readonly, retain, nonatomic) IDSGroupContextController *groupContextController; // @synthesize groupContextController=_groupContextController;
@property(nonatomic) _Bool manuallyAckMessages; // @synthesize manuallyAckMessages=_manuallyAckMessages;
- (void)_enforceSandboxPolicy;	// IMP=0x00000000000f0166
- (id)groupContextController:(id)arg1 accountsForAlises:(id)arg2;	// IMP=0x00000000000efd94
- (void)groupContextController:(id)arg1 didCreateGroup:(id)arg2;	// IMP=0x00000000000efb37
- (void)connection:(id)arg1 didHintCheckingTransportLogWithReason:(long long)arg2;	// IMP=0x00000000000ef9c7
- (void)scheduleTransactionLogTask:(id)arg1;	// IMP=0x00000000000ef95e
- (void)performGroupTask:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef894
- (void)_disableAccount:(id)arg1;	// IMP=0x00000000000ef87e
- (void)_enableAccount:(id)arg1;	// IMP=0x00000000000ef868
- (id)datagramChannelForSocketDescriptor:(int)arg1 error:(id *)arg2;	// IMP=0x00000000000ef6f4
- (id)datagramChannelForSessionDestination:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ef54c
- (id)streamConnectionForSocketDescriptor:(int)arg1 error:(id *)arg2;	// IMP=0x00000000000ef544
- (id)streamConnectionForSessionDestination:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ef4b7
- (id)datagramConnectionForSocketDescriptor:(int)arg1 error:(id *)arg2;	// IMP=0x00000000000ef4af
- (id)datagramConnectionForSessionDestination:(id)arg1 uid:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00000000000ef4a7
- (id)datagramConnectionForSessionDestination:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ef448
- (void)_sendMissingMessageMetric:(id)arg1;	// IMP=0x00000000000ef3a0
- (_Bool)sendCertifiedDeliveryReceipt:(id)arg1;	// IMP=0x00000000000ef10c
- (void)sendAckForMessageWithContext:(id)arg1;	// IMP=0x00000000000eec4f
- (_Bool)reportSpamMessage:(id)arg1;	// IMP=0x00000000000ee971
- (_Bool)sendAheadGroup:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id *)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000edf77
- (_Bool)sendResourceAtURL:(id)arg1 metadata:(id)arg2 fromAccount:(id)arg3 toDestinations:(id)arg4 priority:(long long)arg5 options:(id)arg6 identifier:(id *)arg7 error:(id *)arg8;	// IMP=0x00000000000ecb4a
- (void)testCloudQRConnection;	// IMP=0x00000000000eca36
- (void)startOTRTest:(long long)arg1;	// IMP=0x00000000000ec8b7
- (void)setLinkPreferences:(id)arg1;	// IMP=0x00000000000ec564
@property(nonatomic) _Bool needsLaunchOnNearbyDevicesChanged;
- (void)setPreferInfraWiFi:(_Bool)arg1;	// IMP=0x00000000000ec152
- (id)deviceForUniqueID:(id)arg1;	// IMP=0x00000000000ebe7b
- (id)devicesForBTUUID:(id)arg1;	// IMP=0x00000000000ebbba
- (id)firstRoutableInternetDestinationForSelf;	// IMP=0x00000000000eb96a
- (id)linkedDeviceForFromID:(id)arg1 withRelationship:(long long)arg2;	// IMP=0x00000000000eb855
- (id)deviceForFromID:(id)arg1;	// IMP=0x00000000000eb4d5
- (id)uriForFromID:(id)arg1;	// IMP=0x00000000000eabc3
- (_Bool)getProgressUpdateForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ea996
- (_Bool)cancelIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ea81a
- (_Bool)sendServerMessage:(id)arg1 command:(id)arg2 fromAccount:(id)arg3;	// IMP=0x00000000000ea4d7
- (_Bool)sendData:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id *)arg4 error:(id *)arg5;	// IMP=0x00000000000ea445
- (_Bool)setWakingPushPriority:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000000ea219
- (_Bool)sendInvitationUpdate:(id)arg1 fromAccount:(id)arg2 toDestination:(id)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;	// IMP=0x00000000000e9b8b
- (_Bool)sendInvitation:(id)arg1 fromAccount:(id)arg2 toDestination:(id)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;	// IMP=0x00000000000e94fd
- (_Bool)sendAccessoryData:(id)arg1 toAccessoryID:(id)arg2 accessToken:(id)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;	// IMP=0x00000000000e8d91
- (_Bool)_sendSimulatorData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;	// IMP=0x00000000000e87f0
- (_Bool)sendData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;	// IMP=0x00000000000e8388
- (void)_handlePretendingToBeFullWithIdentifier:(id *)arg1;	// IMP=0x00000000000e80f6
- (_Bool)_sendSimulatorProtobuf:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;	// IMP=0x00000000000e79aa
- (_Bool)sendProtobuf:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;	// IMP=0x00000000000e75c9
- (_Bool)_sendSimulatorMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;	// IMP=0x00000000000e67ce
- (_Bool)cancelMessageWithOptions:(id)arg1 destinations:(id)arg2 identifier:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000000e60df
- (_Bool)cancelMessageWithOptions:(id)arg1 destination:(id)arg2 identifier:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000000e6048
- (_Bool)cancelMessageWithOptions:(id)arg1 identifier:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000000e5c83
- (_Bool)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;	// IMP=0x00000000000e5c71
- (void)sendServiceUpdateMessage:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e5c6b
- (void)sendEncryptedOffGridMessage:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e5c65
- (_Bool)cancelOpportunisticDataWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e5b03
- (_Bool)sendOpportunisticData:(id)arg1 options:(id)arg2 identifier:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000e583d
- (_Bool)_canAccount:(id)arg1 sendWithFromID:(id)arg2;	// IMP=0x00000000000e549f
- (id)_sendingAccountForAccount:(id)arg1 destination:(id)arg2 fromID:(id)arg3;	// IMP=0x00000000000e4650
- (id)_sendingAccountForAccount:(id)arg1;	// IMP=0x00000000000e4639
- (id)_preferredURIForAccount:(id)arg1;	// IMP=0x00000000000e454b
- (_Bool)canSendMessageWithAccount:(id)arg1 toDestination:(id)arg2;	// IMP=0x00000000000e409b
- (SEL)protobufActionForType:(unsigned short)arg1 isResponse:(_Bool)arg2;	// IMP=0x00000000000e3ea6
- (void)setProtobufAction:(SEL)arg1 forProtobufType:(unsigned short)arg2 isResponse:(_Bool)arg3;	// IMP=0x00000000000e3c76
- (void)resendSubServicesToDaemonForCurrentDevice;	// IMP=0x00000000000e37a9
- (_Bool)updateSubServices:(id)arg1 forDevice:(id)arg2;	// IMP=0x00000000000e3273
- (void)finishedReportingRequestUUID:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000e307d
- (void)reportAction:(long long)arg1 ofTempURI:(id)arg2 fromURI:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e281a
- (void)finishedVerifyingSignedDataForRequest:(id)arg1 success:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000000e24eb
- (void)finishedSigningForRequest:(id)arg1 signedData:(id)arg2 error:(id)arg3;	// IMP=0x00000000000e21fc
- (void)verifySignedData:(id)arg1 matchesExpectedData:(id)arg2 withTokenURI:(id)arg3 forAlgorithm:(long long)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000e1a1b
- (void)signData:(id)arg1 withAlgorithm:(long long)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e0c23
- (void)finishedRevokingPseudonymWithSuccess:(_Bool)arg1 error:(id)arg2 requestUUID:(id)arg3;	// IMP=0x00000000000e0854
- (void)finishedRenewingPseudonym:(id)arg1 success:(_Bool)arg2 error:(id)arg3 requestUUID:(id)arg4;	// IMP=0x00000000000e0417
- (void)finishedProvisioningPseudonym:(id)arg1 success:(_Bool)arg2 error:(id)arg3 forRequestUUID:(id)arg4;	// IMP=0x00000000000dfe6e
- (id)pseudonymPropertiesWithFeatureID:(id)arg1 scopeID:(id)arg2 expiryDurationInSeconds:(double)arg3;	// IMP=0x00000000000dfd26
- (void)revokePseudonym:(id)arg1 requestProperties:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000df89f
- (void)renewPseudonym:(id)arg1 forUpdatedExpiryEpoch:(double)arg2 requestProperties:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000df3e7
- (void)provisionPseudonymForURI:(id)arg1 withProperties:(id)arg2 requestProperties:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000deefb
- (void)provisionPseudonymWithProperties:(id)arg1 requestProperties:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000de796
- (void)_calloutPseudonymsDidUpdate;	// IMP=0x00000000000dd094
- (void)account:(id)arg1 pseudonymsChanged:(id)arg2;	// IMP=0x00000000000dce54
- (id)_accountWithURI:(id)arg1 orPseudonym:(id)arg2;	// IMP=0x00000000000dc7c4
- (id)pseudonymsForMaskedURI:(id)arg1 matchingProperties:(id)arg2;	// IMP=0x00000000000dc676
- (id)pseudonymsForMaskedURI:(id)arg1;	// IMP=0x00000000000dc5e3
- (id)pseudonymForPseudonymURI:(id)arg1;	// IMP=0x00000000000dc2bb
@property(readonly, nonatomic) NSDictionary *pseudonymURIMap;
@property(readonly, nonatomic) long long maxEffectivePayloadSize;
@property(readonly, nonatomic) NSArray *URIs;
- (id)linkedDevicesWithRelationship:(long long)arg1;	// IMP=0x00000000000db9d7
- (void)_updateLinkedDevicesWithDevicesInfo:(id)arg1;	// IMP=0x00000000000db54d
- (void)_loadCachedLinkedDevices;	// IMP=0x00000000000db3ac
- (void)_reloadCachedLinkedDevices;	// IMP=0x00000000000db20e
@property(readonly, nonatomic) _Bool canSend;
@property(readonly, copy, nonatomic) IDSServiceProperties *serviceProperties;
@property(readonly, copy, nonatomic) NSArray *devices;
@property(readonly, copy, nonatomic) NSSet *internalAccounts;
@property(readonly, copy, nonatomic) NSSet *accounts;
- (id)_filteredAccountsFrom:(id)arg1;	// IMP=0x00000000000d9ecd
@property(readonly, nonatomic) IDSAccount *iCloudAccount;
@property(readonly, nonatomic) unsigned long long registrationRestrictionReason;
@property(readonly, copy, nonatomic) NSString *serviceDomain;
@property(nonatomic, getter=isPretendingToBeFull) _Bool pretendingToBeFull;
- (void)connection:(id)arg1 didSendOpportunisticDataWithIdentifier:(id)arg2 toIDs:(id)arg3;	// IMP=0x00000000000d95fb
- (void)connection:(id)arg1 account:(id)arg2 receivedGroupSessionParticipantDataUpdate:(id)arg3;	// IMP=0x00000000000d941b
- (void)connection:(id)arg1 account:(id)arg2 receivedGroupSessionParticipantUpdate:(id)arg3 context:(id)arg4;	// IMP=0x00000000000d9118
- (void)connection:(id)arg1 account:(id)arg2 sessionInviteReceived:(id)arg3 fromID:(id)arg4 transportType:(id)arg5 options:(id)arg6 context:(id)arg7 messageContext:(id)arg8;	// IMP=0x00000000000d8ccb
- (void)connection:(id)arg1 didFlushCacheForKTPeerURI:(id)arg2;	// IMP=0x00000000000d8a91
- (void)connection:(id)arg1 didFlushCacheForRemoteURI:(id)arg2 fromURI:(id)arg3 guid:(id)arg4;	// IMP=0x00000000000d87d6
- (void)connection:(id)arg1 identifier:(id)arg2 fromURI:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x00000000000d83fe
- (void)connection:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(_Bool)arg3 error:(id)arg4 context:(id)arg5;	// IMP=0x00000000000d7f44
- (void)connection:(id)arg1 identifier:(id)arg2 alternateCallbackID:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6;	// IMP=0x00000000000d7a10
- (void)connection:(id)arg1 messageIdentifier:(id)arg2 alternateCallbackID:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(_Bool)arg6 messageContext:(id)arg7;	// IMP=0x00000000000d71c8
- (void)connection:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x00000000000d6eda
- (void)connection:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x00000000000d6d38
- (void)_callDelegatesForDevicesChanged;	// IMP=0x00000000000d6b88
- (void)connection:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x00000000000d66ea
- (void)connection:(id)arg1 isActiveChanged:(_Bool)arg2;	// IMP=0x00000000000d6543
- (void)connection:(id)arg1 incomingEngramMessage:(id)arg2 fromURI:(id)arg3 context:(id)arg4;	// IMP=0x00000000000d5028
- (id)_payloadFromDecryptedData:(id)arg1;	// IMP=0x00000000000d4f40
- (long long)_messageTypeForCommand:(id)arg1;	// IMP=0x00000000000d4dfd
- (void)connection:(id)arg1 incomingPendingResourceWithMetadata:(id)arg2 guid:(id)arg3 fromURI:(id)arg4 context:(id)arg5;	// IMP=0x00000000000d4968
- (void)connection:(id)arg1 incomingPendingMessageFromURI:(id)arg2 context:(id)arg3;	// IMP=0x00000000000d4570
- (void)connection:(id)arg1 incomingTopLevelMessage:(id)arg2 fromURI:(id)arg3 messageContext:(id)arg4;	// IMP=0x00000000000d3bac
- (void)connection:(id)arg1 incomingProtobuf:(id)arg2 fromURI:(id)arg3 context:(id)arg4;	// IMP=0x00000000000d256e
- (void)connection:(id)arg1 incomingMessage:(id)arg2 fromURI:(id)arg3 context:(id)arg4;	// IMP=0x00000000000d07ff
- (void)connection:(id)arg1 incomingInvitationUpdate:(id)arg2 fromURI:(id)arg3 context:(id)arg4;	// IMP=0x00000000000d0031
- (void)connection:(id)arg1 incomingInvitation:(id)arg2 fromURI:(id)arg3 context:(id)arg4;	// IMP=0x00000000000cf7b5
- (void)connection:(id)arg1 incomingAccessoryReportMessage:(id)arg2 accessoryID:(id)arg3 controllerID:(id)arg4 context:(id)arg5;	// IMP=0x00000000000cedda
- (void)connection:(id)arg1 incomingAccessoryData:(id)arg2 fromURI:(id)arg3 context:(id)arg4;	// IMP=0x00000000000ce345
- (void)connection:(id)arg1 incomingGroupData:(id)arg2 fromURI:(id)arg3 context:(id)arg4;	// IMP=0x00000000000cd426
- (void)connection:(id)arg1 incomingData:(id)arg2 fromURI:(id)arg3 context:(id)arg4;	// IMP=0x00000000000cc5c3
- (void)connection:(id)arg1 incomingOpportunisticData:(id)arg2 withIdentifier:(id)arg3 fromURI:(id)arg4 context:(id)arg5;	// IMP=0x00000000000cbc0f
- (void)accountController:(id)arg1 accountDisabled:(id)arg2;	// IMP=0x00000000000cbae7
- (void)accountController:(id)arg1 accountEnabled:(id)arg2;	// IMP=0x00000000000cba0c
- (void)accountController:(id)arg1 accountRemoved:(id)arg2;	// IMP=0x00000000000cb8e4
- (void)accountController:(id)arg1 accountAdded:(id)arg2;	// IMP=0x00000000000cb809
- (void)_callIsActiveChanged;	// IMP=0x00000000000cae75
- (void)_processAccountSet:(id)arg1;	// IMP=0x00000000000cae31
- (void)_tearDownConnectionForUniqueID:(id)arg1;	// IMP=0x00000000000cac3b
- (void)_setupNewConnectionForAccount:(id)arg1;	// IMP=0x00000000000cabf7
- (void)_logConnectionMap;	// IMP=0x00000000000ca9e1
- (void)service:(id)arg1 restrictionReasonChanged:(unsigned long long)arg2;	// IMP=0x00000000000ca756
- (void)service:(id)arg1 linkedDevicesUpdated:(id)arg2;	// IMP=0x00000000000ca4b1
- (void)service:(id)arg1 tinkerDeviceUpdated:(id)arg2;	// IMP=0x00000000000ca20c
- (void)service:(id)arg1 tinkerDeviceRemoved:(id)arg2;	// IMP=0x00000000000c9f67
- (void)service:(id)arg1 tinkerDeviceAdded:(id)arg2;	// IMP=0x00000000000c9cc2
- (void)_callLinkedDevicesChanged;	// IMP=0x00000000000c9b19
- (_Bool)_isDroppingMessages;	// IMP=0x00000000000c9b03
- (void)_stopAwaitingQuickSwitchAcknowledgementFromDelegateWithIdentifier:(id)arg1;	// IMP=0x00000000000c9aed
- (CDUnknownBlockType)_acknowledgementBlockWithDelegateIdentifier:(id)arg1;	// IMP=0x00000000000c9913
- (id)_activeDeviceForUniqueID:(id)arg1;	// IMP=0x00000000000c9620
- (void)didSwitchActivePairedDevice:(id)arg1 forService:(id)arg2 wasHandled:(_Bool *)arg3;	// IMP=0x00000000000c7b8a
- (void)connection:(id)arg1 didCancelMessageWithSuccess:(_Bool)arg2 error:(id)arg3 identifier:(id)arg4;	// IMP=0x00000000000c78de
- (void)OTRTestCallback:(id)arg1 time:(double)arg2 error:(id)arg3;	// IMP=0x00000000000c7625
- (void)daemonDisconnected;	// IMP=0x00000000000c7450
- (void)daemonConnected;	// IMP=0x00000000000c7218
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4 group:(id)arg5;	// IMP=0x00000000000c694e
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c692b
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 group:(id)arg2;	// IMP=0x00000000000c6902
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c68ee
- (void)removeDelegate:(id)arg1;	// IMP=0x00000000000c676b
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00000000000c5a2a
- (void)receivedIDSSimulatorSupportData:(id)arg1 serviceName:(id)arg2 messageIdentifier:(id)arg3;	// IMP=0x00000000000c45c4
- (void)dealloc;	// IMP=0x00000000000c438b
- (id)initWithService:(id)arg1 commands:(id)arg2 manuallyAckMessages:(_Bool)arg3 delegateContext:(id)arg4;	// IMP=0x00000000000c3b02
- (id)_init;	// IMP=0x00000000000c3859
- (id)_initWithDelegateContext:(id)arg1;	// IMP=0x00000000000c37ed
- (id)daemonListener;	// IMP=0x00000000000c3796
- (id)daemonController;	// IMP=0x00000000000c377d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

