//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACHAchievement, FIUIWorkoutActivityType, NSDate, NSNumber, NSString, NSUUID, _TtC10FitnessApp24TrophyCaseViewController, _TtC10FitnessApp27HistoryPagingViewController;

@protocol _TtP10FitnessApp23SummaryDeeplinkProvider_
- (void)showSummaryCardWithIdentifier:(long long)arg1;
- (void)navigateToTrophyCaseSection:(NSString *)arg1 withAchievementID:(NSString *)arg2 animated:(_Bool)arg3;
- (_TtC10FitnessApp24TrophyCaseViewController *)navigateToTrophyCaseAnimated:(_Bool)arg1 initialAchievement:(ACHAchievement *)arg2 shouldShowCelebration:(_Bool)arg3 forModalPresentation:(_Bool)arg4;
- (void)showLoad;
- (void)showTrendWithIdentifier:(long long)arg1 animated:(_Bool)arg2;
- (void)showAllTrendsAnimated:(_Bool)arg1;
- (void)showMindfulnessSessionWithUUID:(NSUUID *)arg1;
- (void)navigateToMindfulnessHistoryAnimated:(_Bool)arg1;
- (void)showWorkoutWithId:(NSUUID *)arg1 activityId:(NSUUID *)arg2 page:(NSString *)arg3;
- (void)navigateToWorkoutHistoryWithActivityType:(FIUIWorkoutActivityType *)arg1 animated:(_Bool)arg2;
- (void)navigateToHistoryAnimated:(_Bool)arg1;
- (_TtC10FitnessApp27HistoryPagingViewController *)showActivityOnDate:(NSDate *)arg1 shareImmediately:(_Bool)arg2 animated:(_Bool)arg3 forGoalCompleteNotification:(_Bool)arg4 goalRecommendation:(NSNumber *)arg5;
- (_TtC10FitnessApp27HistoryPagingViewController *)showTodayAndShareImmediately:(_Bool)arg1 animated:(_Bool)arg2 forGoalCompleteNotification:(_Bool)arg3 goalRecommendation:(NSNumber *)arg4;
- (void)presentAppSettingsShowingPane:(long long)arg1;
@end

