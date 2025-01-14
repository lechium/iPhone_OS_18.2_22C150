//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, _UIStatusBarCycleLayerAnimation;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCycleAnimation : NSObject
{
    _Bool _stopsAfterReversing;	// 8 = 0x8
    _Bool _visible;	// 9 = 0x9
    NSArray *_layerAnimations;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    NSArray *_stoppingLayerAnimations;	// 32 = 0x20
    NSMutableArray *_completionHandlers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000014f8094
@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) NSArray *stoppingLayerAnimations; // @synthesize stoppingLayerAnimations=_stoppingLayerAnimations;
@property(nonatomic) _Bool stopsAfterReversing; // @synthesize stopsAfterReversing=_stopsAfterReversing;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSArray *layerAnimations; // @synthesize layerAnimations=_layerAnimations;
@property(readonly, copy) NSString *description;
- (void)_sendCompletionsWithFinished:(_Bool)arg1;	// IMP=0x00000000014f7e03
- (void)_stopStoppingAnimations;	// IMP=0x00000000014f7c31
- (void)_stopAnimations;	// IMP=0x00000000014f7a66
- (void)_startAnimations;	// IMP=0x00000000014f7839
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00000000014f77f2
- (void)resumePersistentAnimation;	// IMP=0x00000000014f77d3
- (void)pausePersistentAnimation;	// IMP=0x00000000014f77bd
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000014f6f0d
- (void)start;	// IMP=0x00000000014f6de9
@property(readonly, nonatomic) _UIStatusBarCycleLayerAnimation *mainLayerAnimation;
- (void)dealloc;	// IMP=0x00000000014f6d95
- (id)initWithLayerAnimations:(id)arg1;	// IMP=0x00000000014f6c7a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

