//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class MISSING_TYPE;

@interface _TtC17PromotedContentUI20TapGestureRecognizer : UIGestureRecognizer
{
    MISSING_TYPE *kMaximumTimeSinceTap;	// 8 = 0x8
    MISSING_TYPE *touchDownHandler;	// 16 = 0x10
    MISSING_TYPE *touchMovedHandler;	// 32 = 0x20
    MISSING_TYPE *touchUpHandler;	// 48 = 0x30
    MISSING_TYPE *shouldBlockNavigation;	// 64 = 0x40
    MISSING_TYPE *mostRecentTapLocation;	// 72 = 0x48
    MISSING_TYPE *lastTrackedTouch;	// 88 = 0x58
    MISSING_TYPE *mostRecentTapTimestamp;	// 96 = 0x60
    MISSING_TYPE *location;	// 112 = 0x70
    MISSING_TYPE *pointIsInsideView;	// 128 = 0x80
    MISSING_TYPE *preventedTouches;	// 136 = 0x88
    MISSING_TYPE *$__lazy_storage_$_scrollableAncestor;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000019ba0
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000019b20
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000019a70
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x0000000000019a60
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x0000000000019a50
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000019a40
- (void)reset;	// IMP=0x0000000000019a10
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000019860
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000194a0
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000019140
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000018dd0
- (id)init;	// IMP=0x0000000000018af0

@end
