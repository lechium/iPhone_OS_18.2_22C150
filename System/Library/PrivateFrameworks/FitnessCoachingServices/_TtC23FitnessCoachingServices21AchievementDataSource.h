//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSCalendar, NSDate;

__attribute__((visibility("hidden")))
@interface _TtC23FitnessCoachingServices21AchievementDataSource : NSObject
{
    MISSING_TYPE *query;	// 8 = 0x8
    MISSING_TYPE *state;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000007c340
- (id)init;	// IMP=0x000000000007c2e0
- (void)achievementsWithNames:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;	// IMP=0x000000000007c950
- (void)monthlyChallengeForDate:(NSDate *)arg1 calendar:(NSCalendar *)arg2 completion:(void (^)(ACHAchievement *, NSError *))arg3;	// IMP=0x000000000007c4f0

@end
