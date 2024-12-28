//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSMeasurement, UIImageView, UILabel;

@interface DirectionsElevationLabelView : UIView
{
    long long _style;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
    NSMeasurement *_elevation;	// 32 = 0x20
}

+ (id)_formatter;	// IMP=0x004000000035c9bc
- (void).cxx_destruct;	// IMP=0x002000000035d576
@property(copy, nonatomic) NSMeasurement *elevation; // @synthesize elevation=_elevation;
- (id)accessibilityIdentifier;	// IMP=0x001000000035d553
- (void)_refreshLabel;	// IMP=0x001000000035d219
- (void)setFont:(id)arg1 color:(id)arg2;	// IMP=0x001000000035d076
- (void)setFont:(id)arg1;	// IMP=0x001000000035cff7
- (id)initWithStyle:(long long)arg1;	// IMP=0x001000000035ca9e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000035ca8a

@end
