//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LibraryConfiguration, LibraryItemController, LibraryViewController, MainLibrarySectionController, NSMutableDictionary, NSString, UIViewController;
@protocol SidebarUIProxy;

__attribute__((visibility("hidden")))
@interface LibraryController : NSObject
{
    NSMutableDictionary *_itemsByCollection;	// 8 = 0x8
    LibraryItemController *_lastSelectedItemController;	// 16 = 0x10
    UIViewController *_viewControllerForLastSelectedItemController;	// 24 = 0x18
    MainLibrarySectionController *_mainLibrarySectionController;	// 32 = 0x20
    _Bool _isSelectingItem;	// 40 = 0x28
    LibraryConfiguration *_configuration;	// 48 = 0x30
    id <SidebarUIProxy> _sidebarUIProxy;	// 56 = 0x38
    LibraryViewController *_sidebarViewController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000011545b
@property(retain, nonatomic) LibraryViewController *sidebarViewController; // @synthesize sidebarViewController=_sidebarViewController;
@property(retain, nonatomic) id <SidebarUIProxy> sidebarUIProxy; // @synthesize sidebarUIProxy=_sidebarUIProxy;
@property(readonly, nonatomic) _Bool isSelectingItem; // @synthesize isSelectingItem=_isSelectingItem;
@property(readonly, nonatomic) LibraryConfiguration *configuration; // @synthesize configuration=_configuration;
- (_Bool)libraryViewController:(id)arg1 shouldPersistSelectionForItem:(id)arg2;	// IMP=0x000000000011540e
- (void)libraryViewControllerDidClearSelection:(id)arg1;	// IMP=0x0000000000115408
- (void)_reportSelectedItemForAnalytics:(id)arg1;	// IMP=0x00000000001152eb
- (void)libraryViewController:(id)arg1 didSelectItem:(id)arg2;	// IMP=0x00000000001150ec
- (void)registerItem:(id)arg1 forCollectionType:(id)arg2;	// IMP=0x00000000001150d6
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000114fb3
@property(copy, nonatomic) NSString *currentCollection;
- (void)_updateSidebarButton;	// IMP=0x00000000001147dc
- (void)browserViewControllerDidChangeSidebarStyle;	// IMP=0x00000000001147ca
- (void)reloadExpansionStateForTabGroup:(id)arg1;	// IMP=0x000000000011442e
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000001143b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

