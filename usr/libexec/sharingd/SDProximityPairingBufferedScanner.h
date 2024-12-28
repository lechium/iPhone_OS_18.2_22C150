//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SDProximityPairingBufferedScanner : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _activated;	// 9 = 0x9
    struct BTSessionImpl *_btSession;	// 16 = 0x10
    _Bool _btStarted;	// 24 = 0x18
    NSMutableDictionary *_devices;	// 32 = 0x20
    _Bool _invalidateCalled;	// 40 = 0x28
    CDUnknownBlockType _bufferedDeviceFoundHandler;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 56 = 0x38
    CDUnknownBlockType _invalidationHandler;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000001d2f15
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType bufferedDeviceFoundHandler; // @synthesize bufferedDeviceFoundHandler=_bufferedDeviceFoundHandler;
- (_Bool)_updateCounterpart:(id)arg1;	// IMP=0x00100000001d2c48
- (void)_foundDevice:(id)arg1 advertisementData:(id)arg2 rssi:(long long)arg3 fields:(id)arg4;	// IMP=0x00100000001d2098
- (id)pairingParsePayload:(id)arg1 identifier:(id)arg2 bleDevice:(id)arg3 peerInfo:(id)arg4;	// IMP=0x00100000001d2090
- (void)pairingParseAccessoryStatusPayloadPtr:(const char *)arg1 end:(const char *)arg2 fields:(id)arg3;	// IMP=0x00100000001d1e73
- (_Bool)pairingUpdatePairedInfo:(id)arg1 fields:(id)arg2 bleDevice:(id)arg3;	// IMP=0x00100000001d1dda
- (_Bool)pairingUpdatePairedInfoMB:(id)arg1 fields:(id)arg2 bleDevice:(id)arg3;	// IMP=0x00100000001d16be
- (void)parseStatus3:(unsigned char)arg1 productID:(unsigned int)arg2 caseLEDColor:(unsigned char *)arg3 caseLEDStatus:(char *)arg4;	// IMP=0x00100000001d1444
- (id)modelWithProductID:(unsigned short)arg1;	// IMP=0x00100000001d11f0
- (unsigned int)statusToHeadsetStatus:(unsigned char)arg1 forProductID:(unsigned short)arg2;	// IMP=0x00000000001d10e7
- (void)foundBufferedPairingDevices:(id)arg1;	// IMP=0x00100000001d10e1
- (_Bool)sampleIsTooOld:(id)arg1;	// IMP=0x00100000001d103d
- (_Bool)isAirPods:(unsigned int)arg1;	// IMP=0x00100000001d1018
- (void)startCBDiscoveryScreenOffPairing;	// IMP=0x00100000001d1012
- (void)proxPairingLoggerAndInvalidationHandler:(id)arg1 withLogLevel:(unsigned char)arg2 andError:(id)arg3;	// IMP=0x00100000001d0eb0
- (void)configureCBDiscoveryScreenOffPairing;	// IMP=0x00100000001d0eaa
- (void)_btSessionEnsureStopped;	// IMP=0x00100000001d0e24
- (int)_btSessionEnsureStarted;	// IMP=0x00100000001d09e2
- (void)turnOffScreenOffScanningIfNoAirPodsOntheAccount;	// IMP=0x00100000001d09dc
- (void)_ensureCbDiscoveryStopped;	// IMP=0x00100000001d09d6
- (void)_ensureStarted;	// IMP=0x00100000001d099f
- (void)ensureStarted;	// IMP=0x00100000001d093e
- (void)_invalidate;	// IMP=0x00100000001d07f4
- (void)invalidate;	// IMP=0x00100000001d0791
- (void)dealloc;	// IMP=0x00100000001d06fa
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001d0614
- (_Bool)_btSessionUsable;	// IMP=0x00100000001d060c

@end
