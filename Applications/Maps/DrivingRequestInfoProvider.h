//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DrivePreferences, NSNumber, NSString, RoutePlanningTiming, WatchSyncedPreferences;

@interface DrivingRequestInfoProvider : NSObject
{
    WatchSyncedPreferences *_preferences;	// 8 = 0x8
    RoutePlanningTiming *_timing;	// 16 = 0x10
    NSNumber *_maximumRouteCountOverride;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000787bef
@property(copy, nonatomic) NSNumber *maximumRouteCountOverride; // @synthesize maximumRouteCountOverride=_maximumRouteCountOverride;
@property(readonly, nonatomic) RoutePlanningTiming *timing; // @synthesize timing=_timing;
@property(readonly, nonatomic) WatchSyncedPreferences *preferences; // @synthesize preferences=_preferences;
@property(readonly, nonatomic) unsigned long long maximumRouteCount;
- (void)updateWithRefinedWaypoints:(id)arg1;	// IMP=0x00100000007879da
- (id)makeRouteAttributesBuilderWithNavigationMode:(unsigned long long)arg1;	// IMP=0x001000000078796e
@property(readonly, nonatomic) DrivePreferences *drivePreferences;
- (id)initWithPreferences:(id)arg1 timing:(id)arg2;	// IMP=0x00100000007878c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

