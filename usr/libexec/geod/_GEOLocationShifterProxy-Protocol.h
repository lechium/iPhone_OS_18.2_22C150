//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GEOApplicationAuditToken, GEOLatLng, GEOMapRegion, NSCache, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@protocol _GEOLocationShifterProxy <NSObject>
@property(readonly, nonatomic) NSCache *memoryCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (void)fetchCachedShiftFunctionResponseForLocation:(GEOLatLng *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 completionHandler:(void (^)(GEOLocationShiftFunctionResponse *, NSError *))arg3;
- (void)getAllShiftEntries:(NSObject<OS_dispatch_group> *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 handler:(void (^)(NSDate *, double, double, double))arg3;
- (void)flushDiskCache;
- (void)pruneDiskCache;
- (void)shiftLatLng:(GEOLatLng *)arg1 auditToken:(GEOApplicationAuditToken *)arg2 completionHandler:(void (^)(GEOLocationShiftFunctionResponse *, NSError *))arg3;
- (unsigned int)locationShiftFunctionVersion;
- (_Bool)isLocationShiftRequiredForRegion:(GEOMapRegion *)arg1;
- (_Bool)isLocationShiftRequiredForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (_Bool)isLocationShiftEnabled;
@end

