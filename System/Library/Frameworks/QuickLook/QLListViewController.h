//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@class NSArray, NSString, QLItem, QLListCellManager, QLPreviewItemStore, UIBarButtonItem, UIPopoverPresentationController, UITableViewController;
@protocol QLListViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface QLListViewController : UINavigationController
{
    UIPopoverPresentationController *_presentationController;	// 8 = 0x8
    UITableViewController *_tableViewController;	// 16 = 0x10
    QLItem *_currentPreviewItem;	// 24 = 0x18
    QLPreviewItemStore *_previewItemStore;	// 32 = 0x20
    QLListCellManager *_cellManager;	// 40 = 0x28
    NSArray *_itemsWithFolders;	// 48 = 0x30
    id <QLListViewControllerDelegate> _archiveDelegate;	// 56 = 0x38
    UIBarButtonItem *_barButton;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000002c877
@property(nonatomic) __weak UIBarButtonItem *barButton; // @synthesize barButton=_barButton;
@property __weak id <QLListViewControllerDelegate> archiveDelegate; // @synthesize archiveDelegate=_archiveDelegate;
- (void)_addPath:(id)arg1 fromPreviewItem:(id)arg2 intoArray:(id)arg3;	// IMP=0x000000000002c6d1
- (void)_generateItemsAndFolders;	// IMP=0x000000000002c55d
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000002c394
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000002c31b
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000002c30d
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000002bf89
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000002bf4b
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;	// IMP=0x000000000002bf33
- (void)prepareForPopoverPresentation:(id)arg1;	// IMP=0x000000000002beff
- (void)_updateNavigationBarVisibilityForPresentationStyle:(long long)arg1;	// IMP=0x000000000002bdb9
- (void)_dismiss;	// IMP=0x000000000002bda0
- (id)initWithPreviewItemStore:(id)arg1 currentPreviewItem:(id)arg2;	// IMP=0x000000000002babb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

