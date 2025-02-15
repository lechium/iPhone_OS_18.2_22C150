//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarKit/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol CRMessagingServiceVehicleRepresenting <NSObject>
@property(readonly, nonatomic) NSDictionary *vehicleAccessoryInfoKeys;
@property(readonly, nonatomic) NSDictionary *analyticsDescription;
@property(readonly, nonatomic) NSString *radarDescription;
@property(readonly, nonatomic) NSDictionary *digitalCarKeyInformation;
@property(readonly, nonatomic) _Bool supportsEnhancedIntegration;
@property(readonly, nonatomic) _Bool supportsThemeAssets;
@property(readonly, nonatomic) _Bool supportsBluetoothLE;
@property(readonly, nonatomic) _Bool supportsCarPlayConnectionRequest;
@property(readonly, nonatomic) _Bool supportsWiredBluetoothPairing;
@property(readonly, nonatomic) _Bool supportsWirelessCarPlay;
@property(readonly, nonatomic) _Bool supportsUSBCarPlay;
@property(readonly, nonatomic) NSArray *accessoryProtocols;
@property(readonly, nonatomic) NSString *PPID;
@property(readonly, nonatomic) NSData *certificateSerialNumber;
@property(readonly, nonatomic) NSString *vehicleModelName;
@property(readonly, nonatomic) NSString *vehicleName;
@property(readonly, nonatomic) NSString *bluetoothAddress;
@property(readonly, nonatomic) long long transportType;
@end

