//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@protocol HKWorkoutControlServer <NSObject>
- (void)remote_generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(void (^)(NSNumber *, NSError *))arg3;
- (void)remote_generatePauseOrResumeRequestAllowingBackgroundRuntime:(_Bool)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_finishAllWorkoutsWithCompletion:(void (^)(_Bool, NSError *))arg1;
@end

