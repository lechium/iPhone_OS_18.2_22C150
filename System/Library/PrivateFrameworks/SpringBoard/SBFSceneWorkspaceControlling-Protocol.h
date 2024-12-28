//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class FBSSceneIdentityToken, FBScene, NSArray, NSString, RBSProcessHandle, RBSProcessIdentity, UISceneRequestOptions;
@protocol SBFSceneWorkspaceControlling;

@protocol SBFSceneWorkspaceControlling <NSObject>
- (id <SBFSceneWorkspaceControlling>)sceneWorkspaceControllerForProcessIdentity:(RBSProcessIdentity *)arg1;
- (_Bool)enumerateScenesWithBlock:(void (^)(FBScene *, _Bool *))arg1;
- (FBScene *)sceneFromIdentityTokenStringRepresentation:(NSString *)arg1;
- (FBScene *)sceneFromIdentityToken:(FBSSceneIdentityToken *)arg1;
- (void)destroyScenesWithPersistentIdentifiers:(NSArray *)arg1 processIdentity:(RBSProcessIdentity *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)activateSceneForProcessIdentity:(RBSProcessIdentity *)arg1 withHandle:(RBSProcessHandle *)arg2 options:(UISceneRequestOptions *)arg3 completion:(void (^)(FBScene *, NSError *))arg4;
@end
