//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class GEOComposedRouteLaneInfo, NSArray, UIColor;

@interface GuidanceLaneView : UIView
{
    NSArray *_allPaths;	// 8 = 0x8
    struct CGSize _laneDrawingSize;	// 16 = 0x10
    _Bool _maneuverHasPreferredLane;	// 32 = 0x20
    GEOComposedRouteLaneInfo *_laneInfo;	// 40 = 0x28
    UIColor *_invalidArrowColor;	// 48 = 0x30
    unsigned long long _drawingBiasDirection;	// 56 = 0x38
    unsigned long long _laneStyle;	// 64 = 0x40
    double _drawingScale;	// 72 = 0x48
    double _verticalOffset;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000009f93b9
@property(nonatomic) double verticalOffset; // @synthesize verticalOffset=_verticalOffset;
@property(nonatomic) double drawingScale; // @synthesize drawingScale=_drawingScale;
@property(nonatomic) unsigned long long laneStyle; // @synthesize laneStyle=_laneStyle;
@property(readonly, nonatomic) unsigned long long drawingBiasDirection; // @synthesize drawingBiasDirection=_drawingBiasDirection;
@property(retain, nonatomic) UIColor *invalidArrowColor; // @synthesize invalidArrowColor=_invalidArrowColor;
@property(readonly, nonatomic) _Bool maneuverHasPreferredLane; // @synthesize maneuverHasPreferredLane=_maneuverHasPreferredLane;
@property(readonly, nonatomic) GEOComposedRouteLaneInfo *laneInfo; // @synthesize laneInfo=_laneInfo;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00100000009f8cfc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000009f8c2d
- (id)_defaultInvalidArrowColor;	// IMP=0x00100000009f8bea
- (id)_validArrowColor;	// IMP=0x00100000009f8bd5
- (id)_preferredArrowColor;	// IMP=0x00100000009f8b76
- (_Bool)_markFirstDirectionAsValid;	// IMP=0x00100000009f8b6e
- (_Bool)_highlightFirstDirection;	// IMP=0x00100000009f8a8b
- (struct CGSize)intrinsicContentSize;	// IMP=0x00100000009f8a73
- (void)_updateLanePaths;	// IMP=0x00100000009f888d
- (void)_removeUnusedUTurns;	// IMP=0x00100000009f8402
- (id)accessibilityIdentifier;	// IMP=0x00100000009f8315
- (id)initWithLaneInfo:(id)arg1 maneuverHasPreferredLane:(_Bool)arg2 drawingBiasDirection:(unsigned long long)arg3 laneStyle:(unsigned long long)arg4;	// IMP=0x00100000009f8138

@end

