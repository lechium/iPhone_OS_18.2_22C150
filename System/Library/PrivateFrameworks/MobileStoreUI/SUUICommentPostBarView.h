//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, SUUICommentPostBarTextField, UIButton, UILabel;
@protocol SUUICommentDelegate;

__attribute__((visibility("hidden")))
@interface SUUICommentPostBarView : UIView
{
    UIButton *_postButton;	// 8 = 0x8
    SUUICommentPostBarTextField *_postTextField;	// 16 = 0x10
    NSString *_commenter;	// 24 = 0x18
    UILabel *_asLabel;	// 32 = 0x20
    UIButton *_asNameButton;	// 40 = 0x28
    NSString *_asText;	// 48 = 0x30
    id <SUUICommentDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000077fdf
@property(nonatomic) __weak id <SUUICommentDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *commenter; // @synthesize commenter=_commenter;
- (void)_postComment;	// IMP=0x0000000000077e87
- (id)_asLabel;	// IMP=0x0000000000077d62
- (id)_asNameButton;	// IMP=0x0000000000077c0b
- (void)tintColorDidChange;	// IMP=0x0000000000077b3c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000077b19
- (_Bool)resignFirstResponder;	// IMP=0x0000000000077ac8
- (void)layoutSubviews;	// IMP=0x000000000007735e
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000000077341
- (_Bool)becomeFirstResponder;	// IMP=0x0000000000077324
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x00000000000771fd
- (void)setPostButtonVisible:(_Bool)arg1;	// IMP=0x00000000000771be
- (void)setText:(id)arg1;	// IMP=0x00000000000770f1
- (void)setPostButtonText:(id)arg1;	// IMP=0x00000000000770d2
- (void)setPlaceholderText:(id)arg1;	// IMP=0x00000000000770b5
- (void)setAsText:(id)arg1;	// IMP=0x0000000000077011
- (void)_changeCommenter:(id)arg1;	// IMP=0x0000000000076f32
- (void)_post:(id)arg1;	// IMP=0x0000000000076f04
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000076ab0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

