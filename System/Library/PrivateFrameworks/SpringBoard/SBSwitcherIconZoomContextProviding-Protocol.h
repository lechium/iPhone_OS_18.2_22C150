//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSSet, NSString, SBAppLayout, UIView;
@protocol SBSwitcherIconZooming;

@protocol SBSwitcherIconZoomContextProviding <NSObject>
- (_Bool)anyDisplayItemForAppLayoutOverlapsFloatingDock:(SBAppLayout *)arg1;
- (NSString *)iconGridSizeClassForAppLayout:(SBAppLayout *)arg1;
- (NSString *)iconLocationForAppLayout:(SBAppLayout *)arg1;
- (_Bool)shouldMatchMoveIconZoomingView:(UIView<SBSwitcherIconZooming> *)arg1;
- (UIView<SBSwitcherIconZooming> *)matchingIconZoomingViewForIconZoomingView:(UIView<SBSwitcherIconZooming> *)arg1;
- (UIView<SBSwitcherIconZooming> *)iconZoomingViewContainerForIconZoomingView:(UIView<SBSwitcherIconZooming> *)arg1;
- (UIView<SBSwitcherIconZooming> *)iconZoomingViewForAppLayout:(SBAppLayout *)arg1;
- (_Bool)isIconForIconZoomingView:(UIView<SBSwitcherIconZooming> *)arg1 displayedInLocations:(NSSet *)arg2;
- (void)noteIconZoomingViewWillZoomDown:(UIView<SBSwitcherIconZooming> *)arg1;
- (void)stopTrackingHiddenIconZoomViewIfNeeded:(UIView<SBSwitcherIconZooming> *)arg1;
- (void)startTrackingHiddenIconZoomViewIfNeeded:(UIView<SBSwitcherIconZooming> *)arg1;
- (double)iconCornerRadiusForAppLayout:(SBAppLayout *)arg1;
- (double)iconScaleForAppLayout:(SBAppLayout *)arg1;
- (struct CGRect)iconFrameForAppLayout:(SBAppLayout *)arg1;
@end
