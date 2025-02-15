//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer, UIKBKeyView, UIKeyboardLayoutStar, UIView;

__attribute__((visibility("hidden")))
@interface UIGestureKeyboardIntroduction : NSObject
{
    UIKeyboardLayoutStar *m_layout;	// 8 = 0x8
    UIView *m_view;	// 16 = 0x10
    UIKBKeyView *m_firstKeyView;	// 24 = 0x18
    UIKBKeyView *m_secondKeyView;	// 32 = 0x20
    CDUnknownBlockType m_completionBlock;	// 40 = 0x28
    double m_start;	// 48 = 0x30
    NSTimer *m_gestureKeyboardInfoTimer;	// 56 = 0x38
    struct CGPoint m_initPoint;	// 64 = 0x40
    _Bool m_isInTransition;	// 80 = 0x50
    _Bool m_hasPeeked;	// 81 = 0x51
    unsigned long long m_insertedTextLength;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000e606a7
- (void)dismissGestureKeyboardIntroduction;	// IMP=0x0000000000e60693
- (void)dismissGestureKeyboardIntroduction:(id)arg1;	// IMP=0x0000000000e6058c
- (void)playGestureKeyboardIntroduction:(id)arg1;	// IMP=0x0000000000e602f4
- (void)tryGestureKeyboardFromView:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e5fd07
- (void)insertText:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000e5fb2a
- (_Bool)showGestureKeyboardIntroduction;	// IMP=0x0000000000e5ebbf
- (id)initWithLayoutStar:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000e5eb14

@end

