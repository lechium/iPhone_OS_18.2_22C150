//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDMediaDestinationManagerMetricsDispatcher, HMMediaDestination, HMMutableMediaDestination;
@protocol HMDMediaDestinationBackingStoreHandlerDelegate;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationBackingStoreHandler
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMMutableMediaDestination *_destination;	// 16 = 0x10
    id <HMDMediaDestinationBackingStoreHandlerDelegate> _delegate;	// 24 = 0x18
    HMDMediaDestinationManagerMetricsDispatcher *_metricsDispatcher;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0060000000569974
+ (id)backingStoreObjectForMediaDestination:(id)arg1;	// IMP=0x0060000000569899
- (void).cxx_destruct;	// IMP=0x0000000000569859
@property(readonly) HMDMediaDestinationManagerMetricsDispatcher *metricsDispatcher; // @synthesize metricsDispatcher=_metricsDispatcher;
@property __weak id <HMDMediaDestinationBackingStoreHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000005696bc
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000568fd9
- (void)setAudioGroupIdentifier:(id)arg1;	// IMP=0x0000000000568f63
- (void)setSupportedOptions:(unsigned long long)arg1;	// IMP=0x0000000000568eff
@property(readonly) HMMediaDestination *destination;
- (void)updateAudioGroupIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000568af3
- (void)updateSupportedOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000056874c
- (void)mergeDestination:(id)arg1;	// IMP=0x00000000005685ca
- (id)initWithDestination:(id)arg1 backingStore:(id)arg2 metricsDispatcher:(id)arg3 delegate:(id)arg4;	// IMP=0x000000000056846a

@end
