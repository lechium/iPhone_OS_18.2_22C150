//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7NewsUI229SearchHomeContainerController : UIViewController
{
    MISSING_TYPE *searchBar;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *styler;	// 32 = 0x20
    MISSING_TYPE *searchHomeViewController;	// 40 = 0x28
    MISSING_TYPE *searchResultsViewController;	// 56 = 0x38
    MISSING_TYPE *toolbarManager;	// 72 = 0x48
    MISSING_TYPE *currentSearchTerm;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000f5bfd0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000f5bf70
- (id)contentScrollViewForEdge:(unsigned long long)arg1;	// IMP=0x0000000000f5bf40
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000f5bea0
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000f5be70
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000f5bc50
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000f5bc20
- (void)viewDidLoad;	// IMP=0x0000000000f5ba10
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000f5b530
- (void)didDismissSearchController:(id)arg1;	// IMP=0x0000000000f5c130
- (void)willDismissSearchController:(id)arg1;	// IMP=0x0000000000f5c100
- (void)didPresentSearchController:(id)arg1;	// IMP=0x0000000000f5c0f0
- (void)willPresentSearchController:(id)arg1;	// IMP=0x0000000000f5c070
- (void)searchBarTextDidBeginEditing:(id)arg1;	// IMP=0x0000000000f5c240
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x0000000000f5c1c0

@end

