//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSSet;

@protocol HKFeatureAvailabilityHealthDataRequirementStoreServer <NSObject>
- (void)remote_stopObservingChanges;
- (void)remote_startObservingChangesInRequirements:(NSSet *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_getEvaluationOfRequirements:(NSSet *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
@end
