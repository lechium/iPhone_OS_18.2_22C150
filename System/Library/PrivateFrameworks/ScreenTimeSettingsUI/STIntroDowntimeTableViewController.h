//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class NSDateFormatter, STDeviceBedtime;

__attribute__((visibility("hidden")))
@interface STIntroDowntimeTableViewController : UITableViewController
{
    STDeviceBedtime *_bedtime;	// 8 = 0x8
    long long _datePickerVisibility;	// 16 = 0x10
    NSDateFormatter *_downtimeFormatter;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007b8e7
@property(readonly) NSDateFormatter *downtimeFormatter; // @synthesize downtimeFormatter=_downtimeFormatter;
@property long long datePickerVisibility; // @synthesize datePickerVisibility=_datePickerVisibility;
@property(readonly) STDeviceBedtime *bedtime; // @synthesize bedtime=_bedtime;
- (void)_datePickerChanged:(id)arg1;	// IMP=0x000000000007b58e
- (long long)_tableRowForDatePicker;	// IMP=0x000000000007b537
- (long long)_tableRowForEndLabelRow;	// IMP=0x000000000007b4eb
- (long long)_tableRowForStartLabelRow;	// IMP=0x000000000007b4e3
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000007b48d
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000007b380
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000007ae1a
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000007adfa
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000007adef
- (void)_stIntroDowntimeTableViewControllerCommonInit;	// IMP=0x000000000007ad44
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007acfd
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000007acb6
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000007ac6f

@end

