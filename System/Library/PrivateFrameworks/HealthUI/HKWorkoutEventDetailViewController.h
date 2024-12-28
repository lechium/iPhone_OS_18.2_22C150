//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKTableViewController.h"

@class HKWorkoutEvent, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HKWorkoutEventDetailViewController : HKTableViewController
{
    NSMutableArray *_sections;	// 8 = 0x8
    HKWorkoutEvent *_event;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001da8f8
@property(retain, nonatomic) HKWorkoutEvent *event; // @synthesize event=_event;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001da7e4
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001da7d3
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001da7c5
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001da773
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000001da762
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000001da704
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001da6e7
- (void)_loadSections;	// IMP=0x00000000001da674
- (void)_addSectionIfNotNil:(id)arg1;	// IMP=0x00000000001da650
- (id)initWithEvent:(id)arg1;	// IMP=0x00000000001da4ff

@end
