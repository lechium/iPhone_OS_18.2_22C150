//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocationManager, MNLocationProviderCLParameters, NSBundle, NSRunLoop, NSString;
@protocol MNLocationProviderDelegate;

__attribute__((visibility("hidden")))
@interface MNCoreLocationProvider : NSObject
{
    _Bool _hasQueriedAuthorization;	// 8 = 0x8
    CLLocationManager *_clLocationManager;	// 16 = 0x10
    MNLocationProviderCLParameters *_clParameters;	// 24 = 0x18
    id <MNLocationProviderDelegate> _delegate;	// 32 = 0x20
    int _authorizationStatus;	// 40 = 0x28
    _Bool _coarseModeEnabled;	// 44 = 0x2c
    NSBundle *_effectiveBundle;	// 48 = 0x30
    NSString *_effectiveBundleIdentifier;	// 56 = 0x38
    double _distanceFilter;	// 64 = 0x40
    double _desiredAccuracy;	// 72 = 0x48
    _Bool _matchInfoEnabled;	// 80 = 0x50
    NSRunLoop *_debug_initRunLoop;	// 88 = 0x58
    NSRunLoop *_debug_deinitRunLoop;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000006c86c
@property(readonly, nonatomic) _Bool coarseModeEnabled; // @synthesize coarseModeEnabled=_coarseModeEnabled;
@property(nonatomic) __weak id <MNLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;	// IMP=0x000000000006c7a0
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;	// IMP=0x000000000006c712
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;	// IMP=0x000000000006c684
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2;	// IMP=0x000000000006c4ff
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2;	// IMP=0x000000000006c37a
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;	// IMP=0x000000000006c344
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;	// IMP=0x000000000006c2a4
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x000000000006c169
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000006c062
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;	// IMP=0x000000000006c006
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x000000000006bd53
- (void)stopMonitoringForRegion:(id)arg1;	// IMP=0x000000000006bd3d
- (void)startMonitoringForRegion:(id)arg1;	// IMP=0x000000000006bd27
@property(readonly, nonatomic) double timeScale;
@property(readonly, nonatomic) unsigned long long traceVersion;
@property(readonly, nonatomic) _Bool isTracePlayer;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
@property(nonatomic) int headingOrientation;
@property(readonly, nonatomic) _Bool isAuthorized;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
- (void)_resetForNewEffectiveBundle;	// IMP=0x000000000006b6e1
- (void)resetForActiveTileGroupChanged;	// IMP=0x000000000006b624
- (void)stopUpdatingVehicleHeading;	// IMP=0x000000000006b5a3
- (void)startUpdatingVehicleHeading;	// IMP=0x000000000006b522
- (void)stopUpdatingVehicleSpeed;	// IMP=0x000000000006b4a1
- (void)startUpdatingVehicleSpeed;	// IMP=0x000000000006b420
- (void)stopUpdatingHeading;	// IMP=0x000000000006b373
- (void)startUpdatingHeading;	// IMP=0x000000000006b29d
- (void)requestLocation;	// IMP=0x000000000006b1f0
- (void)stopUpdatingLocation;	// IMP=0x000000000006b104
- (void)startUpdatingLocation;	// IMP=0x000000000006ae0c
- (void)setMatchInfoEnabled:(_Bool)arg1;	// IMP=0x000000000006adf3
- (void)setDesiredAccuracy:(double)arg1;	// IMP=0x000000000006add8
- (void)setDistanceFilter:(double)arg1;	// IMP=0x000000000006adc2
- (void)_updateCoarseModeEnabled;	// IMP=0x000000000006ac5d
- (void)_updateAuthorizationStatus;	// IMP=0x000000000006a99c
- (void)_updateForCLParameters:(id)arg1;	// IMP=0x000000000006a840
@property(readonly, nonatomic) CLLocationManager *_clLocationManager;
- (void)_createCLLocationManager;	// IMP=0x000000000006a21d
- (void)setCLParameters:(id)arg1;	// IMP=0x000000000006a1c3
- (void)_sharedInit;	// IMP=0x000000000006a18e
- (void)dealloc;	// IMP=0x0000000000069d93
- (id)initWithEffectiveBundleIdentifier:(id)arg1;	// IMP=0x0000000000069c77
- (id)initWithEffectiveBundle:(id)arg1;	// IMP=0x0000000000069b68
- (id)init;	// IMP=0x0000000000069a93

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

