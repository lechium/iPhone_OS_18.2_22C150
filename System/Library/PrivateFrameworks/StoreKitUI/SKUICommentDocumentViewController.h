//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewController.h"

@class NSArray, NSMutableSet, NSString, SKUICommentPostBarView, SKUICommentTemplateViewElement, SKUILayoutCache, SKUIMediaSocialAuthor, SKUIStackDocumentViewController, SKUIStackTemplateElement, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUICommentDocumentViewController : SKUIViewController
{
    SKUIMediaSocialAuthor *_authorForActiveAccount;	// 8 = 0x8
    SKUIStackDocumentViewController *_childViewController;	// 16 = 0x10
    NSArray *_commenters;	// 24 = 0x18
    _Bool _didShowKeyboard;	// 32 = 0x20
    _Bool _keyboardVisible;	// 33 = 0x21
    struct CGRect _keyboardRect;	// 40 = 0x28
    SKUIViewElementLayoutContext *_layoutContext;	// 72 = 0x48
    NSMutableSet *_observedArtworkRequestIDs;	// 80 = 0x50
    SKUICommentPostBarView *_postView;	// 88 = 0x58
    _Bool _scrollNewCommentToView;	// 96 = 0x60
    long long _selectedCommenter;	// 104 = 0x68
    SKUIStackTemplateElement *_stackTemplateElement;	// 112 = 0x70
    SKUICommentTemplateViewElement *_templateElement;	// 120 = 0x78
    SKUILayoutCache *_textLayoutCache;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000002edf3b
- (void)_setSelectedCommenter:(long long)arg1;	// IMP=0x00000000002edda0
- (void)_reloadContentSize:(double)arg1;	// IMP=0x00000000002edb74
- (void)_preloadCommenterImages;	// IMP=0x00000000002ed822
- (_Bool)_loadImageForURL:(id)arg1 cacheKey:(id)arg2 dataConsumer:(id)arg3 reason:(long long)arg4;	// IMP=0x00000000002ed710
- (void)_layoutKeyboard;	// IMP=0x00000000002ed51f
- (void)_layoutScrollView:(double)arg1;	// IMP=0x00000000002ed44d
- (id)_layoutContext;	// IMP=0x00000000002ed275
- (id)_getSelectedCommenter;	// IMP=0x00000000002ed1f0
- (void)_checkAdminStatus;	// IMP=0x00000000002ecaf8
- (void)_changeCommenter;	// IMP=0x00000000002ec3fd
- (id)_backgroundColor;	// IMP=0x00000000002ec343
- (void)_keyboardWillChangeNotification:(id)arg1 accountForGuideLines:(_Bool)arg2 applyKeyboardOffset:(_Bool)arg3;	// IMP=0x00000000002ebfbf
- (void)_keyboardDidHideChangeNotification:(id)arg1;	// IMP=0x00000000002ebdfe
- (void)_keyboardWillChangeFrameNotification:(id)arg1;	// IMP=0x00000000002ebdf8
- (void)_keyboardWillHideNotification:(id)arg1;	// IMP=0x00000000002ebd6e
- (void)_keyboardWillShowNotification:(id)arg1;	// IMP=0x00000000002ebccb
- (void)commentPostBarView:(id)arg1 changeCommenter:(id)arg2;	// IMP=0x00000000002ebcb9
- (void)commentPostBarView:(id)arg1 text:(id)arg2 as:(id)arg3;	// IMP=0x00000000002eb98b
- (void)layoutCacheDidFinishBatch:(id)arg1;	// IMP=0x00000000002eb985
- (void)updateStackElement:(id)arg1 withView:(id)arg2;	// IMP=0x00000000002eb732
- (void)documentDidUpdate:(id)arg1;	// IMP=0x00000000002eb63a
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x00000000002eb634
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000002eb5a4
- (void)viewWillLayoutSubviews;	// IMP=0x00000000002eb52e
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000002eb4b0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000002eb452
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000002eb3c8
- (void)loadView;	// IMP=0x00000000002eb1c2
- (void)dealloc;	// IMP=0x00000000002eb0b0
- (id)initWithTemplateElement:(id)arg1;	// IMP=0x00000000002ead01

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
