//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class HKQuantitySeriesDataProvider, UITableView;

__attribute__((visibility("hidden")))
@interface HKQuantitySeriesViewController : UIViewController
{
    HKQuantitySeriesDataProvider *_dataProvider;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001f3898
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) HKQuantitySeriesDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (void)loadView;	// IMP=0x00000000001f35b1
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x00000000001f3574
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001f34b7
- (void)viewDidLoad;	// IMP=0x00000000001f3240

@end
