//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class NSMutableIndexSet, NSString, SKUIMenuPageComponent, SKUIMenuViewController, SKUIPillsControl, SKUIPopupMenuHeaderView, UIBarButtonItem, UIPopoverController;

__attribute__((visibility("hidden")))
@interface SKUIMenuPageSection : SKUIStorePageSection
{
    UIBarButtonItem *_cancelMenuItem;	// 8 = 0x8
    SKUIPillsControl *_pillsControl;	// 16 = 0x10
    SKUIMenuViewController *_moreListMenuViewController;	// 24 = 0x18
    UIPopoverController *_moreListPopoverController;	// 32 = 0x20
    SKUIPopupMenuHeaderView *_popupHeaderView;	// 40 = 0x28
    long long _selectedIndex;	// 48 = 0x30
    NSMutableIndexSet *_sortRequestIndexSet;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003794a9
- (void)_showPopoverController;	// IMP=0x00000000003792b9
- (void)_showMoreList;	// IMP=0x0000000000379247
- (void)_showMenuViewController;	// IMP=0x0000000000378ff5
- (void)_setSelectedIndex:(long long)arg1;	// IMP=0x0000000000378ede
- (void)_restorePreviousSelection;	// IMP=0x0000000000378e34
- (id)_popupHeaderView;	// IMP=0x0000000000378ba7
- (id)_pillsControl;	// IMP=0x000000000037878f
- (id)_newMenuViewController;	// IMP=0x000000000037866c
- (void)_loadSortDataIfNecessaryForMenuIndex:(long long)arg1 reason:(long long)arg2;	// IMP=0x00000000003784bc
- (void)_dismissMenuViewController;	// IMP=0x0000000000378363
- (id)_contentChildView;	// IMP=0x00000000003782a4
- (void)_pillAction:(id)arg1;	// IMP=0x000000000037816a
- (void)_cancelMenuAction:(id)arg1;	// IMP=0x000000000037813c
- (void)popoverControllerDidDismissPopover:(id)arg1;	// IMP=0x00000000003780bb
- (void)sortDataRequest:(id)arg1 didFinishWithLockups:(id)arg2;	// IMP=0x0000000000377ea2
- (void)popupMenuHeader:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2;	// IMP=0x0000000000377e8d
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;	// IMP=0x0000000000377dee
- (void)willAppearInContext:(id)arg1;	// IMP=0x0000000000377d4a
- (struct UIEdgeInsets)sectionContentInset;	// IMP=0x0000000000377cf4
- (long long)numberOfCells;	// IMP=0x0000000000377ce9
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x0000000000377c32
- (id)cellForIndexPath:(id)arg1;	// IMP=0x0000000000377b26
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x00000000003779f1
- (void)dealloc;	// IMP=0x000000000037793a
- (id)initWithPageComponent:(id)arg1;	// IMP=0x0000000000377884

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUIMenuPageComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

