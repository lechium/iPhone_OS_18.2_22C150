//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIDragInteractionDriver.h"

@class NSSet, UIDelayedAction;

__attribute__((visibility("hidden")))
@interface _UIDragInteractionClickPresentationDriver : _UIDragInteractionDriver
{
    NSSet *_touches;	// 8 = 0x8
    CDUnknownBlockType _itemIterator;	// 16 = 0x10
    CDUnknownBlockType _sessionHandler;	// 24 = 0x18
    CDUnknownBlockType _liftCompletion;	// 32 = 0x20
    UIDelayedAction *_delayedLift;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000086b336
- (void)didTransitionToInflightState;	// IMP=0x000000000086b29e
- (void)didTransitionToInactiveState;	// IMP=0x000000000086b213
- (void)didTransitionToBeginState;	// IMP=0x000000000086b0e2
- (void)_performDelayedLift;	// IMP=0x000000000086b0ac
- (void)beginDragWithTouches:(id)arg1 itemIterator:(CDUnknownBlockType)arg2 beginningSessionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000086af65
- (void)beginLiftAtLocation:(struct CGPoint)arg1 useDefaultLiftAnimation:(_Bool)arg2 delay:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000086ae5c
- (_Bool)isLifted;	// IMP=0x000000000086ae46
- (_Bool)isPreparingToDrag;	// IMP=0x000000000086ae1c
- (_Bool)canBeginLiftAtLocation:(struct CGPoint)arg1;	// IMP=0x000000000086ad9c
- (void)cancel;	// IMP=0x000000000086ad3a

@end

