//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class AVMediaTimelineControl, NSArray, NSString, UIColor, UIFont;
@protocol PUMediaTimelineViewDelegate;

__attribute__((visibility("hidden")))
@interface PUAVKitMediaTimelineView : UIView
{
    _Bool _loading;	// 8 = 0x8
    _Bool _playing;	// 9 = 0x9
    _Bool _showsTimeLabels;	// 10 = 0xa
    float _maxValue;	// 12 = 0xc
    float _minValue;	// 16 = 0x10
    float _currentValue;	// 20 = 0x14
    UIColor *_labelColor;	// 24 = 0x18
    UIFont *_labelFont;	// 32 = 0x20
    id <PUMediaTimelineViewDelegate> _delegate;	// 40 = 0x28
    NSArray *_highlightedTimeRanges;	// 48 = 0x30
    NSArray *timeRangeMarks;	// 56 = 0x38
    double _whiteValue;	// 64 = 0x40
    AVMediaTimelineControl *_timelineControl;	// 72 = 0x48
    NSString *_maxValueText;	// 80 = 0x50
    NSString *_currentValueText;	// 88 = 0x58
}

+ (id)_stringFromTimeInterval:(double)arg1;	// IMP=0x00100000002c562c
- (void).cxx_destruct;	// IMP=0x00000000002c54ba
@property(retain, nonatomic) NSString *currentValueText; // @synthesize currentValueText=_currentValueText;
@property(retain, nonatomic) NSString *maxValueText; // @synthesize maxValueText=_maxValueText;
@property(readonly, nonatomic) AVMediaTimelineControl *timelineControl; // @synthesize timelineControl=_timelineControl;
@property(nonatomic) double whiteValue; // @synthesize whiteValue=_whiteValue;
@property(nonatomic) _Bool showsTimeLabels; // @synthesize showsTimeLabels=_showsTimeLabels;
@property(retain, nonatomic) NSArray *timeRangeMarks; // @synthesize timeRangeMarks;
@property(copy, nonatomic) NSArray *highlightedTimeRanges; // @synthesize highlightedTimeRanges=_highlightedTimeRanges;
@property(readonly, nonatomic) float currentValue;
@property(nonatomic) __weak id <PUMediaTimelineViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setPlaying:(_Bool)arg1;	// IMP=0x00000000002c53b8
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)setMinValue:(float)arg1;	// IMP=0x00000000002c5396
@property(readonly, nonatomic) float minValue;
@property(readonly, nonatomic) float maxValue;
- (void)setLoading:(_Bool)arg1;	// IMP=0x00000000002c5362
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(retain, nonatomic) UIFont *labelFont; // @synthesize labelFont=_labelFont;
@property(retain, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
- (void)mediaTimelineControlDidEndChanging:(id)arg1;	// IMP=0x00000000002c52e4
- (void)mediaTimelineControlWillBeginChanging:(id)arg1;	// IMP=0x00000000002c5298
- (void)mediaTimelineControl:(id)arg1 didChangeValue:(float)arg2;	// IMP=0x00000000002c523f
- (void)invalidateIntrinsicContentSize;	// IMP=0x00000000002c51ce
- (void)_updateTimelineConfiguration;	// IMP=0x00000000002c4fb2
- (void)_updateMaxValueText;	// IMP=0x00000000002c4f3b
- (void)_updateCurrentValueText;	// IMP=0x00000000002c4ec4
- (void)_updateTimeRangeMarks;	// IMP=0x00000000002c4dc2
- (id)uiProxyForTimeRangeMark:(id)arg1 withSource:(id)arg2;	// IMP=0x00000000002c4d27
- (struct CGSize)timeRangeMark:(id)arg1 sizeInFrame:(struct CGRect)arg2;	// IMP=0x00000000002c4c51
- (void)setMaxValue:(float)arg1;	// IMP=0x00000000002c4b2f
- (void)setCurrentValue:(float)arg1;	// IMP=0x00000000002c4b03
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000002c48b8
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000002c489b
- (void)dealloc;	// IMP=0x00000000002c4821
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002c4529

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
