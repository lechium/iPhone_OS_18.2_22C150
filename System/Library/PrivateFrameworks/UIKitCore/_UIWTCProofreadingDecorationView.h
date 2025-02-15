//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSMutableDictionary, UIVisualEffectView, _UIWTCHighlightContainerView, _UIWTCProofreadingDecorationInfo;

__attribute__((visibility("hidden")))
@interface _UIWTCProofreadingDecorationView : UIView
{
    NSMutableDictionary *_underlineDecorations;	// 8 = 0x8
    NSMutableDictionary *_underlineSubviews;	// 16 = 0x10
    _UIWTCProofreadingDecorationInfo *_highlightInfo;	// 24 = 0x18
    _Bool _needsLayoutForUnderlines;	// 32 = 0x20
    _Bool _needsLayoutForHighlights;	// 33 = 0x21
    UIVisualEffectView *_underlineEffectView;	// 40 = 0x28
    _UIWTCHighlightContainerView *_highlightContainer;	// 48 = 0x30
    NSArray *_decorationInformation;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000373a25
@property(retain, nonatomic) NSArray *decorationInformation; // @synthesize decorationInformation=_decorationInformation;
- (void)clearAllDecorations;	// IMP=0x00000000003739d2
- (void)clearAllHighlights;	// IMP=0x0000000000373988
- (void)clearAllUnderlines;	// IMP=0x000000000037381f
- (void)clearAllDecorationsOfType:(long long)arg1;	// IMP=0x00000000003736a1
- (void)removeDecorationInfo:(id)arg1;	// IMP=0x000000000037345c
- (void)addDecorationInfo:(id)arg1;	// IMP=0x0000000000372fa3
- (void)layoutSubviews;	// IMP=0x0000000000372f80
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003724c7

@end

