//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARBluetoothLEChannel, CARBluetoothLEConnectionState, CBPeripheral, CBPeripheralManager, CBUUID, NSString;
@protocol CARBluetoothLEServiceDelegate, OS_dispatch_queue;

@interface CARBluetoothLEService : NSObject
{
    CBPeripheral *_peripheral;	// 8 = 0x8
    CBUUID *_serviceUUID;	// 16 = 0x10
    CBUUID *_psmCharacteristicUUID;	// 24 = 0x18
    id <CARBluetoothLEServiceDelegate> _serviceDelegate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    CBPeripheralManager *_peripheralManager;	// 48 = 0x30
    CARBluetoothLEConnectionState *_currentConnectionState;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000000fe9f
@property(retain, nonatomic) CARBluetoothLEConnectionState *currentConnectionState; // @synthesize currentConnectionState=_currentConnectionState;
@property(readonly, nonatomic) CBPeripheralManager *peripheralManager; // @synthesize peripheralManager=_peripheralManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CARBluetoothLEServiceDelegate> serviceDelegate; // @synthesize serviceDelegate=_serviceDelegate;
@property(readonly, nonatomic) CBUUID *psmCharacteristicUUID; // @synthesize psmCharacteristicUUID=_psmCharacteristicUUID;
@property(readonly, nonatomic) CBUUID *serviceUUID; // @synthesize serviceUUID=_serviceUUID;
@property(readonly, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
- (void)peripheral:(id)arg1 didOpenL2CAPChannel:(id)arg2 error:(id)arg3;	// IMP=0x001000000000f9be
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x001000000000f4b2
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;	// IMP=0x001000000000ef1a
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;	// IMP=0x001000000000e99a
@property(readonly, nonatomic) CARBluetoothLEChannel *activeChannel;
- (void)_discoverService;	// IMP=0x001000000000e739
- (id)initWithPeripheral:(id)arg1 serviceUUID:(id)arg2 psmCharacteristicUUID:(id)arg3;	// IMP=0x001000000000e5fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
