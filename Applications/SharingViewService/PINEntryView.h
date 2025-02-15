//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableString, NSString, UIColor, UITextInputPasswordRules;

@interface PINEntryView : UIView
{
    NSMutableString *_text;	// 8 = 0x8
    _Bool _alphaNumeric;	// 16 = 0x10
    _Bool _disabled;	// 17 = 0x11
    NSArray *_digits;	// 24 = 0x18
    CDUnknownBlockType _textChangedHandler;	// 32 = 0x20
    NSArray *_wells;	// 40 = 0x28
    UIColor *_wellFocusColor;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000fd267
@property(retain, nonatomic) UIColor *wellFocusColor; // @synthesize wellFocusColor=_wellFocusColor;
@property(retain, nonatomic) NSArray *wells; // @synthesize wells=_wells;
@property(copy, nonatomic) CDUnknownBlockType textChangedHandler; // @synthesize textChangedHandler=_textChangedHandler;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) NSArray *digits; // @synthesize digits=_digits;
@property(nonatomic) _Bool alphaNumeric; // @synthesize alphaNumeric=_alphaNumeric;
@property(nonatomic) long long spellCheckingType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long keyboardType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long keyboardAppearance;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly, nonatomic) _Bool hasText;
- (void)insertText:(id)arg1;	// IMP=0x00100000000fd07e
- (void)deleteBackward;	// IMP=0x00100000000fcff8
- (_Bool)canBecomeFirstResponder;	// IMP=0x00100000000fcff0
@property(nonatomic) long long autocorrectionType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long autocapitalizationType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

- (void)_updateLabels;	// IMP=0x00100000000fcb45
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000000fcaf7
@property(copy, nonatomic) NSString *text;

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
@property(nonatomic) long long inlinePredictionType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long mathExpressionCompletionType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UITextInputPasswordRules",?,C,N

@property(nonatomic) long long returnKeyType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisSecureTextEntry

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

