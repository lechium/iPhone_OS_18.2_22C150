//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UILabel, UIView;

@interface MultiDayNavigationViewCell
{
    UIView *_cardBackgroundView;	// 8 = 0x8
    UILabel *_dayOfWeekLabel;	// 16 = 0x10
    UILabel *_overlayLabel;	// 24 = 0x18
    UIView *_overlayUnderline;	// 32 = 0x20
    double _overlayUnderlineThickness;	// 40 = 0x28
    NSString *_dayOfWeekString;	// 48 = 0x30
    _Bool _hasOverlay;	// 56 = 0x38
    _Bool _overlayShowsMonth;	// 57 = 0x39
    _Bool _shouldShowOverlay;	// 58 = 0x3a
}

+ (double)heightRequiredWithSizeClass:(long long)arg1;	// IMP=0x00400000000f9bee
+ (id)_overlayFont;	// IMP=0x00100000000f89d0
+ (id)_dayOfWeekLabelFont;	// IMP=0x00100000000f897d
- (void).cxx_destruct;	// IMP=0x00200000000f9c5e
@property(nonatomic) _Bool shouldShowOverlay; // @synthesize shouldShowOverlay=_shouldShowOverlay;
- (void)_updateDisplayedStrings;	// IMP=0x00100000000f9b16
- (id)preferredPointerShape;	// IMP=0x00100000000f9a80
- (void)setLabelElementsVisible:(_Bool)arg1;	// IMP=0x00100000000f9a07
- (struct CGRect)contentFrame;	// IMP=0x00100000000f989d
- (double)baselineOffsetFromTop;	// IMP=0x00100000000f9880
- (id)dayOfWeekStringForDate:(id)arg1;	// IMP=0x00100000000f9871
- (void)setDate:(id)arg1 forceStringUpdate:(_Bool)arg2;	// IMP=0x00100000000f978f
- (void)setDate:(id)arg1;	// IMP=0x00100000000f977b
- (void)setIsWeekend:(_Bool)arg1;	// IMP=0x00100000000f973a
- (void)setIsToday:(_Bool)arg1;	// IMP=0x00100000000f96f9
- (void)setOverlayShowsMonth:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000f9465
- (void)updateOverlay;	// IMP=0x00100000000f90c2
- (void)prepareForReuse;	// IMP=0x00100000000f906f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000000f9036
- (void)layoutSubviews;	// IMP=0x00100000000f8a23
- (void)_createSubviews;	// IMP=0x00100000000f8803
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000f87a6

@end

