//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTableViewController.h>

@class HKDisplayType, HKUnitPreferenceController, NSArray, NSSet, UIBarButtonItem, UIFont;

__attribute__((visibility("hidden")))
@interface WDUnitPreferenceViewController : HKTableViewController
{
    NSSet *_units;	// 8 = 0x8
    HKDisplayType *_displayType;	// 16 = 0x10
    HKUnitPreferenceController *_unitController;	// 24 = 0x18
    NSArray *_rows;	// 32 = 0x20
    long long _selectedRowIndex;	// 40 = 0x28
    long long _originalSelectedRowIndex;	// 48 = 0x30
    UIBarButtonItem *_doneButton;	// 56 = 0x38
    UIBarButtonItem *_cancelButton;	// 64 = 0x40
    _Bool _requiresChangeConfirmation;	// 72 = 0x48
    UIFont *_bodyFont;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000046a5b
@property(retain, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(nonatomic) _Bool requiresChangeConfirmation; // @synthesize requiresChangeConfirmation=_requiresChangeConfirmation;
- (void)viewControllerDidLeaveAdaptiveModal;	// IMP=0x00000000000469e8
- (void)viewControllerWillEnterAdaptiveModal;	// IMP=0x0000000000046880
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000000046825
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000465fe
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000004642a
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000004640d
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000046402
- (void)_updateCurrentUnit:(id)arg1;	// IMP=0x00000000000463d7
- (void)_doneButtonTapped:(id)arg1;	// IMP=0x00000000000460a2
- (void)_cancelButtonTapped:(id)arg1;	// IMP=0x0000000000046089
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000045f8c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000045dc7
- (void)viewDidLoad;	// IMP=0x0000000000045cfb
- (id)_sortedUnitPreferenceRows;	// IMP=0x00000000000459b1
- (id)initWithUnits:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;	// IMP=0x00000000000456f3

@end

