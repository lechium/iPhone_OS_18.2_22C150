//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class FBSSceneIdentityToken, FBScene, NSError, SBTraitsSceneParticipantDelegate;
@protocol SBScenePresentingDelegate;

@protocol SBScenePresenting <NSObject>
- (NSError *)dismissScene:(FBScene *)arg1;
- (NSError *)presentScene:(FBScene *)arg1 viewControllerBuilderBlock:(id <SBSceneViewControllerBuilding> (^)(void))arg2;

@optional
- (_Bool)isVisibleOnScreen;
- (FBSSceneIdentityToken *)parentSceneIdentityToken;
- (void)setPresentingDelegate:(id <SBScenePresentingDelegate>)arg1;
- (void)scene:(FBScene *)arg1 didChangeTraitsParticipantDelegate:(SBTraitsSceneParticipantDelegate *)arg2;
- (void)scene:(FBScene *)arg1 hasVisibleContent:(_Bool)arg2;
- (void)sceneDidChangeDisplayIdentity:(FBScene *)arg1;
@end

