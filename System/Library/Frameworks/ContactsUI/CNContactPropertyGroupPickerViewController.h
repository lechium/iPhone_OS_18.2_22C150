//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CNContact, NSArray, NSString, UITableView;
@protocol CNContactGroupPickerDelegate;

__attribute__((visibility("hidden")))
@interface CNContactPropertyGroupPickerViewController : UIViewController
{
    NSArray *_pickableGroups;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    NSArray *_prohibitedPropertyKeys;	// 24 = 0x18
    id <CNContactGroupPickerDelegate> _groupPickerDelegate;	// 32 = 0x20
    CNContact *_contact;	// 40 = 0x28
}

+ (id)pickableGroupsWithPickedGroups:(id)arg1 policy:(id)arg2 prohibitedPropertyKeys:(id)arg3 contact:(id)arg4;	// IMP=0x001000000013e593
+ (id)propertySections;	// IMP=0x001000000013e563
+ (_Bool)propertiesLeftToPickWithPickedGroups:(id)arg1 policy:(id)arg2 prohibitedPropertyKeys:(id)arg3 contact:(id)arg4;	// IMP=0x001000000013e514
+ (_Bool)propertiesLeftToPickWithPickedGroups:(id)arg1 policy:(id)arg2 prohibitedPropertyKeys:(id)arg3;	// IMP=0x001000000013e4ff
+ (_Bool)propertiesLeftToPickWithPickedGroups:(id)arg1 policy:(id)arg2;	// IMP=0x001000000013e4e6
- (void).cxx_destruct;	// IMP=0x000000000013e484
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <CNContactGroupPickerDelegate> groupPickerDelegate; // @synthesize groupPickerDelegate=_groupPickerDelegate;
@property(retain, nonatomic) NSArray *prohibitedPropertyKeys; // @synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys;
- (id)_loadPickableGroupsWithPickedGroups:(id)arg1 policy:(id)arg2;	// IMP=0x000000000013e342
- (void)cancel:(id)arg1;	// IMP=0x000000000013e2f6
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x000000000013e2e1
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000013e244
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000013e153
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000013e011
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000013dfbf
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000013dfa2
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000013dea7
- (void)loadView;	// IMP=0x000000000013dce9
- (void)dealloc;	// IMP=0x000000000013dca7
- (id)initWithGroups:(id)arg1;	// IMP=0x000000000013dbbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
