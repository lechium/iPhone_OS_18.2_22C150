//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDateTime, _INPBDateTimeRange, _INPBLocationValue;

@protocol _INPBTrainTrip <NSObject>
@property(readonly, nonatomic) _Bool hasTripDuration;
@property(retain, nonatomic) _INPBDateTimeRange *tripDuration;
@property(readonly, nonatomic) _Bool hasTrainNumber;
@property(copy, nonatomic) NSString *trainNumber;
@property(readonly, nonatomic) _Bool hasTrainName;
@property(copy, nonatomic) NSString *trainName;
@property(readonly, nonatomic) _Bool hasProvider;
@property(copy, nonatomic) NSString *provider;
@property(readonly, nonatomic) _Bool hasOnlineCheckInTime;
@property(retain, nonatomic) _INPBDateTime *onlineCheckInTime;
@property(readonly, nonatomic) _Bool hasDepartureStationLocation;
@property(retain, nonatomic) _INPBLocationValue *departureStationLocation;
@property(readonly, nonatomic) _Bool hasDeparturePlatform;
@property(copy, nonatomic) NSString *departurePlatform;
@property(readonly, nonatomic) _Bool hasArrivalStationLocation;
@property(retain, nonatomic) _INPBLocationValue *arrivalStationLocation;
@property(readonly, nonatomic) _Bool hasArrivalPlatform;
@property(copy, nonatomic) NSString *arrivalPlatform;
@end

