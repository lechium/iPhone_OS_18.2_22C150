//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITabBarController.h>

@class MISSING_TYPE;

@interface _TtC6Health20MainTabBarController : UITabBarController
{
    MISSING_TYPE *providedHealthStore;	// 8 = 0x8
    MISSING_TYPE *providedHealthExperienceStore;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_providedHealthToolbox;	// 56 = 0x38
    MISSING_TYPE *providedPresentation;	// 676100 = 0xa5104
    MISSING_TYPE *pinnedContentManager;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0020000000024980
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000024920
- (id)initWithTabs:(id)arg1;	// IMP=0x00100000000248f0
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000024830
- (void)showAndActivateSearchBar;	// IMP=0x0010000000024800
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)viewDidLoad;	// IMP=0x0010000000024020
- (void)tabBar:(id)arg1 didSelectItem:(id)arg2;	// IMP=0x0010000000023be0
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000235b0
- (id)init;	// IMP=0x0010000000023590
- (void)restoreUserActivityState:(id)arg1;	// IMP=0x00100000000253b0

@end

