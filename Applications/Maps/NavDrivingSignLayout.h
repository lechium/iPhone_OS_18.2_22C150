//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NavDrivingSignLayout
{
}

+ (id)sharedDrivingSignLayout;	// IMP=0x0020000000ddf70e
- (struct UIEdgeInsets)laneGuidanceViewInternalEdgeInsetsForSign:(id)arg1;	// IMP=0x0020000000ddfb88
- (_Bool)shouldTransformLaneViewsForSign:(id)arg1;	// IMP=0x0010000000ddfb80
- (double)laneGuidanceViewVerticalScaleForSign:(id)arg1;	// IMP=0x0010000000ddfb72
- (double)laneGuidanceViewSideMarginForSign:(id)arg1;	// IMP=0x0010000000ddfb69
- (double)laneGuidanceViewTopMarginForSign:(id)arg1;	// IMP=0x0010000000ddfb60
- (_Bool)forceHideLaneGuidanceViewForSign:(id)arg1;	// IMP=0x0010000000ddfb4b
- (_Bool)forceHideShieldViewForSign:(id)arg1;	// IMP=0x0010000000ddfa56
- (_Bool)forceHideManeuverViewForSign:(id)arg1;	// IMP=0x0010000000ddfa44
- (double)shieldViewTopMarginForSign:(id)arg1;	// IMP=0x0010000000ddf97b
- (double)textBottomMarginForSign:(id)arg1;	// IMP=0x0010000000ddf8b4
- (double)textTopMarginForSign:(id)arg1;	// IMP=0x0010000000ddf7eb
- (_Bool)_shouldShowLaneGuidanceForSign:(id)arg1;	// IMP=0x0010000000ddf763

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
