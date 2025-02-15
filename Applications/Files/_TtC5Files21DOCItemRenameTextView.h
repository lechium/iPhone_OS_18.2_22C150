//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITextView.h>

@class MISSING_TYPE, NSArray, NSString, UIButton, UIColor;
@protocol UITextViewDelegate;

@interface _TtC5Files21DOCItemRenameTextView : UITextView
{
    MISSING_TYPE *itemRenameDelegate;	// 8 = 0x8
    MISSING_TYPE *canDisplayExtension;	// 24 = 0x18
    MISSING_TYPE *isDisplayingExtension;	// 25 = 0x19
    MISSING_TYPE *$__lazy_storage_$_notificationsController;	// 32 = 0x20
    MISSING_TYPE *backgroundStyle;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_backgroundView;	// 48 = 0x30
    MISSING_TYPE *verticalMargin;	// 56 = 0x38
    MISSING_TYPE *contentSizeObserver;	// 64 = 0x40
    MISSING_TYPE *showsClearButton;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_clearButton;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000021f750
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;	// IMP=0x001000000021f6f0
@property(nonatomic, readonly) UIButton *accessibilityClearButton;
- (void)undoClearTextWithPreviousText:(id)arg1;	// IMP=0x001000000021f520
- (void)clearText;	// IMP=0x001000000021f4f0
- (id)textView:(id)arg1 editMenuForTextInRange:(struct _NSRange)arg2 suggestedActions:(id)arg3;	// IMP=0x001000000021f460
- (void)textViewDidChange:(id)arg1;	// IMP=0x001000000021f380
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x001000000021f090
@property(nonatomic, readonly) NSArray *keyCommands;
- (void)endEdtingCell;	// IMP=0x001000000021ee40
- (void)installClearButton;	// IMP=0x001000000021e460
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x001000000021e100
@property(nonatomic, readonly) _Bool supportsImagePaste;
- (void)didMoveToSuperview;	// IMP=0x001000000021df50
- (void)editExtension:(id)arg1;	// IMP=0x001000000021dbe0
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x001000000021d940
- (void)layoutSubviews;	// IMP=0x001000000021d550
@property(nonatomic, retain) UIColor *backgroundColor;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000021c3e0
@property(nonatomic, copy) NSString *text;
@property(nonatomic, retain) id <UITextViewDelegate> delegate;

@end

