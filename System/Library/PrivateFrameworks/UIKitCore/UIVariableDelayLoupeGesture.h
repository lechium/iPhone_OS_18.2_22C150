//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILongPressGestureRecognizer.h"

@class UIResponder;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer
{
    UIResponder<UITextInput> *_textView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000016d84a0
@property __weak UIResponder<UITextInput> *textView; // @synthesize textView=_textView;
- (_Bool)_isGestureType:(long long)arg1;	// IMP=0x00000000016d845d
- (void)_startEnoughTimeElapsedTimer;	// IMP=0x00000000016d8368
@property(readonly, nonatomic) _Bool isLongPress;
- (_Bool)shouldUseLegacyBehavior;	// IMP=0x00000000016d820c
- (_Bool)isWithinRecentTap;	// IMP=0x00000000016d8134
- (_Bool)isCloseToCaret;	// IMP=0x00000000016d7f9e
- (_Bool)_tracksPointerTouch;	// IMP=0x00000000016d7f32
- (_Bool)_allowsForShortDelay;	// IMP=0x00000000016d7dfc
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000016d7d91
- (void)invalidate;	// IMP=0x0000000001731d50

@end
