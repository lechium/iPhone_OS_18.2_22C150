//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8StocksUI21WelcomeViewController : UIViewController
{
    MISSING_TYPE *styler;	// 8 = 0x8
    MISSING_TYPE *eventHandler;	// 48 = 0x30
    MISSING_TYPE *viewProvider;	// 64 = 0x40
    MISSING_TYPE *viewAnimator;	// 104 = 0x68
    MISSING_TYPE *allowRendering;	// 144 = 0x90
    MISSING_TYPE *statusBarView;	// 152 = 0x98
    MISSING_TYPE *toolbarManager;	// 160 = 0xa0
    MISSING_TYPE *sceneStateManager;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x000000000032dee0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000032de80
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000032ddb0
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000032e920
- (void)viewWillLayoutSubviews;	// IMP=0x000000000032e8f0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000032e690
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000032e660
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000032e4b0
- (void)viewDidLoad;	// IMP=0x000000000032e480
- (void)didTapContinueButton;	// IMP=0x000000000032ea80
- (void)showPrivacyText;	// IMP=0x000000000032eb90

@end

