//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>

@class HMDAccessCodeDataManager, HMDAccessoryAccessCodeReaderWriter, NSHashTable, NSObject, NSString, NSUUID;
@protocol HMDAccessCodeManagerContext, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessCodeManager : HMFObject <HMFMessageReceiver>
{
    _Bool _homeAppForegrounded;	// 8 = 0x8
    HMDAccessCodeDataManager *_dataManager;	// 16 = 0x10
    id <HMDAccessCodeManagerContext> _context;	// 24 = 0x18
    Class _utilities;	// 32 = 0x20
    HMDAccessoryAccessCodeReaderWriter *_accessoryReaderWriter;	// 40 = 0x28
    NSHashTable *_subscribedClientConnections;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x001000000007e113
- (void).cxx_destruct;	// IMP=0x0000000000078915
@property(readonly) NSHashTable *subscribedClientConnections; // @synthesize subscribedClientConnections=_subscribedClientConnections;
@property(getter=isHomeAppForegrounded) _Bool homeAppForegrounded; // @synthesize homeAppForegrounded=_homeAppForegrounded;
@property(readonly) HMDAccessoryAccessCodeReaderWriter *accessoryReaderWriter; // @synthesize accessoryReaderWriter=_accessoryReaderWriter;
@property(readonly) Class utilities; // @synthesize utilities=_utilities;
@property(readonly) id <HMDAccessCodeManagerContext> context; // @synthesize context=_context;
@property(readonly) HMDAccessCodeDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x000000000007876b
- (void)accessCodeDataManager:(id)arg1 didRemoveAccessoryAccessCodes:(id)arg2;	// IMP=0x0000000000078639
- (void)accessCodeDataManager:(id)arg1 didUpdateAccessoryAccessCodes:(id)arg2;	// IMP=0x0000000000078507
- (void)accessCodeDataManager:(id)arg1 didAddAccessoryAccessCodes:(id)arg2;	// IMP=0x00000000000783d5
- (void)accessCodeDataManager:(id)arg1 didRemoveHomeAccessCodes:(id)arg2 removedByUserUUID:(id)arg3;	// IMP=0x00000000000782db
- (void)accessCodeDataManager:(id)arg1 didUpdateHomeAccessCodes:(id)arg2 changedByUserUUID:(id)arg3;	// IMP=0x00000000000781e1
- (void)accessCodeDataManager:(id)arg1 didAddHomeAccessCodes:(id)arg2 addedByUserUUID:(id)arg3;	// IMP=0x00000000000780e7
- (id)_waitUntilDataHasSyncedToResidentForAccessoryUUIDs:(id)arg1;	// IMP=0x0000000000077f80
- (id)_waitUntilDataHasSyncedToResidentIfNecessaryForAccessoryUUIDs:(id)arg1;	// IMP=0x0000000000077e28
- (void)_updateAccessoryAccessCodeCache;	// IMP=0x0000000000077c95
- (id)_accessCodeForUserWithUUID:(id)arg1 inHome:(id)arg2;	// IMP=0x0000000000077b04
- (void)_generateNewAccessCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007794f
- (id)_addNewAccessCode:(id)arg1 forUserWithUUID:(id)arg2 toAccessoriesWithUUIDs:(id)arg3 withRetries:(_Bool)arg4;	// IMP=0x0000000000077737
- (id)addNewAccessCode:(id)arg1 forUserWithUUID:(id)arg2 toAccessoriesWithUUIDs:(id)arg3 withRetries:(_Bool)arg4;	// IMP=0x00000000000775b8
- (id)_updateAccessCode:(id)arg1 toNewValue:(id)arg2 onAccessoriesWithFetchResponses:(id)arg3 withRetries:(_Bool)arg4;	// IMP=0x0000000000077435
- (id)_resetAccessCodesForHomeAccessCode:(id)arg1;	// IMP=0x000000000007728c
- (id)_createNewAccessCodeForUserWithUUID:(id)arg1;	// IMP=0x00000000000770e6
- (void)_notifySubscribersOfMessageWithName:(id)arg1 payload:(id)arg2;	// IMP=0x0000000000076c98
- (void)_generateNewUserAccessCodeForMessage:(id)arg1;	// IMP=0x0000000000076875
- (void)_resetAccessoryAccessCodesForMessage:(id)arg1;	// IMP=0x00000000000765ca
- (id)_removeAccessCode:(id)arg1 forUserBeingRemoved:(id)arg2;	// IMP=0x00000000000763eb
- (id)removeAccessCode:(id)arg1 fromHAPAccessory:(id)arg2;	// IMP=0x00000000000762a3
- (id)_removeAccessCode:(id)arg1 forUser:(id)arg2 removedByUserUUID:(id)arg3;	// IMP=0x00000000000760d2
- (id)_removeAccessCode:(id)arg1 forUserWithUUID:(id)arg2 removedByUserUUID:(id)arg3;	// IMP=0x0000000000075dce
- (void)_setAccessCodeForUserForMessage:(id)arg1;	// IMP=0x00000000000754a8
- (id)_removeAccessCodeFromAccessoriesKeepingiCloudDataUponFailure:(id)arg1 forUserUUID:(id)arg2;	// IMP=0x00000000000752df
- (void)_removeSimpleLabelAccessCodeMessage:(id)arg1;	// IMP=0x0000000000074e3f
- (id)_updateModificationRequestsWithUserOrGuestNames:(id)arg1;	// IMP=0x0000000000074dde
- (void)_submitAccessCodeModificationRequestsForMessage:(id)arg1;	// IMP=0x0000000000074700
- (void)_fetchAccessCodeConstraintsForMessage:(id)arg1;	// IMP=0x00000000000742c6
- (void)_fetchAccessCodesForMessage:(id)arg1;	// IMP=0x0000000000073e8c
- (_Bool)_redispatchToResidentIfNeccesaryForMessage:(id)arg1 withNewResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000073aa6
- (void)_updateCacheWithModificationResponses:(id)arg1;	// IMP=0x0000000000073903
- (_Bool)hasCurrentUserAccessCodeChangedWithChangedAccessCodes:(id)arg1 home:(id)arg2;	// IMP=0x0000000000073803
- (void)handleHomeDidDisableCharacteristicNotification:(id)arg1;	// IMP=0x0000000000073768
- (void)handleHomeDidEnableCharacteristicNotification:(id)arg1;	// IMP=0x00000000000736cd
- (void)handleAccessorySupportsAccessCodeDidChangeNotification:(id)arg1;	// IMP=0x000000000007344e
- (void)handleHomeUserRemovedNotification:(id)arg1;	// IMP=0x000000000007337c
- (void)handleUserAccessCodeDidChangeMessage:(id)arg1;	// IMP=0x0000000000073182
- (void)handleConfirmDataHasSyncedToResidentMessage:(id)arg1;	// IMP=0x0000000000072deb
- (void)handleGenerateNewUserAccessCodeMessage:(id)arg1;	// IMP=0x0000000000072bdf
- (void)handleResetAccessoryAccessCodesMessage:(id)arg1;	// IMP=0x00000000000729c8
- (void)handleFetchCachedAccessCodesMessage:(id)arg1;	// IMP=0x00000000000726a1
- (void)handleFetchHomeAccessCodesMessage:(id)arg1;	// IMP=0x00000000000723ec
- (void)handleFetchAccessCodeConstraintsMessage:(id)arg1;	// IMP=0x0000000000071f5d
- (void)handleFetchAccessCodesMessage:(id)arg1;	// IMP=0x0000000000071ace
- (void)handleRemoveHomeAccessCodeMessage:(id)arg1;	// IMP=0x0000000000071765
- (void)handleSetUserInformationMessage:(id)arg1;	// IMP=0x000000000007134b
- (void)handleRemoveSimpleLabelAccessCodeMessage:(id)arg1;	// IMP=0x0000000000071134
- (void)handleSetAccessCodeForUserMessage:(id)arg1;	// IMP=0x0000000000070f1d
- (void)handleSubmitAccessCodeModificationRequestsMessage:(id)arg1;	// IMP=0x0000000000070d06
- (void)handleUnsubscribeMessage:(id)arg1;	// IMP=0x0000000000070949
- (void)handleSubscribeMessage:(id)arg1;	// IMP=0x000000000007058c
- (void)fetchAccessCodeForIdentifier:(id)arg1 accessoryUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000701e9
- (void)unconfigure;	// IMP=0x00000000000700d0
- (void)configureWithMessageDispatcher:(id)arg1;	// IMP=0x000000000006f497
- (id)initWithContext:(id)arg1 utilities:(Class)arg2 accessoryReaderWriter:(id)arg3 dataManager:(id)arg4;	// IMP=0x000000000006f386
- (id)initWithContext:(id)arg1;	// IMP=0x000000000006f2cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

