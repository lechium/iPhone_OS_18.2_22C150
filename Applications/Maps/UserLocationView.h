//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/_MKUserLocationView.h>

@class VKTimedAnimation;

@interface UserLocationView : _MKUserLocationView
{
    long long _mode;	// 16 = 0x10
    VKTimedAnimation *_transitionAnimation;	// 24 = 0x18
    _Bool _isNavPuckActive;	// 32 = 0x20
    _Bool _inNavigationMapMode;	// 33 = 0x21
    _Bool _inNavMode;	// 34 = 0x22
    long long _viewMode;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000d69cb1
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (_Bool)isPersistent;	// IMP=0x0010000000d69c85
- (void)locationManagerFailedToUpdateLocation;	// IMP=0x0010000000d69c07
- (void)updateStateFromLocation:(id)arg1 duration:(double)arg2;	// IMP=0x0010000000d69ab5
- (void)_transitionTo:(long long)arg1;	// IMP=0x0010000000d699b2
- (void)_transitionToNormalPuckWithDuration:(double)arg1;	// IMP=0x0010000000d6935e
- (void)_transitionToNavPuckWithDuration:(double)arg1;	// IMP=0x0010000000d68c4e
- (void)setAnnotation:(id)arg1;	// IMP=0x0010000000d68bbe
- (void)_setAnimatingToCoordinate:(_Bool)arg1;	// IMP=0x0010000000d68b4c
- (void)_setPresentationCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x0010000000d68ace
- (void)_setPresentationCourse:(double)arg1;	// IMP=0x0010000000d68a5a
- (void)_setTracking:(_Bool)arg1;	// IMP=0x0010000000d689e8
- (void)_updateVKNavigationPuckMarkerFromCurrentState;	// IMP=0x0010000000d6869d
- (void)_setVKNavigationPuckMarker:(id)arg1;	// IMP=0x0010000000d685ba
- (void)_updateNavPuckAnimated:(_Bool)arg1;	// IMP=0x0010000000d684ae
- (_Bool)_shouldUseNavPuck;	// IMP=0x0010000000d68499
- (void)setViewMode:(long long)arg1;	// IMP=0x0010000000d683c8
- (void)setInNavMode:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000d682cb
- (_Bool)_shouldRotateForCourseWithMode:(long long)arg1;	// IMP=0x0010000000d682be
- (void)_updateForMode:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000d68124
- (void)setMode:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000d680fc
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000d6808e

@end

