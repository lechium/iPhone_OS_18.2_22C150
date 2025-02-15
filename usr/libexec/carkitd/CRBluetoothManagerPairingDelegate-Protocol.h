//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRBluetoothManager, NSString;

@protocol CRBluetoothManagerPairingDelegate <NSObject>
- (void)bluetoothManager:(CRBluetoothManager *)arg1 completedPairingForDeviceAddress:(NSString *)arg2 deviceName:(NSString *)arg3;
- (void)bluetoothManager:(CRBluetoothManager *)arg1 failedPairingForDeviceAddress:(NSString *)arg2 name:(NSString *)arg3 didTimeout:(_Bool)arg4;
- (void)bluetoothManager:(CRBluetoothManager *)arg1 requestsConfirmationForDeviceAddress:(NSString *)arg2 name:(NSString *)arg3 numericCode:(NSString *)arg4 responseHandler:(void (^)(NSNumber *, NSError *))arg5;
@end

