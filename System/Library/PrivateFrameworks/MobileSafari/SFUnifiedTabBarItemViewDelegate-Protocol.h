//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafari/NSObject-Protocol.h>

@class SFUnifiedTabBarItemView, UIButton, WBSWebExtensionData;

@protocol SFUnifiedTabBarItemViewDelegate <NSObject>

@optional
- (_Bool)tabBarItemViewShouldAnnotateWithTabEntity:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemViewTitleChanged:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemView:(SFUnifiedTabBarItemView *)arg1 didFinishShowingAvailabilityLabelOfType:(long long)arg2;
- (void)tabBarItemView:(SFUnifiedTabBarItemView *)arg1 didUpdateHovering:(_Bool)arg2;
- (_Bool)tabBarItemViewCanBecomeFocused:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemView:(SFUnifiedTabBarItemView *)arg1 multipleExtensionButtonTapped:(UIButton *)arg2;
- (void)tabBarItemView:(SFUnifiedTabBarItemView *)arg1 extensionButtonTapped:(UIButton *)arg2 extension:(WBSWebExtensionData *)arg3;
- (void)tabBarItemViewDidRequestFocusForPencilInput:(SFUnifiedTabBarItemView *)arg1 completionHandler:(void (^)(void))arg2;
- (void)tabBarItemViewMediaStateMuteButtonTapped:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemViewTranslationButtonTapped:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemViewReaderButtonTapped:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemViewStopButtonTapped:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemViewReloadButtonTapped:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemViewVoiceSearchButtonTapped:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemViewMenuButtonClicked:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemViewMenuButtonReceivedTouchDown:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemViewMenuButtonTapped:(SFUnifiedTabBarItemView *)arg1;
- (void)tabBarItemViewCloseButtonTapped:(SFUnifiedTabBarItemView *)arg1;
@end
