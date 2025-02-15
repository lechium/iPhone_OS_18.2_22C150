//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIResponder.h"

#import <UIKitCore/UITextInput-Protocol.h>

@class NSDictionary, NSIndexSet, NSString, UIColor, UIImage, UIInputContextHistory, UITextInputPasswordRules, UITextPosition, UITextRange, UIView, _UIFindNavigatorViewController, _UISupplementalLexicon;
@protocol UITextInputDelegate, UITextInputTokenizer;

__attribute__((visibility("hidden")))
@interface _UIFindNavigatorResponder : UIResponder <UITextInput>
{
    _Bool _canBecomeFirstResponder;	// 8 = 0x8
    _Bool _showsCollapsedInputView;	// 9 = 0x9
    UIView *_collapsedInputView;	// 16 = 0x10
    _Bool _isChangingInputModes;	// 24 = 0x18
    UITextPosition *beginningOfDocument;	// 32 = 0x20
    UITextPosition *endOfDocument;	// 40 = 0x28
    id <UITextInputDelegate> inputDelegate;	// 48 = 0x30
    UITextRange *markedTextRange;	// 56 = 0x38
    NSDictionary *markedTextStyle;	// 64 = 0x40
    UITextRange *selectedTextRange;	// 72 = 0x48
    id <UITextInputTokenizer> tokenizer;	// 80 = 0x50
    _UIFindNavigatorViewController *_findNavigatorViewController;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000009e144e
@property(readonly, nonatomic) _Bool isChangingInputModes; // @synthesize isChangingInputModes=_isChangingInputModes;
@property(retain, nonatomic) _UIFindNavigatorViewController *findNavigatorViewController; // @synthesize findNavigatorViewController=_findNavigatorViewController;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer; // @synthesize tokenizer;
@property(copy) UITextRange *selectedTextRange; // @synthesize selectedTextRange;
@property(copy, nonatomic) NSDictionary *markedTextStyle; // @synthesize markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange; // @synthesize markedTextRange;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate; // @synthesize inputDelegate;
@property(readonly, nonatomic) UITextPosition *endOfDocument; // @synthesize endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument; // @synthesize beginningOfDocument;
@property(nonatomic) _Bool canBecomeFirstResponder; // @synthesize canBecomeFirstResponder=_canBecomeFirstResponder;
- (void)unmarkText;	// IMP=0x00000000009e1339
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x00000000009e1331
- (id)textInRange:(id)arg1;	// IMP=0x00000000009e1329
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x00000000009e1323
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;	// IMP=0x00000000009e131d
- (id)selectionRectsForRange:(id)arg1;	// IMP=0x00000000009e1310
- (void)replaceRange:(id)arg1 withText:(id)arg2;	// IMP=0x00000000009e130a
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;	// IMP=0x00000000009e1302
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;	// IMP=0x00000000009e12fa
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;	// IMP=0x00000000009e12f2
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x00000000009e12ea
- (struct CGRect)firstRectForRange:(id)arg1;	// IMP=0x00000000009e12cc
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x00000000009e12c4
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;	// IMP=0x00000000009e12bc
- (id)closestPositionToPoint:(struct CGPoint)arg1;	// IMP=0x00000000009e12b4
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x00000000009e12ac
- (id)characterRangeAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000009e12a4
- (struct CGRect)caretRectForPosition:(id)arg1;	// IMP=0x00000000009e1286
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x00000000009e1279
@property(nonatomic) long long keyboardAppearance;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) _Bool acceptsInitialEmojiKeyboard;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool forceDisableDictation;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

- (void)takeTraitsFrom:(id)arg1;	// IMP=0x00000000009e119a
- (void)deleteBackward;	// IMP=0x00000000009e1194
- (void)insertText:(id)arg1;	// IMP=0x00000000009e118e
@property(readonly, nonatomic) _Bool hasText;
- (id)_ui_findNavigatorResponder;	// IMP=0x00000000009e117d
- (_Bool)_alwaysRequireInlineCandidateView;	// IMP=0x00000000009e114a
- (_Bool)_disallowsPresentationOfKeyboardShortcutHUD;	// IMP=0x00000000009e1142
- (void)_didPersistFindUI:(id)arg1;	// IMP=0x00000000009e1069
- (void)_willPersistFindUI:(id)arg1;	// IMP=0x00000000009e1058
- (id)textInputMode;	// IMP=0x00000000009e1050
- (id)textInputContextIdentifier;	// IMP=0x00000000009e1048
- (id)nextFirstResponder;	// IMP=0x00000000009e0fed
- (void)becomeFirstResponderAndFocusFindField;	// IMP=0x00000000009e0ed2
- (id)inputAccessoryViewController;	// IMP=0x00000000009e0e5d
- (id)inputAccessoryView;	// IMP=0x00000000009e0e55
- (id)inputDashboardViewController;	// IMP=0x00000000009e0de0
- (id)inputView;	// IMP=0x00000000009e0d56
- (id)nextResponder;	// IMP=0x00000000009e0cfb
- (unsigned long long)hostingTypeForTraitCollection:(id)arg1;	// IMP=0x00000000009e0c43
- (id)initWithFindNavigatorViewController:(id)arg1;	// IMP=0x00000000009e0ad1

