//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class NSString, RAPTablePartsDataSource;

@interface RAPTableViewController : UITableViewController
{
    RAPTablePartsDataSource *_dataSource;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000c086f2
- (void)scrollToPartAfterPartAnimated:(id)arg1;	// IMP=0x0010000000c081c9
- (void)scrollToBottomAnimated;	// IMP=0x0010000000c07e3d
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000c07e2f
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0010000000c07daf
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0010000000c07d2f
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;	// IMP=0x0010000000c07d21
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0010000000c07ca1
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0010000000c07b63
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000c07a83
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0010000000c079ce
@property(readonly, nonatomic) _Bool usesNavigationControllerPushForSegue;
- (void)returnFromViewController:(id)arg1;	// IMP=0x0010000000c0779e
- (void)segueToViewController:(id)arg1 afterReturningFromViewController:(id)arg2;	// IMP=0x0010000000c07615
- (void)segueToViewController:(id)arg1;	// IMP=0x0010000000c07598
@property(readonly, nonatomic) RAPTablePartsDataSource *newDataSource;
@property(readonly, nonatomic) RAPTablePartsDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000c073a7
- (void)infoCardThemeChanged;	// IMP=0x0010000000c072d0
- (void)viewDidLoad;	// IMP=0x0010000000c07149
- (id)init;	// IMP=0x0010000000c07115

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

