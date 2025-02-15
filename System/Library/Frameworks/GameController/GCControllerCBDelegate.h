//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBCentralManager, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GCControllerCBDelegate : NSObject
{
    NSMutableArray *_foundPeripherals;	// 8 = 0x8
    NSMutableArray *_connectedPeripherals;	// 16 = 0x10
    CBCentralManager *_centralManager;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000b2615
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x00000000000b24ef
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x00000000000b23fd
- (void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3;	// IMP=0x00000000000b2000
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x00000000000b1c3f
- (void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x00000000000b1a39
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;	// IMP=0x00000000000b0f9b
- (void)peripheral:(id)arg1 didDiscoverIncludedServicesForService:(id)arg2 error:(id)arg3;	// IMP=0x00000000000b0d8f
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;	// IMP=0x00000000000b0b57
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;	// IMP=0x00000000000b0974
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;	// IMP=0x00000000000b07c1
- (void)centralManager:(id)arg1 didRetrieveConnectedPeripherals:(id)arg2;	// IMP=0x00000000000b0716
- (void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;	// IMP=0x00000000000b066b
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x00000000000b042a
- (void)startScanWithTimeout:(double)arg1;	// IMP=0x00000000000b006b
- (void)startScan;	// IMP=0x00000000000b0051
- (void)stopScan;	// IMP=0x00000000000affcc
- (void)fireCompletionHandler;	// IMP=0x00000000000aff2a
- (id)init;	// IMP=0x00000000000afeb5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

