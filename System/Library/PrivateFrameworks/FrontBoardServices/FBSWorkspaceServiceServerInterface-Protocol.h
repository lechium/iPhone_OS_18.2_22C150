//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBSSceneIdentity, FBSSceneMessage, FBSSceneParameters, FBSSceneSettingsDiff, FBSSceneTransitionContext, NSSet, NSString;
@protocol __BSAction__;

@protocol FBSWorkspaceServiceServerInterface
- (oneway void)willTerminateWithTransitionContext:(FBSSceneTransitionContext *)arg1;
- (oneway void)sceneID:(FBSSceneIdentity *)arg1 sendMessage:(FBSSceneMessage *)arg2 completion:(void (^)(FBSSceneMessage *, NSError *))arg3;
- (oneway void)sceneID:(FBSSceneIdentity *)arg1 sendActions:(NSSet<__BSAction__> *)arg2 toExtension:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (oneway void)sendActions:(NSSet<__BSAction__> *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)sceneID:(FBSSceneIdentity *)arg1 destroyWithTransitionContext:(FBSSceneTransitionContext *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)sceneID:(FBSSceneIdentity *)arg1 updateWithSettingsDiff:(FBSSceneSettingsDiff *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3 completion:(void (^)(NSError *))arg4;
- (oneway void)reconnectSceneWithIdentity:(FBSSceneIdentity *)arg1 parameters:(FBSSceneParameters *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3 completion:(void (^)(NSError *))arg4;
- (oneway void)createSceneWithIdentity:(FBSSceneIdentity *)arg1 parameters:(FBSSceneParameters *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3 completion:(void (^)(NSError *))arg4;
@end

