//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LSRebuildStatisticsGatherer, NSError, NSMutableSet;

__attribute__((visibility("hidden")))
@interface LSDatabaseRebuildContext : NSObject
{
    LSRebuildStatisticsGatherer *_statsGatherer;	// 8 = 0x8
    NSMutableSet *_overriddenPlugins;	// 16 = 0x10
    NSError *_lastObservedError;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004c6f1
- (id)initWithStatsGatherer:(id)arg1;	// IMP=0x000000000004be1e

@end

