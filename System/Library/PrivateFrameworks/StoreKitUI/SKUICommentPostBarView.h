//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, SKUICommentPostBarTextField, UIButton, UILabel;
@protocol SKUICommentDelegate;

__attribute__((visibility("hidden")))
@interface SKUICommentPostBarView : UIView
{
    UIButton *_postButton;	// 8 = 0x8
    SKUICommentPostBarTextField *_postTextField;	// 16 = 0x10
    NSString *_commenter;	// 24 = 0x18
    UILabel *_asLabel;	// 32 = 0x20
    UIButton *_asNameButton;	// 40 = 0x28
    NSString *_asText;	// 48 = 0x30
    id <SKUICommentDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000024145e
@property(nonatomic) __weak id <SKUICommentDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *commenter; // @synthesize commenter=_commenter;
- (void)_postComment;	// IMP=0x0000000000241306
- (id)_asLabel;	// IMP=0x00000000002411e1
- (id)_asNameButton;	// IMP=0x000000000024108a
- (void)tintColorDidChange;	// IMP=0x0000000000240fbb
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000240f98
- (_Bool)resignFirstResponder;	// IMP=0x0000000000240f47
- (void)layoutSubviews;	// IMP=0x00000000002407dd
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000002407c0
- (_Bool)becomeFirstResponder;	// IMP=0x00000000002407a3
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x000000000024067c
- (void)setPostButtonVisible:(_Bool)arg1;	// IMP=0x000000000024063d
- (void)setText:(id)arg1;	// IMP=0x0000000000240570
- (void)setPostButtonText:(id)arg1;	// IMP=0x0000000000240551
- (void)setPlaceholderText:(id)arg1;	// IMP=0x0000000000240534
- (void)setAsText:(id)arg1;	// IMP=0x0000000000240490
- (void)_changeCommenter:(id)arg1;	// IMP=0x00000000002403b1
- (void)_post:(id)arg1;	// IMP=0x0000000000240383
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000023fee0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
