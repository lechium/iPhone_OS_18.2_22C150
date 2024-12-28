//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/NSObject-Protocol.h>

@class NSString, REActivityTracker;

@protocol REActivityTrackerDelegate <NSObject>

@optional
- (void)activityTracker:(REActivityTracker *)arg1 didEndActivity:(NSString *)arg2 forObject:(id)arg3;
- (void)activityTracker:(REActivityTracker *)arg1 didBeginActivity:(NSString *)arg2 forObject:(id)arg3;
- (void)activityTracker:(REActivityTracker *)arg1 didEndActivity:(NSString *)arg2;
- (void)activityTracker:(REActivityTracker *)arg1 didBeginActivity:(NSString *)arg2;
@end
