//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSScene, FBSSceneTransitionContext;

__attribute__((visibility("hidden")))
@interface _FBSystemAppSceneInfo : NSObject
{
    _Bool hasHandledSceneCreate;	// 8 = 0x8
    _Bool hasSentFBSWorkspaceDelegateSceneCreate;	// 9 = 0x9
    FBSScene *FBSScene;	// 16 = 0x10
    FBSSceneTransitionContext *pendingTransitionContext;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005beac
@property(retain, nonatomic) FBSSceneTransitionContext *pendingTransitionContext; // @synthesize pendingTransitionContext;
@property(nonatomic) _Bool hasSentFBSWorkspaceDelegateSceneCreate; // @synthesize hasSentFBSWorkspaceDelegateSceneCreate;
@property(nonatomic) _Bool hasHandledSceneCreate; // @synthesize hasHandledSceneCreate;
@property(retain, nonatomic) FBSScene *FBSScene; // @synthesize FBSScene;

@end
