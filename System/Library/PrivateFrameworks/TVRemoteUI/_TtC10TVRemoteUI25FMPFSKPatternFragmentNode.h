//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC10TVRemoteUI25FMPFSKPatternFragmentNode
{
    MISSING_TYPE *experienceType;	// 17 = 0x11
    MISSING_TYPE *style;	// 24 = 0x18
    MISSING_TYPE *gimbalNode;	// 320 = 0x140
    MISSING_TYPE *dotNode;	// 328 = 0x148
    MISSING_TYPE *minScaleFactor;	// 336 = 0x150
    MISSING_TYPE *maxScaleFactor;	// 344 = 0x158
    MISSING_TYPE *explodedDiskRadius;	// 352 = 0x160
    MISSING_TYPE *peripheralDiskRadius;	// 360 = 0x168
    MISSING_TYPE *innerPeripheralDiskRadius;	// 368 = 0x170
    MISSING_TYPE *travelingStyle;	// 376 = 0x178
    MISSING_TYPE *conformedBrightness;	// 384 = 0x180
    MISSING_TYPE *nonConformedBrightness;	// 392 = 0x188
    MISSING_TYPE *initialDisturbanceScatterOffset;	// 400 = 0x190
    MISSING_TYPE *disturbScatterRandomOffsetFrameCounter;	// 416 = 0x1a0
    MISSING_TYPE *initialPeripheralPosition;	// 424 = 0x1a8
    MISSING_TYPE *initialExplodedPosition;	// 448 = 0x1c0
    MISSING_TYPE *curveLength;	// 472 = 0x1d8
    MISSING_TYPE *arcLength;	// 488 = 0x1e8
    MISSING_TYPE *perimeterRotateOnceAction;	// 504 = 0x1f8
    MISSING_TYPE *intermediatePosition;	// 512 = 0x200
    MISSING_TYPE *relativeHeading;	// 536 = 0x218
    MISSING_TYPE *disturbanceScatterOffsetXSpring;	// 552 = 0x228
    MISSING_TYPE *disturbanceScatterOffsetYSpring;	// 560 = 0x230
    MISSING_TYPE *disturbanceHomingFactorSpring;	// 568 = 0x238
    MISSING_TYPE *headingSpring;	// 576 = 0x240
    MISSING_TYPE *noiseSubSpring;	// 584 = 0x248
    MISSING_TYPE *explodedPosition;	// 592 = 0x250
    MISSING_TYPE *peripheralPosition;	// 616 = 0x268
    MISSING_TYPE *composedPosition;	// 640 = 0x280
    MISSING_TYPE *renderingColor;	// 664 = 0x298
    MISSING_TYPE *useAlternateScaling;	// 672 = 0x2a0
    MISSING_TYPE *conformationTimingFunction;	// 680 = 0x2a8
    MISSING_TYPE *conformedToExplodedFactor;	// 720 = 0x2d0
    MISSING_TYPE *conformationFactor;	// 736 = 0x2e0
    MISSING_TYPE *scalingFactor;	// 752 = 0x2f0
    MISSING_TYPE *shouldApplyDisturbanceScatterOffset;	// 761 = 0x2f9
    MISSING_TYPE *disturbanceScatterOffset;	// 768 = 0x300
    MISSING_TYPE *presentedDisturbanceScatterOffset;	// 792 = 0x318
    MISSING_TYPE *shouldApplyDisturbanceHomingFactor;	// 809 = 0x329
    MISSING_TYPE *disturbanceHomingFactor;	// 816 = 0x330
    MISSING_TYPE *presentedDisturbanceHomingFactor;	// 832 = 0x340
    MISSING_TYPE *trackOffset;	// 848 = 0x350
    MISSING_TYPE *presentedAbsoluteHeading;	// 864 = 0x360
}

- (void).cxx_destruct;	// IMP=0x00000000000add70
- (id)init;	// IMP=0x00000000000adc70
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ac530

@end

