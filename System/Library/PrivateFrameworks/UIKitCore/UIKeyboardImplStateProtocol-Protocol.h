//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>
#import <UIKitCore/UITextInputDelegate-Protocol.h>

@class NSString, TIDocumentState, TIKeyboardState, UIResponder, UIView;
@protocol UIKeyInput, UITextInput;

@protocol UIKeyboardImplStateProtocol <NSObject, UITextInputDelegate>
@property(nonatomic) _Bool shouldIgnoreTextInputChanges;
@property(readonly, nonatomic) TIKeyboardState *keyboardState;
- (struct CGRect)subtractKeyboardFrameFromRect:(struct CGRect)arg1 inView:(UIView *)arg2;
- (void)textSuggestionDidChange:(id <UITextInput>)arg1;
- (void)didChangeForwardingInputDelegate:(UIResponder<UIKeyInput> *)arg1;
- (void)clearInputForMarkedText;
- (void)syncDocumentStateToInputDelegate;
- (void)setDocumentState:(TIDocumentState *)arg1;
- (TIDocumentState *)documentState;
- (void)updateKeyboardStateForReplacingText:(NSString *)arg1 withText:(NSString *)arg2;
- (void)updateKeyboardStateForDeletion;
- (void)updateTextInputKeyboardSource;
- (void)updateKeyboardStateForInsertion:(NSString *)arg1;
@end
