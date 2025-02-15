//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthToolbox/NSObject-Protocol.h>

@class NSIndexPath, UITableView, UITableViewCell, UIViewController, WDProfile;

@protocol WDTableViewSectionDelegate <NSObject>
@property(retain, nonatomic) UITableView *tableView;
@property(retain, nonatomic) WDProfile *profile;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)presentViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)sectionAddedChildViewController:(UIViewController *)arg1;
- (void)pushViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (void)pushViewController:(UIViewController *)arg1;
- (void)reloadTable;
- (void)reloadSection:(unsigned long long)arg1 animated:(_Bool)arg2;
- (NSIndexPath *)indexPathForCell:(UITableViewCell *)arg1;
@end

