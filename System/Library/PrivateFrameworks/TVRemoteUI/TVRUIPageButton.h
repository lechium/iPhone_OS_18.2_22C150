//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVRUIButton.h"

@class CALayer, CAShapeLayer, UIBezierPath;

__attribute__((visibility("hidden")))
@interface TVRUIPageButton : TVRUIButton
{
    CAShapeLayer *_leftWing;	// 8 = 0x8
    CAShapeLayer *_rightWing;	// 16 = 0x10
    CALayer *_contentLayer;	// 24 = 0x18
    UIBezierPath *_wingPath;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003e08b
@property(retain, nonatomic) UIBezierPath *wingPath; // @synthesize wingPath=_wingPath;
@property(retain, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(retain, nonatomic) CAShapeLayer *rightWing; // @synthesize rightWing=_rightWing;
@property(retain, nonatomic) CAShapeLayer *leftWing; // @synthesize leftWing=_leftWing;
- (id)newChevronWingLayer;	// IMP=0x000000000003df3e
- (struct CGPath *)_newScaledPathForPath:(struct CGPath *)arg1 forSize:(struct CGSize)arg2;	// IMP=0x000000000003dd96
- (void)_updateLayers;	// IMP=0x000000000003db4d
- (void)layoutSubviews;	// IMP=0x000000000003db0c
- (void)_setupSublayers;	// IMP=0x000000000003d963
- (id)initWithType:(long long)arg1 hasTapAction:(_Bool)arg2;	// IMP=0x000000000003d917

@end

