//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC10WorkflowUI29NameIconComposeViewController : UIViewController
{
    MISSING_TYPE *mode;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 24 = 0x18
    MISSING_TYPE *glyphCharacter;	// 40 = 0x28
    MISSING_TYPE *viewDidAppear;	// 42 = 0x2a
    MISSING_TYPE *textFieldMinHeight;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_scrollViewBottomConstraint;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_glyphPickerHeightConstraint;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_contentViewScrollViewEqualHeightConstraint;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_contentViewViewEqualHeightConstraint;	// 80 = 0x50
    MISSING_TYPE *$__lazy_storage_$_scrollView;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_contentView;	// 96 = 0x60
    MISSING_TYPE *$__lazy_storage_$_iconTextFieldOuterContainer;	// 104 = 0x68
    MISSING_TYPE *$__lazy_storage_$_iconTextFieldInnerContainer;	// 112 = 0x70
    MISSING_TYPE *$__lazy_storage_$_iconView;	// 120 = 0x78
    MISSING_TYPE *$__lazy_storage_$_textField;	// 128 = 0x80
    MISSING_TYPE *$__lazy_storage_$_glyphPicker;	// 136 = 0x88
    MISSING_TYPE *isIPad;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000001a1f26
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001a1ed8
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;	// IMP=0x00000000001a1a12
- (void)done;	// IMP=0x00000000001a19e3
- (void)cancel;	// IMP=0x00000000001a187b
- (void)keyboardWillChange:(id)arg1;	// IMP=0x00000000001a0a38
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001a0873
- (void)updateIsModalInPresentation;	// IMP=0x00000000001a07c6
- (void)viewDidLoad;	// IMP=0x00000000001a073a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a012e
- (void)glyphPicker:(id)arg1 didSelectGlyphWithCharacter:(unsigned short)arg2;	// IMP=0x00000000001a202a
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000001a2096

@end

