//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFHomeKitAccessorySettingItem, HFItemModule, HUHomeKitAccessorySettingsItemModuleController, UIViewController;

@protocol HUHomeKitAccessorySettingsItemModuleControllerDelegate <NSObject>

@optional
- (void)moduleController:(HUHomeKitAccessorySettingsItemModuleController *)arg1 preflightCheckToAllowSwitchingForSettingItem:(HFHomeKitAccessorySettingItem *)arg2 changingToOn:(_Bool)arg3 withCompletion:(void (^)(NAFuture *))arg4;
- (void)moduleController:(HUHomeKitAccessorySettingsItemModuleController *)arg1 presentSettingDetailsViewController:(UIViewController *)arg2;
- (void)moduleController:(HUHomeKitAccessorySettingsItemModuleController *)arg1 expandModule:(HFItemModule *)arg2;
@end