// Remaining properties
@property(copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSIndexSet",?,C,N

@property(nonatomic) _Bool acceptsDictationSearchResults;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool acceptsEmoji;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool acceptsFloatingKeyboard;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool acceptsPayloads;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool acceptsSplitKeyboard;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property unsigned long long allowedWritingToolsResultOptions;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?

@property(nonatomic) long long allowsTextAnimationsType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long autocapitalizationType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(copy, nonatomic) NSString *autocorrectionContext;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(nonatomic) long long autocorrectionType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) _Bool contentsIsSingleValue;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) _Bool deferBecomingResponder;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isDevicePasscodeEntry) _Bool devicePasscodeEntry;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisDevicePasscodeEntry

@property(nonatomic) _Bool disableHandwritingKeyboard;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool disableInputBars;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool disablePrediction;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool displaySecureEditsUsingPlainText;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool displaySecureTextUsingPlainText;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(readonly, nonatomic, getter=isEditable) _Bool editable;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,GisEditable

@property(nonatomic) int emptyContentReturnKeyType;
// Preceding property had unknown attributes: ?
// Original attribute string: Ti,?,N

@property(nonatomic) _Bool enablesReturnKeyAutomatically;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) struct UIEdgeInsets floatingKeyboardEdgeInsets;
// Preceding property had unknown attributes: ?
// Original attribute string: T{UIEdgeInsets=dddd},?,N

@property(nonatomic) _Bool forceDefaultDictationInfo;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long forceDictationKeyboardType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) _Bool forceEnableDictation;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool forceFloatingKeyboard;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool forceSpellingDictation;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool hasDefaultContents;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hidePrediction;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long inlineCompletionType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long inlinePredictionType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(retain, nonatomic) UIInputContextHistory *inputContextHistory;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIInputContextHistory",?,&,N

@property(readonly, nonatomic) id insertDictationResultPlaceholder;
// Preceding property had unknown attributes: ?
// Original attribute string: T@,?,R,N

@property(retain, nonatomic) UIColor *insertionPointColor;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIColor",?,&,N

@property(nonatomic) unsigned long long insertionPointWidth;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(nonatomic) _Bool isCarPlayIdiom;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool isSingleLineDocument;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long keyboardType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) _Bool learnsCorrections;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool loadKeyboardsForSiriLanguage;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(retain, nonatomic) UIColor *matchHighlightColor;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIColor",?,&,N

@property(nonatomic) long long mathExpressionCompletionType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UITextInputPasswordRules",?,C,N

@property(nonatomic) _Bool preferOnlineDictation;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long preferredKeyboardStyle;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(copy, nonatomic) NSString *recentInputIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(copy, nonatomic) NSString *responseContext;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(nonatomic) _Bool returnKeyGoesToNextResponder;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long returnKeyType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisSecureTextEntry

@property(nonatomic) long long selectionAffinity;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(retain, nonatomic) UIColor *selectionBarColor;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIColor",?,&,N

@property(retain, nonatomic) UIColor *selectionBorderColor;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIColor",?,&,N

@property(nonatomic) double selectionBorderWidth;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(nonatomic) double selectionCornerRadius;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(retain, nonatomic) UIImage *selectionDragDotImage;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImage",?,&,N

@property(nonatomic) struct UIEdgeInsets selectionEdgeInsets;
// Preceding property had unknown attributes: ?
// Original attribute string: T{UIEdgeInsets=dddd},?,N

@property(retain, nonatomic) UIColor *selectionHighlightColor;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIColor",?,&,N

@property(nonatomic) int shortcutConversionType;
// Preceding property had unknown attributes: ?
// Original attribute string: Ti,?,N

@property(nonatomic) _Bool showDictationButton;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long smartDashesType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long smartInsertDeleteType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long smartQuotesType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long spellCheckingType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;
@property(retain, nonatomic) _UISupplementalLexicon *supplementalLexicon;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"_UISupplementalLexicon",?,&,N

@property(retain, nonatomic) UIImage *supplementalLexiconAmbiguousItemIcon;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImage",?,&,N

@property(nonatomic) _Bool supportsAdaptiveImageGlyph;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool suppressReturnKeyStyling;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(copy, nonatomic) NSString *textContentType;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(readonly, nonatomic) UIView *textInputView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView",?,R,N

@property(nonatomic) int textLoupeVisibility;
// Preceding property had unknown attributes: ?
// Original attribute string: Ti,?,N

@property(readonly, nonatomic) UITextRange *textRangeForServicesInteraction;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UITextRange",?,R,N

@property(nonatomic) long long textScriptType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) int textSelectionBehavior;
// Preceding property had unknown attributes: ?
// Original attribute string: Ti,?,N

@property(nonatomic) id textSuggestionDelegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@,?,N

@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
// Preceding property had unknown attributes: ?
// Original attribute string: T^{__CFCharacterSet=},?,N

@property(nonatomic) _Bool typingAdaptationDisabled;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(retain, nonatomic) UIColor *underlineColorForSpelling;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIColor",?,&,N

@property(retain, nonatomic) UIColor *underlineColorForTextAlternatives;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIColor",?,&,N

@property(nonatomic) _Bool useAutomaticEndpointing;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool useInterfaceLanguageForLocalization;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) struct _NSRange validTextRange;
// Preceding property had unknown attributes: ?
// Original attribute string: T{_NSRange=QQ},?,N

@property(readonly, nonatomic) _Bool wasEverSecureTextEntry;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property unsigned long long writingToolsAllowedInputOptions;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?

@property long long writingToolsBehavior;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?


@end

