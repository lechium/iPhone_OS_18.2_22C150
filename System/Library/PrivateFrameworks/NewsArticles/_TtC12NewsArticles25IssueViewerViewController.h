//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, UINavigationItem;

@interface _TtC12NewsArticles25IssueViewerViewController : UIViewController
{
    MISSING_TYPE *contentViewControllerFactory;	// 8 = 0x8
    MISSING_TYPE *styler;	// 48 = 0x30
    MISSING_TYPE *eventHandler;	// 88 = 0x58
    MISSING_TYPE *sceneStateManager;	// 104 = 0x68
    MISSING_TYPE *coverViewManager;	// 144 = 0x90
    MISSING_TYPE *navigationItemStyle;	// 152 = 0x98
    MISSING_TYPE *contentViewController;	// 160 = 0xa0
    MISSING_TYPE *afterLoad;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x000000000025fce0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000025fc80
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000025fbc0
@property(nonatomic, readonly) UINavigationItem *navigationItem;
@property(nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;
@property(nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000260800
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000002606e0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000260490
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000260340
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000002601c0
- (void)viewDidLoad;	// IMP=0x00000000002600d0
@property(nonatomic, readonly) unsigned long long viewingLocation;

@end

