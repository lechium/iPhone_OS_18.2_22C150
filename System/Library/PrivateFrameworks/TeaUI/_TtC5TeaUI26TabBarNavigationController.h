//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, NSString, UITabBarItem;

@interface _TtC5TeaUI26TabBarNavigationController
{
    MISSING_TYPE *rootViewController;	// 16 = 0x10
    MISSING_TYPE *commandCenter;	// 32 = 0x20
    MISSING_TYPE *animateAlongsideTabBarSnapshot;	// 48 = 0x30
    MISSING_TYPE *viewControllerDepth;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002820d2
- (id)initWithRootViewController:(id)arg1;	// IMP=0x0000000000282050
- (id)initWithRootViewController:(id)arg1 navigationBarClass:(Class)arg2;	// IMP=0x0000000000281fe4
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, retain) UITabBarItem *tabBarItem;
@property(nonatomic, copy) NSArray *viewControllers;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002818d4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000028264d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000002822eb
- (void)viewDidLoad;	// IMP=0x0000000000282154
- (void)showViewController:(id)arg1 sender:(id)arg2;	// IMP=0x00000000002829e2
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;	// IMP=0x000000000028335a
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000002831ee
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000282efe

@end

