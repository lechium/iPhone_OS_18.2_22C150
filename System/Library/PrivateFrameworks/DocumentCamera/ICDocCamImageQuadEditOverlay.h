//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, CAShapeLayer, ICDocCamImageQuad, ICDocCamImageQuadEditPanGestureRecognizer, NSArray, NSMutableArray, NSString, UIBezierPath, UIColor, UIImage;
@protocol ICDocCamImageQuadEditOverlayDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamImageQuadEditOverlay : UIView
{
    _Bool _isTempOverlay;	// 8 = 0x8
    _Bool _tempOverlayQuadIsValid;	// 9 = 0x9
    _Bool _isDisplayingValidQuad;	// 10 = 0xa
    id <ICDocCamImageQuadEditOverlayDelegate> _delegate;	// 16 = 0x10
    ICDocCamImageQuad *_quad;	// 24 = 0x18
    UIImage *_image;	// 32 = 0x20
    long long _orientation;	// 40 = 0x28
    double _knobHeight;	// 48 = 0x30
    UIColor *_knobColor;	// 56 = 0x38
    NSArray *_knobs;	// 64 = 0x40
    NSArray *_knobAccessibilityElements;	// 72 = 0x48
    UIColor *_validRectColor;	// 80 = 0x50
    UIColor *_invalidRectColor;	// 88 = 0x58
    CALayer *_selectedKnob;	// 96 = 0x60
    ICDocCamImageQuadEditPanGestureRecognizer *_panGR;	// 104 = 0x68
    CALayer *_knobLayer;	// 112 = 0x70
    CAShapeLayer *_outlineLayer;	// 120 = 0x78
    CALayer *_loupeLayer;	// 128 = 0x80
    CALayer *_loupeContentsLayer;	// 136 = 0x88
    double _tempOverlayMagnification;	// 144 = 0x90
    NSMutableArray *_panHistory;	// 152 = 0x98
    unsigned long long _panHistoryIdx;	// 160 = 0xa0
    struct CGPoint _lastGestureTranslation;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000000a754e
@property(nonatomic) unsigned long long panHistoryIdx; // @synthesize panHistoryIdx=_panHistoryIdx;
@property(retain, nonatomic) NSMutableArray *panHistory; // @synthesize panHistory=_panHistory;
@property(nonatomic) struct CGPoint lastGestureTranslation; // @synthesize lastGestureTranslation=_lastGestureTranslation;
@property(nonatomic) double tempOverlayMagnification; // @synthesize tempOverlayMagnification=_tempOverlayMagnification;
@property(retain, nonatomic) CALayer *loupeContentsLayer; // @synthesize loupeContentsLayer=_loupeContentsLayer;
@property(retain, nonatomic) CALayer *loupeLayer; // @synthesize loupeLayer=_loupeLayer;
@property(retain, nonatomic) CAShapeLayer *outlineLayer; // @synthesize outlineLayer=_outlineLayer;
@property(retain, nonatomic) CALayer *knobLayer; // @synthesize knobLayer=_knobLayer;
@property(retain, nonatomic) ICDocCamImageQuadEditPanGestureRecognizer *panGR; // @synthesize panGR=_panGR;
@property(retain, nonatomic) CALayer *selectedKnob; // @synthesize selectedKnob=_selectedKnob;
@property(nonatomic) _Bool isDisplayingValidQuad; // @synthesize isDisplayingValidQuad=_isDisplayingValidQuad;
@property(readonly, nonatomic) UIColor *invalidRectColor; // @synthesize invalidRectColor=_invalidRectColor;
@property(readonly, nonatomic) UIColor *validRectColor; // @synthesize validRectColor=_validRectColor;
@property(copy, nonatomic) NSArray *knobAccessibilityElements; // @synthesize knobAccessibilityElements=_knobAccessibilityElements;
@property(retain, nonatomic) NSArray *knobs; // @synthesize knobs=_knobs;
@property(retain, nonatomic) UIColor *knobColor; // @synthesize knobColor=_knobColor;
@property(nonatomic) double knobHeight; // @synthesize knobHeight=_knobHeight;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) ICDocCamImageQuad *quad; // @synthesize quad=_quad;
@property(nonatomic) __weak id <ICDocCamImageQuadEditOverlayDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool tempOverlayQuadIsValid; // @synthesize tempOverlayQuadIsValid=_tempOverlayQuadIsValid;
@property(nonatomic) _Bool isTempOverlay; // @synthesize isTempOverlay=_isTempOverlay;
- (_Bool)accessibilityIgnoresInvertColors;	// IMP=0x00000000000a7246
- (id)accessibilityElements;	// IMP=0x00000000000a7234
- (struct CGRect)rectFromApplyingOrientation:(long long)arg1 toContentsRect:(struct CGRect)arg2;	// IMP=0x00000000000a718a
@property(readonly, nonatomic) UIBezierPath *outlinePath;
- (void)updateOutlineLayer;	// IMP=0x00000000000a6ef1
- (void)updateSelectedKnobContents;	// IMP=0x00000000000a696f
- (void)unselectAllKnobs;	// IMP=0x00000000000a623f
- (id)closestKnobToPoint:(struct CGPoint)arg1;	// IMP=0x00000000000a603f
- (void)didPan:(id)arg1;	// IMP=0x00000000000a56d8
- (void)touchesBeganOnQuadEditPanGestureRecognizerDelegate:(id)arg1;	// IMP=0x00000000000a56c6
- (void)updateKnobLocationsToRect:(id)arg1;	// IMP=0x00000000000a54b1
@property(readonly, nonatomic) ICDocCamImageQuad *adjustedQuad;
@property(readonly, nonatomic) _Bool isDraggingKnob;
@property(readonly, nonatomic) _Bool isQuadValid;
@property(readonly, nonatomic) _Bool containsPointOutsideOfOverlayBounds;
- (void)setupLoupeLayerIfNeeded;	// IMP=0x00000000000a4bb4
- (void)setImage:(id)arg1 orientation:(long long)arg2;	// IMP=0x00000000000a4b41
- (void)setTempOverlayMagnification:(double)arg1 animationDuration:(double)arg2;	// IMP=0x00000000000a438a
- (void)updateOutlineAndKnobColorForIsValid:(_Bool)arg1;	// IMP=0x00000000000a4124
- (void)updateOutlineAndKnobColorForCurrentValidityIfNecessary;	// IMP=0x00000000000a40ac
- (void)setUpKnobs;	// IMP=0x00000000000a3b75
- (void)layoutSubviews;	// IMP=0x00000000000a3a07
- (void)commonInit;	// IMP=0x00000000000a3943
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000a38e6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a389a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

