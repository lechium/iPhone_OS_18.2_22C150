//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CarTwoPartLabel, GuidanceETA, NSArray, NSNumber;

@interface CarRouteInfoView : UIView
{
    CarTwoPartLabel *_etaLabel;	// 8 = 0x8
    CarTwoPartLabel *_timeLabel;	// 16 = 0x10
    CarTwoPartLabel *_distanceLabel;	// 24 = 0x18
    CarTwoPartLabel *_batteryLabel;	// 32 = 0x20
    NSArray *_evLabels;	// 40 = 0x28
    NSArray *_normalLabels;	// 48 = 0x30
    NSArray *_spacerConstraints;	// 56 = 0x38
    NSArray *_arrangedSubviewsWidthConstraints;	// 64 = 0x40
    NSNumber *_renderedInWidth;	// 72 = 0x48
    GuidanceETA *_latestETA;	// 80 = 0x50
    NSArray *_arrangedSubviews;	// 88 = 0x58
    double _spacing;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000007b2eab
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(copy, nonatomic) NSArray *arrangedSubviews; // @synthesize arrangedSubviews=_arrangedSubviews;
@property(retain, nonatomic) GuidanceETA *latestETA; // @synthesize latestETA=_latestETA;
- (void)layoutSubviews;	// IMP=0x00100000007b2d03
- (void)_resetSpacerConstraints;	// IMP=0x00100000007b2b91
- (void)_updateSpacerConstraintsToAbsorbWidth:(double)arg1;	// IMP=0x00100000007b2855
- (double)_updateWidthConstraintsByCompressionResistanceWithAvailableWidth:(double)arg1;	// IMP=0x00100000007b1d8f
- (double)_updateWidthConstraintsForEVWithAvailableWidth:(double)arg1;	// IMP=0x00100000007b19c5
- (void)_updateWidthAndSpaceConstraints;	// IMP=0x00100000007b13db
- (id)viewForLastBaselineLayout;	// IMP=0x00100000007b0ceb
- (id)viewForFirstBaselineLayout;	// IMP=0x00100000007b0cce
- (void)_updateLabels;	// IMP=0x00100000007b0639
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000007b02e4

@end
