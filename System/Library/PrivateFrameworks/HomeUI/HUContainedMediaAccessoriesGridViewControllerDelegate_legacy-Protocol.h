//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFItem, HUContainedMediaAccessoriesGridViewController_legacy, UIViewController;
@protocol HUDetailsPresentationDelegateHost;

@protocol HUContainedMediaAccessoriesGridViewControllerDelegate_legacy <NSObject>

@optional
- (UIViewController<HUDetailsPresentationDelegateHost> *)detailsViewControllerForContainedMediaAccessoryGridViewController:(HUContainedMediaAccessoriesGridViewController_legacy *)arg1 item:(HFItem *)arg2;
@end

