//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TeaUI/NSObject-Protocol.h>

@class TUPageViewController, UIViewController;

@protocol TUPageViewControllerDataSource <NSObject>
- (UIViewController *)pageViewController:(TUPageViewController *)arg1 viewControllerBeforeViewController:(UIViewController *)arg2;
- (UIViewController *)pageViewController:(TUPageViewController *)arg1 viewControllerAfterViewController:(UIViewController *)arg2;
@end

