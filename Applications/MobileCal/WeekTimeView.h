//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class EKDayTimeView, MISSING_TYPE, NSString, UIColor, UILabel, UIScrollView, UIVisualEffectView;

@interface WeekTimeView : UIView
{
    UIVisualEffectView *_effectBackgroundView;	// 8 = 0x8
    UIScrollView *_timeScroller;	// 16 = 0x10
    EKDayTimeView *_timeView;	// 24 = 0x18
    UIView *_trailingBorderView;	// 32 = 0x20
    UILabel *_monthLabel;	// 40 = 0x28
    UILabel *_overlayMonthLabel;	// 48 = 0x30
    UILabel *_weekNumberLabel;	// 56 = 0x38
    UILabel *_allDayLabel;	// 64 = 0x40
    UIView *_allDayBackgroundColorView;	// 72 = 0x48
    UIView *_topAllDaySeparatorView;	// 80 = 0x50
    UIView *_bottomAllDaySeparatorView;	// 88 = 0x58
    UIView *_headerBackground;	// 96 = 0x60
    double _preferredMonthLabelBaselineOffsetFromTop;	// 104 = 0x68
    _Bool _useMultiDayStyle;	// 112 = 0x70
    _Bool _useMaterialBackground;	// 113 = 0x71
    double _headerHeight;	// 120 = 0x78
    long long _orientation;	// 128 = 0x80
}

+ (double)widthForOrientation:(long long)arg1 inViewHierarchy:(id)arg2;	// IMP=0x0020000000040747
- (void).cxx_destruct;	// IMP=0x002000000004349f
@property(readonly, nonatomic) EKDayTimeView *timeView; // @synthesize timeView=_timeView;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) _Bool useMaterialBackground; // @synthesize useMaterialBackground=_useMaterialBackground;
@property(nonatomic) _Bool useMultiDayStyle; // @synthesize useMultiDayStyle=_useMultiDayStyle;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_timeScroller;
- (void)updateMarkerPosition;	// IMP=0x001000000004341d
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x001000000004331d
- (double)_yLocationForMonthLabel;	// IMP=0x00100000000432b3
- (void)layoutSubviews;	// IMP=0x00100000000423d2
- (void)updateMonthLabel;	// IMP=0x00100000000420a4
- (double)allDayLabelOriginY;	// IMP=0x0010000000041ff0
- (double)allDayOccurrenceInsetIntoScroller;	// IMP=0x0010000000041fc5
- (double)allDayBackgroundColorOriginY;	// IMP=0x0010000000041f77
@property(retain, nonatomic) NSString *overlayMonthText;
@property(retain, nonatomic) NSString *weekNumberText;
- (void)setMonthTextBaselineOffset:(double)arg1;	// IMP=0x0010000000041cd8
- (id)monthText;	// IMP=0x0010000000041cbb
- (void)setMonthText:(id)arg1 isCurrentMonth:(_Bool)arg2;	// IMP=0x0010000000041b87
- (void)_updateOverlayMonthFont;	// IMP=0x0010000000041acb
- (void)_updateWeekNumberFont;	// IMP=0x0010000000041a0f
- (void)_updateMonthFont;	// IMP=0x0010000000041885
@property(nonatomic) double allDayAlpha;
- (void)contentSizeCategoryChanged;	// IMP=0x0010000000041731
- (void)setHourHeightScale:(double)arg1;	// IMP=0x0010000000041677
- (void)setDayTimeViewDelegate:(id)arg1;	// IMP=0x0010000000041634
@property(nonatomic) _Bool showsTimeMarker;
@property(nonatomic) _Bool allDayHighlighted;
@property(retain, nonatomic) UIColor *timeMarkerExtensionColor;
- (_Bool)_showTrailingBorder;	// IMP=0x001000000004142f
- (MISSING_TYPE *)reAdjustAllDayLabelLayout;	// IMP=0x0010000000040ee3
- (void)_localeChanged:(id)arg1;	// IMP=0x0010000000040eca
- (id)initWithFrame:(struct CGRect)arg1 targetSizeClass:(long long)arg2 orientation:(long long)arg3;	// IMP=0x00100000000407e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
