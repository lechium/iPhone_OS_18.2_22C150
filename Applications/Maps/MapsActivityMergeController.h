//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, RichMapsActivity;

@interface MapsActivityMergeController : NSObject
{
    NSArray *_activities;	// 8 = 0x8
    RichMapsActivity *_mergedActivity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000e85181
- (long long)_forcedViewMode;	// IMP=0x0010000000e850ae
- (void)_mergeActivities;	// IMP=0x0010000000e84bbe
- (void)_mergeActivitiesIfNeeded;	// IMP=0x0010000000e8492e
- (id)_performProcess;	// IMP=0x0010000000e84909
- (id)mergeActivities:(id)arg1;	// IMP=0x0010000000e848b4

@end
