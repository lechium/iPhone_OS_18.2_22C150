//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreLocation/NSObject-Protocol.h>

@class NSArray, NSNumber;

@protocol CLLocationSmootherServerInterface <NSObject>

@optional
- (void)smoothLocations:(NSArray *)arg1 workoutActivity:(int)arg2 shouldReconstructRoute:(_Bool)arg3 timeIntervalsThatNeedPopulated:(NSArray *)arg4 handler:(void (^)(NSArray *, NSError *))arg5;
- (void)smoothLocations:(NSArray *)arg1 workoutActivity:(int)arg2 shouldReconstructRoute:(_Bool)arg3 handler:(void (^)(NSArray *, NSError *))arg4;
- (void)smoothLocations:(NSArray *)arg1 workoutActivity:(int)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (void)smoothLocations:(NSArray *)arg1 useType:(NSNumber *)arg2;
@end

