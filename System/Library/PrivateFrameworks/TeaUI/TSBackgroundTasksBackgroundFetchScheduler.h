//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface TSBackgroundTasksBackgroundFetchScheduler : NSObject
{
    MISSING_TYPE *application;	// 8 = 0x8
    MISSING_TYPE *taskIdentifier;	// 16 = 0x10
    MISSING_TYPE *minimumBackgroundFetchInterval;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000010035f
- (id)init;	// IMP=0x00000000001002ef
- (void)prepareForUseWithApplicationDelegate:(id)arg1;	// IMP=0x0000000000100205
- (void)setMinimumBackgroundFetchInterval:(double)arg1;	// IMP=0x00000000000ffea1
- (id)initWithApplication:(id)arg1 taskIdentifier:(id)arg2;	// IMP=0x00000000000ffa6b

@end

