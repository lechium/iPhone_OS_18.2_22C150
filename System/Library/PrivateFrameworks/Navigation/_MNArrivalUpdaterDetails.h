//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNEVChargingStateMonitor, MNNavigationSessionState;

__attribute__((visibility("hidden")))
@interface _MNArrivalUpdaterDetails : NSObject
{
    _Bool _isEVCharging;	// 8 = 0x8
    _Bool _isInParkingDetectionRegion;	// 9 = 0x9
    MNNavigationSessionState *_navigationSessionState;	// 16 = 0x10
    MNEVChargingStateMonitor *_evChargingStateMonitor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000111825
@property(nonatomic) _Bool isInParkingDetectionRegion; // @synthesize isInParkingDetectionRegion=_isInParkingDetectionRegion;
@property(retain, nonatomic) MNEVChargingStateMonitor *evChargingStateMonitor; // @synthesize evChargingStateMonitor=_evChargingStateMonitor;
@property(nonatomic) _Bool isEVCharging; // @synthesize isEVCharging=_isEVCharging;
@property(retain, nonatomic) MNNavigationSessionState *navigationSessionState; // @synthesize navigationSessionState=_navigationSessionState;

@end
