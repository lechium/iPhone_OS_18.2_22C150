//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewController.h"

@class NSMutableDictionary, NSString, SUUIDynamicPageSectionIndexMapper, SUUIHorizontalScrollingContainerViewController, SUUILoadingDocumentViewController, SUUIMenuBarSectionsViewController, SUUIMenuBarTemplateDocumentViewControllerEmbeddedPaletteHost, SUUIMenuBarTemplateElement, SUUIMenuBarViewElementConfiguration, SUUIMenuItemViewElement, SUUIScrollingSegmentedController, SUUIViewElement, UIScrollView, UIView;
@protocol SUUIMenuBarViewElement;

__attribute__((visibility("hidden")))
@interface SUUIMenuBarTemplateDocumentViewController : SUUIViewController
{
    SUUIMenuBarTemplateDocumentViewControllerEmbeddedPaletteHost *_embeddedPaletteHost;	// 8 = 0x8
    SUUIDynamicPageSectionIndexMapper *_dynamicPageSectionIndexMapper;	// 16 = 0x10
    NSMutableDictionary *_entityUniqueIdentifierToEntityIndex;	// 24 = 0x18
    SUUIHorizontalScrollingContainerViewController *_horizontalScrollingContainerViewController;	// 32 = 0x20
    SUUILoadingDocumentViewController *_loadingDocumentViewController;	// 40 = 0x28
    SUUIMenuBarSectionsViewController *_menuBarSectionsViewController;	// 48 = 0x30
    long long _menuBarStyle;	// 56 = 0x38
    SUUIViewElement<SUUIMenuBarViewElement> *_menuBarViewElement;	// 64 = 0x40
    SUUIMenuBarViewElementConfiguration *_menuBarViewElementConfiguration;	// 72 = 0x48
    SUUIMenuItemViewElement *_pendingSelectedMenuItemViewElement;	// 80 = 0x50
    SUUIScrollingSegmentedController *_scrollingSegmentedController;	// 88 = 0x58
    CDStruct_19149c72 _scrollingTabAppearanceStatus;	// 96 = 0x60
    SUUIMenuBarTemplateElement *_templateElement;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000000843a
- (id)_zoomingShelfPageSplitsDescription;	// IMP=0x00000000000082ed
- (void)_willDisplayViewControllerAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000008253
- (_Bool)_isFirstViewControllerOnNavigationStack;	// IMP=0x00000000000081bd
- (void)_replaceViewControllerAtIndex:(unsigned long long)arg1 withViewController:(id)arg2;	// IMP=0x000000000000814d
- (void)_removeContentViewController:(id)arg1;	// IMP=0x0000000000008060
- (void)_reloadContentViewController;	// IMP=0x00000000000076d4
- (void)_recordEntityUniqueIdentifier:(id)arg1 forEntityIndex:(unsigned long long)arg2;	// IMP=0x0000000000007628
- (id)_newChildViewControllerForEntityAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000073d3
- (unsigned long long)_menuItemIndexForEntityIndex:(unsigned long long)arg1 entityValueProvider:(out id *)arg2;	// IMP=0x00000000000072f5
- (id)_dynamicPageSectionIndexMapper;	// IMP=0x000000000000724c
- (id)_contentViewController;	// IMP=0x000000000000720d
- (id)_colorScheme;	// IMP=0x000000000000713c
- (id)_childViewControllersForMenuItems;	// IMP=0x0000000000007062
- (void)_addContentViewController:(id)arg1;	// IMP=0x0000000000006f17
@property(readonly, nonatomic) double titleViewHeight;
@property(readonly, nonatomic) UIView *titleView;
- (id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)arg1;	// IMP=0x0000000000006e14
@property(readonly, nonatomic) UIScrollView *scrollingTabNestedPagingScrollView;
- (void)scrollingTabAppearanceStatusWasUpdated:(CDStruct_19149c72)arg1;	// IMP=0x0000000000006dca
- (void)scrollingSegmentedController:(id)arg1 willDisplayViewControllerAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000006db5
- (id)navigationBarControllerWithViewElement:(id)arg1;	// IMP=0x0000000000006d17
- (void)menuBarViewElementConfiguration:(id)arg1 selectMenuItemViewElement:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000006c67
- (void)menuBarViewElementConfiguration:(id)arg1 didReplaceDocumentForMenuItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000006c1b
- (void)menuBarViewElementConfiguration:(id)arg1 didReplaceDocumentForEntityUniqueIdentifier:(id)arg2;	// IMP=0x000000000000696a
- (void)horizontalScrollingContainerViewController:(id)arg1 willDisplayViewControllerAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000006955
- (id)navigationPaletteView;	// IMP=0x0000000000006771
- (void)documentMediaQueriesDidUpdate:(id)arg1;	// IMP=0x0000000000006702
- (void)documentDidUpdate:(id)arg1;	// IMP=0x00000000000065cc
- (void)setOperationQueue:(id)arg1;	// IMP=0x000000000000652d
- (void)setClientContext:(id)arg1;	// IMP=0x000000000000648e
- (id)contentScrollView;	// IMP=0x000000000000643e
- (void)viewDidLoad;	// IMP=0x0000000000006326
- (void)setPreferredContentSize:(struct CGSize)arg1;	// IMP=0x00000000000062a3
- (void)dealloc;	// IMP=0x0000000000006202
- (id)initWithTemplateElement:(id)arg1;	// IMP=0x00000000000060c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
