//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewController.h"

@class IKAppDocument, NSArray, NSMapTable, NSString, SUUIIndexBarControlController, SUUIResourceLoader, SUUIStackTemplateElement, SUUIStorePageSectionsViewController;

__attribute__((visibility("hidden")))
@interface SUUIStackDocumentViewController : SUUIViewController
{
    IKAppDocument *_document;	// 8 = 0x8
    NSArray *_entryListControllers;	// 16 = 0x10
    _Bool _hasResetState;	// 24 = 0x18
    SUUIIndexBarControlController *_indexBarControlController;	// 32 = 0x20
    long long _lastNeedsMoreCount;	// 40 = 0x28
    long long _layoutStyle;	// 48 = 0x30
    SUUIResourceLoader *_resourceLoader;	// 56 = 0x38
    SUUIStackTemplateElement *_templateElement;	// 64 = 0x40
    NSMapTable *_viewElementToEntryListController;	// 72 = 0x48
    SUUIStorePageSectionsViewController *_sectionsViewController;	// 80 = 0x50
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x00100000001abf7d
- (void).cxx_destruct;	// IMP=0x00000000001af673
@property(readonly, nonatomic) SUUIStorePageSectionsViewController *sectionsViewController; // @synthesize sectionsViewController=_sectionsViewController;
- (void)_updateIndexBarVisibility;	// IMP=0x00000000001af56a
- (void)_updateEntryListControllersWithReload:(_Bool)arg1;	// IMP=0x00000000001aeebd
- (_Bool)_tryToScrollToSectionAtIndexPath:(id)arg1;	// IMP=0x00000000001ae698
- (_Bool)_shouldShowIndexBar;	// IMP=0x00000000001ae504
- (id)_resourceLoader;	// IMP=0x00000000001ae42d
- (void)_resetStateForDocumentNotification:(id)arg1;	// IMP=0x00000000001ae3c7
- (void)_resetState;	// IMP=0x00000000001ae3b2
- (id)_pullToRefreshElement;	// IMP=0x00000000001ae390
- (long long)_pinningTransitionStyle;	// IMP=0x00000000001ae33d
- (id)_pageSplitsDescription;	// IMP=0x00000000001adacf
- (id)_pageComponentsWithViewElements:(id)arg1;	// IMP=0x00000000001ad8d8
- (long long)_maxGlobalIndex;	// IMP=0x00000000001ad811
- (id)_indexPathFromGlobalIndex:(long long)arg1;	// IMP=0x00000000001ad71b
- (id)_indexBarViewElement;	// IMP=0x00000000001ad6fe
- (id)_indexBarControlController;	// IMP=0x00000000001ad56c
- (long long)_globalIndexFromIndexPath:(id)arg1;	// IMP=0x00000000001ad443
- (void)_configureIndexBarControl:(id)arg1;	// IMP=0x00000000001ad237
- (id)_colorScheme;	// IMP=0x00000000001ad180
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2;	// IMP=0x00000000001ad09a
- (void)resourceLoaderDidBeginLoading:(id)arg1;	// IMP=0x00000000001ad006
- (void)sectionsViewController:(id)arg1 willScrollToOffset:(struct CGPoint)arg2 visibleRange:(struct SUUIIndexPathRange)arg3;	// IMP=0x00000000001ace7f
- (_Bool)performTestWithName:(id)arg1 options:(id)arg2;	// IMP=0x00000000001acdf4
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001acb5b
- (void)refresh:(id)arg1 refreshControl:(id)arg2;	// IMP=0x00000000001aca02
- (void)indexBarEntryListControllerDidInvalidate:(id)arg1;	// IMP=0x00000000001ac965
- (void)indexBarControlControllerDidSelectBeyondTop:(id)arg1;	// IMP=0x00000000001ac8a7
- (void)indexBarControlControllerDidSelectBeyondBottom:(id)arg1;	// IMP=0x00000000001ac7c6
- (void)indexBarControlController:(id)arg1 didSelectEntryDescriptorAtIndexPath:(id)arg2;	// IMP=0x00000000001ac650
- (long long)numberOfSectionsInIndexBarControlController:(id)arg1;	// IMP=0x00000000001ac622
- (long long)indexBarControlController:(id)arg1 numberOfEntryDescriptorsInSection:(long long)arg2;	// IMP=0x00000000001ac5bf
- (id)indexBarControlController:(id)arg1 entryDescriptorAtIndexPath:(id)arg2;	// IMP=0x00000000001ac500
- (id)impressionableViewElements;	// IMP=0x00000000001ac4e3
- (void)documentMediaQueriesDidUpdate:(id)arg1;	// IMP=0x00000000001ac4c6
- (void)documentDidUpdate:(id)arg1;	// IMP=0x00000000001ac426
- (void)setPreferredContentSize:(struct CGSize)arg1;	// IMP=0x00000000001ac3c6
- (void)loadView;	// IMP=0x00000000001abf85
- (void)suui_viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001abf29
- (void)documentDidUpdate:(id)arg1 withTemplate:(id)arg2;	// IMP=0x00000000001ab901
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000001ab8b8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001ab86f
- (void)dealloc;	// IMP=0x00000000001ab6ac
- (id)initWithTemplateElement:(id)arg1 layoutStyle:(long long)arg2;	// IMP=0x00000000001ab5cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

