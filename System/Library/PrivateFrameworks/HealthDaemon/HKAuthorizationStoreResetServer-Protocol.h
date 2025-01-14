//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HKObjectType, HKSampleType, NSArray, NSDate, NSString;

@protocol HKAuthorizationStoreResetServer <NSObject>
- (void)remote_recalibrateEstimatesForSampleType:(HKSampleType *)arg1 effectiveDate:(NSDate *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_resetAuthorizationStatusesForObjects:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_resetObjectAuthorizationStatusForBundleIdentifier:(NSString *)arg1 objectType:(HKObjectType *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_resetAuthorizationStatusForBundleIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

