//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class CNCardPropertyGroup, CNMutableContact, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CNPostalAddressEditorViewController : UITableViewController
{
    NSMutableArray *_propertyItems;	// 8 = 0x8
    NSString *_propertyKey;	// 16 = 0x10
    CNMutableContact *_contact;	// 24 = 0x18
    CNCardPropertyGroup *_propertyGroup;	// 32 = 0x20
    _Bool _editNames;	// 40 = 0x28
    _Bool _editingExistingContact;	// 41 = 0x29
}

+ (id)cellIdentifierForClass:(Class)arg1;	// IMP=0x0010000000238625
+ (id)cellIdentifierForEditingProperty:(id)arg1;	// IMP=0x0010000000238549
- (void).cxx_destruct;	// IMP=0x00000000002384e3
- (id)contactViewCache;	// IMP=0x00000000002384db
- (void)propertyCellDidChangeLayout:(id)arg1;	// IMP=0x0000000000238424
- (void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(long long)arg3;	// IMP=0x000000000023841e
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3;	// IMP=0x0000000000238382
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3;	// IMP=0x0000000000238309
@property(readonly) _Bool isPresentingModalViewController;
- (void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000238264
- (void)sender:(id)arg1 dismissViewController:(id)arg2;	// IMP=0x0000000000238248
- (void)sender:(id)arg1 presentViewController:(id)arg2;	// IMP=0x00000000002380d7
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000002380c2
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000237cd8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000237cbb
- (void)registerContactCellClass:(Class)arg1;	// IMP=0x0000000000237c3c
- (void)_startEditingFirstCell;	// IMP=0x0000000000237b83
- (void)validateContents;	// IMP=0x00000000002376a9
- (void)done:(id)arg1;	// IMP=0x00000000002374ff
- (void)cancel:(id)arg1;	// IMP=0x000000000023747d
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000023743c
- (void)viewDidLoad;	// IMP=0x00000000002372cd
- (void)_rebuildPropertyGroupItems:(_Bool)arg1;	// IMP=0x0000000000236bfc
- (double)tableViewSpacingForExtraSeparators:(id)arg1;	// IMP=0x0000000000236bee
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000236b2c
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 editNames:(_Bool)arg3;	// IMP=0x00000000002369e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
