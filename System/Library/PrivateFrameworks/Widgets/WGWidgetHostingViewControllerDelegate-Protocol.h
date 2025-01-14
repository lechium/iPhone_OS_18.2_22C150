//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Widgets/NSObject-Protocol.h>

@class WGWidgetHostingViewController;

@protocol WGWidgetHostingViewControllerDelegate <NSObject>
- (void)unregisterWidgetForRefreshEvents:(WGWidgetHostingViewController *)arg1;
- (void)registerWidgetForRefreshEvents:(WGWidgetHostingViewController *)arg1;
- (struct CGSize)maxSizeForWidget:(WGWidgetHostingViewController *)arg1 forDisplayMode:(long long)arg2;

@optional
- (struct CGRect)visibleFrameForWidget:(WGWidgetHostingViewController *)arg1;
- (_Bool)managingContainerIsVisibleForWidget:(WGWidgetHostingViewController *)arg1;
- (struct UIEdgeInsets)layoutMarginForWidget:(WGWidgetHostingViewController *)arg1;
- (struct UIEdgeInsets)marginInsetsForWidget:(WGWidgetHostingViewController *)arg1;
- (long long)activeLayoutModeForWidget:(WGWidgetHostingViewController *)arg1;
- (_Bool)shouldRequestWidgetRemoteViewControllers;
- (void)widget:(WGWidgetHostingViewController *)arg1 didChangeLargestSupportedDisplayMode:(long long)arg2;
- (void)contentAvailabilityDidChangeForWidget:(WGWidgetHostingViewController *)arg1;
- (void (^)(void))widget:(WGWidgetHostingViewController *)arg1 didUpdatePreferredHeight:(double)arg2 completion:(void (^)(_Bool))arg3;
- (void)brokenViewDidAppearForWidget:(WGWidgetHostingViewController *)arg1;
- (void)remoteViewControllerViewDidHideForWidget:(WGWidgetHostingViewController *)arg1;
- (void)remoteViewControllerViewDidAppearForWidget:(WGWidgetHostingViewController *)arg1;
- (void)remoteViewControllerDidDisconnectForWidget:(WGWidgetHostingViewController *)arg1;
- (void)remoteViewControllerDidConnectForWidget:(WGWidgetHostingViewController *)arg1;
@end

