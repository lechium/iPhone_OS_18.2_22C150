//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDCharacteristicReadWriteNetworkInformation, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicReadWriteLogEventManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMDCharacteristicReadWriteNetworkInformation *_networkInformationCache;	// 16 = 0x10
    NSMutableDictionary *_accessoryStatisticsByHMDAccessoryUUID;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00400000008c341e
- (void).cxx_destruct;	// IMP=0x00000000008c33f6
@property(readonly, nonatomic) NSMutableDictionary *accessoryStatisticsByHMDAccessoryUUID; // @synthesize accessoryStatisticsByHMDAccessoryUUID=_accessoryStatisticsByHMDAccessoryUUID;
@property(retain) HMDCharacteristicReadWriteNetworkInformation *networkInformationCache; // @synthesize networkInformationCache=_networkInformationCache;
- (void)updateStatisticsForLogEvent:(id)arg1;	// IMP=0x00000000008c3005
- (void)_updateNetworkStatisticsForLogEvent:(id)arg1;	// IMP=0x00000000008c29a9
- (_Bool)_compareIPSignatures:(id)arg1 secondSignature:(id)arg2;	// IMP=0x00000000008c2936
- (void)_updateBluetoothStatisticsForLogEvent:(id)arg1;	// IMP=0x00000000008c28c0
- (void)_updateWiFiStatisticsForLogEvent:(id)arg1;	// IMP=0x00000000008c243f
- (void)_setupNetworkCacheWithWifiManager:(id)arg1;	// IMP=0x00000000008c23ac
- (double)elapsedTimeInterval:(double)arg1;	// IMP=0x00000000008c2382
- (id)init;	// IMP=0x00000000008c232c

@end
