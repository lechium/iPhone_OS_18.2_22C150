//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewController.h"

@class NSMutableArray, NSString, SUUIActivityIndicatorView, SUUIChartsTemplateViewElement, SUUILayoutCache, SUUIModernChartsView, SUUIResourceLoader, SUUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SUUIModernChartsDocumentViewController : SUUIViewController
{
    SUUIActivityIndicatorView *_activityIndicatorView;	// 8 = 0x8
    SUUIModernChartsView *_chartsView;	// 16 = 0x10
    NSMutableArray *_columnViewControllers;	// 24 = 0x18
    SUUILayoutCache *_layoutCache;	// 32 = 0x20
    SUUIChartsTemplateViewElement *_templateElement;	// 40 = 0x28
    SUUIViewElementLayoutContext *_viewLayoutContext;	// 48 = 0x30
    SUUIResourceLoader *_resourceLoader;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002b0f06
- (id)_resourceLoader;	// IMP=0x00000000002b0e2f
- (id)_viewLayoutContext;	// IMP=0x00000000002b0ce2
- (struct CGRect)_computedFrameForActivityIndicatorView;	// IMP=0x00000000002b0bca
- (void)_showActivityIndicator;	// IMP=0x00000000002b098f
- (void)_reloadWithTemplateElement:(id)arg1;	// IMP=0x00000000002b072b
- (id)_newColumnViewControllersWithReusableViewControllers:(id)arg1;	// IMP=0x00000000002b0091
- (id)_layoutCache;	// IMP=0x00000000002b0050
- (void)_hideActivityIndicator;	// IMP=0x00000000002b0018
- (struct UIEdgeInsets)_contentInset;	// IMP=0x00000000002aff64
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2;	// IMP=0x00000000002afe7e
- (void)resourceLoaderDidBeginLoading:(id)arg1;	// IMP=0x00000000002afdea
- (void)viewWillLayoutSubviews;	// IMP=0x00000000002afd26
- (void)loadView;	// IMP=0x00000000002afc66
- (id)contentScrollView;	// IMP=0x00000000002afc5e
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002af871
- (void)documentMediaQueriesDidUpdate:(id)arg1;	// IMP=0x00000000002af742
- (void)documentDidUpdate:(id)arg1;	// IMP=0x00000000002af6bd
- (id)initWithTemplateElement:(id)arg1;	// IMP=0x00000000002af655

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
