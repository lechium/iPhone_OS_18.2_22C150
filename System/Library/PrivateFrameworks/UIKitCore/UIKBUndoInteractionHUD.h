//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSDate, UIKBUndoControl, UIKBUndoStyling, UILabel, UIVisualEffectView;
@protocol UIInteractiveUndoHUDActionDelegate;

__attribute__((visibility("hidden")))
@interface UIKBUndoInteractionHUD : UIView
{
    id <UIInteractiveUndoHUDActionDelegate> _actionDelegate;	// 8 = 0x8
    long long _mode;	// 16 = 0x10
    UIKBUndoControl *_leftButtonView;	// 24 = 0x18
    UIKBUndoControl *_rightButtonView;	// 32 = 0x20
    UIKBUndoControl *_aCutButtonView;	// 40 = 0x28
    UIKBUndoControl *_aCopyButtonView;	// 48 = 0x30
    UIKBUndoControl *_aPasteButtonView;	// 56 = 0x38
    UIVisualEffectView *_backgroundEffectView;	// 64 = 0x40
    UIVisualEffectView *_shadowView;	// 72 = 0x48
    UIView *_containerView;	// 80 = 0x50
    UIKBUndoStyling *_style;	// 88 = 0x58
    UILabel *_instructionalLabel;	// 96 = 0x60
    NSDate *_appearanceDate;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000011ab4e2
@property(retain, nonatomic) NSDate *appearanceDate; // @synthesize appearanceDate=_appearanceDate;
@property(retain, nonatomic) UILabel *instructionalLabel; // @synthesize instructionalLabel=_instructionalLabel;
@property(retain, nonatomic) UIKBUndoStyling *style; // @synthesize style=_style;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIVisualEffectView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIVisualEffectView *backgroundEffectView; // @synthesize backgroundEffectView=_backgroundEffectView;
@property(retain, nonatomic) UIKBUndoControl *aPasteButtonView; // @synthesize aPasteButtonView=_aPasteButtonView;
@property(retain, nonatomic) UIKBUndoControl *aCopyButtonView; // @synthesize aCopyButtonView=_aCopyButtonView;
@property(retain, nonatomic) UIKBUndoControl *aCutButtonView; // @synthesize aCutButtonView=_aCutButtonView;
@property(retain, nonatomic) UIKBUndoControl *rightButtonView; // @synthesize rightButtonView=_rightButtonView;
@property(retain, nonatomic) UIKBUndoControl *leftButtonView; // @synthesize leftButtonView=_leftButtonView;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <UIInteractiveUndoHUDActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)updateControlWithDirection:(long long)arg1 travelProgress:(double)arg2 isRTL:(_Bool)arg3;	// IMP=0x00000000011ab213
- (void)controlActionUpOutside:(id)arg1;	// IMP=0x00000000011ab1b0
- (void)controlActionUpInside:(id)arg1 forEvent:(id)arg2;	// IMP=0x00000000011aaf2c
- (void)controlActionDown:(id)arg1;	// IMP=0x00000000011aae8e
- (void)performDelegateRedoAndUpdateHUDIfNeeded;	// IMP=0x00000000011aae10
- (void)performDelegateUndoAndUpdateHUDIfNeeded;	// IMP=0x00000000011aad92
- (void)updateHUDControlState;	// IMP=0x00000000011aaa88
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000011aaa14
- (_Bool)availableOfControl:(id)arg1;	// IMP=0x00000000011aa890
- (id)controlForType:(long long)arg1;	// IMP=0x00000000011aa709
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000011aa696
- (void)layoutSubviews;	// IMP=0x00000000011aa592
- (id)createSeparatorView;	// IMP=0x00000000011aa457
- (id)initWithKeyboardAppearance:(long long)arg1 isRTL:(_Bool)arg2 mode:(long long)arg3 sceneBounds:(struct CGRect)arg4;	// IMP=0x00000000011a704e

@end

