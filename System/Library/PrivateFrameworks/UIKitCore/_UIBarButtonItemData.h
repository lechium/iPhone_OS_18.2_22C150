//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, UIImage, UIImageSymbolConfiguration;
@protocol _UIBarButtonItemDataFallback;

__attribute__((visibility("hidden")))
@interface _UIBarButtonItemData
{
    NSDictionary *_titleTextAttributes[4];	// 8 = 0x8
    UIImage *_backgroundImage[4];	// 40 = 0x28
    struct UIOffset _titlePositionAdjustment[4];	// 72 = 0x48
    struct UIOffset _backgroundImagePositionAdjustment[4];	// 136 = 0x88
    UIImageSymbolConfiguration *_imageSymbolConfiguration;	// 200 = 0xc8
    UIImageSymbolConfiguration *_compactImageSymbolConfiguration;	// 208 = 0xd0
    UIImage *_backIndicatorImage;	// 216 = 0xd8
    UIImage *_backIndicatorTransitionMaskImage;	// 224 = 0xe0
    UIImageSymbolConfiguration *_backIndicatorSymbolConfiguration;	// 232 = 0xe8
    UIImageSymbolConfiguration *_compactBackIndicatorSymbolConfiguration;	// 240 = 0xf0
    id <_UIBarButtonItemDataFallback> _fallback;	// 248 = 0xf8
    struct {
        unsigned int hasUserFont:1;
        unsigned int hasUserColor:1;
        unsigned int hasUserTitlePosition:1;
        unsigned int hasUserBackgroundImage:1;
        unsigned int hasUserBackgroundImagePosition:1;
    } _stateFlags[4];	// 256 = 0x100
    struct {
        unsigned int isBackButtonData:1;
    } _dataFlags;	// 288 = 0x120
    long long _style;	// 296 = 0x128
}

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x001000000144d0f5
+ (id)standardBackButtonData;	// IMP=0x001000000144bc6a
+ (id)standardItemDataForStyle:(long long)arg1;	// IMP=0x001000000144bb33
- (void).cxx_destruct;	// IMP=0x000000000144f8da
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (struct UIOffset)backgroundImagePositionAdjustmentForState:(long long)arg1 style:(long long)arg2;	// IMP=0x000000000144f883
- (id)backgroundImageForState:(long long)arg1 style:(long long)arg2;	// IMP=0x000000000144f833
- (struct UIOffset)titlePositionAdjustmentForState:(long long)arg1 style:(long long)arg2;	// IMP=0x000000000144f7ea
- (id)colorForState:(long long)arg1 style:(long long)arg2;	// IMP=0x000000000144f79a
- (id)backIndicatorTextStyleForSymbolConfiguration;	// IMP=0x000000000144f77d
- (id)textStyleForSymbolConfiguration;	// IMP=0x000000000144f760
- (id)fontForState:(long long)arg1 style:(long long)arg2;	// IMP=0x000000000144f710
@property(readonly, nonatomic) UIImageSymbolConfiguration *compactBackIndicatorTransitionMaskSymbolConfiguration;
@property(readonly, nonatomic) UIImageSymbolConfiguration *compactBackIndicatorSymbolConfiguration;
@property(readonly, nonatomic) UIImageSymbolConfiguration *backIndicatorTransitionMaskSymbolConfiguration;
@property(readonly, nonatomic) UIImageSymbolConfiguration *backIndicatorSymbolConfiguration;
@property(readonly, nonatomic) UIImage *compactBackIndicatorTransitionMaskImage;
@property(readonly, nonatomic) UIImage *compactBackIndicatorImage;
@property(readonly, nonatomic) UIImage *backIndicatorTransitionMaskImage;
@property(readonly, nonatomic) UIImage *backIndicatorImage;
- (void)resetBackIndicatorImages;	// IMP=0x000000000144f168
- (void)setBackIndicatorImage:(id)arg1 transitionMaskImage:(id)arg2;	// IMP=0x000000000144f0cc
@property(readonly, nonatomic) UIImageSymbolConfiguration *compactImageSymbolConfiguration;
@property(readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
- (void)setBackgroundImagePositionAdjustment:(struct UIOffset)arg1 forState:(long long)arg2;	// IMP=0x000000000144ee56
- (struct UIOffset)backgroundImagePositionAdjustmentForState:(long long)arg1;	// IMP=0x000000000144edd3
- (void)setBackgroundImage:(id)arg1 forState:(long long)arg2;	// IMP=0x000000000144ed57
- (id)backgroundImageForState:(long long)arg1;	// IMP=0x000000000144ecf9
- (void)setTitlePositionAdjustment:(struct UIOffset)arg1 forState:(long long)arg2;	// IMP=0x000000000144ec93
- (struct UIOffset)titlePositionAdjustmentForState:(long long)arg1;	// IMP=0x000000000144ec10
- (void)setTitleTextAttributes:(id)arg1 forState:(long long)arg2;	// IMP=0x000000000144eb12
- (id)titleTextAttributesForState:(long long)arg1;	// IMP=0x000000000144e9d5
- (id)_fallbackColorForState:(long long)arg1;	// IMP=0x000000000144e8e2
- (id)_fallbackFontForState:(long long)arg1;	// IMP=0x000000000144e853
- (id)replicate;	// IMP=0x000000000144e62e
- (_Bool)checkEqualTo:(id)arg1;	// IMP=0x000000000144e204
- (long long)hashInto:(long long)arg1;	// IMP=0x000000000144e130
- (void)describeInto:(id)arg1;	// IMP=0x000000000144ddf1
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x000000000144d550
- (void)_decodeBackgroundPositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x000000000144cc98
- (void)_decodeTitlePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x000000000144c83b
- (void)_decodeBackgroundImagesFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x000000000144c486
- (void)_decodeTitleTextAttributesFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x000000000144bfa4
- (id)copyAsBackButtonDataWithIndicatorsAndFallbackFrom:(id)arg1;	// IMP=0x000000000144bea4
@property(readonly, nonatomic) id <_UIBarButtonItemDataFallback> fallback;
- (id)dataWithNewFallback:(id)arg1;	// IMP=0x000000000144bdf9
@property(readonly, nonatomic) _Bool isBackButtonData;
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000144bce6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
