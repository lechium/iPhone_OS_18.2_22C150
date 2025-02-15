//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ToneKit/NSObject-Protocol.h>

@class NSIndexPath, NSString, TKPickerRowItem, TKPickerTableViewCell, TKTonePickerItem, UITableView, UITableViewCell, UITableViewController;
@protocol TKTonePickerTableViewLayoutMarginsObserver><TKTonePickerTableViewSeparatorObserver;

@protocol TKTonePickerTableViewControllerHelper <NSObject>
- (void)tonePickerTableViewControllerWillBeDeallocated:(UITableViewController<TKTonePickerTableViewLayoutMarginsObserver><TKTonePickerTableViewSeparatorObserver> *)arg1;
- (void)tonePickerTableViewWillDisappear:(_Bool)arg1;
- (void)tableView:(UITableView *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2 forPickerRowItem:(TKPickerRowItem *)arg3;
- (void)updateDividerContentColorToMatchSeparatorColorInTableView:(UITableView *)arg1;
- (void)updateCell:(TKPickerTableViewCell *)arg1 withDetailText:(NSString *)arg2;
- (void)updateCell:(TKPickerTableViewCell *)arg1 withCheckedStatus:(_Bool)arg2 forTonePickerItem:(TKTonePickerItem *)arg3;
- (TKTonePickerItem *)selectedTonePickerItem;
- (void)tableView:(UITableView *)arg1 updateCell:(UITableViewCell *)arg2 withSeparatorForPickerRowItem:(TKPickerRowItem *)arg3;
- (void)tableView:(UITableView *)arg1 willDisplayCell:(UITableViewCell *)arg2 forPickerRowItem:(TKPickerRowItem *)arg3;
- (UITableViewCell *)tableView:(UITableView *)arg1 cellForPickerRowItem:(TKPickerRowItem *)arg2;
- (void)loadViewForTonePickerTableViewController:(UITableViewController<TKTonePickerTableViewLayoutMarginsObserver><TKTonePickerTableViewSeparatorObserver> *)arg1;
@end

