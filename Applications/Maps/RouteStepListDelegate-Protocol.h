//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOLogContextDelegate-Protocol.h"
#import "NSObject-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class GEOComposedRouteStep, UIView;

@protocol RouteStepListDelegate <NSObject, GEOLogContextDelegate, UIScrollViewDelegate>

@optional
- (void)directionsStepsListDidTapRAPButton:(id)arg1;
- (void)directionsStepsListDidTapShareButton:(id)arg1;
- (void)directionsStepsList:(id)arg1 didTapElevationInfoButton:(UIView *)arg2;
- (void)directionsStepsList:(id)arg1 didTapRowForRouteStep:(GEOComposedRouteStep *)arg2;
@end

