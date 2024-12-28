//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@class NSArray, NSIndexPath, NSString, UILocalizedIndexedCollation, UITableViewController;
@protocol CNCountryPickerControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNCountryPickerController : UINavigationController
{
    NSString *_selectedCountryCode;	// 8 = 0x8
    UITableViewController *_tableViewController;	// 16 = 0x10
    UILocalizedIndexedCollation *_collation;	// 24 = 0x18
    NSArray *_countries;	// 32 = 0x20
    NSArray *_sections;	// 40 = 0x28
    NSIndexPath *_selectedIndexPath;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000199e28
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(copy, nonatomic) NSArray *countries; // @synthesize countries=_countries;
@property(retain, nonatomic) UILocalizedIndexedCollation *collation; // @synthesize collation=_collation;
@property(retain, nonatomic) UITableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(copy, nonatomic) NSString *selectedCountryCode; // @synthesize selectedCountryCode=_selectedCountryCode;
- (void)_configureSections;	// IMP=0x0000000000199752
- (void)_loadCountryCodes;	// IMP=0x000000000019931c
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x0000000000199307
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000019926a
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x0000000000199217
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x00000000001991c7
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000199059
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000198da4
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000198d08
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000198c94
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000198c26
- (void)dealloc;	// IMP=0x0000000000198bb1
- (void)windowDidRotate:(id)arg1;	// IMP=0x0000000000198ad8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000198797
- (void)viewDidLoad;	// IMP=0x00000000001986fa
- (void)cancelPicker:(id)arg1;	// IMP=0x00000000001986ae
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000198389

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <CNCountryPickerControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
