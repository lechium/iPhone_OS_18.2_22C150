//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, SKUIComposeReviewHeaderView, SKUIComposeTextView, SKUIReviewMetadata, SULoadingView, SUTextContentView, UIScrollView;
@protocol SKUIComposeReviewViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIComposeReviewView : UIView
{
    long long _currentBodyLength;	// 8 = 0x8
    id <SKUIComposeReviewViewDelegate> _delegate;	// 16 = 0x10
    SKUIComposeReviewHeaderView *_headerView;	// 24 = 0x18
    struct CGRect _keyboardFrame;	// 32 = 0x20
    struct CGRect _remoteKeyboardFrame;	// 64 = 0x40
    unsigned int _loading:1;	// 96 = 0x60
    SULoadingView *_loadingView;	// 104 = 0x68
    SKUIReviewMetadata *_review;	// 112 = 0x70
    UIScrollView *_scrollView;	// 120 = 0x78
    long long _style;	// 128 = 0x80
    SUTextContentView *_textContentView;	// 136 = 0x88
    SKUIComposeTextView *_textContentViewAlt;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000028357
@property(nonatomic) __weak id <SKUIComposeReviewViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long composeReviewStyle; // @synthesize composeReviewStyle=_style;
- (void)_updateContentSize;	// IMP=0x0000000000028261
- (void)_showLoadingView;	// IMP=0x00000000000281ae
- (void)_showComposeView;	// IMP=0x0000000000027d39
- (id)_reviewPlaceholder;	// IMP=0x0000000000027c88
- (void)_layoutLoadingView;	// IMP=0x0000000000027bae
- (void)_layoutComposeView;	// IMP=0x00000000000278c4
- (_Bool)_isReviewTextOptional;	// IMP=0x0000000000027871
- (void)_delayedUpdateReviewLength;	// IMP=0x00000000000277e5
- (id)_body;	// IMP=0x0000000000027759
- (void)_remoteKeyboardVisibilityDidChangeNotification:(id)arg1;	// IMP=0x000000000002765c
- (void)_keyboardVisibilityDidChangeNotification:(id)arg1;	// IMP=0x000000000002751d
- (_Bool)_composeReviewTextViewShouldChangeTextInRange:(struct _NSRange)arg1 replacementText:(id)arg2;	// IMP=0x0000000000027451
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x0000000000027436
- (void)textContentViewDidChange:(id)arg1;	// IMP=0x0000000000027327
- (_Bool)textContentView:(id)arg1 shouldScrollForPendingContentSize:(struct CGSize)arg2;	// IMP=0x000000000002731f
- (_Bool)textContentView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x0000000000027304
- (_Bool)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize)arg2;	// IMP=0x00000000000272fc
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize)arg2;	// IMP=0x00000000000272ea
- (void)composeHeaderViewValuesDidChange:(id)arg1;	// IMP=0x000000000002725d
- (void)composeHeaderViewValidityDidChange:(id)arg1;	// IMP=0x0000000000027221
- (void)setReview:(id)arg1;	// IMP=0x00000000000271d7
@property(nonatomic) float rating;
@property(nonatomic, getter=isLoading) _Bool loading;
- (void)reloadData;	// IMP=0x0000000000027022
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)copyReview;	// IMP=0x0000000000026e7e
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000026e3e
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000026d25
- (void)layoutSubviews;	// IMP=0x0000000000026cfa
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000026bb6
- (void)dealloc;	// IMP=0x0000000000026ace
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x000000000002696d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

