//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOMapLine-Protocol.h>

@class NSString;
@protocol GEOMapTransitStop;

@protocol GEOMapTransitLink <GEOMapLine>
@property(readonly, nonatomic) id <GEOMapTransitStop> stopTo;
@property(readonly, nonatomic) id <GEOMapTransitStop> stopFrom;
@property(readonly, nonatomic) unsigned int minimumTravelTime;
@property(readonly, nonatomic) NSString *internalLineName;
@property(readonly, nonatomic) unsigned long long transitLineID;
- (double)distanceInMetersFrom:(CDStruct_c3b9c2ee)arg1 outClosestCoordinateOnLine:(CDStruct_c3b9c2ee *)arg2;
@end
