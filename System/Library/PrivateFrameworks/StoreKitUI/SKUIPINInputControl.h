//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class NSMutableArray, NSMutableString, NSString, SKUIViewElement, UIColor, UIFont, UITextInputPasswordRules;

__attribute__((visibility("hidden")))
@interface SKUIPINInputControl : UIControl
{
    UIColor *_boxBackgroundColor;	// 8 = 0x8
    UIColor *_boxBorderColor;	// 16 = 0x10
    UIFont *_font;	// 24 = 0x18
    long long _keyboardType;	// 32 = 0x20
    NSMutableArray *_labels;	// 40 = 0x28
    _Bool _needsLabelReload;	// 48 = 0x30
    long long _numberOfCharacters;	// 56 = 0x38
    _Bool _secureTextEntry;	// 64 = 0x40
    NSMutableString *_text;	// 72 = 0x48
    UIColor *_textColor;	// 80 = 0x50
    SKUIViewElement *_viewElement;	// 88 = 0x58
}

+ (double)_defaultBoxSizeForFont:(id)arg1;	// IMP=0x0010000000145026
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00100000001442e4
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000014429b
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0010000000144242
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00100000001441f7
- (void).cxx_destruct;	// IMP=0x000000000014562a
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisSecureTextEntry,V_secureTextEntry

@property(nonatomic) long long numberOfCharacters; // @synthesize numberOfCharacters=_numberOfCharacters;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N,V_keyboardType

@property(copy, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) UIColor *boxBorderColor; // @synthesize boxBorderColor=_boxBorderColor;
@property(copy, nonatomic) UIColor *boxBackgroundColor; // @synthesize boxBackgroundColor=_boxBackgroundColor;
- (void)_setNeedsReloadLayout;	// IMP=0x0000000000145575
- (void)_sendValueChangeEvents;	// IMP=0x00000000001454c8
- (void)_reloadLabelSubviews;	// IMP=0x000000000014504c
- (void)tintColorDidChange;	// IMP=0x0000000000144fe5
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000144d81
- (void)layoutSubviews;	// IMP=0x00000000001448e9
@property(nonatomic) long long spellCheckingType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long autocorrectionType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

- (_Bool)resignFirstResponder;	// IMP=0x0000000000144855
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000014484d
- (_Bool)becomeFirstResponder;	// IMP=0x00000000001447fe
- (void)insertText:(id)arg1;	// IMP=0x000000000014473d
@property(readonly, nonatomic) _Bool hasText;
- (void)deleteBackward;	// IMP=0x00000000001446ad
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000001446a5
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000014469d
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000144695
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000014468f
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000001443f6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000143e61

// Remaining properties
@property unsigned long long allowedWritingToolsResultOptions;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?

@property(nonatomic) long long autocapitalizationType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

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

@property(nonatomic) long long keyboardAppearance;
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
