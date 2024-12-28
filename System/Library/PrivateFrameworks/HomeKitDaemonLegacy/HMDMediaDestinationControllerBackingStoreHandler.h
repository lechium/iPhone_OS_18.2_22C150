//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDMediaDestinationControllerMetricsEventDispatcher, HMMediaDestinationControllerData, HMMutableMediaDestinationControllerData, NSString;
@protocol HMDMediaDestinationControllerBackingStoreHandlerDelegate;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationControllerBackingStoreHandler
{
    HMMutableMediaDestinationControllerData *_data;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    id <HMDMediaDestinationControllerBackingStoreHandlerDelegate> _delegate;	// 24 = 0x18
    HMDMediaDestinationControllerMetricsEventDispatcher *_metricsEventDispatcher;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x001000000008e6ff
+ (id)backingStoreObjectForData:(id)arg1;	// IMP=0x001000000008e63b
- (void).cxx_destruct;	// IMP=0x000000000008da86
@property(retain) HMDMediaDestinationControllerMetricsEventDispatcher *metricsEventDispatcher; // @synthesize metricsEventDispatcher=_metricsEventDispatcher;
@property __weak id <HMDMediaDestinationControllerBackingStoreHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x000000000008d9e2
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x000000000008d888
- (void)transactionObjectUpdatedSupportedOptions:(unsigned long long)arg1 message:(id)arg2;	// IMP=0x000000000008d6cc
- (void)transactionObjectUpdatedAvailableDestinationIdentifiers:(id)arg1 message:(id)arg2;	// IMP=0x000000000008d44c
- (void)transactionObjectUpdatedDestinationIdentifier:(id)arg1 message:(id)arg2;	// IMP=0x000000000008d1db
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000008c9ca
- (void)notifyDidUpdateAvailableDestinationIdentifiers:(id)arg1;	// IMP=0x000000000008c883
- (void)notifyDidUpdateDestinationIdentifier:(id)arg1;	// IMP=0x000000000008c73c
- (void)updateSupportedOptions:(unsigned long long)arg1;	// IMP=0x000000000008c6d8
- (void)updateAvailableDestinationIdentifiers:(id)arg1;	// IMP=0x000000000008c662
- (void)updateDestinationIdentifier:(id)arg1;	// IMP=0x000000000008c5ec
@property(readonly, copy) HMMediaDestinationControllerData *data;
- (void)recoverDueToInvalidRecordInCloudWithHome:(id)arg1 migrationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008c2ed
- (void)migrateWithCurrentCloudRecord:(id)arg1 home:(id)arg2 cloudZone:(id)arg3 migrationQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000008bdc8
- (void)recoverDueToNoRecordInCloudWithHome:(id)arg1 migrationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008bbe0
- (void)migrateWithHome:(id)arg1 cloudZone:(id)arg2 migrationQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000008ba6b
- (void)mergeData:(id)arg1;	// IMP=0x000000000008b8e9
- (void)removeControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008b72e
- (void)updateAvailableDestinationIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008b542
- (void)updateSupportedOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008b315
- (void)updateDestinationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008b129
- (id)initWithData:(id)arg1 backingStore:(id)arg2 metricsEventDispatcher:(id)arg3 delegate:(id)arg4;	// IMP=0x000000000008afc9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
