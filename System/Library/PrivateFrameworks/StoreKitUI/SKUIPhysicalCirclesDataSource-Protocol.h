//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class SKUIPhysicalCirclesView, UIView;

@protocol SKUIPhysicalCirclesDataSource <NSObject>
- (UIView *)circlesView:(SKUIPhysicalCirclesView *)arg1 circleForIndex:(long long)arg2;
- (long long)numberOfCirclesInCircleView:(SKUIPhysicalCirclesView *)arg1;
@end
