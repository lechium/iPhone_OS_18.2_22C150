//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLTimer;

@interface CLContextManagerAbsoluteAltimeter
{
    struct unique_ptr<CLLocationController_Type::Client, std::default_delete<CLLocationController_Type::Client>> _locationControllerClient;	// 40 = 0x28
    double _lastForcedWifiTime;	// 48 = 0x30
    double _lastForcedGPSTime;	// 56 = 0x38
    double _lastAltitudeSentTimestamp;	// 64 = 0x40
    _Bool _wifiInProgress;	// 72 = 0x48
    _Bool _GPSInProgress;	// 73 = 0x49
    _Bool _isCompanionConnected;	// 74 = 0x4a
    _Bool _doesCompanionHavePressureSensor;	// 75 = 0x4b
    _Bool _uncalibratedState;	// 76 = 0x4c
    double _lastDefaultLevelLogTimestamp;	// 80 = 0x50
    CLTimer *_forceWifiTimer;	// 88 = 0x58
    CLTimer *_forceGPSTimer;	// 96 = 0x60
    struct unique_ptr<CLPowerAssertion, std::default_delete<CLPowerAssertion>> _powerAssertionWifi;	// 104 = 0x68
    struct unique_ptr<CLPowerAssertion, std::default_delete<CLPowerAssertion>> _powerAssertionGPS;	// 112 = 0x70
    struct unique_ptr<CLCompanionNotifier_Type::Client, std::default_delete<CLCompanionNotifier_Type::Client>> fCompanionClient;	// 120 = 0x78
    unsigned long long _currentWetState;	// 128 = 0x80
    unsigned long long _currentStatusInfo;	// 136 = 0x88
    _Bool _userUnderground;	// 144 = 0x90
    _Bool _useAOPAltimeter;	// 145 = 0x91
}

- (id).cxx_construct;	// IMP=0x0020000000b019a4
- (void).cxx_destruct;	// IMP=0x0010000000b01916
- (void)onCompanionConnectionNotification:(int)arg1 data:(union NotificationData)arg2;	// IMP=0x0010000000b01701
- (void)chooseUncertaintyDuringWorkout:(double *)arg1 withAltitude:(double)arg2 atTime:(double)arg3;	// IMP=0x0010000000b010bc
- (void)calculateAndSendAltitudeFromBaro;	// IMP=0x0010000000afff3a
- (void)wetStateUpdated:(unsigned long long)arg1;	// IMP=0x0010000000affc05
- (void)filteredElevation:(double *)arg1 absAltUncertainty:(double *)arg2 withTimestamp:(double *)arg3;	// IMP=0x0010000000aff46f
- (double)capAccuracy:(double)arg1;	// IMP=0x0010000000aff459
- (void);	// IMP=0x0010000000afed9c
- (void)setTimerForGPSOff;	// IMP=0x0010000000afed77
- (void)setTimerForWifiOff;	// IMP=0x0010000000afed52
- (_Bool)shouldEnableGPSAtTime:(double)arg1;	// IMP=0x0010000000afed0f
- (_Bool)shouldEnableWifiAtTime:(double)arg1;	// IMP=0x0010000000afeccc
- (void)onForcedLocationNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0010000000afecc6
- (void)calculateAndSendAltitudeFromLocation;	// IMP=0x0010000000afce58
- (void)calculateAndSendAltitudeFromCompanion;	// IMP=0x0010000000afc68f
- (void)forceGPSIfUnderground;	// IMP=0x0010000000afbf9d
- (void)sourceUpdated:(unsigned long long)arg1;	// IMP=0x0010000000afbb22
- (void)dealloc;	// IMP=0x0010000000afbaaa
- (void)releasePowerAssertions;	// IMP=0x0010000000afba2b
- (void)teardownTimers;	// IMP=0x0010000000afb9ba
- (void)setupTimers;	// IMP=0x0010000000afb519
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2 withBuffer:(void *)arg3 withSourceAggregator:(id)arg4;	// IMP=0x0010000000afae12

@end

