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

+ (id)logCategory;	// IMP=0x00100000001d24a8
+ (id)backingStoreObjectForData:(id)arg1;	// IMP=0x00100000001d23e4
- (void).cxx_destruct;	// IMP=0x00000000001d1d3c
@property(retain) HMDMediaDestinationControllerMetricsEventDispatcher *metricsEventDispatcher; // @synthesize metricsEventDispatcher=_metricsEventDispatcher;
@property __weak id <HMDMediaDestinationControllerBackingStoreHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x00000000001d1c98
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000001d1b3e
- (void)transactionObjectUpdatedSupportedOptions:(unsigned long long)arg1 message:(id)arg2;	// IMP=0x00000000001d1982
- (void)transactionObjectUpdatedAvailableDestinationIdentifiers:(id)arg1 message:(id)arg2;	// IMP=0x00000000001d1702
- (void)transactionObjectUpdatedDestinationIdentifier:(id)arg1 message:(id)arg2;	// IMP=0x00000000001d1491
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000001d0ca4
- (void)notifyDidUpdateAvailableDestinationIdentifiers:(id)arg1;	// IMP=0x00000000001d0b5d
- (void)notifyDidUpdateDestinationIdentifier:(id)arg1;	// IMP=0x00000000001d0a16
- (void)updateSupportedOptions:(unsigned long long)arg1;	// IMP=0x00000000001d09b2
- (void)updateAvailableDestinationIdentifiers:(id)arg1;	// IMP=0x00000000001d093c
- (void)updateDestinationIdentifier:(id)arg1;	// IMP=0x00000000001d08c6
@property(readonly, copy) HMMediaDestinationControllerData *data;
- (void)mergeData:(id)arg1;	// IMP=0x00000000001d06e4
- (void)removeControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d0529
- (void)updateAvailableDestinationIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d033d
- (void)updateSupportedOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d0110
- (void)updateDestinationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001cff24
- (id)initWithData:(id)arg1 backingStore:(id)arg2 metricsEventDispatcher:(id)arg3 delegate:(id)arg4;	// IMP=0x00000000001cfdc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
