//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class CLLocation, CLRegion, NSBundle, NSSet;
@protocol HMDCLLocationManagerDelegate;

@protocol HMDCLLocationManager <NSObject>
+ (_Bool)locationServicesEnabled;
+ (int)authorizationStatusForBundle:(NSBundle *)arg1;
@property(readonly, copy, nonatomic) CLLocation *location;
@property(readonly, copy, nonatomic) NSSet *monitoredRegions;
@property(nonatomic) double desiredAccuracy;
@property(nonatomic) __weak id <HMDCLLocationManagerDelegate> delegate;
- (int)authorizationStatus;
- (void)requestStateForRegion:(CLRegion *)arg1;
- (void)stopMonitoringForRegion:(CLRegion *)arg1;
- (void)startMonitoringForRegion:(CLRegion *)arg1;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)requestLocation;
- (void)requestWhenInUseAuthorization;
@end

