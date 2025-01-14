//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IntelligencePlatform/NSCopying-Protocol.h>
#import <IntelligencePlatform/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSMeasurement;

@protocol GDKTSDataRepresentationProtocol <NSSecureCoding, NSCopying>
@property(readonly, nonatomic) NSArray *ktsSegmentIds;
@property(readonly, nonatomic) NSArray *lifeEventIds;
@property(readonly, nonatomic) NSArray *route;
@property(readonly, nonatomic) NSDictionary *roadTimes;
@property(readonly, nonatomic) NSDictionary *roadRelativeSpeedBuckets;
@property(readonly, nonatomic) NSDictionary *roadSpeedBuckets;
@property(readonly, nonatomic) NSDictionary *roadDistancesInMeters;
@property(readonly, nonatomic) int numHighSpeedEvents;
@property(readonly, nonatomic) int numAccelEvents;
@property(readonly, nonatomic) int numBrakingEvents;
@property(readonly, nonatomic) NSMeasurement *optimalUsageKwh;
@property(readonly, nonatomic) NSMeasurement *usageKwh;
@property(readonly, nonatomic) double score;
@property(readonly, nonatomic) NSMeasurement *averageSpeedInMetersPerSecond;
@property(readonly, nonatomic) NSArray *timePerTerrainType;
@property(readonly, nonatomic) NSArray *distancePerTerrainType;
@property(readonly, nonatomic) NSArray *timePerWeatherType;
@property(readonly, nonatomic) NSArray *distancePerWeatherType;
@property(readonly, nonatomic) NSArray *timePerRoadType;
@property(readonly, nonatomic) NSArray *distancePerRoadType;
@property(readonly, nonatomic) NSArray *timeSpentAtRelativeSpeeds;
@property(readonly, nonatomic) NSArray *distanceSpentAtRelativeSpeeds;
@property(readonly, nonatomic) NSArray *timeSpentAtSpeedBuckets;
@property(readonly, nonatomic) NSArray *distanceSpentAtSpeedBuckets;
@property(readonly, nonatomic) NSArray *timeSpentInTrafficBuckets;
@property(readonly, nonatomic) NSArray *distanceSpentInTrafficBuckets;
@property(readonly, nonatomic) NSMeasurement *expectedDurationInSecondsNoTraffic;
@property(readonly, nonatomic) NSMeasurement *durationInSeconds;
@property(readonly, nonatomic) NSArray *distanceBuckets;
@property(readonly, nonatomic) NSMeasurement *elevationGainInMeters;
@property(readonly, nonatomic) NSMeasurement *distanceInMeters;
@property(readonly, nonatomic) NSDate *endTime;
@property(readonly, nonatomic) NSDate *startTime;
@end

