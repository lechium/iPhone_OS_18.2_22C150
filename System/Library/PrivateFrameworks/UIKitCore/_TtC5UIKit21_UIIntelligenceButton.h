//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@class MISSING_TYPE;

@interface _TtC5UIKit21_UIIntelligenceButton : UIButton
{
    MISSING_TYPE *isExpanded;	// 8 = 0x8
    MISSING_TYPE *style;	// 9 = 0x9
    MISSING_TYPE *imagePortal;	// 16 = 0x10
    MISSING_TYPE *highlightTransformView;	// 24 = 0x18
    MISSING_TYPE *colorView;	// 32 = 0x20
    MISSING_TYPE *scaleAnimator;	// 40 = 0x28
    MISSING_TYPE *opacityAnimator;	// 48 = 0x30
    MISSING_TYPE *rotationAnimator;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001f9f40
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f9e80
- (void)updateConfiguration;	// IMP=0x00000000001f96a0
- (void)layoutSubviews;	// IMP=0x00000000001f9670
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;	// IMP=0x00000000001f9490
@property(nonatomic, readonly) _Bool _allowsSymbolAnimations;
@property(nonatomic, readonly) unsigned long long behavioralStyle;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001f9440

@end
