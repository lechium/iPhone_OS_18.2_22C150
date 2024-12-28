//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsEventListViewController : UITableViewController
{
    NSArray *_visibleEvents;	// 8 = 0x8
    NSArray *_allEvents;	// 16 = 0x10
    NSArray *_buttonsInHeader;	// 24 = 0x18
    NSArray *_buttonsInHeaderSelected;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000030e8a3
@property(retain, nonatomic) NSArray *buttonsInHeaderSelected; // @synthesize buttonsInHeaderSelected=_buttonsInHeaderSelected;
@property(retain, nonatomic) NSArray *buttonsInHeader; // @synthesize buttonsInHeader=_buttonsInHeader;
@property(retain, nonatomic) NSArray *allEvents; // @synthesize allEvents=_allEvents;
@property(retain, nonatomic) NSArray *visibleEvents; // @synthesize visibleEvents=_visibleEvents;
- (id)_imageFromPageContext:(id)arg1;	// IMP=0x000000000030e6fa
- (void)_buttonClicked:(id)arg1;	// IMP=0x000000000030e37e
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000000030db1a
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000030db0c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000030da21
- (id)_formatKeyAndValue:(id)arg1 fromEvent:(id)arg2;	// IMP=0x000000000030d895
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000030d492
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000030d475
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000030d46a
- (void)finishValidation;	// IMP=0x000000000030cb81
- (void)toggleValidationMode;	// IMP=0x000000000030ca1a
- (void)viewDidLoad;	// IMP=0x000000000030c894
- (id)initWithEvents:(id)arg1;	// IMP=0x000000000030c7e3

@end
