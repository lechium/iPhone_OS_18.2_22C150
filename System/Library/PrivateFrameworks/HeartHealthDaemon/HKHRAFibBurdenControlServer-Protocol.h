//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HeartHealthDaemon/NSObject-Protocol.h>

@class HKFeatureStatus, HKHRAFibBurdenNotificationMode, NSArray, NSNumber, NSUUID;

@protocol HKHRAFibBurdenControlServer <NSObject>
- (void)remote_fetchSevenDayAnalysisBreadcrumbsWithCompletion:(void (^)(HKHRAFibBurdenSevenDayAnalysisBreadcrumbs *, NSError *))arg1;
- (void)remote_sendNotificationWithMode:(HKHRAFibBurdenNotificationMode *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_injectBurdenValues:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_performAnalysisForWeekContainingDayIndex:(long long)arg1 completion:(void (^)(HKHRAFibBurdenSevenDayAnalysisResults *, NSError *))arg2;
- (void)remote_addTachogramsForStartDayIndex:(long long)arg1 endDayIndex:(long long)arg2 chanceOfAFib:(NSNumber *)arg3 chanceOfWrite:(NSNumber *)arg4 minutesBetweenSamples:(NSNumber *)arg5 startingHour:(NSNumber *)arg6 endingHour:(NSNumber *)arg7 completion:(void (^)(_Bool, NSError *))arg8;
- (void)remote_queryEligibleTachogramsForPreviousSixWeeksForTimeOfDayBucket:(long long)arg1 completion:(void (^)(HKHRSampleClassificationCollectionCollection *, NSError *))arg2;
- (void)remote_queryEligibleTachogramsForPreviousSixWeeksForWeekday:(long long)arg1 completion:(void (^)(HKHRSampleClassificationCollectionCollection *, NSError *))arg2;
- (void)remote_queryEligibleTachogramsForStartDayIndex:(long long)arg1 endDayIndex:(long long)arg2 completion:(void (^)(HKHRSampleClassificationCollectionCollection *, NSError *))arg3;
- (void)remote_determineMajorityTimeZoneForStartDayIndex:(long long)arg1 endDayIndex:(long long)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)remote_deleteTachogramClassificationForSampleUUID:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_deleteAllTachogramClassificationsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_queryTachogramClassificationForSampleUUID:(NSUUID *)arg1 completion:(void (^)(HKHRSampleClassification *, NSError *))arg2;
- (void)remote_queryAllTachogramClassificationsWithCompletion:(void (^)(HKHRSampleClassificationCollection *, NSError *))arg1;
- (void)remote_addTachogramClassificationForSampleUUID:(NSUUID *)arg1 hasAFib:(_Bool)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_determineIfAnalysisCanRunWithFeatureStatus:(HKFeatureStatus *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)remote_triggerAnalysis;
@end

