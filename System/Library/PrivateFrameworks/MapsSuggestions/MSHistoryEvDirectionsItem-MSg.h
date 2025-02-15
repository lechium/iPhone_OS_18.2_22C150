//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSync/MSHistoryEvDirectionsItem.h>

@class GEOStorageRouteRequestStorage, NSData, NSDate, NSString, NSUUID;

@interface MSHistoryEvDirectionsItem (MSg)
@property(readonly, nonatomic) double requiredBatteryCharge;

// Remaining properties
@property(readonly, copy, nonatomic) NSDate *createTime;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *identifier;
@property(readonly, nonatomic) _Bool navigationInterrupted;
@property(readonly, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage;
@property(readonly, nonatomic) NSData *sharedETAData;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *vehicleIdentifier;
@end

