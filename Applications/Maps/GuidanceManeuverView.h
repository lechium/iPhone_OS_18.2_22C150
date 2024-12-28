//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class GuidanceManeuverArtwork, MISSING_TYPE, MKArtworkImageView, NSArray, UIBezierPath, UIColor, UIImage;
@protocol GuidanceManeuverViewTextureProvider;

@interface GuidanceManeuverView : UIView
{
    _Bool _disallowMutation;	// 8 = 0x8
    _Bool _alerting;	// 9 = 0x9
    _Bool _disallowManeuversWithoutArt;	// 10 = 0xa
    id <GuidanceManeuverViewTextureProvider> _textureProvider;	// 16 = 0x10
    unsigned int _framing;	// 24 = 0x18
    UIColor *_arrowColor;	// 32 = 0x20
    MISSING_TYPE *_accentColor;	// 40 = 0x28
    UIBezierPath *_arrowPath;	// 48 = 0x30
    UIBezierPath *_arrowStrokePath;	// 56 = 0x38
    UIBezierPath *_intersectionFillPath;	// 64 = 0x40
    UIBezierPath *_intersectionStrokePath;	// 72 = 0x48
    NSArray *_arrivalCircles;	// 80 = 0x50
    UIImage *_maneuverImage;	// 88 = 0x58
    MKArtworkImageView *_maneuverArtworkImageView;	// 96 = 0x60
    double _visibleWidth;	// 104 = 0x68
    _Bool _usesCompactImages;	// 112 = 0x70
    GuidanceManeuverArtwork *_maneuverArtwork;	// 120 = 0x78
    long long _shieldIdiom;	// 128 = 0x80
    CDStruct_a1deb1f2 _arrowMetrics;	// 136 = 0x88
    CDStruct_a1deb1f2 _junctionArrowMetrics;	// 632 = 0x278
}

- (void).cxx_destruct;	// IMP=0x00200000007642da
@property(nonatomic) _Bool disallowManeuversWithoutArt; // @synthesize disallowManeuversWithoutArt=_disallowManeuversWithoutArt;
@property(nonatomic) _Bool usesCompactImages; // @synthesize usesCompactImages=_usesCompactImages;
@property(nonatomic) long long shieldIdiom; // @synthesize shieldIdiom=_shieldIdiom;
@property(retain, nonatomic) UIColor *accentColor; // @synthesize accentColor=_accentColor;
@property(retain, nonatomic) UIColor *arrowColor; // @synthesize arrowColor=_arrowColor;
@property(nonatomic) unsigned int framing; // @synthesize framing=_framing;
@property(nonatomic) CDStruct_a1deb1f2 junctionArrowMetrics; // @synthesize junctionArrowMetrics=_junctionArrowMetrics;
@property(nonatomic) CDStruct_a1deb1f2 arrowMetrics; // @synthesize arrowMetrics=_arrowMetrics;
@property(retain, nonatomic) GuidanceManeuverArtwork *maneuverArtwork; // @synthesize maneuverArtwork=_maneuverArtwork;
@property(readonly, nonatomic) UIImage *imageRepresentation;
- (struct CGSize)intrinsicContentSize;	// IMP=0x0010000000763ceb
- (void)disallowMutation;	// IMP=0x0010000000763bab
@property(readonly, nonatomic) int displayManeuver;
- (id)_imageWithManeuverType:(int)arg1 inRect:(struct CGRect)arg2;	// IMP=0x0010000000763876
- (void)_invalidateDrawingPaths;	// IMP=0x0010000000763848
- (void)_drawProceedToRoute;	// IMP=0x001000000076331e
- (void)_drawArrival;	// IMP=0x0010000000762df4
- (void)_drawDefaultPaths;	// IMP=0x0010000000762d3a
- (void)_drawManeuverImage;	// IMP=0x0010000000762cc3
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0010000000762bf9
- (void)_updateDrawingPathsFromJunction;	// IMP=0x00100000007629d2
- (void)_updateDrawingPathsForProceedToRoute;	// IMP=0x001000000076270e
- (void)_updateDrawingPathsForArrival;	// IMP=0x001000000076239b
- (_Bool)_maneuverTypeRequiresDrawingPaths:(int)arg1;	// IMP=0x0010000000762378
- (void)_updateDrawingPaths;	// IMP=0x0010000000761b63
- (void)_updateManeuverArtworkImageIfNeeded;	// IMP=0x00100000007615fe
- (void)_updateManeuverImage;	// IMP=0x00100000007614e7
- (void)drawArrow:(id)arg1 stroke:(id)arg2 withVisibleWidth:(double)arg3 intersectionFillPath:(id)arg4 intersectionStrokePath:(id)arg5 referenceSize:(struct CGSize)arg6;	// IMP=0x0010000000760f38
- (struct CGAffineTransform)transformForDrawingPathsWithFrame:(struct CGRect)arg1 relativeToReferenceSize:(struct CGSize)arg2;	// IMP=0x0010000000760d3f
- (void)drawArrow:(id)arg1 stroke:(id)arg2;	// IMP=0x0010000000760c2a
- (void)drawIntersectionStroke:(id)arg1 forFill:(id)arg2;	// IMP=0x0010000000760b2d
- (void)drawIntersectionFill:(id)arg1;	// IMP=0x0010000000760ab0
@property(readonly, nonatomic) _Bool _maneuverIsDrawnByDrawRect;
- (id)accessibilityIdentifier;	// IMP=0x001000000076089a
- (id)initWithFrame:(struct CGRect)arg1 textureProvider:(id)arg2;	// IMP=0x00100000007606a6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000760692

@end
