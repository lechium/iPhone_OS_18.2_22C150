//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class FBSDisplayConfiguration, FBSSceneSettings, FBScene, NSSet, SBDeviceApplicationSceneHandle, SBSuspendedUnderLockManager;

@protocol SBSuspendedUnderLockManagerDelegate <NSObject>
- (NSSet *)suspendedUnderLockManagerVisibleScenes:(SBSuspendedUnderLockManager *)arg1;
- (NSSet *)runningApplicationScenes:(SBSuspendedUnderLockManager *)arg1;
- (_Bool)suspendedUnderLockManager:(SBSuspendedUnderLockManager *)arg1 shouldPreventSuspendUnderLockForScene:(FBScene *)arg2 settings:(FBSSceneSettings *)arg3;
- (_Bool)suspendedUnderLockManager:(SBSuspendedUnderLockManager *)arg1 shouldPreventUnderLockForScene:(FBScene *)arg2;
- (SBDeviceApplicationSceneHandle *)suspendedUnderLockManager:(SBSuspendedUnderLockManager *)arg1 sceneHandleForScene:(FBScene *)arg2;
- (FBSDisplayConfiguration *)suspendedUnderLockManagerDisplayConfiguration:(SBSuspendedUnderLockManager *)arg1;
@end
