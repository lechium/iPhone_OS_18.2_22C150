//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC9appstored13LaunchHistory : NSObject
{
    MISSING_TYPE *twentyEightDays;	// 8 = 0x8
    MISSING_TYPE *fiveMinutes;	// 16 = 0x10
    MISSING_TYPE *lockedThing;	// 24 = 0x18
}

+ (id)shared;	// IMP=0x0020000000043a70
- (void).cxx_destruct;	// IMP=0x00400000000484a0
- (id)init;	// IMP=0x00100000000483e0
- (id)getBiomeLaunchesWithLogKey:(id)arg1 dateInterval:(id)arg2 latestLaunchOnly:(_Bool)arg3;	// IMP=0x0010000000048300
- (id)syncLaunchesWithLogKey:(id)arg1;	// IMP=0x0010000000046a00
- (id)syncIfNeededWithLogKey:(id)arg1;	// IMP=0x0010000000045230
- (id)getLaunchesWithLogKey:(id)arg1 dateInterval:(id)arg2;	// IMP=0x0010000000044870
- (void)clearLaunchHistoryWithBundleIDs:(id)arg1;	// IMP=0x00100000000443c0

@end
