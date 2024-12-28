//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class EKCurrentTimeMarkerView, NSMutableArray, NSMutableDictionary, NSString, UIColor, UIImageView, UIVisualEffect;

__attribute__((visibility("hidden")))
@interface EKDayGridView : UIView
{
    double _timeInset;	// 8 = 0x8
    double _hourHeight;	// 16 = 0x10
    unsigned int _leftBorder:1;	// 24 = 0x18
    unsigned int _rightBorder:1;	// 24 = 0x18
    int _selected;	// 28 = 0x1c
    double _fixedDayWidth;	// 32 = 0x20
    long long _orientation;	// 40 = 0x28
    struct CGRect _lastBounds;	// 48 = 0x30
    UIColor *_backgroundColor;	// 80 = 0x50
    UIView *_leftBorderView;	// 88 = 0x58
    NSMutableArray *_middleBorderViews;	// 96 = 0x60
    UIView *_rightBorderView;	// 104 = 0x68
    NSMutableArray *_gridPatternViews;	// 112 = 0x70
    unsigned long long _daysToDisplay;	// 120 = 0x78
    EKCurrentTimeMarkerView *_timeMarker;	// 128 = 0x80
    UIImageView *_timeDot;	// 136 = 0x88
    _Bool _hideTimeDot;	// 144 = 0x90
    UIView *_highlightedDayBackground;	// 152 = 0x98
    UIView *_fadingHighlightedDayBackground;	// 160 = 0xa0
    UIView *_gridContainerView;	// 168 = 0xa8
    NSMutableDictionary *_gridParentViews;	// 176 = 0xb0
    double _cachedWidthForOffMainThreadWork;	// 184 = 0xb8
    long long _sizeClass;	// 192 = 0xc0
    _Bool _needsLayoutInWindow;	// 200 = 0xc8
    _Bool _useMultiDayStyle;	// 201 = 0xc9
    _Bool _rightBorderInsetsOccurrences;	// 202 = 0xca
    _Bool _showsTimeLine;	// 203 = 0xcb
    _Bool _showsTimeMarker;	// 204 = 0xcc
    _Bool _animatesTimeMarker;	// 205 = 0xcd
    UIColor *_lineColor;	// 208 = 0xd0
    long long _timeMarkerTodayDay;	// 216 = 0xd8
    double _eventHorizontalInset;	// 224 = 0xe0
    double _hoursToPadTop;	// 232 = 0xe8
    double _hoursToPadBottom;	// 240 = 0xf0
    long long _highlightedDayIndex;	// 248 = 0xf8
    double _timeWidth;	// 256 = 0x100
    UIVisualEffect *_gridVisualEffect;	// 264 = 0x108
    UIView *_occurrenceContainerView;	// 272 = 0x110
    double _gridHeightScale;	// 280 = 0x118
}

+ (void)cacheBackgroundImage:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000172c0e
+ (id)cachedBackgroundImageForKey:(id)arg1;	// IMP=0x0010000000172bf5
- (void).cxx_destruct;	// IMP=0x00000000001766a8
@property(nonatomic) double gridHeightScale; // @synthesize gridHeightScale=_gridHeightScale;
@property(retain, nonatomic) UIView *occurrenceContainerView; // @synthesize occurrenceContainerView=_occurrenceContainerView;
@property(retain, nonatomic) UIVisualEffect *gridVisualEffect; // @synthesize gridVisualEffect=_gridVisualEffect;
@property(readonly, nonatomic) double timeWidth; // @synthesize timeWidth=_timeWidth;
@property(readonly, nonatomic) EKCurrentTimeMarkerView *timeMarker; // @synthesize timeMarker=_timeMarker;
@property(nonatomic) long long highlightedDayIndex; // @synthesize highlightedDayIndex=_highlightedDayIndex;
@property(nonatomic) double hoursToPadBottom; // @synthesize hoursToPadBottom=_hoursToPadBottom;
@property(nonatomic) double hoursToPadTop; // @synthesize hoursToPadTop=_hoursToPadTop;
@property(nonatomic) double eventHorizontalInset; // @synthesize eventHorizontalInset=_eventHorizontalInset;
@property(nonatomic) long long timeMarkerTodayDay; // @synthesize timeMarkerTodayDay=_timeMarkerTodayDay;
@property(nonatomic) _Bool animatesTimeMarker; // @synthesize animatesTimeMarker=_animatesTimeMarker;
@property(nonatomic) _Bool showsTimeMarker; // @synthesize showsTimeMarker=_showsTimeMarker;
@property(nonatomic) _Bool showsTimeLine; // @synthesize showsTimeLine=_showsTimeLine;
@property(nonatomic) _Bool rightBorderInsetsOccurrences; // @synthesize rightBorderInsetsOccurrences=_rightBorderInsetsOccurrences;
@property(nonatomic) _Bool useMultiDayStyle; // @synthesize useMultiDayStyle=_useMultiDayStyle;
- (id)_generateGridImage;	// IMP=0x0000000000175f34
- (void)layoutSubviews;	// IMP=0x00000000001751d5
- (void)_layoutHighlight;	// IMP=0x0000000000174e6d
- (double)_dayWidth;	// IMP=0x0000000000174dfc
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) double fixedDayWidth;
@property(nonatomic, getter=isSelected) _Bool selected;
- (int)secondAtPosition:(double)arg1;	// IMP=0x0000000000174aae
- (double)positionOfSecond:(long long)arg1;	// IMP=0x0000000000174a47
@property(readonly, nonatomic) double widthForOccurrences;
- (struct CGRect)rectForStartSeconds:(long long)arg1 endSeconds:(long long)arg2;	// IMP=0x0000000000174825
@property(nonatomic) _Bool showsRightBorder;
@property(nonatomic) _Bool showsLeftBorder;
- (void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2;	// IMP=0x0000000000174573
- (void)tintColorDidChange;	// IMP=0x00000000001744e9
- (void)hideNowDot:(_Bool)arg1;	// IMP=0x00000000001744c6
- (void)_updateTimeMarker;	// IMP=0x0000000000173dc9
- (_Bool)_showsTimeDot;	// IMP=0x0000000000173d89
- (void)updateMarkerPosition;	// IMP=0x0000000000173a48
- (id)_timeDotImage;	// IMP=0x0000000000173700
- (void)updateHourHeight;	// IMP=0x0000000000173663
@property(readonly, nonatomic) double hourHeight;
@property(readonly, nonatomic) double timeInset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000173582
- (double)bottomPadding;	// IMP=0x0000000000173542
@property(readonly, nonatomic) double topPadding;
- (void)setOrientation:(long long)arg1;	// IMP=0x0000000000173401
- (void)didMoveToWindow;	// IMP=0x00000000001733c2
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000173354
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000001732e6
- (long long)_sizeClass;	// IMP=0x000000000017329a
- (id)initWithFrame:(struct CGRect)arg1 sizeClass:(long long)arg2 backgroundColor:(id)arg3 opaque:(_Bool)arg4 numberOfDaysToDisplay:(unsigned long long)arg5;	// IMP=0x0000000000172d2d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000172cae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
