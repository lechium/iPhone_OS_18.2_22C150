//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSTimer, TIHandwritingStrokes, UIDelayedAction, _UIDynamicCaretDot;

__attribute__((visibility("hidden")))
@interface _UIDynamicCaretInput : UIView
{
    struct CGContext *_bitmapContext;	// 8 = 0x8
    long long _fadeCount;	// 16 = 0x10
    struct CGPoint _lastViewLoc;	// 24 = 0x18
    struct CGRect _inkedAreaOfBitmapContext;	// 40 = 0x28
    NSTimer *_fadeTimer;	// 72 = 0x48
    TIHandwritingStrokes *_accumulatedStrokes;	// 80 = 0x50
    UIDelayedAction *_committedAction;	// 88 = 0x58
    _UIDynamicCaretDot *_dotView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000001728783
@property(retain, nonatomic) _UIDynamicCaretDot *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) UIDelayedAction *committedAction; // @synthesize committedAction=_committedAction;
@property(retain, nonatomic) TIHandwritingStrokes *accumulatedStrokes; // @synthesize accumulatedStrokes=_accumulatedStrokes;
@property(retain, nonatomic) NSTimer *fadeTimer; // @synthesize fadeTimer=_fadeTimer;
- (void)cancelTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000017286bc
- (void)endTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000017285c8
- (void)addTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000001728522
- (void)startTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000001728390
- (void)addInkPoint:(struct CGPoint)arg1 fromLastPoint:(_Bool)arg2;	// IMP=0x0000000001728170
- (void)send;	// IMP=0x00000000017280b0
- (void)clearAndNotify:(_Bool)arg1;	// IMP=0x0000000001727f8f
- (void)committedStrokes;	// IMP=0x0000000001727f5c
- (void)log;	// IMP=0x0000000001727c20
- (void)drawPoint:(struct CGPoint)arg1;	// IMP=0x0000000001727a39
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000001727998
- (void)_fadeInk;	// IMP=0x00000000017278c3
- (void)clearFadeTimer;	// IMP=0x0000000001727869
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;	// IMP=0x000000000172780c
- (double)inkWidth;	// IMP=0x00000000017277fe
@property(readonly, nonatomic) _Bool isInking;
@property(readonly, nonatomic) _Bool hasInk;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000017275e3
- (void)dealloc;	// IMP=0x00000000017275a2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000001727274

@end

