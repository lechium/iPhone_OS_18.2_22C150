//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@protocol HKClinicalSharingServerInterface
- (void)remote_submitOnboardingAnalyticsForStepIdentifier:(NSString *)arg1 context:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_submitDailyAnalyticsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_gatherQueryDiagnosticsWithOptions:(unsigned long long)arg1 date:(NSDate *)arg2 completion:(void (^)(NSURL *, NSError *))arg3;
- (void)remote_scheduleSharingHealthDataWithReason:(long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_shareHealthDataWithOptions:(unsigned long long)arg1 reason:(long long)arg2 date:(NSDate *)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
@end

