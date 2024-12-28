//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKAnnotationView.h>

@class MISSING_TYPE, NSString, UIBezierPath, UIColor, UIImage, UIView;

__attribute__((visibility("hidden")))
@interface _TtC11WeatherMaps24WeatherMapAnnotationView : MKAnnotationView
{
    MISSING_TYPE *dataSource;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 24 = 0x18
    MISSING_TYPE *viewModel;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *shouldDisableImplicitAnimations;	// 0 = 0x0
    MISSING_TYPE *cachedBalloonContentView;	// 0 = 0x0
    MISSING_TYPE *axBalloonContentView;	// 0 = 0x0
    MISSING_TYPE *mapAnnotation;	// 1871440 = 0x1c8e50
    MISSING_TYPE *$__lazy_storage_$_locationLabel;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_pinView;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000167a14
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000001679c4
@property(nonatomic) struct CGPoint accessibilityActivationPoint;
@property(nonatomic, retain) UIBezierPath *accessibilityPath;
@property(nonatomic) struct CGRect accessibilityFrame;
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic, copy) NSString *accessibilityHint;
@property(nonatomic, copy) NSString *accessibilityValue;
@property(nonatomic, copy) NSString *accessibilityLabel;
@property(nonatomic) _Bool isAccessibilityElement;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001673c5
- (void)layoutSubviews;	// IMP=0x00000000001672f4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000166fbb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000166eda
- (id)_balloonStrokeColor;	// IMP=0x0000000000167da5
- (id)_balloonTintColor;	// IMP=0x0000000000167d0b
- (id)_balloonContentView;	// IMP=0x0000000000167b84
- (long long)_balloonCalloutStyle;	// IMP=0x0000000000167b7c
- (id)_balloonImage;	// IMP=0x0000000000167b70

// Remaining properties
@property(nonatomic, readonly) long long balloonCalloutStyle;
@property(nonatomic, readonly) UIView *balloonContentView;
@property(nonatomic, readonly) UIImage *balloonImage;
@property(nonatomic, readonly) UIColor *balloonStrokeColor;
@property(nonatomic, readonly) UIColor *balloonTintColor;

@end
