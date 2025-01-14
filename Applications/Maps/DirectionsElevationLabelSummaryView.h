//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class DirectionsElevationLabelView, UIStackView;

@interface DirectionsElevationLabelSummaryView : UIView
{
    UIStackView *_labelStack;	// 8 = 0x8
    _Bool _stackVertically;	// 16 = 0x10
    DirectionsElevationLabelView *_ascentLabel;	// 24 = 0x18
    DirectionsElevationLabelView *_descentLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000035dd7c
@property(readonly, nonatomic) DirectionsElevationLabelView *descentLabel; // @synthesize descentLabel=_descentLabel;
@property(readonly, nonatomic) DirectionsElevationLabelView *ascentLabel; // @synthesize ascentLabel=_ascentLabel;
- (id)accessibilityIdentifier;	// IMP=0x001000000035dd48
- (id)viewForLastBaselineLayout;	// IMP=0x001000000035dd2b
- (id)viewForFirstBaselineLayout;	// IMP=0x001000000035dd0e
- (void)_updateStackViewMetrics;	// IMP=0x001000000035dca2
- (_Bool)_shouldStackVertically;	// IMP=0x001000000035dc39
- (void)_updateShouldStackVertically;	// IMP=0x001000000035dbe7
- (void)_contentSizeCategoryDidChange;	// IMP=0x001000000035dbd5
- (void)setFont:(id)arg1 color:(id)arg2;	// IMP=0x001000000035db45
- (void)setFont:(id)arg1;	// IMP=0x001000000035dad8
- (void)setAscent:(id)arg1 descent:(id)arg2;	// IMP=0x001000000035da67
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000035d5b8

@end

