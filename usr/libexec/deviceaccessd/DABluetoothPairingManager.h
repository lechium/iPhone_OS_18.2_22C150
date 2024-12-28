//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBCentralManager, CBPairingAgent, CBPeripheral, DABluetoothTask, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface DABluetoothPairingManager : NSObject
{
    CBCentralManager *_cbCentralManager;	// 8 = 0x8
    CBPairingAgent *_cbPairingAgent;	// 16 = 0x10
    CBPeripheral *_cbPeripheral;	// 24 = 0x18
    long long _currentTaskEndEvent;	// 32 = 0x20
    DABluetoothTask *_currentTask;	// 40 = 0x28
    NSMutableArray *_taskList;	// 48 = 0x30
    _Bool _cbPowerOn;	// 56 = 0x38
    _Bool _mitmPairing;	// 57 = 0x39
    _Bool _busy;	// 58 = 0x3a
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 64 = 0x40
    NSUUID *_bluetoothUUID;	// 72 = 0x48
    double _taskTimeoutSeconds;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000000290d9
@property(nonatomic) double taskTimeoutSeconds; // @synthesize taskTimeoutSeconds=_taskTimeoutSeconds;
@property(readonly, nonatomic) _Bool busy; // @synthesize busy=_busy;
@property(nonatomic) _Bool mitmPairing; // @synthesize mitmPairing=_mitmPairing;
@property(copy, nonatomic) NSUUID *bluetoothUUID; // @synthesize bluetoothUUID=_bluetoothUUID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (id)_getNextTask;	// IMP=0x0010000000028fba
- (void)_addNewTask:(id)arg1 completion:(CDUnknownBlockType)arg2 bluetoothOp:(long long)arg3 pairCTKD:(_Bool)arg4 displayName:(id)arg5 taskTimeout:(id)arg6 appConfirmsAuth:(_Bool)arg7;	// IMP=0x0010000000028caf
- (void)respondToPairingRequest:(id)arg1 type:(long long)arg2 accept:(_Bool)arg3 passkey:(id)arg4;	// IMP=0x00100000000289da
- (void)pairingAgent:(id)arg1 peerDidRequestPairing:(id)arg2 type:(long long)arg3 passkey:(id)arg4;	// IMP=0x0010000000028623
- (void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2;	// IMP=0x00100000000284fa
- (void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3;	// IMP=0x001000000002832e
- (void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2;	// IMP=0x0010000000028175
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x001000000002803d
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;	// IMP=0x0010000000027c87
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;	// IMP=0x0010000000027927
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x001000000002786e
- (void)_reportFailure:(id)arg1;	// IMP=0x00100000000277de
- (void)_reportEvent:(long long)arg1 error:(id)arg2 endCurrentTask:(_Bool)arg3;	// IMP=0x0010000000027475
- (void)_runNextTask;	// IMP=0x0010000000026aec
- (id)getCurrentTaskBluetoothIdentifier;	// IMP=0x0010000000026abd
- (void)cancelAll;	// IMP=0x001000000002685b
- (void)cancelCurrentTask;	// IMP=0x00100000000265ce
- (void)forgetBluetoothDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000263ae
- (void)persistBluetoothDevice:(id)arg1 pairingRequired:(_Bool)arg2 pairWithCTKD:(_Bool)arg3 displayName:(id)arg4 taskTimeout:(id)arg5 appConfirmsAuth:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00100000000260f2
- (void)invalidate;	// IMP=0x001000000002602d
- (id)init;	// IMP=0x0010000000025f79

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
