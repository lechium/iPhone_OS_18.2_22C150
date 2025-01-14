//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface TFAppLockupViewSpecification : NSObject
{
    double _titleLabelBaselineToFirstSubtitleLabelBaseline;	// 8 = 0x8
    double _firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline;	// 16 = 0x10
    UIFont *_titleLabelFont;	// 24 = 0x18
    UIFont *_subtitleLabelFont;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001d4bc
@property(readonly, nonatomic) UIFont *subtitleLabelFont; // @synthesize subtitleLabelFont=_subtitleLabelFont;
@property(readonly, nonatomic) UIFont *titleLabelFont; // @synthesize titleLabelFont=_titleLabelFont;
@property(readonly, nonatomic) double firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline; // @synthesize firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline=_firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline;
@property(readonly, nonatomic) double titleLabelBaselineToFirstSubtitleLabelBaseline; // @synthesize titleLabelBaselineToFirstSubtitleLabelBaseline=_titleLabelBaselineToFirstSubtitleLabelBaseline;
- (id)_subtitleFontStyle;	// IMP=0x000000000001d47e
- (id)_createSubtitleLabelFontWithTraitCollection:(id)arg1;	// IMP=0x000000000001d3e6
- (id)_titleFontStyle;	// IMP=0x000000000001d3d2
- (id)_createTitleLabelFontWithTraitCollection:(id)arg1;	// IMP=0x000000000001d33a
@property(readonly, nonatomic) double paddingBetweenIconAndText;
@property(readonly, nonatomic) struct CGSize iconSize;
@property(readonly, nonatomic) UIColor *iconPlaceholderColor;
@property(readonly, nonatomic) UIColor *subtitleTextColor;
@property(readonly, nonatomic) UIColor *titleTextColor;
- (id)initWithTraitCollection:(id)arg1;	// IMP=0x000000000001d13c

@end

