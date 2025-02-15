//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MacFooterView, NSString, UISearchBar, UITableView, _TtC4Maps26ChargingNetworksDataSource;
@protocol _TtP4Maps43ChargingNetworkPickerViewControllerDelegate_;

@interface MacChargingNetworksPickerViewController : UIViewController
{
    UISearchBar *_searchBar;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    MacFooterView *_footerView;	// 24 = 0x18
    id <_TtP4Maps43ChargingNetworkPickerViewControllerDelegate_> _delegate;	// 32 = 0x20
    _TtC4Maps26ChargingNetworksDataSource *_dataSource;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000459c1b
@property(retain, nonatomic) _TtC4Maps26ChargingNetworksDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <_TtP4Maps43ChargingNetworkPickerViewControllerDelegate_> delegate; // @synthesize delegate=_delegate;
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x0010000000459b37
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x0010000000459b17
- (void)macFooterViewBackButtonTapped:(id)arg1;	// IMP=0x00100000004599cf
- (void)macFooterViewRightButtonTapped:(id)arg1;	// IMP=0x001000000045992c
- (void)macFooterViewLeftButtonTapped:(id)arg1;	// IMP=0x0010000000459913
- (void)reloadData;	// IMP=0x0010000000459901
- (void)didDeselectNetwork:(id)arg1 isSuggested:(_Bool)arg2;	// IMP=0x0010000000459887
- (void)didSelectNetwork:(id)arg1 isSuggested:(_Bool)arg2;	// IMP=0x001000000045980d
- (void)_updateAddButton;	// IMP=0x0010000000459796
- (void)_updateContent;	// IMP=0x0010000000459779
- (void)_setupConstraints;	// IMP=0x0010000000458ff5
- (void)_setupSubviews;	// IMP=0x0010000000458aa9
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000004589bb
- (void)viewDidLoad;	// IMP=0x001000000045892e
- (id)initWithExcludedNetworks:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000458865

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

