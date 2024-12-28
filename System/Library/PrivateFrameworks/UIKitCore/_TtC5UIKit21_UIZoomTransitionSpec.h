//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@class MISSING_TYPE, _TtC5UIKit30_UIZoomTransitionAnimationSpec;

__attribute__((visibility("hidden")))
@interface _TtC5UIKit21_UIZoomTransitionSpec : PTSettings
{
    MISSING_TYPE *zoomIn;	// 8 = 0x8
    MISSING_TYPE *zoomInShowcase;	// 16 = 0x10
    MISSING_TYPE *zoomOut;	// 24 = 0x18
    MISSING_TYPE *zoomOutInteractive;	// 32 = 0x20
    MISSING_TYPE *cancelInteractive;	// 40 = 0x28
    MISSING_TYPE *recededBackgroundScaleDownPoints;	// 48 = 0x30
    MISSING_TYPE *recededBackgroundMinScale;	// 56 = 0x38
    MISSING_TYPE *dimmingOpacity;	// 64 = 0x40
    MISSING_TYPE *fallbackSourceViewWidth;	// 72 = 0x48
    MISSING_TYPE *platterShadowOpacity;	// 80 = 0x50
    MISSING_TYPE *platterShadowRadius;	// 88 = 0x58
    MISSING_TYPE *platterShadowXOffset;	// 96 = 0x60
    MISSING_TYPE *platterShadowYOffset;	// 104 = 0x68
}

+ (id)settingsControllerModule;	// IMP=0x0060000000166b20
- (void).cxx_destruct;	// IMP=0x0000000000166d30
- (id)initWithDefaultValues;	// IMP=0x0000000000166cf0
- (void)setDefaultValues;	// IMP=0x0000000000166af0
@property(nonatomic) double platterShadowYOffset; // @synthesize platterShadowYOffset;
@property(nonatomic) double platterShadowXOffset; // @synthesize platterShadowXOffset;
@property(nonatomic) double platterShadowRadius; // @synthesize platterShadowRadius;
@property(nonatomic) float platterShadowOpacity; // @synthesize platterShadowOpacity;
@property(nonatomic) double fallbackSourceViewWidth; // @synthesize fallbackSourceViewWidth;
@property(nonatomic) double dimmingOpacity; // @synthesize dimmingOpacity;
@property(nonatomic) double recededBackgroundMinScale; // @synthesize recededBackgroundMinScale;
@property(nonatomic) double recededBackgroundScaleDownPoints; // @synthesize recededBackgroundScaleDownPoints;
- (struct CATransform3D)recededContentTransformFor:(struct CGRect)arg1;	// IMP=0x0000000000166010
- (struct CGSize)platterShadowOffset;	// IMP=0x0000000000165ff0
@property(nonatomic, retain) _TtC5UIKit30_UIZoomTransitionAnimationSpec *cancelInteractive; // @synthesize cancelInteractive;
@property(nonatomic, retain) _TtC5UIKit30_UIZoomTransitionAnimationSpec *zoomOutInteractive; // @synthesize zoomOutInteractive;
@property(nonatomic, retain) _TtC5UIKit30_UIZoomTransitionAnimationSpec *zoomOut; // @synthesize zoomOut;
@property(nonatomic, retain) _TtC5UIKit30_UIZoomTransitionAnimationSpec *zoomInShowcase; // @synthesize zoomInShowcase;
@property(nonatomic, retain) _TtC5UIKit30_UIZoomTransitionAnimationSpec *zoomIn; // @synthesize zoomIn;

@end
