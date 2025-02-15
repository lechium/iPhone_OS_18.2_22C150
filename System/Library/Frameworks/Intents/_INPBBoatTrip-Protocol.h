//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDateTimeRange, _INPBLocationValue;

@protocol _INPBBoatTrip <NSObject>
@property(readonly, nonatomic) _Bool hasTripDuration;
@property(retain, nonatomic) _INPBDateTimeRange *tripDuration;
@property(readonly, nonatomic) _Bool hasProvider;
@property(copy, nonatomic) NSString *provider;
@property(readonly, nonatomic) _Bool hasDepartureBoatTerminalLocation;
@property(retain, nonatomic) _INPBLocationValue *departureBoatTerminalLocation;
@property(readonly, nonatomic) _Bool hasBoatNumber;
@property(copy, nonatomic) NSString *boatNumber;
@property(readonly, nonatomic) _Bool hasBoatName;
@property(copy, nonatomic) NSString *boatName;
@property(readonly, nonatomic) _Bool hasArrivalBoatTerminalLocation;
@property(retain, nonatomic) _INPBLocationValue *arrivalBoatTerminalLocation;
@end

