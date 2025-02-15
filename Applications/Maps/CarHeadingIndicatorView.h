//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKLocationManager, NSLayoutConstraint, NSString, UILabel, UIView;

@interface CarHeadingIndicatorView
{
    long long _sceneType;	// 8 = 0x8
    int _blurMode;	// 16 = 0x10
    _Bool _monitoringCourse;	// 20 = 0x14
    MKLocationManager *_locationManager;	// 24 = 0x18
    UIView *_containerView;	// 32 = 0x20
    UILabel *_headingLabel;	// 40 = 0x28
    NSLayoutConstraint *_widthConstraint;	// 48 = 0x30
    _Bool _contentsHidden;	// 56 = 0x38
    _Bool _active;	// 57 = 0x39
    int _compassPoint;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0020000000e3eed5
@property(nonatomic) int compassPoint; // @synthesize compassPoint=_compassPoint;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool contentsHidden; // @synthesize contentsHidden=_contentsHidden;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;	// IMP=0x0010000000e3ee8f
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;	// IMP=0x0010000000e3ee89
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;	// IMP=0x0010000000e3ee83
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;	// IMP=0x0010000000e3ee7d
- (void)locationManagerDidReset:(id)arg1;	// IMP=0x0010000000e3ee77
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;	// IMP=0x0010000000e3ee6f
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;	// IMP=0x0010000000e3ee3e
- (void)locationManagerUpdatedLocation:(id)arg1;	// IMP=0x0010000000e3ee0d
- (void)_updateDisplayedHeadingWithHeading:(double)arg1;	// IMP=0x0010000000e3edc4
- (_Bool)needsContinuousRoundedCorners;	// IMP=0x0010000000e3edbc
- (_Bool)canBecomeFocused;	// IMP=0x0010000000e3edb4
- (void)dynamicBlurViewDidChangeBlurMode:(int)arg1;	// IMP=0x0010000000e3ed91
- (struct CGSize)intrinsicContentSize;	// IMP=0x0010000000e3ed12
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0010000000e3ed00
- (_Bool)_canStartLocationUpdates;	// IMP=0x0010000000e3eca9
- (void)_stopLocationUpdates;	// IMP=0x0010000000e3ec52
- (void)_startLocationUpdates;	// IMP=0x0010000000e3ebc5
- (void)_applyDynamicScaling;	// IMP=0x0010000000e3eb6e
- (void)_updateColors;	// IMP=0x0010000000e3eaf0
- (void)_updateContents;	// IMP=0x0010000000e3ea0c
- (void)_updateStyling;	// IMP=0x0010000000e3e87c
- (void)_setupConstraints;	// IMP=0x0010000000e3e2bb
- (void)_setActive:(_Bool)arg1;	// IMP=0x0010000000e3e251
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000e3e172
- (void)didMoveToWindow;	// IMP=0x0010000000e3e0cb
- (void)dealloc;	// IMP=0x0010000000e3e08d
- (id)initWithCarSceneType:(long long)arg1;	// IMP=0x0010000000e3ddf8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

