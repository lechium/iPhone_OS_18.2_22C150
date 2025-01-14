//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIView, _UIPageCurl;

__attribute__((visibility("hidden")))
@interface _UIPageCurlState
{
    _UIPageCurl *_pageCurl;	// 8 = 0x8
    long long _curlType;	// 16 = 0x10
    struct CGPoint _initialLocation;	// 24 = 0x18
    struct CGPoint _referenceLocation;	// 40 = 0x28
    UIView *_frontPageView;	// 56 = 0x38
    UIView *_backPageView;	// 64 = 0x40
    UIView *_frontView;	// 72 = 0x48
    UIView *_backView;	// 80 = 0x50
    long long _completionCount;	// 88 = 0x58
    long long _curlState;	// 96 = 0x60
    _Bool _finished;	// 104 = 0x68
    _Bool _willComplete;	// 105 = 0x69
    CDUnknownBlockType _finally;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000814882
@property(readonly, nonatomic) long long curlState; // @synthesize curlState=_curlState;
@property(readonly, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(readonly, nonatomic) UIView *frontView; // @synthesize frontView=_frontView;
@property(readonly, nonatomic) struct CGPoint referenceLocation; // @synthesize referenceLocation=_referenceLocation;
@property(readonly, nonatomic) struct CGPoint initialLocation; // @synthesize initialLocation=_initialLocation;
@property(readonly, nonatomic) long long curlType; // @synthesize curlType=_curlType;
@property(readonly, nonatomic) _UIPageCurl *pageCurl; // @synthesize pageCurl=_pageCurl;
- (_Bool)isCompatibleWithCurlOfType:(long long)arg1 inDirection:(long long)arg2;	// IMP=0x000000000081474c
- (long long)_effectiveTransitionDirection;	// IMP=0x000000000081471a
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000000081468d
- (void)cleanup;	// IMP=0x0000000000814665
- (void)cleanupWithFinishedState:(_Bool)arg1 completedState:(_Bool)arg2;	// IMP=0x00000000008145ef
- (void)finally;	// IMP=0x00000000008145b8
- (void)incrementCompletionCount;	// IMP=0x00000000008145a7
@property(readonly, nonatomic, getter=hasPendingAnimations) _Bool pendingAnimations;
- (void)setCurlState:(long long)arg1 willComplete:(_Bool)arg2;	// IMP=0x00000000008144bb
- (void)addBackPageContent;	// IMP=0x000000000081440a
- (void)addFrontPageContent;	// IMP=0x0000000000814359
@property(readonly, nonatomic) UIView *backPageView;
@property(readonly, nonatomic) UIView *frontPageView;
- (struct CGRect)_pageViewFrame;	// IMP=0x0000000000813cff
- (void)invalidatePageCurl;	// IMP=0x0000000000813cde
- (void)dealloc;	// IMP=0x0000000000813ca0
- (id)initWithPageCurl:(id)arg1 andCurlType:(long long)arg2 fromLocation:(struct CGPoint)arg3 withReferenceLocation:(struct CGPoint)arg4 inDirection:(long long)arg5 withView:(id)arg6 revealingView:(id)arg7 completion:(CDUnknownBlockType)arg8 finally:(CDUnknownBlockType)arg9;	// IMP=0x0000000000813af0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

