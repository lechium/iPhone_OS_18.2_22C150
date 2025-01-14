//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MacFooterView, MacRAPHeaderView, NSString, UISearchBar;

@interface MacRAPBaseViewController : UIViewController
{
    _Bool _rightButtonEnabled;	// 8 = 0x8
    _Bool _hasSearchBar;	// 9 = 0x9
    NSString *_headerTitle;	// 16 = 0x10
    NSString *_searchBarPlaceholder;	// 24 = 0x18
    UISearchBar *_searchBar;	// 32 = 0x20
    long long _footerRightButtonType;	// 40 = 0x28
    MacRAPHeaderView *_headerView;	// 48 = 0x30
    MacFooterView *_footerView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000009fb8db
@property(retain, nonatomic) MacFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MacRAPHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool hasSearchBar; // @synthesize hasSearchBar=_hasSearchBar;
@property(nonatomic) long long footerRightButtonType; // @synthesize footerRightButtonType=_footerRightButtonType;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NSString *searchBarPlaceholder; // @synthesize searchBarPlaceholder=_searchBarPlaceholder;
@property(nonatomic) _Bool rightButtonEnabled; // @synthesize rightButtonEnabled=_rightButtonEnabled;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x00100000009fb803
- (void)macFooterViewBackButtonTapped:(id)arg1;	// IMP=0x00100000009fb7b9
- (void)macFooterViewRightButtonTapped:(id)arg1;	// IMP=0x00100000009fb7b3
- (void)macFooterViewLeftButtonTapped:(id)arg1;	// IMP=0x00100000009fb79a
- (void)_addFooterView;	// IMP=0x00100000009fb3bf
- (void)_addHeaderView;	// IMP=0x00100000009fafab
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000009faee8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000009facb0
- (void)viewDidLoad;	// IMP=0x00100000009fac27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

