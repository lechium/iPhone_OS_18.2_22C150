//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface HighlightRecognizer : UIGestureRecognizer
{
    unsigned long long _numberOfTouches;	// 8 = 0x8
    id _highlightTarget;	// 16 = 0x10
    SEL _highlightAction;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a4c17
@property(nonatomic) SEL highlightAction; // @synthesize highlightAction=_highlightAction;
@property(nonatomic) __weak id highlightTarget; // @synthesize highlightTarget=_highlightTarget;
- (void)reset;	// IMP=0x00000000000a4b0e
- (unsigned long long)numberOfTouches;	// IMP=0x00000000000a4afd
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000a49fd
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000a48fd
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000a47fd
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000a479d

@end
