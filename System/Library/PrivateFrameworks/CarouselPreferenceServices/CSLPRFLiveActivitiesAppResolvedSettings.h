//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CSLPRFLiveActivitiesAppProperties;

__attribute__((visibility("hidden")))
@interface CSLPRFLiveActivitiesAppResolvedSettings : NSObject
{
    id <CSLPRFLiveActivitiesAppProperties> _settings;	// 8 = 0x8
    id <CSLPRFLiveActivitiesAppProperties> _globalSettings;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002d9d3
- (_Bool)isEqualToSettings:(id)arg1;	// IMP=0x000000000002d9c6
@property(readonly, nonatomic) unsigned long long autoLaunchBehaviorForApp;
@property(readonly, nonatomic) _Bool allowLiveActivitiesForApp;
@property(readonly, nonatomic) _Bool globalAutoLaunchLiveActivities;
@property(readonly, nonatomic) _Bool globalAllowLiveActivities;
@property(readonly, nonatomic) _Bool supportsSmartStack;
- (id)initWithSettings:(id)arg1 globalSettings:(id)arg2;	// IMP=0x000000000002d2e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
