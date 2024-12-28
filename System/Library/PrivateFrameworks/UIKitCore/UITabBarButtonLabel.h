//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILabel.h"

@class NSAttributedString, NSNumber, UIColor, UITabBarButton, _UITabBarItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface UITabBarButtonLabel : UILabel
{
    double _boundsWidth;	// 160 = 0xa0
    _UITabBarItemAppearanceStorage *_appearanceStorage;	// 168 = 0xa8
    _Bool _isSelected;	// 176 = 0xb0
    _Bool _isHighlighted;	// 177 = 0xb1
    _Bool _hasSeenIdiom;	// 178 = 0xb2
    NSNumber *_previousKernAttributeForSizing;	// 184 = 0xb8
    NSAttributedString *_previousAttributedTextForSizingExcludingKern;	// 192 = 0xc0
    Class _appearanceGuideClass;	// 200 = 0xc8
    UIColor *_unselectedTintColor;	// 208 = 0xd0
    UITabBarButton *_tabBarButton;	// 216 = 0xd8
}

+ (double)_fontPointSizeForIdiom:(long long)arg1;	// IMP=0x006000000052941d
- (void).cxx_destruct;	// IMP=0x0000000000529bb3
@property(nonatomic) __weak UITabBarButton *tabBarButton; // @synthesize tabBarButton=_tabBarButton;
@property(retain, nonatomic) UIColor *unselectedTintColor; // @synthesize unselectedTintColor=_unselectedTintColor;
@property(retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000005299ec
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;	// IMP=0x000000000052994b
- (long long)_idiomForFontGivenIdiom:(long long)arg1;	// IMP=0x00000000005298ca
- (id)_fontForIdiom:(long long)arg1 forTabBarDisplayStyle:(long long)arg2;	// IMP=0x000000000052947e
- (id)_fontForIdiom:(long long)arg1;	// IMP=0x000000000052946a
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;	// IMP=0x0000000000529353
- (id)_titleTextAttributesForState:(unsigned long long)arg1;	// IMP=0x0000000000529321
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000052930f
- (void)_updateLabelsVibrancy;	// IMP=0x0000000000529309
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000529003
- (void)_updateForFontChangeWithIdiom:(long long)arg1;	// IMP=0x0000000000528f5b
- (void)_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000528f55
- (void)_UIAppearance_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000528f4f
- (void)_setBadgeColor:(id)arg1;	// IMP=0x0000000000528f49
- (void)_UIAppearance_setBadgeColor:(id)arg1;	// IMP=0x0000000000528f43
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1;	// IMP=0x0000000000528f3d
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1;	// IMP=0x0000000000528f37
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000528eb2
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000528e8f
- (void)_legacyApperance_updateTextColorsForState;	// IMP=0x00000000005286eb
- (void)updateTextColorsForState;	// IMP=0x000000000052849f
- (void)tintColorDidChange;	// IMP=0x000000000052845e
- (void)resizeToFitWidth:(double)arg1;	// IMP=0x0000000000527eb4
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x0000000000527d69
- (id)initWithTabBarDisplayStyle:(long long)arg1;	// IMP=0x0000000000527cad
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000527be6
- (_Bool)_shouldCeilSizeToViewScale;	// IMP=0x0000000000527bde

@end
