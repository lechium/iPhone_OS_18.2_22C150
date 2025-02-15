//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APECMetricSampler, APJourneySettings, APUnfairLock, NSLock, NSMutableDictionary, NSSet, NSString;
@protocol APMetricNotificationRegister><APMetricReceiving, APMetricServerDelivering, OS_dispatch_queue;

@interface APMetricStorageEC : NSObject
{
    _Bool _eventCollectionDisabled;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_metricsQueue;	// 16 = 0x10
    id <APMetricNotificationRegister><APMetricReceiving> _notificationRegistrar;	// 24 = 0x18
    id <APMetricServerDelivering> _serverDelivery;	// 32 = 0x20
    NSLock *_storageLock;	// 40 = 0x28
    NSMutableDictionary *_currentBatches;	// 48 = 0x30
    APJourneySettings *_journeySettings;	// 56 = 0x38
    NSSet *_channels;	// 64 = 0x40
    APUnfairLock *_serverDeliveryLock;	// 72 = 0x48
    APECMetricSampler *_sampler;	// 80 = 0x50
}

+ (id)destinationsStoragePath;	// IMP=0x00200000000e0fbe
+ (id)openStoragePathPrefix;	// IMP=0x00100000000e0faa
+ (id)closedStoragePathPrefix;	// IMP=0x00100000000e0f96
- (void).cxx_destruct;	// IMP=0x00200000000e4348
@property(nonatomic) _Bool eventCollectionDisabled; // @synthesize eventCollectionDisabled=_eventCollectionDisabled;
@property(retain, nonatomic) APECMetricSampler *sampler; // @synthesize sampler=_sampler;
@property(readonly, nonatomic) APUnfairLock *serverDeliveryLock; // @synthesize serverDeliveryLock=_serverDeliveryLock;
@property(copy, nonatomic) NSSet *channels; // @synthesize channels=_channels;
@property(retain, nonatomic) NSMutableDictionary *currentBatches; // @synthesize currentBatches=_currentBatches;
@property(readonly, nonatomic) NSLock *storageLock; // @synthesize storageLock=_storageLock;
@property(readonly, nonatomic) id <APMetricServerDelivering> serverDelivery; // @synthesize serverDelivery=_serverDelivery;
@property(readonly, nonatomic) id <APMetricNotificationRegister><APMetricReceiving> notificationRegistrar; // @synthesize notificationRegistrar=_notificationRegistrar;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // @synthesize metricsQueue=_metricsQueue;
- (void)setNotificationRegistrar:(id)arg1;	// IMP=0x00100000000e42a4
- (void)setServerDelivery:(id)arg1;	// IMP=0x00100000000e4293
- (void)rotateIDAccount;	// IMP=0x00100000000e4233
- (id)preparedMetricDataForDestination:(id)arg1 purpose:(long long)arg2 containsSignature:(_Bool)arg3;	// IMP=0x00100000000e3f72
- (void)_cleanupLeftovers;	// IMP=0x00100000000e3eb9
- (void)_withdrawShelvedBatchesForChannel:(id)arg1 groupBatches:(_Bool)arg2 signingAuthority:(id)arg3;	// IMP=0x00100000000e39fa
- (void)finishEventsRotationWithSigningAuthority:(id)arg1;	// IMP=0x00100000000e3895
- (void)startEventsRotation;	// IMP=0x00100000000e381c
- (void)receivedMetric:(id)arg1;	// IMP=0x00100000000e354b
- (void)_notifyListenersOfMetric:(id)arg1;	// IMP=0x00100000000e33ec
- (void)_processMetric:(id)arg1;	// IMP=0x00100000000e2c68
- (void)_closeBatchForChannel:(id)arg1;	// IMP=0x00100000000e2bcf
- (id)_openBatchForChannel:(id)arg1;	// IMP=0x00100000000e298d
- (id)_closeBatchesForChannels:(id)arg1 shelved:(_Bool)arg2 groupBatches:(_Bool)arg3;	// IMP=0x00100000000e2303
- (id)closeShelvedBatchesForChannel:(id)arg1 groupBatches:(_Bool)arg2;	// IMP=0x00100000000e223d
- (id)closeBatchesForChannels:(id)arg1;	// IMP=0x00100000000e2223
- (void)closeActiveBatches;	// IMP=0x00100000000e1f43
- (id)_shelvedPathForChannel:(id)arg1;	// IMP=0x00100000000e1e25
- (id)_closedPathForChannel:(id)arg1;	// IMP=0x00100000000e1ce5
- (_Bool)hasBacklogForChannel:(id)arg1;	// IMP=0x00100000000e1bf9
- (void)addActiveChannel:(id)arg1;	// IMP=0x00100000000e1a9b
- (void)_writeChannels;	// IMP=0x00100000000e191f
- (id)_readChannels;	// IMP=0x00100000000e140e
@property(readonly, nonatomic) APJourneySettings *journeySettings; // @synthesize journeySettings=_journeySettings;
- (id)activeChannels;	// IMP=0x00100000000e13b1
- (void)setup;	// IMP=0x00100000000e12fe
- (void)dealloc;	// IMP=0x00100000000e1247
- (id)init;	// IMP=0x00100000000e0fd2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

