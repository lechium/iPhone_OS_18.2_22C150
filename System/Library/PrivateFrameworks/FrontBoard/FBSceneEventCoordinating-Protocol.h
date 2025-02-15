//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBSSceneTransitionContext, FBSSceneUpdate, FBScene, NSSet, NSString;

@protocol FBSceneEventCoordinating <NSObject>
- (void)scene:(FBScene *)arg1 didReceiveActions:(NSSet *)arg2 forExtension:(Class)arg3;
- (void)scene:(FBScene *)arg1 deactivateAndInvalidate:(_Bool)arg2 withContext:(FBSSceneTransitionContext *)arg3 block:(void (^)(void))arg4;
- (void)scene:(FBScene *)arg1 didUpdateClientSettings:(FBSSceneUpdate *)arg2;
- (void)scene:(FBScene *)arg1 handleUpdate:(FBSSceneUpdate *)arg2 withCompletion:(void (^)(_Bool, NSError *))arg3;
- (void)scene:(FBScene *)arg1 enqueueCalloutsToObserversWithEventName:(NSString *)arg2 block:(void (^)(FBSceneObserver *))arg3;
- (void)scene:(FBScene *)arg1 performCalloutsToObservers:(void (^)(FBSceneObserver *, FBSceneManagerObserver *))arg2;
@end

