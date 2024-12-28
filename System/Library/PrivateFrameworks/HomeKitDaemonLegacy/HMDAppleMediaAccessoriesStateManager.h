//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAppleMediaAccessoriesStateManagerMetricsDispatcher, HMDAppleMediaAccessoriesStateMessenger, NSString, NSUUID;
@protocol HMDAppleMediaAccessoriesStateManagerDataSource;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessoriesStateManager : HMFObject
{
    id <HMDAppleMediaAccessoriesStateManagerDataSource> _dataSource;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    HMDAppleMediaAccessoriesStateMessenger *_messenger;	// 24 = 0x18
    HMDAppleMediaAccessoriesStateManagerMetricsDispatcher *_metricsDispatcher;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x001000000004d754
- (void).cxx_destruct;	// IMP=0x000000000004d40c
@property(readonly) HMDAppleMediaAccessoriesStateManagerMetricsDispatcher *metricsDispatcher; // @synthesize metricsDispatcher=_metricsDispatcher;
@property(readonly) HMDAppleMediaAccessoriesStateMessenger *messenger; // @synthesize messenger=_messenger;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDAppleMediaAccessoriesStateManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x000000000004d34d
- (id)dataSourceAppleMediaAccessories;	// IMP=0x000000000004d211
- (id)remoteAppleMediaAccessories;	// IMP=0x000000000004d1ba
- (id)remoteAppleMediaAccessoriesByIdentifier;	// IMP=0x000000000004ce50
- (void)correctStateForMatchingAppleMediaAccessories:(id)arg1 modelIdentifier:(id)arg2;	// IMP=0x000000000004cc2d
- (id)sendModelIdentifierRequestMessageForAppleMediaAccessory:(id)arg1 accessoryIdentifier:(id)arg2;	// IMP=0x000000000004cb0e
- (void)_correctStateForMatchingIdentifier:(id)arg1 appleMediaAccessories:(id)arg2 sendList:(id)arg3;	// IMP=0x000000000004c826
- (void)correctStateForMatchingIdentifier:(id)arg1 appleMediaAccessories:(id)arg2;	// IMP=0x000000000004c6d2
- (void)runMultipleIdentifierCorrectionSequence;	// IMP=0x000000000004c3c9
- (void)run;	// IMP=0x000000000004c2d8
- (id)initWithIdentifier:(id)arg1 messenger:(id)arg2 metricsDispatcher:(id)arg3;	// IMP=0x000000000004c1c2
- (void)appleMediaAccessoriesStateMessenger:(id)arg1 didReceiveModelIdentifierRequestMessage:(id)arg2 withAccessoryIdentifier:(id)arg3;	// IMP=0x00000000005ae244

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
