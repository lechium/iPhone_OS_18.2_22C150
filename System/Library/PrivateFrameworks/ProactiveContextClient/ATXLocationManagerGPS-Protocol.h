//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLLocation, CLRegion, NSString;
@protocol ATXLocationManagerGPSDelegate;

@protocol ATXLocationManagerGPS
@property(readonly, nonatomic) _Bool preciseLocationEnabled;
@property(readonly, nonatomic) _Bool locationEnabled;
@property(readonly, nonatomic) CLLocation *location;
@property __weak id <ATXLocationManagerGPSDelegate> delegate;
- (void)updateLocationWithCompletionHandler:(void (^)(CLLocation *, NSError *))arg1;
- (CLLocation *)updateLocationWithTimeout:(double)arg1 requestPreciseLocation:(_Bool)arg2;
- (long long)stateForRegion:(CLRegion *)arg1 withTimeout:(double)arg2;
- (void)stopMonitoringRegionWithIdentifier:(NSString *)arg1;
- (void)beginMonitoringRegion:(CLRegion *)arg1;
@end

