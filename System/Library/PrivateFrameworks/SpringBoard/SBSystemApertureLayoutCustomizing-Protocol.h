//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class UIView;

@protocol SBSystemApertureLayoutCustomizing <NSObject>

@optional
@property(readonly, nonatomic) long long systemApertureLayoutCustomizingOptions;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly, nonatomic) long long customLayoutRequestingSpecialFlowerBoundsResizingAnimation;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly, nonatomic) long long systemApertureCustomLayout;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

- (_Bool)isFixedInOrientation;
- (_Bool)isRequestingLayoutUpdateForHostedClient;
- (double)concentricPaddingOverrideForView:(UIView *)arg1 inLayoutMode:(long long)arg2;
- (_Bool)overridesConcentricPaddingForView:(UIView *)arg1 inLayoutMode:(long long)arg2;
@end
