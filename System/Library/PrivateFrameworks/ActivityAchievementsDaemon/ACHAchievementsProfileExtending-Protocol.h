//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActivityAchievementsDaemon/NSObject-Protocol.h>

@class ACHTemplateStore, NSObject, NSString;
@protocol ACHAchievementStoring, ACHEarnedInstanceAwarding, ACHTemplateSource;

@protocol ACHAchievementsProfileExtending <NSObject>
@property(readonly, nonatomic) ACHTemplateStore *templateStore;
@property(readonly, nonatomic) id <ACHAchievementStoring> achievementStore;
- (void)requestIncrementalEvaluationForAwardingSource:(NSString *)arg1 evaluationBlock:(NSSet * (^)(NSDateInterval *))arg2;
- (void)requestImmediateUpdateForTemplateSource:(NSObject<ACHTemplateSource> *)arg1;
- (void)deregisterTemplateSource:(NSObject<ACHTemplateSource> *)arg1 awardingSource:(NSObject<ACHEarnedInstanceAwarding> *)arg2;
- (void)registerTemplateSource:(NSObject<ACHTemplateSource> *)arg1 awardingSource:(NSObject<ACHEarnedInstanceAwarding> *)arg2;
@end

