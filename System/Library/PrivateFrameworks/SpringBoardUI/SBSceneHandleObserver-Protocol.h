//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUI/NSObject-Protocol.h>

@class FBSSceneClientSettingsDiff, FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext, FBScene, NSSet, SBSceneHandle, SBSceneManager;

@protocol SBSceneHandleObserver <NSObject>

@optional
- (void)sceneHandle:(SBSceneHandle *)arg1 didMoveFromSceneManager:(SBSceneManager *)arg2;
- (void)sceneHandle:(SBSceneHandle *)arg1 replacedWithSceneHandle:(SBSceneHandle *)arg2;
- (void)sceneHandle:(SBSceneHandle *)arg1 didUpdatePairingStatusForExternalSceneIdentifiers:(NSSet *)arg2;
- (void)sceneHandle:(SBSceneHandle *)arg1 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3;
- (void)sceneHandle:(SBSceneHandle *)arg1 didUpdateSettingsWithDiff:(FBSSceneSettingsDiff *)arg2 previousSettings:(FBSSceneSettings *)arg3;
- (void)sceneHandle:(SBSceneHandle *)arg1 didUpdateContentState:(long long)arg2;
- (void)sceneHandle:(SBSceneHandle *)arg1 didDestroyScene:(FBScene *)arg2;
- (void)sceneHandle:(SBSceneHandle *)arg1 didCreateScene:(FBScene *)arg2;
@end
