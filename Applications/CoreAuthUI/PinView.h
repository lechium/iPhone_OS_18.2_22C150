//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSNumber, NSString, PinField, PinKeypad, UIButton, UILabel, UITextInputPasswordRules, UIViewController;
@protocol PinViewDelegate;

@interface PinView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    PinField *_pinField;	// 16 = 0x10
    UIView *_dividerLine;	// 24 = 0x18
    double _scale;	// 32 = 0x20
    _Bool _autoKeyboard;	// 40 = 0x28
    _Bool _keypadActive;	// 41 = 0x29
    _Bool _pinEntered;	// 42 = 0x2a
    PinKeypad *_keypad;	// 48 = 0x30
    struct CGRect _keyboardDefaultFrame;	// 56 = 0x38
    NSNumber *_pinMinLength;	// 88 = 0x58
    NSNumber *_pinCharset;	// 96 = 0x60
    UIViewController *_viewController;	// 104 = 0x68
    id <PinViewDelegate> _delegate;	// 112 = 0x70
    UIButton *_cancelButton;	// 120 = 0x78
    NSString *_title;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0020000000016f25
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak id <PinViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)deleteBackward;	// IMP=0x0010000000016e97
- (void)insertText:(id)arg1;	// IMP=0x0010000000016e7a
@property(readonly, nonatomic) _Bool hasText;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisSecureTextEntry

@property(nonatomic) long long autocapitalizationType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long returnKeyType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long keyboardAppearance;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long keyboardType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long autocorrectionType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long spellCheckingType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

- (void)pinEntered:(id)arg1;	// IMP=0x0010000000016c77
- (void)_dismissKeypad;	// IMP=0x0010000000016c28
- (void)_deactivateKeypadView;	// IMP=0x0010000000016bee
- (void)_activateKeypadView;	// IMP=0x0010000000016a70
- (_Bool)resignFirstResponder;	// IMP=0x00100000000169d1
- (_Bool)becomeFirstResponder;	// IMP=0x0010000000016952
- (_Bool)canBecomeFirstResponder;	// IMP=0x001000000001692f
- (struct CGRect)_roundRectToPixel:(struct CGRect)arg1;	// IMP=0x0010000000016893
- (double)_roundToPixel:(double)arg1;	// IMP=0x0010000000016866
- (void)_layoutSubviewsWithKeyboard:(struct CGRect)arg1;	// IMP=0x0010000000016413
- (void)layoutSubviews;	// IMP=0x001000000001613e
- (void)keyboardDidShow:(id)arg1;	// IMP=0x0010000000015fe7
- (void)dealloc;	// IMP=0x0010000000015f46
- (id)initWithPinLength:(id)arg1 minLength:(id)arg2 maxLength:(id)arg3 charset:(id)arg4;	// IMP=0x0010000000015b46

// Remaining properties
@property unsigned long long allowedWritingToolsResultOptions;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(readonly) unsigned long long hash;
@property(nonatomic) long long mathExpressionCompletionType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UITextInputPasswordRules",?,C,N

@property(nonatomic) long long smartDashesType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long smartInsertDeleteType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long smartQuotesType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property long long writingToolsBehavior;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?


@end
