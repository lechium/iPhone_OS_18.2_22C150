//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UITableView, UIView;

@interface MacRAPBaseTableViewController
{
    UITableView *_tableView;	// 8 = 0x8
    UIView *_tableViewFooter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000008c5521
@property(nonatomic) UIView *tableViewFooter; // @synthesize tableViewFooter=_tableViewFooter;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)viewDidLoad;	// IMP=0x00100000008c4c14
- (id)initWithStyle:(long long)arg1 withTableViewFooter:(id)arg2;	// IMP=0x00100000008c4be7
- (id)initWithStyle:(long long)arg1;	// IMP=0x00100000008c4ad0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
