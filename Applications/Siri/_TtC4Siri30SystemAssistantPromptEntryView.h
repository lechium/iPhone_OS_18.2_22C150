//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;
@protocol _TtP4Siri38SystemAssistantPromptEntryViewDelegate_;

@interface _TtC4Siri30SystemAssistantPromptEntryView : UIView
{
    MISSING_TYPE *textIsProvidedBySuggestion;	// 8 = 0x8
    MISSING_TYPE *invocationTextForSuggestion;	// 16 = 0x10
    MISSING_TYPE *requestSourceIsQuickTypeTamale;	// 32 = 0x20
    MISSING_TYPE *isInTamaleAndCollapsed;	// 33 = 0x21
    MISSING_TYPE *firstPromptSubmitted;	// 34 = 0x22
    MISSING_TYPE *delegate;	// 40 = 0x28
    MISSING_TYPE *entryView;	// 48 = 0x30
    MISSING_TYPE *entryViewWidthConstraint;	// 56 = 0x38
    MISSING_TYPE *entryViewBottomConstraint;	// 64 = 0x40
    MISSING_TYPE *entryViewDismissButtonConstraint;	// 72 = 0x48
    MISSING_TYPE *entryViewBackgroundView;	// 80 = 0x50
    MISSING_TYPE *closeButtonBackgroundView;	// 88 = 0x58
    MISSING_TYPE *dropletView;	// 96 = 0x60
    MISSING_TYPE *closeButton;	// 104 = 0x68
    MISSING_TYPE *closeButtonWidth;	// 112 = 0x70
    MISSING_TYPE *spacing;	// 120 = 0x78
    MISSING_TYPE *animationDuration;	// 128 = 0x80
    MISSING_TYPE *entryViewBottomConstant;	// 136 = 0x88
    MISSING_TYPE *promptEntryViewDampingValue;	// 144 = 0x90
    MISSING_TYPE *promptEntryViewResponseValue;	// 152 = 0x98
    MISSING_TYPE *promptEntryViewXButtonDampingValue;	// 160 = 0xa0
    MISSING_TYPE *promptEntryViewXButtonResponseValue;	// 168 = 0xa8
    MISSING_TYPE *buttonBlurRadius;	// 176 = 0xb0
    MISSING_TYPE *shadowOpacity;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00400000000ba2c0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000ba270
- (void)textViewDidDismissEditMenu:(id)arg1;	// IMP=0x00100000000ba1c0
- (void)textViewWillPresentEditMenu:(id)arg1;	// IMP=0x00100000000ba1a0
- (void)stopLatencyAnimationIfNeeded;	// IMP=0x00100000000ba170
- (void)makeTextViewVisible:(_Bool)arg1;	// IMP=0x00100000000b9ed0
- (void)promptEntryViewDidSubmitWithoutView;	// IMP=0x00100000000b9ea0
- (void)promptEntryViewDidSubmitWithoutViewForSuggestionWithInvocationText:(id)arg1;	// IMP=0x00100000000b9e20
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000b9d10
- (_Bool)resignFirstResponder;	// IMP=0x00100000000b9ce0
- (_Bool)becomeFirstResponder;	// IMP=0x00100000000b9b70
- (void)layoutSubviews;	// IMP=0x00100000000b9b40
- (void)setRequestSourceIsQuickTypeTamale:(_Bool)arg1;	// IMP=0x00100000000b96e0
- (void)setIsInGenerativeAssistantTextFollowup;	// IMP=0x00100000000b96b0
- (void)prefillWithText:(id)arg1;	// IMP=0x00100000000b9600
- (void)resignKeyboard;	// IMP=0x00100000000b95a0
- (void)clearText;	// IMP=0x00100000000b9510
- (void)setText:(id)arg1;	// IMP=0x00100000000b9480
- (void)closeButtonTapped;	// IMP=0x00100000000b9420
- (void)animateOutTextFieldAndButton:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b93b0
- (void)resetIsInTamaleAndCollapsed;	// IMP=0x00100000000b7500
- (void)setIsInTamaleAndCollapsed:(_Bool)arg1;	// IMP=0x00100000000b7280
- (_Bool)getIsInTamaleAndCollapsed;	// IMP=0x00100000000b6150
- (void)setIsInAmbient:(_Bool)arg1;	// IMP=0x00100000000b6110
- (void)keyboardWillHideWithNotification:(id)arg1;	// IMP=0x00100000000b6090
- (id)initWithFrame:(struct CGRect)arg1 dictationReplacementAction:(id)arg2;	// IMP=0x00100000000b5de0
@property(nonatomic) __weak id <_TtP4Siri38SystemAssistantPromptEntryViewDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
@property(nonatomic, readonly) double minimumTextFieldHeight;

@end
