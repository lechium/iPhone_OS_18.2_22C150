//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBSystemApertureProximityBacklightPolicy, UIView;

@protocol SBSystemApertureProximityBacklightPolicyDelegate <NSObject>
- (_Bool)systemApertureProximityBacklightPolicyShouldDisableGracePeriod:(SBSystemApertureProximityBacklightPolicy *)arg1;
- (_Bool)systemApertureProximityBacklightPolicy:(SBSystemApertureProximityBacklightPolicy *)arg1 isSystemApertureElementVisibleAtPoint:(struct CGPoint)arg2;
- (_Bool)systemApertureProximityBacklightPolicyShouldConsiderSystemApertureInert:(SBSystemApertureProximityBacklightPolicy *)arg1;
- (void)systemApertureProximityBacklightPolicy:(SBSystemApertureProximityBacklightPolicy *)arg1 removeProximityTouchTrackingView:(UIView *)arg2 touchBlockingView:(UIView *)arg3;
- (void)systemApertureProximityBacklightPolicy:(SBSystemApertureProximityBacklightPolicy *)arg1 embedProximityTouchTrackingView:(UIView *)arg2 touchBlockingView:(UIView *)arg3;
@end

