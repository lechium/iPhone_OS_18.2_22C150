//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/NSObject-Protocol.h>

@class GEOMapRegion, NSObject;
@protocol OS_dispatch_queue;

@protocol MKMapServiceSpatialPlaceLookupTicket <NSObject>
@property(readonly, nonatomic) GEOMapRegion *boundingRegion;
- (void)cancel;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
@end

