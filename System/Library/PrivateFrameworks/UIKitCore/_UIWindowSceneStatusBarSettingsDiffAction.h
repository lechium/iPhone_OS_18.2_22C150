//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIApplicationSceneSettingsDiffInspector;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneStatusBarSettingsDiffAction : NSObject
{
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsStatusBarDiffInspector;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000573335
@property(retain, nonatomic) UIApplicationSceneSettingsDiffInspector *sceneSettingsStatusBarDiffInspector; // @synthesize sceneSettingsStatusBarDiffInspector=_sceneSettingsStatusBarDiffInspector;
- (void)_updateForcedStatusBarForegroundTransparentWithSceneSettings:(id)arg1 transitionContext:(id)arg2;	// IMP=0x00000000005730d3
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;	// IMP=0x0000000000572ce5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
