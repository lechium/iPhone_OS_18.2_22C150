//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SeparationAlerts/NSObject-Protocol.h>

@class CLRegion, NSUUID, SASafeLocation;

@protocol SAFenceManagerClientProtocol <NSObject>

@optional
- (void)removeGeofence:(CLRegion *)arg1;
- (void)addGeofence:(CLRegion *)arg1;
- (void)didDetermineState:(unsigned long long)arg1 forUnsafeLocation:(CLRegion *)arg2 forDevice:(NSUUID *)arg3;
- (void)didDetermineState:(unsigned long long)arg1 forSafeLocation:(SASafeLocation *)arg2 forDevice:(NSUUID *)arg3;
@end

