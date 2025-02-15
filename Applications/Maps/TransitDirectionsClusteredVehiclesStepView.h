//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKTransitInfoLabelView, NSLayoutConstraint, TransitDirectionsListClusteredVehicleItem, UIImageView;
@protocol TransitDirectionsClusteredVehiclesStepViewDelegate;

@interface TransitDirectionsClusteredVehiclesStepView
{
    UIImageView *_chevronImageView;	// 40 = 0x28
    NSLayoutConstraint *_messageLabelBaselineConstraint;	// 48 = 0x30
    id <TransitDirectionsClusteredVehiclesStepViewDelegate> _delegate;	// 56 = 0x38
    MKTransitInfoLabelView *_alternateRoutesLabel;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000002ccac0
@property(readonly, nonatomic) MKTransitInfoLabelView *alternateRoutesLabel; // @synthesize alternateRoutesLabel=_alternateRoutesLabel;
@property(nonatomic) __weak id <TransitDirectionsClusteredVehiclesStepViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)bottomSpacerHeight;	// IMP=0x00100000002cca3c
- (void)_updateNavigationStateAlpha:(double)arg1;	// IMP=0x00100000002cc9e9
- (void)_tapped;	// IMP=0x00100000002cc99d
@property(readonly, nonatomic) TransitDirectionsListClusteredVehicleItem *clusteredVehicleItem;
- (void)configureWithItem:(id)arg1;	// IMP=0x00100000002cc839
- (void)_updateConstraintsValue;	// IMP=0x00100000002cc7c0
- (void)_updateShieldSize;	// IMP=0x00100000002cc725
- (void)_updateFonts;	// IMP=0x00100000002cc687
- (void)_contentSizeCategoryDidChange;	// IMP=0x00100000002cc624
- (id)_initialConstraints;	// IMP=0x00100000002cc0f3
- (void)_createSubviews;	// IMP=0x00100000002cbdb2

@end

