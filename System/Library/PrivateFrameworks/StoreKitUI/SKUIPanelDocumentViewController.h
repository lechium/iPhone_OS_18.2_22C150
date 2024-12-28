//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewController.h"

@class NSString, SKUILayoutCache, SKUIMetricsImpressionSession, SKUIPanelTemplateViewElement, SKUIPanelView, SKUIViewElementLayoutContext, UIImageView, UIScrollView;

__attribute__((visibility("hidden")))
@interface SKUIPanelDocumentViewController : SKUIViewController
{
    UIImageView *_backgroundImageView;	// 8 = 0x8
    _Bool _didAttemptBecomeFirstResponder;	// 16 = 0x10
    struct CGRect _keyboardFrame;	// 24 = 0x18
    long long _lastContentWidth;	// 56 = 0x38
    SKUIViewElementLayoutContext *_layoutContext;	// 64 = 0x40
    SKUIMetricsImpressionSession *_metricsImpressionSession;	// 72 = 0x48
    SKUIPanelView *_panelView;	// 80 = 0x50
    SKUILayoutCache *_textLayoutCache;	// 88 = 0x58
    UIScrollView *_scrollView;	// 96 = 0x60
    SKUIPanelTemplateViewElement *_templateElement;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000ab4cf
- (id)_templateBackgroundColor;	// IMP=0x00000000000ab415
- (void)_requestPanelViewLayoutWithContentWidth:(long long)arg1 forced:(_Bool)arg2;	// IMP=0x00000000000ab335
- (void)_reloadPanelViewWithScrollViewSize:(struct CGSize)arg1;	// IMP=0x00000000000ab1d0
- (void)_reloadContentSize;	// IMP=0x00000000000aafa2
- (void)_reloadBackgroundImageView;	// IMP=0x00000000000aadcb
- (void)_layoutScrollView;	// IMP=0x00000000000aad23
- (id)_layoutContext;	// IMP=0x00000000000aab70
- (void)_layoutBackgroundImageView;	// IMP=0x00000000000aa933
- (id)_imageForBackgroundImageElement:(id)arg1;	// IMP=0x00000000000aa6c9
- (id)_activeBackgroundColor;	// IMP=0x00000000000aa657
- (void)_keyboardWillChangeNotification:(id)arg1;	// IMP=0x00000000000aa591
- (void)_keyboardHideNotification:(id)arg1;	// IMP=0x00000000000aa545
- (void)layoutCacheDidFinishBatch:(id)arg1;	// IMP=0x00000000000aa491
- (id)impressionableViewElements;	// IMP=0x00000000000aa474
- (void)documentDidUpdate:(id)arg1;	// IMP=0x00000000000aa30b
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x00000000000aa1b0
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000aa12e
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000aa0bd
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000aa061
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000a9fb6
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000a9f38
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000a9d85
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000a9be9
- (void)loadView;	// IMP=0x00000000000a99f7
- (id)contentScrollView;	// IMP=0x00000000000a99e2
- (void)dealloc;	// IMP=0x00000000000a98d0
- (id)initWithTemplateElement:(id)arg1;	// IMP=0x00000000000a9749

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
