//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, _UIDocumentPickerContainerModel, _UIDocumentPickerSearchPaletteView, _UIDocumentPickerSortOrderView, _UIDocumentSearchListController;
@protocol _UIDocumentPickerContainedViewController, _UIDocumentPickerServiceViewController;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerViewController : UIViewController
{
    long long _explicitDisplayMode;	// 8 = 0x8
    id <_UIDocumentPickerServiceViewController> _serviceViewController;	// 16 = 0x10
    _UIDocumentPickerContainerModel *_model;	// 24 = 0x18
    _UIDocumentSearchListController *_resultsController;	// 32 = 0x20
    UIViewController<_UIDocumentPickerContainedViewController> *_childViewController;	// 40 = 0x28
    _UIDocumentPickerSortOrderView *_sortView;	// 48 = 0x30
    _UIDocumentPickerSearchPaletteView *_searchView;	// 56 = 0x38
}

+ (id)userDefaults;	// IMP=0x00100000000328a5
- (void).cxx_destruct;	// IMP=0x0000000000032ea6
@property(retain, nonatomic) _UIDocumentPickerSearchPaletteView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) _UIDocumentPickerSortOrderView *sortView; // @synthesize sortView=_sortView;
@property(retain, nonatomic) UIViewController<_UIDocumentPickerContainedViewController> *childViewController; // @synthesize childViewController=_childViewController;
@property(retain, nonatomic) _UIDocumentSearchListController *resultsController; // @synthesize resultsController=_resultsController;
@property(nonatomic) long long explicitDisplayMode; // @synthesize explicitDisplayMode=_explicitDisplayMode;
@property(retain, nonatomic) _UIDocumentPickerContainerModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <_UIDocumentPickerServiceViewController> serviceViewController; // @synthesize serviceViewController=_serviceViewController;
- (long long)displayMode;	// IMP=0x0000000000032db3
- (long long)defaultDisplayMode;	// IMP=0x0000000000032c4e
- (void)setDefaultDisplayMode:(long long)arg1;	// IMP=0x0000000000032af7
- (int)sortOrder;	// IMP=0x00000000000329ff
- (void)setSortOrder:(int)arg1;	// IMP=0x00000000000328d5
@property(nonatomic) struct CGPoint contentOffset;
@property(retain, nonatomic) NSArray *indexPathsForSelectedItems;
- (_Bool)isEditing;	// IMP=0x0000000000032785
- (void)setEditing:(_Bool)arg1;	// IMP=0x0000000000032768
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000326b3
- (void)_sortOrderViewChanged:(id)arg1;	// IMP=0x0000000000032557
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000032516
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000324d3
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000003244f
- (void)setChildViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000032109
- (void)_startSearchWithQueryString:(id)arg1 becomeFirstResponder:(_Bool)arg2;	// IMP=0x0000000000031f35
- (void)setupSearchController;	// IMP=0x0000000000031d30
- (void)_updateTraitCollection;	// IMP=0x000000000003198c
- (void)ensureChildViewController;	// IMP=0x00000000000316f6
- (void)displayModeChanged;	// IMP=0x00000000000316c8
- (void)dealloc;	// IMP=0x000000000003167e
- (void)invalidate;	// IMP=0x0000000000031641
- (id)initWithModel:(id)arg1;	// IMP=0x000000000003143f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

