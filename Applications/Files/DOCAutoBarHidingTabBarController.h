//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITabBarController.h>

@class NSNumber, UIAction, UIViewController;

@interface DOCAutoBarHidingTabBarController : UITabBarController
{
    _Bool _neverAllowShowingSystemTabs;	// 8 = 0x8
    _Bool _safeAreaUpdatesDisabledDuringTransitions;	// 9 = 0x9
    _Bool _usingSharedSplitBrowserStrategy;	// 10 = 0xa
    _Bool _forceBarHidden;	// 11 = 0xb
    NSNumber *_soleValidIndex;	// 16 = 0x10
    UIViewController *_tabViewControllerBeingSelected;	// 24 = 0x18
}

+ (_Bool)disableWorkaroundFor123787016;	// IMP=0x002000000000b045
- (void).cxx_destruct;	// IMP=0x002000000000b13d
@property(retain, nonatomic) UIViewController *tabViewControllerBeingSelected; // @synthesize tabViewControllerBeingSelected=_tabViewControllerBeingSelected;
@property(nonatomic) _Bool forceBarHidden; // @synthesize forceBarHidden=_forceBarHidden;
@property(nonatomic) _Bool usingSharedSplitBrowserStrategy; // @synthesize usingSharedSplitBrowserStrategy=_usingSharedSplitBrowserStrategy;
@property(nonatomic) _Bool safeAreaUpdatesDisabledDuringTransitions; // @synthesize safeAreaUpdatesDisabledDuringTransitions=_safeAreaUpdatesDisabledDuringTransitions;
@property(nonatomic) _Bool neverAllowShowingSystemTabs; // @synthesize neverAllowShowingSystemTabs=_neverAllowShowingSystemTabs;
@property(retain, nonatomic) NSNumber *soleValidIndex; // @synthesize soleValidIndex=_soleValidIndex;
@property(copy, nonatomic) UIAction *floatingTabBarSidebarToggleAction;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000000af67
- (void)loadViewControllers:(id)arg1 initialIndex:(unsigned long long)arg2;	// IMP=0x001000000000a9e7
- (void)viewDidLoad;	// IMP=0x001000000000a952
- (void)_performWhileNotingInflightSelectedViewController:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a8bc
- (void)_setSelectedViewController:(id)arg1;	// IMP=0x001000000000a54f
- (id)_underlyingSelectedViewController;	// IMP=0x001000000000a53d
- (void)_showBarWithTransition:(int)arg1 isExplicit:(_Bool)arg2 duration:(double)arg3;	// IMP=0x001000000000a4de
- (void)_updateBarVisibilityAnimated:(_Bool)arg1;	// IMP=0x001000000000a3d9
- (void)_updateBarVisibility;	// IMP=0x001000000000a3a3
- (void)updateBarVisibilityIfNecessary;	// IMP=0x001000000000a391
- (void)showBarIfAllowed;	// IMP=0x001000000000a34c
- (void)hideBar;	// IMP=0x001000000000a32a
@property(readonly, nonatomic) unsigned long long selectedOrInflightSelectedTab;
- (id)_selectedOrInflightSelectedViewController;	// IMP=0x001000000000a1ee
@property(readonly, nonatomic) UIViewController *selectedOrInflightSelectedViewController;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;	// IMP=0x0010000000496d10

@end

