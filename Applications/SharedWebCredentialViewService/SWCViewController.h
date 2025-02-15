//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBSUIRemoteAlertItemContentViewController.h>

@class NSDictionary, NSIndexPath, NSMutableArray, NSString, UILabel, UITableView;

@interface SWCViewController : SBSUIRemoteAlertItemContentViewController
{
    NSMutableArray *_credentials;	// 8 = 0x8
    UILabel *_topLabel;	// 16 = 0x10
    UILabel *_middleLabel;	// 24 = 0x18
    UITableView *_table;	// 32 = 0x20
    NSDictionary *_selectedDict;	// 40 = 0x28
    NSIndexPath *_selectedCell;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000003649
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000003536
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x00100000000034e4
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000003375
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000003358
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000031d3
- (void)loadView;	// IMP=0x0010000000002a1c
- (id)tableView;	// IMP=0x0010000000002945
- (void)_enableTable;	// IMP=0x0010000000002923
- (void)setCredentials:(id)arg1;	// IMP=0x0010000000002883
- (id)selectedItem;	// IMP=0x001000000000286e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

