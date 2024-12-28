//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@class UITouch;
@protocol _UIControlEventsGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface _UIControlEventsGestureRecognizer : UIGestureRecognizer
{
    struct {
        unsigned int touchInside:1;
        unsigned int touchDragged:1;
        unsigned int deliveredCancel:1;
    } _flags;	// 8 = 0x8
    UITouch *_activeTouch;	// 16 = 0x10
    id <_UIControlEventsGestureRecognizerDelegate> _controlEventsDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000a7bab8
@property(nonatomic) __weak id <_UIControlEventsGestureRecognizerDelegate> controlEventsDelegate; // @synthesize controlEventsDelegate=_controlEventsDelegate;
@property(readonly, nonatomic) UITouch *activeTouch; // @synthesize activeTouch=_activeTouch;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000a7ba37
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000a7b851
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000a7b69e
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000a7b5e6
- (void)reset;	// IMP=0x0000000000a7b558
- (void)gestureRecognizerFailed;	// IMP=0x0000000000a7b50c
- (void)sendControlEvent:(unsigned long long)arg1 withEvent:(id)arg2;	// IMP=0x0000000000a7b4ac

@end
