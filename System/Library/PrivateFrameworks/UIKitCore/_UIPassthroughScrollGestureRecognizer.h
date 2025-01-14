//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@class NSString;
@protocol _UIPassthroughGestureDelegate;

__attribute__((visibility("hidden")))
@interface _UIPassthroughScrollGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _startPoint;	// 8 = 0x8
    double _startTime;	// 24 = 0x18
    struct CGVector _accumulatedScrollEventDelta;	// 32 = 0x20
    struct {
        unsigned int commandHeldThroughAllTouchPhases:1;
    } _flags;	// 48 = 0x30
    _Bool _endForPrimaryButtonDown;	// 52 = 0x34
    _Bool _endForSecondaryButtonDown;	// 53 = 0x35
    unsigned long long _endReason;	// 56 = 0x38
}

+ (_Bool)canHandleEventForPassthrough:(id)arg1;	// IMP=0x001000000037f77d
+ (_Bool)_supportsTouchContinuation;	// IMP=0x001000000037f132
@property(nonatomic) _Bool endForSecondaryButtonDown; // @synthesize endForSecondaryButtonDown=_endForSecondaryButtonDown;
@property(nonatomic) _Bool endForPrimaryButtonDown; // @synthesize endForPrimaryButtonDown=_endForPrimaryButtonDown;
@property(readonly, nonatomic) unsigned long long endReason; // @synthesize endReason=_endReason;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x000000000037fb97
- (void)_transformChangedWithEvent:(id)arg1;	// IMP=0x000000000037fabe
- (void)_scrollingChangedWithEvent:(id)arg1;	// IMP=0x000000000037f911
- (_Bool)shouldReceiveEvent:(id)arg1;	// IMP=0x000000000037f7d9
- (_Bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000037f6bc
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000037f6a5
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000037f581
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000037f406
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000037f2fa
- (void)_endWithReason:(unsigned long long)arg1;	// IMP=0x000000000037f2d8
- (void)_beginAtLocation:(struct CGPoint)arg1;	// IMP=0x000000000037f282
- (void)reset;	// IMP=0x000000000037f23f
- (id)_window;	// IMP=0x000000000037f22d
- (void)setView:(id)arg1;	// IMP=0x000000000037f13a
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000037f0dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <_UIPassthroughGestureDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

