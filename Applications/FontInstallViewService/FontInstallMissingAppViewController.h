//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface FontInstallMissingAppViewController : UITableViewController
{
    NSMutableArray *providers;	// 8 = 0x8
    NSMutableDictionary *font;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000009dd0
@property(retain, nonatomic) NSMutableDictionary *font; // @synthesize font;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000009a80
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00100000000098a0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000009830
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000000097e0
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000009640
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000009430

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

