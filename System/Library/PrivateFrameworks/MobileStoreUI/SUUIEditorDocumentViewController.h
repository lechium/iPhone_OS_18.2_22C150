//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewController.h"

@class NSString, SUUIButtonViewElement, SUUIEditorTemplateView, SUUIEditorTemplateViewElement, SUUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SUUIEditorDocumentViewController : SUUIViewController
{
    SUUIButtonViewElement *_doneButtonElement;	// 8 = 0x8
    SUUIEditorTemplateView *_editorView;	// 16 = 0x10
    _Bool _isTextChanged;	// 24 = 0x18
    struct CGRect _keyboardFrame;	// 32 = 0x20
    SUUIViewElementLayoutContext *_layoutContext;	// 64 = 0x40
    SUUIButtonViewElement *_resetButtonElement;	// 72 = 0x48
    SUUIEditorTemplateViewElement *_templateElement;	// 80 = 0x50
    struct CGRect _toolbarFrame;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000043b33
- (void)_updateEditorViewInset;	// IMP=0x0000000000043aba
- (void)_updateBiographyWithText:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043585
- (void)_sendDoneEventAndDismissWithText:(id)arg1;	// IMP=0x0000000000043481
- (void)_sendCancelEventAndDismiss;	// IMP=0x00000000000433ad
- (void)_resetTextView;	// IMP=0x000000000004332e
- (void)_resetButtonAction;	// IMP=0x0000000000042e03
- (id)_locateFirstButtonWithType:(long long)arg1 inChildrenOfElement:(id)arg2;	// IMP=0x0000000000042c52
- (void)_layoutNavigation;	// IMP=0x00000000000429af
- (void)_layoutEditorView;	// IMP=0x0000000000042929
- (id)_layoutContext;	// IMP=0x000000000004285d
- (id)_backgroundColor;	// IMP=0x00000000000427a3
- (void)_authenticateOnCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000042553
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000042524
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000424d1
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000042480
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000042425
- (void)loadView;	// IMP=0x00000000000422ea
- (void)didChangeTextInEditorTemplateView:(id)arg1;	// IMP=0x00000000000422c5
- (void)documentDidUpdate:(id)arg1;	// IMP=0x000000000004222a
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x000000000004218d
- (void)_keyboardWillChangeFrame:(id)arg1;	// IMP=0x0000000000042076
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x0000000000041f5f
- (void)_cancelButtonAction;	// IMP=0x0000000000041f4d
- (void)_doneButtonAction;	// IMP=0x0000000000041dd9
- (void)dealloc;	// IMP=0x0000000000041d07
- (id)initWithTemplateElement:(id)arg1;	// IMP=0x0000000000041bfa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

