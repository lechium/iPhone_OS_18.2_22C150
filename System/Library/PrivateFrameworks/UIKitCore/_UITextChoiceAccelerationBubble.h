//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class BKSHIDEventAuthenticationMessage, CAShapeLayer, NSArray, NSLayoutConstraint, NSString, TIKeyboardCandidate, UIColor, UIDictationGlowEffect, UILayoutGuide, UIScrollView, UIStackView, UIView, UIVisualEffectView, _UIReplacementCandidate, _UITextOption;

__attribute__((visibility("hidden")))
@interface _UITextChoiceAccelerationBubble : UIControl
{
    _Bool _shouldRejectCandidate;	// 8 = 0x8
    _Bool _needsRTLCheck;	// 9 = 0x9
    _Bool _isDismissing;	// 10 = 0xa
    UILayoutGuide *_textAnchor;	// 16 = 0x10
    NSLayoutConstraint *_anchorLeading;	// 24 = 0x18
    NSLayoutConstraint *_anchorTop;	// 32 = 0x20
    NSLayoutConstraint *_anchorWidth;	// 40 = 0x28
    NSLayoutConstraint *_anchorHeight;	// 48 = 0x30
    NSArray *_boundaryConstraints;	// 56 = 0x38
    NSLayoutConstraint *_leadingSpacing;	// 64 = 0x40
    NSArray *_belowTextConstraints;	// 72 = 0x48
    NSArray *_aboveTextConstraints;	// 80 = 0x50
    TIKeyboardCandidate *_candidate;	// 88 = 0x58
    double _secureCandidateHeight;	// 96 = 0x60
    _UIReplacementCandidate *_replacement;	// 104 = 0x68
    NSString *_selectedChoice;	// 112 = 0x70
    TIKeyboardCandidate *_selectedCandidateChoice;	// 120 = 0x78
    UIView *_parentView;	// 128 = 0x80
    long long _buttonType;	// 136 = 0x88
    UIVisualEffectView *_backgroundView;	// 144 = 0x90
    CAShapeLayer *_backgroundMaskLayer;	// 152 = 0x98
    UIStackView *_contentsView;	// 160 = 0xa0
    UIScrollView *_backingScrollView;	// 168 = 0xa8
    _UITextOption *_sideButton;	// 176 = 0xb0
    NSArray *_buttonConstraints;	// 184 = 0xb8
    UIView *_textHighlightView;	// 192 = 0xc0
    UIDictationGlowEffect *_dictationGlowEffect;	// 200 = 0xc8
    long long _promptStyle;	// 208 = 0xd0
    UIColor *_optionalTintColor;	// 216 = 0xd8
    unsigned long long _labelNumber;	// 224 = 0xe0
    BKSHIDEventAuthenticationMessage *_authenticationMessage;	// 232 = 0xe8
    struct _NSRange _deltaRange;	// 240 = 0xf0
    struct _NSRange _originalSelectedRange;	// 256 = 0x100
    struct CGRect _referenceRect;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x0000000000b67673
@property(retain, nonatomic) BKSHIDEventAuthenticationMessage *authenticationMessage; // @synthesize authenticationMessage=_authenticationMessage;
@property(nonatomic) struct _NSRange originalSelectedRange; // @synthesize originalSelectedRange=_originalSelectedRange;
@property(nonatomic) struct _NSRange deltaRange; // @synthesize deltaRange=_deltaRange;
@property(nonatomic) unsigned long long labelNumber; // @synthesize labelNumber=_labelNumber;
@property(nonatomic) UIColor *optionalTintColor; // @synthesize optionalTintColor=_optionalTintColor;
@property long long promptStyle; // @synthesize promptStyle=_promptStyle;
@property(nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
@property(nonatomic) _Bool needsRTLCheck; // @synthesize needsRTLCheck=_needsRTLCheck;
@property(retain, nonatomic) UIDictationGlowEffect *dictationGlowEffect; // @synthesize dictationGlowEffect=_dictationGlowEffect;
@property(retain, nonatomic) UIView *textHighlightView; // @synthesize textHighlightView=_textHighlightView;
@property(retain, nonatomic) NSArray *buttonConstraints; // @synthesize buttonConstraints=_buttonConstraints;
@property(retain, nonatomic) _UITextOption *sideButton; // @synthesize sideButton=_sideButton;
@property(retain, nonatomic) UIScrollView *backingScrollView; // @synthesize backingScrollView=_backingScrollView;
@property(retain, nonatomic) UIStackView *contentsView; // @synthesize contentsView=_contentsView;
@property(retain, nonatomic) CAShapeLayer *backgroundMaskLayer; // @synthesize backgroundMaskLayer=_backgroundMaskLayer;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(readonly, nonatomic) TIKeyboardCandidate *selectedCandidateChoice; // @synthesize selectedCandidateChoice=_selectedCandidateChoice;
@property(readonly, nonatomic) NSString *selectedChoice; // @synthesize selectedChoice=_selectedChoice;
@property(retain, nonatomic) _UIReplacementCandidate *replacement; // @synthesize replacement=_replacement;
@property(nonatomic) _Bool shouldRejectCandidate; // @synthesize shouldRejectCandidate=_shouldRejectCandidate;
@property(nonatomic) double secureCandidateHeight; // @synthesize secureCandidateHeight=_secureCandidateHeight;
@property(retain, nonatomic) TIKeyboardCandidate *candidate; // @synthesize candidate=_candidate;
@property(nonatomic) struct CGRect referenceRect; // @synthesize referenceRect=_referenceRect;
@property(retain, nonatomic) NSArray *aboveTextConstraints; // @synthesize aboveTextConstraints=_aboveTextConstraints;
@property(retain, nonatomic) NSArray *belowTextConstraints; // @synthesize belowTextConstraints=_belowTextConstraints;
@property(retain, nonatomic) NSLayoutConstraint *leadingSpacing; // @synthesize leadingSpacing=_leadingSpacing;
@property(retain, nonatomic) NSArray *boundaryConstraints; // @synthesize boundaryConstraints=_boundaryConstraints;
@property(retain, nonatomic) NSLayoutConstraint *anchorHeight; // @synthesize anchorHeight=_anchorHeight;
@property(retain, nonatomic) NSLayoutConstraint *anchorWidth; // @synthesize anchorWidth=_anchorWidth;
@property(retain, nonatomic) NSLayoutConstraint *anchorTop; // @synthesize anchorTop=_anchorTop;
@property(retain, nonatomic) NSLayoutConstraint *anchorLeading; // @synthesize anchorLeading=_anchorLeading;
@property(retain, nonatomic) UILayoutGuide *textAnchor; // @synthesize textAnchor=_textAnchor;
- (int)textEffectsVisibilityLevel;	// IMP=0x0000000000b67150
- (int)textEffectsVisibilityLevelInKeyboardWindow;	// IMP=0x0000000000b67145
- (void)dismissWithText:(id)arg1;	// IMP=0x0000000000b670a7
- (void)dismissWithCandidate:(id)arg1;	// IMP=0x0000000000b66ff5
- (void)dismissWithRevert:(id)arg1;	// IMP=0x0000000000b66f9e
- (void)dismissWithCancel;	// IMP=0x0000000000b66f1e
- (void)removeAnimated:(_Bool)arg1;	// IMP=0x0000000000b66e02
- (void)reset;	// IMP=0x0000000000b66c04
- (void)removeFromSuperview;	// IMP=0x0000000000b66a4c
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b663ea
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b65fe1
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b65df0
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b65c05
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b65b66
- (id)dictationHighlightViewForPoint:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b65a71
- (id)optionForPoint:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b659f5
- (_Bool)showingAutocorrectHighlight;	// IMP=0x0000000000b658c6
- (void)showTextHighlightView:(_Bool)arg1;	// IMP=0x0000000000b652b2
- (id)bubblePathInRect:(struct CGRect)arg1;	// IMP=0x0000000000b65291
- (id)squaredOffBubblePathInRect:(struct CGRect)arg1;	// IMP=0x0000000000b64c8f
- (id)backgroundImageView;	// IMP=0x0000000000b64ab0
- (id)textOptionWithText:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000b64a54
- (_Bool)usingRTLInputMode;	// IMP=0x0000000000b649df
- (void)inputModeDidChange:(id)arg1;	// IMP=0x0000000000b649c8
- (void)layoutSubviews;	// IMP=0x0000000000b646dc
- (void)updateButtonForType:(long long)arg1;	// IMP=0x0000000000b646ac
- (void)updateButtonName:(id)arg1 placement:(long long)arg2 originalText:(id)arg3;	// IMP=0x0000000000b63107
- (void)updateViewForOptions:(id)arg1;	// IMP=0x0000000000b62649
- (void)updateWithChoices:(id)arg1 fromParentView:(id)arg2 referenceTextView:(id)arg3 presentedFromRect:(id)arg4 textHighlightColor:(id)arg5;	// IMP=0x0000000000b62257
- (void)hideForNow;	// IMP=0x0000000000b621da
- (void)updateTextHighlightViewWithColor:(id)arg1 convertedRect:(struct CGRect)arg2;	// IMP=0x0000000000b62124
- (void)updateTextBoxHighlightForRect:(id)arg1 inTextView:(id)arg2 parentView:(id)arg3 highlightColor:(id)arg4;	// IMP=0x0000000000b61fee
- (void)updateForSingleWord:(id)arg1 textAnchorRect:(id)arg2 inTextView:(id)arg3 parentView:(id)arg4 highlightColor:(id)arg5;	// IMP=0x0000000000b61c7e
- (void)showChoices:(_Bool)arg1;	// IMP=0x0000000000b61a2e
- (_Bool)promptWillCollideWithKeyboard:(struct CGRect)arg1;	// IMP=0x0000000000b616cc
- (void)updateSelfWithRect:(struct CGRect)arg1;	// IMP=0x0000000000b60da7
- (void)anchorToTextIfNeeded;	// IMP=0x0000000000b5fe6e
- (void)updateTextAnchorForParentView:(id)arg1;	// IMP=0x0000000000b5f613
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000b5f4dc
- (id)init;	// IMP=0x0000000000b5f4aa

@end
