//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TUNavigationController.h"

@class MISSING_TYPE;

@interface _TtC5TeaUI20NavigationController : TUNavigationController
{
    MISSING_TYPE *styler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000077727
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000776d9
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;	// IMP=0x0000000000077644
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000773bd
- (_Bool)accessibilityPerformEscape;	// IMP=0x0000000000077317
- (id)popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x00000000000771b2
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000076fb9
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x0000000000076e47
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000076a7c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007690b
- (id)initWithRootViewController:(id)arg1;	// IMP=0x000000000007682e
- (id)initWithRootViewController:(id)arg1 navigationBarClass:(Class)arg2;	// IMP=0x0000000000076737
@property(nonatomic) _Bool hidesBottomBarWhenPushed;
@property(nonatomic, readonly) long long ts_preferredTrailingStatusBarStyle;
@property(nonatomic, readonly) long long ts_preferredCenterStatusBarStyle;
@property(nonatomic, readonly) long long ts_preferredLeadingStatusBarStyle;
@property(nonatomic, readonly) long long preferredStatusBarStyle;

@end
