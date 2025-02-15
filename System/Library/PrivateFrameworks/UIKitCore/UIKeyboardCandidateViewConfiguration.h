//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateViewConfiguration : NSObject
{
    _Bool _darkKeyboard;	// 8 = 0x8
    _Bool _shouldAlwaysShowSortControl;	// 9 = 0x9
    _Bool _shouldUsePredictionViewSecureRenderTraits;	// 10 = 0xa
}

+ (double)fontSizeMultiplierForCurrentLanguage;	// IMP=0x0060000000da8736
+ (double)lineHeightMultiplierForCurrentLanguage;	// IMP=0x0060000000da85cb
+ (id)configuration;	// IMP=0x0060000000da8136
@property(readonly, nonatomic) _Bool shouldUsePredictionViewSecureRenderTraits; // @synthesize shouldUsePredictionViewSecureRenderTraits=_shouldUsePredictionViewSecureRenderTraits;
@property(readonly, nonatomic) _Bool shouldAlwaysShowSortControl; // @synthesize shouldAlwaysShowSortControl=_shouldAlwaysShowSortControl;
@property(nonatomic) _Bool darkKeyboard; // @synthesize darkKeyboard=_darkKeyboard;
@property(readonly, nonatomic) int inlineFloatingViewAdjustMode;
@property(readonly, nonatomic) UIColor *highlightedBackgroundColor;
@property(readonly, nonatomic) struct CGSize preferredInlineFloatingViewSize;
@property(readonly, nonatomic) _Bool allowsPullDownGesture;
@property(readonly, nonatomic) _Bool willCoverKeyboardLayout;
- (double)candidateDefaultFontSize;	// IMP=0x0000000000da85bd
- (id)candidateFontWithSize:(double)arg1 language:(id)arg2;	// IMP=0x0000000000da844d
- (id)candidateFontWithSize:(double)arg1;	// IMP=0x0000000000da8394
@property(readonly, nonatomic) _Bool shouldAnimateStateTransition;
@property(readonly, nonatomic) _Bool shouldResizeKeyboardBackdrop;
@property(readonly, nonatomic) unsigned long long maxNumberOfProactiveCandidates;
@property(readonly, nonatomic) unsigned long long rowsToExtend;
- (id)extendedScrolledState;	// IMP=0x0000000000da8369
- (id)extendedState;	// IMP=0x0000000000da8361
- (id)initialState;	// IMP=0x0000000000da8148

@end

