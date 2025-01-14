//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAGradientLayer, NSArray, NSLayoutConstraint, NSMutableArray, UIColor, UILayoutGuide;

@interface NavSignLaneGuidanceView
{
    _Bool _maneuverHasPreferredLane;	// 8 = 0x8
    unsigned long long _laneArrowBiasDirection;	// 16 = 0x10
    CAGradientLayer *_leftEdgeLaneGradientLayer;	// 24 = 0x18
    CAGradientLayer *_rightEdgeLaneGradientLayer;	// 32 = 0x20
    NSMutableArray *_laneViews;	// 40 = 0x28
    UILayoutGuide *_laneContentGuide;	// 48 = 0x30
    NSLayoutConstraint *_laneContentTopMarginConstraint;	// 56 = 0x38
    NSLayoutConstraint *_laneContentBottomMarginConstraint;	// 64 = 0x40
    NSLayoutConstraint *_laneContentLeftMarginConstraint;	// 72 = 0x48
    NSLayoutConstraint *_laneContentRightMarginConstraint;	// 80 = 0x50
    UILayoutGuide *_offsetFromBottomGuide;	// 88 = 0x58
    NSLayoutConstraint *_offsetFromBottomHeightConstraint;	// 96 = 0x60
    double _lastUpdatedSignWidth;	// 104 = 0x68
    unsigned long long _laneStyle;	// 112 = 0x70
    _Bool _shouldTransformWithVerticalScale;	// 120 = 0x78
    _Bool _debugHighlightLanes;	// 121 = 0x79
    double _verticalScale;	// 128 = 0x80
    unsigned long long _maxNumberOfVisibleLanes;	// 136 = 0x88
    UIColor *_invalidArrowColor;	// 144 = 0x90
    NSArray *_lanes;	// 152 = 0x98
    struct _NSRange _visibleLaneRange;	// 160 = 0xa0
    struct UIEdgeInsets _edgeInsets;	// 176 = 0xb0
}

+ (struct _NSRange)_visibleLaneRangeForNumberOfLanes:(unsigned long long)arg1 maxNumberOfVisibleLanes:(unsigned long long)arg2 highlightedLaneRange:(struct _NSRange)arg3;	// IMP=0x0040000000be8088
+ (long long)maxNumberVisibleLanesForSignWidth:(double)arg1;	// IMP=0x0010000000be6815
- (void).cxx_destruct;	// IMP=0x0020000000be9bc0
@property(copy, nonatomic) NSArray *lanes; // @synthesize lanes=_lanes;
@property(retain, nonatomic) UIColor *invalidArrowColor; // @synthesize invalidArrowColor=_invalidArrowColor;
@property(nonatomic) _Bool debugHighlightLanes; // @synthesize debugHighlightLanes=_debugHighlightLanes;
@property(readonly, nonatomic) struct _NSRange visibleLaneRange; // @synthesize visibleLaneRange=_visibleLaneRange;
@property(readonly, nonatomic) unsigned long long maxNumberOfVisibleLanes; // @synthesize maxNumberOfVisibleLanes=_maxNumberOfVisibleLanes;
@property(nonatomic) _Bool shouldTransformWithVerticalScale; // @synthesize shouldTransformWithVerticalScale=_shouldTransformWithVerticalScale;
@property(nonatomic) double verticalScale; // @synthesize verticalScale=_verticalScale;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (id)_laneViewForLane:(id)arg1;	// IMP=0x0010000000be9a20
- (void)_debugHighlightLaneView:(id)arg1;	// IMP=0x0010000000be9896
- (void)_resetLanes;	// IMP=0x0010000000be8b1d
- (void)_setupConstraints;	// IMP=0x0010000000be85e4
- (unsigned long long)_rightmostVisibleLaneIndex;	// IMP=0x0010000000be85b3
- (unsigned long long)_leftmostVisibleLaneIndex;	// IMP=0x0010000000be85a2
- (id)_newGradientLayerWithFrame:(struct CGRect)arg1 forLeftEdge:(_Bool)arg2;	// IMP=0x0010000000be83a8
- (void)_updateLaneContentMargins;	// IMP=0x0010000000be82be
- (void)_updateMaxLanesForSignWidth:(double)arg1;	// IMP=0x0010000000be80dd
- (void)layoutSubviews;	// IMP=0x0010000000be753b
- (id)accessibilityIdentifier;	// IMP=0x0010000000be7529
- (id)duplicateLaneGuidanceView;	// IMP=0x0010000000be7437
@property(readonly, nonatomic) double availableLaneWidth;
@property(readonly, nonatomic) double availableWidthForLanes;
@property(readonly, nonatomic) unsigned long long numberOfVisibleLanes;
@property(readonly, nonatomic) _Bool highlightedLanesNotInVisibleRange;
@property(readonly, nonatomic) struct _NSRange highlightedLaneRange;
- (id)initWithLaneStyle:(unsigned long long)arg1;	// IMP=0x0010000000be6866

@end

