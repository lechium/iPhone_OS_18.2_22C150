//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, MKMapView;
@protocol HULocationTriggerEditorMapDragRadiusViewDelegate;

@interface HULocationTriggerEditorMapDragRadiusView : UIView
{
    MISSING_TYPE *mapView;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *proximity;	// 24 = 0x18
    MISSING_TYPE *normalizedSliderValue;	// 32 = 0x20
    MISSING_TYPE *radiusInMeters;	// 40 = 0x28
    MISSING_TYPE *radiusSlider;	// 48 = 0x30
    MISSING_TYPE *radiusLabel;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000018ff90
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000018ff30
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018fb10
- (id)initWithFrame:(struct CGRect)arg1 radiusInMeters:(double)arg2 delegate:(id)arg3;	// IMP=0x000000000018fa50
@property(nonatomic) unsigned long long proximity; // @synthesize proximity;
@property(nonatomic) __weak id <HULocationTriggerEditorMapDragRadiusViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView;
- (void)dragHandleDidMove:(id)arg1;	// IMP=0x000000000018fff0
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000190180
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001900f0
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000190070
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x0000000000190250
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;	// IMP=0x00000000001901b0

@end
