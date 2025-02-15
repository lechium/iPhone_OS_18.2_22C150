//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileStoreUI/NSObject-Protocol.h>

@class ASDJobManager, NSArray;

@protocol ASDJobManagerObserver <NSObject>

@optional
- (void)jobManager:(ASDJobManager *)arg1 updatedStateOfJobs:(NSArray *)arg2;
- (void)jobManager:(ASDJobManager *)arg1 updatedProgressOfJobs:(NSArray *)arg2;
- (void)jobManager:(ASDJobManager *)arg1 completedJobs:(NSArray *)arg2;
- (void)jobManager:(ASDJobManager *)arg1 changedJobs:(NSArray *)arg2;
@end

