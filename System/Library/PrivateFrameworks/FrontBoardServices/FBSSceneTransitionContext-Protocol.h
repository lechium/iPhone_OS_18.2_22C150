//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKSAnimationFenceHandle, BSAnimationSettings, BSProcessHandle, FBProcessExecutionContext, FBSSceneUpdate, FBSceneUpdateContext, FBWatchdogTransitionContext, NSError, NSSet, RBSProcessHandle;

@protocol FBSSceneTransitionContext
@property(retain, nonatomic) BSProcessHandle *originatingProcess;
@property(copy, nonatomic) NSSet *actions;
@property(retain, nonatomic) BKSAnimationFenceHandle *animationFence;
@property(copy, nonatomic) BSAnimationSettings *animationSettings;

@optional
@property(retain, nonatomic) NSError *error;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSError",?,&,N

@property(nonatomic, getter=isRunningBoardAssertionDisabled) _Bool runningBoardAssertionDisabled;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisRunningBoardAssertionDisabled

@property(nonatomic) _Bool allowCPUThrottling;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(retain, nonatomic) FBWatchdogTransitionContext *watchdogTransitionContext;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"FBWatchdogTransitionContext",?,&,N

@property(retain, nonatomic) FBSceneUpdateContext *updateContext;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"FBSceneUpdateContext",?,&,N

@property(retain, nonatomic) RBSProcessHandle *clientProcessHandle;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"RBSProcessHandle",?,&,N

@property(retain, nonatomic) FBProcessExecutionContext *executionContext;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"FBProcessExecutionContext",?,&,N

@property(retain, nonatomic) FBSSceneUpdate *parentUpdate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"FBSSceneUpdate",?,&,N

@end
