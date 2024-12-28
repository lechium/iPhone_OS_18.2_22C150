//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SCATXYAxisLineLayer;

@interface SCATXYAxisRangeLayer
{
    SCATXYAxisLineLayer *_lineLayer;	// 8 = 0x8
}

+ (double)rangeLayerFrameInset;	// IMP=0x00400000000be518
- (void).cxx_destruct;	// IMP=0x00200000000bf509
@property(retain, nonatomic) SCATXYAxisLineLayer *lineLayer; // @synthesize lineLayer=_lineLayer;
- (id)_borderForegroundColorForTheme:(int)arg1;	// IMP=0x00100000000bf442
- (id)_borderBackgroundColorForTheme:(int)arg1;	// IMP=0x00100000000bf3a0
- (id)_backgroundColorForTheme:(int)arg1;	// IMP=0x00100000000bf293
- (void)updateToFitWithinParentBounds:(struct CGRect)arg1;	// IMP=0x00100000000bf08e
- (void)updateFrameForParentBounds:(struct CGRect)arg1 refinementPoint:(struct CGPoint *)arg2;	// IMP=0x00100000000beaed
- (void)updateTheme:(int)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000be920
- (void)resetLineLayer;	// IMP=0x00100000000be825
- (void)removeAllAnimations;	// IMP=0x00100000000be6dd
- (id)initWithAxis:(int)arg1;	// IMP=0x00100000000be526

@end
