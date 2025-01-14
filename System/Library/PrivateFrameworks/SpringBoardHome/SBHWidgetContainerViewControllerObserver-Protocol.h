//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class SBHWidgetContainerViewController;

@protocol SBHWidgetContainerViewControllerObserver <NSObject>

@optional
- (void)widgetContainerViewControllerContentViewControllerDidUpdateStyleConfiguration:(SBHWidgetContainerViewController *)arg1;
- (void)widgetContainerViewControllerInitialWidgetContentReadinessChanged:(SBHWidgetContainerViewController *)arg1 widgetContentIsReady:(_Bool)arg2;
- (void)widgetContainerViewControllerContentViewControllerWillDeactivate:(SBHWidgetContainerViewController *)arg1;
- (void)widgetContainerViewControllerContentViewControllerDidActivate:(SBHWidgetContainerViewController *)arg1;
@end

