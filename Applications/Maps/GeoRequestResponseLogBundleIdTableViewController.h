//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class NSMutableArray;

@interface GeoRequestResponseLogBundleIdTableViewController : UITableViewController
{
    NSMutableArray *_bundleIds;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000002c0a5a
- (void)_editBundleId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002c097e
- (void)_addRow;	// IMP=0x00100000002c0795
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x00100000002c052c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000002c0435
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000002c01aa
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00100000002bfeac
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x00100000002bfea4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000002bfe87
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000002bfe7c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000002bfdd4
- (void)viewDidLoad;	// IMP=0x00100000002bfce6
- (id)init;	// IMP=0x00100000002bfcb5

@end
