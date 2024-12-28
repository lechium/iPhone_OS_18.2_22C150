//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PDRRegistry.h"

@class MISSING_TYPE, OS_dispatch_queue;

@interface PDRRegistry_Stub : PDRRegistry
{
    MISSING_TYPE *unfairLock;	// 8 = 0x8
    MISSING_TYPE *delegates;	// 16 = 0x10
    MISSING_TYPE *lastCompatibilityState;	// 24 = 0x18
    MISSING_TYPE *started_;	// 32 = 0x20
    MISSING_TYPE *status_;	// 40 = 0x28
    MISSING_TYPE *amSingleton;	// 48 = 0x30
}

+ (_Bool)supportsPairedDevice;	// IMP=0x006000000000d110
+ (id)sharedInstance;	// IMP=0x006000000000d0e0
- (void).cxx_destruct;	// IMP=0x000000000000d6d0
- (id)deviceForPairingID:(id)arg1;	// IMP=0x000000000000d630
- (id)deviceForBluetoothID:(id)arg1;	// IMP=0x000000000000d620
- (void)getSwitchEventsAfterIndex:(unsigned int)arg1 process:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d600
- (long long)switchIndex;	// IMP=0x000000000000d5f0
- (_Bool)removeDelegate:(id)arg1;	// IMP=0x000000000000d590
- (void)addDelegate:(id)arg1;	// IMP=0x000000000000d490
- (_Bool)isPaired;	// IMP=0x000000000000d2e0
- (id)pairingID;	// IMP=0x000000000000d2d0
- (id)pairingStorePath;	// IMP=0x000000000000d2c0
- (id)getActiveDevice;	// IMP=0x000000000000d2b0
- (id)getActivePairedDeviceExcludingAltAccount;	// IMP=0x000000000000d2a0
- (id)getActivePairedDeviceIncludingAltAccount;	// IMP=0x000000000000d290
- (id)getDevicesExcluding:(unsigned long long)arg1;	// IMP=0x000000000000d260
- (void)stop;	// IMP=0x000000000000d240
- (void)start;	// IMP=0x000000000000d120
- (long long)compatibilityState;	// IMP=0x000000000000d080
@property(nonatomic, retain) OS_dispatch_queue *callbackQueue;
@property(nonatomic, readonly) long long status;
@property(nonatomic, readonly) _Bool started;
- (id)init;	// IMP=0x000000000000cf50
- (long long)maxTinkerPairedDeviceCount;	// IMP=0x000000000000d9c0
- (long long)maxPairedDeviceCount;	// IMP=0x000000000000d9a0
- (void)pairingClientSetAltAccountName:(id)arg1 altDSID:(id)arg2 forDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000d920
- (void)completeRTCPairingMetricForMetricID:(id)arg1 withSuccess:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d8a0
- (void)waitForPairingExtendedMetadataForAdvertisedName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d870
- (long long)migrationCountForPairingID:(id)arg1;	// IMP=0x000000000000d810
- (long long)lastSyncSwitchIndex;	// IMP=0x000000000000d7f0
- (void)setActivePairedDevice:(id)arg1 resultsCallback:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d760
- (id)failsafeUnpairWithOptions:(id)arg1;	// IMP=0x000000000000d730
- (id)unpairWithDevice:(id)arg1 withOptions:(id)arg2;	// IMP=0x000000000000d710

@end
