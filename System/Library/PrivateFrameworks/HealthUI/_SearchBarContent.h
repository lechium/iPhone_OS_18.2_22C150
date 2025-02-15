//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class HKBarButtonItemControl, HKIncrementalSearchBar, NSString, UIStackView, _SearchEntryWithMatchDisplay;
@protocol HKIncrementalSearchBarDelegate;

__attribute__((visibility("hidden")))
@interface _SearchBarContent : UIView
{
    id <HKIncrementalSearchBarDelegate> _searchBarDelegate;	// 8 = 0x8
    HKIncrementalSearchBar *_searchBar;	// 16 = 0x10
    HKBarButtonItemControl *_upBarButton;	// 24 = 0x18
    HKBarButtonItemControl *_downBarButton;	// 32 = 0x20
    HKBarButtonItemControl *_doneBarButton;	// 40 = 0x28
    _SearchEntryWithMatchDisplay *_searchEntry;	// 48 = 0x30
    UIStackView *_searchBarContainerView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000328927
@property(readonly, nonatomic) UIStackView *searchBarContainerView; // @synthesize searchBarContainerView=_searchBarContainerView;
@property(readonly, nonatomic) _SearchEntryWithMatchDisplay *searchEntry; // @synthesize searchEntry=_searchEntry;
@property(readonly, nonatomic) HKBarButtonItemControl *doneBarButton; // @synthesize doneBarButton=_doneBarButton;
@property(readonly, nonatomic) HKBarButtonItemControl *downBarButton; // @synthesize downBarButton=_downBarButton;
@property(readonly, nonatomic) HKBarButtonItemControl *upBarButton; // @synthesize upBarButton=_upBarButton;
@property(readonly, nonatomic) __weak HKIncrementalSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak id <HKIncrementalSearchBarDelegate> searchBarDelegate; // @synthesize searchBarDelegate=_searchBarDelegate;
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x0000000000328858
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x00000000003287e0
- (void)downAction:(id)arg1;	// IMP=0x0000000000328774
- (void)upAction:(id)arg1;	// IMP=0x0000000000328708
- (id)inputField;	// IMP=0x00000000003286eb
- (void)layoutSubviews;	// IMP=0x0000000000328612
- (void)buildSearchBarContent;	// IMP=0x0000000000328072
- (id)initWithSearchBar:(id)arg1;	// IMP=0x0000000000327fa3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

