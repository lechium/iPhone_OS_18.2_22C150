//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class VUIDebugMetricsEvent;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsEventViewController : UITableViewController
{
    VUIDebugMetricsEvent *_event;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000222517
@property(retain, nonatomic) VUIDebugMetricsEvent *event; // @synthesize event=_event;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000222294
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000222202
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000221d56
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000221ca9
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000221c5a
- (void)performValidation;	// IMP=0x0000000000221baa
- (void)viewDidLoad;	// IMP=0x0000000000221a0a
- (id)initWithEvent:(id)arg1;	// IMP=0x0000000000221997

@end

