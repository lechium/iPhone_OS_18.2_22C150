//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsFeed/NSObject-Protocol.h>

@class UIPointerInteraction, UIPointerRegion, UIPointerRegionRequest, UIPointerStyle;
@protocol UIPointerInteractionAnimating;

@protocol UIPointerInteractionDelegate <NSObject>

@optional
- (void)pointerInteraction:(UIPointerInteraction *)arg1 willExitRegion:(UIPointerRegion *)arg2 animator:(id <UIPointerInteractionAnimating>)arg3;
- (void)pointerInteraction:(UIPointerInteraction *)arg1 willEnterRegion:(UIPointerRegion *)arg2 animator:(id <UIPointerInteractionAnimating>)arg3;
- (UIPointerStyle *)pointerInteraction:(UIPointerInteraction *)arg1 styleForRegion:(UIPointerRegion *)arg2;
- (UIPointerRegion *)pointerInteraction:(UIPointerInteraction *)arg1 regionForRequest:(UIPointerRegionRequest *)arg2 defaultRegion:(UIPointerRegion *)arg3;
@end

