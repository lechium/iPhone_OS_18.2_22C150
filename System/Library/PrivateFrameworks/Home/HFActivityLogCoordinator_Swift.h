//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/SwiftNativeNSObject.h>

@class MISSING_TYPE;

@interface HFActivityLogCoordinator_Swift : SwiftNativeNSObject
{
    MISSING_TYPE *$defaultActor;	// 4277009103 = 0xfeedfacf
    MISSING_TYPE *home;	// 112 = 0x70
    MISSING_TYPE *_eventsByDate;	// 0 = 0x0
    MISSING_TYPE *_lastError;	// 0 = 0x0
    MISSING_TYPE *_activelyFetching;	// 0 = 0x0
    MISSING_TYPE *queryController;	// 2147484672 = 0x80000400
    MISSING_TYPE *oneMonthAgo;	// 0 = 0x0
    MISSING_TYPE *fetchCount;	// 0 = 0x0
    MISSING_TYPE *oldestFetchStartDate;	// 1953718111 = 0x74735f5f
    MISSING_TYPE *updateTimer;	// 0 = 0x0
}

- (id)init;	// IMP=0x000000000005b7e0
- (void)eventsExistWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;	// IMP=0x00000000000588c0
- (id)initWithHome:(id)arg1;	// IMP=0x0000000000056aa0

@end
