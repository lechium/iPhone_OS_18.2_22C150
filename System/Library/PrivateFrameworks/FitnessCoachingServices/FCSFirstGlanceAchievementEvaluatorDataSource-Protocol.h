//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FitnessCoachingServices/NSObject-Protocol.h>

@class NSArray, NSCalendar, NSDate;

@protocol FCSFirstGlanceAchievementEvaluatorDataSource <NSObject>
- (void)achievementsWithNames:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)monthlyChallengeForDate:(NSDate *)arg1 calendar:(NSCalendar *)arg2 completion:(void (^)(ACHAchievement *, NSError *))arg3;
@end

