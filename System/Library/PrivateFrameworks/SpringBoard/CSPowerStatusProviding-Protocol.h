//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol CSPowerStatusProviding <NSObject>
@property(readonly, nonatomic, getter=isConnectedToQiPower) _Bool connectedToQiPower;
@property(readonly, nonatomic, getter=isConnectedToWirelessInternalChargingAccessory) _Bool connectedToWirelessInternalChargingAccessory;
@property(readonly, nonatomic, getter=isConnectedToWirelessInternalCharger) _Bool connectedToWirelessInternalCharger;
@property(readonly, nonatomic, getter=isConnectedToExternalChargingSource) _Bool connectedToExternalChargingSource;
@property(readonly, nonatomic, getter=isOnAC) _Bool onAC;
@end
