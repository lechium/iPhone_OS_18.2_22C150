//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSIndexPath, NSString, UISearchController, UITextField;
@protocol CNPickerControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNPickerController : UITableViewController
{
    _Bool _allowsDiscoveredItems;	// 8 = 0x8
    _Bool _searchIncludesSupplementalItems;	// 9 = 0x9
    _Bool _allowsCustomItems;	// 10 = 0xa
    _Bool _searchControllerActive;	// 11 = 0xb
    id _selectedItem;	// 16 = 0x10
    id <CNPickerControllerDelegate> _delegate;	// 24 = 0x18
    NSArray *_discoveredItems;	// 32 = 0x20
    NSArray *_promotedItems;	// 40 = 0x28
    NSArray *_builtinItems;	// 48 = 0x30
    NSArray *_supplementalItems;	// 56 = 0x38
    NSArray *_promotedSupplementalItems;	// 64 = 0x40
    NSArray *_remainderSupplementalItems;	// 72 = 0x48
    NSArray *_customItems;	// 80 = 0x50
    NSString *_itemLocalizationKey;	// 88 = 0x58
    CDUnknownBlockType _itemLocalizationBlock;	// 96 = 0x60
    NSIndexPath *_selectedIndexPath;	// 104 = 0x68
    long long _discoveredItemsSection;	// 112 = 0x70
    long long _promotedItemsSection;	// 120 = 0x78
    long long _builtinItemsSection;	// 128 = 0x80
    long long _customItemsSection;	// 136 = 0x88
    NSString *_customEditingItem;	// 144 = 0x90
    UITextField *_customTextField;	// 152 = 0x98
    NSArray *_filterTokens;	// 160 = 0xa0
    UISearchController *_searchController;	// 168 = 0xa8
    NSArray *_filteredDiscoveredItems;	// 176 = 0xb0
    NSArray *_filteredPromotedItems;	// 184 = 0xb8
    NSArray *_filteredBuiltinItems;	// 192 = 0xc0
    NSArray *_filteredCustomItems;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000211e7b
@property(nonatomic, getter=isSearchControllerActive) _Bool searchControllerActive; // @synthesize searchControllerActive=_searchControllerActive;
@property(copy, nonatomic) NSArray *filteredCustomItems; // @synthesize filteredCustomItems=_filteredCustomItems;
@property(copy, nonatomic) NSArray *filteredBuiltinItems; // @synthesize filteredBuiltinItems=_filteredBuiltinItems;
@property(copy, nonatomic) NSArray *filteredPromotedItems; // @synthesize filteredPromotedItems=_filteredPromotedItems;
@property(copy, nonatomic) NSArray *filteredDiscoveredItems; // @synthesize filteredDiscoveredItems=_filteredDiscoveredItems;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) NSArray *filterTokens; // @synthesize filterTokens=_filterTokens;
@property(retain, nonatomic) UITextField *customTextField; // @synthesize customTextField=_customTextField;
@property(retain, nonatomic) NSString *customEditingItem; // @synthesize customEditingItem=_customEditingItem;
@property(nonatomic) long long customItemsSection; // @synthesize customItemsSection=_customItemsSection;
@property(nonatomic) long long builtinItemsSection; // @synthesize builtinItemsSection=_builtinItemsSection;
@property(nonatomic) long long promotedItemsSection; // @synthesize promotedItemsSection=_promotedItemsSection;
@property(nonatomic) long long discoveredItemsSection; // @synthesize discoveredItemsSection=_discoveredItemsSection;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(copy, nonatomic) CDUnknownBlockType itemLocalizationBlock; // @synthesize itemLocalizationBlock=_itemLocalizationBlock;
@property(copy, nonatomic) NSString *itemLocalizationKey; // @synthesize itemLocalizationKey=_itemLocalizationKey;
@property(nonatomic) _Bool allowsCustomItems; // @synthesize allowsCustomItems=_allowsCustomItems;
@property(copy, nonatomic) NSArray *customItems; // @synthesize customItems=_customItems;
@property(nonatomic) _Bool searchIncludesSupplementalItems; // @synthesize searchIncludesSupplementalItems=_searchIncludesSupplementalItems;
@property(copy, nonatomic) NSArray *remainderSupplementalItems; // @synthesize remainderSupplementalItems=_remainderSupplementalItems;
@property(copy, nonatomic) NSArray *promotedSupplementalItems; // @synthesize promotedSupplementalItems=_promotedSupplementalItems;
@property(copy, nonatomic) NSArray *supplementalItems; // @synthesize supplementalItems=_supplementalItems;
@property(copy, nonatomic) NSArray *builtinItems; // @synthesize builtinItems=_builtinItems;
@property(copy, nonatomic) NSArray *promotedItems; // @synthesize promotedItems=_promotedItems;
@property(nonatomic) _Bool allowsDiscoveredItems; // @synthesize allowsDiscoveredItems=_allowsDiscoveredItems;
@property(copy, nonatomic) NSArray *discoveredItems; // @synthesize discoveredItems=_discoveredItems;
@property(nonatomic) __weak id <CNPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id selectedItem; // @synthesize selectedItem=_selectedItem;
- (id)_itemAtIndexPath:(id)arg1 isPlaceholder:(_Bool *)arg2;	// IMP=0x0000000000211805
- (unsigned long long)_indexForCustomItemAtIndexPath:(id)arg1;	// IMP=0x00000000002116f2
- (void)picker:(id)arg1 didDeleteItem:(id)arg2;	// IMP=0x0000000000211648
- (void)picker:(id)arg1 didPickItem:(id)arg2;	// IMP=0x00000000002115dd
- (void)pickerDidCancel:(id)arg1;	// IMP=0x0000000000211593
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;	// IMP=0x0000000000211581
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;	// IMP=0x00000000002114fe
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x000000000021121e
- (_Bool)textFieldShouldEndEditing:(id)arg1;	// IMP=0x0000000000211139
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x000000000021103c
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x0000000000210f54
- (_Bool)isSearching;	// IMP=0x0000000000210ef2
- (void)didDismissSearchController:(id)arg1;	// IMP=0x000000000021094a
- (void)willPresentSearchController:(id)arg1;	// IMP=0x0000000000210741
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x000000000021062b
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000210391
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;	// IMP=0x0000000000210389
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x000000000021035e
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x0000000000210349
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000210146
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000020fe90
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000020fc16
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000020fa9d
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000020f94d
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000020f7ce
- (void)_updateRightButtonItem;	// IMP=0x000000000020f6e4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000020efe4
- (_Bool)isSupplementalDisclosureItemIndexPath:(id)arg1;	// IMP=0x000000000020ef39
- (_Bool)isAddCustomItemIndexPath:(id)arg1;	// IMP=0x000000000020ee9c
- (void)pickedItem:(id)arg1;	// IMP=0x000000000020ee96
- (void)removeCustomItem:(id)arg1;	// IMP=0x000000000020ee90
- (void)customLabelUpdated:(id)arg1;	// IMP=0x000000000020ede7
- (void)presentExtendedPicker;	// IMP=0x000000000020ecb6
- (void)donePicker:(id)arg1;	// IMP=0x000000000020eb99
- (void)doneInlineEditing:(id)arg1;	// IMP=0x000000000020eb3f
- (void)cancelPicker:(id)arg1;	// IMP=0x000000000020eaf3
- (id)titleForSupplementalItems;	// IMP=0x000000000020ea97
- (id)titleForAddCustomItem;	// IMP=0x000000000020ea3b
- (id)titleForPickerItem:(id)arg1;	// IMP=0x000000000020e933
- (id)_titleForPickerItem:(id)arg1;	// IMP=0x000000000020e76d
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000020e464

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
