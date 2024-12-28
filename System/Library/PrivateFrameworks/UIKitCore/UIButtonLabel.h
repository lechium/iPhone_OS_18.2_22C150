//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILabel.h"

@class UIButton;

__attribute__((visibility("hidden")))
@interface UIButtonLabel : UILabel
{
    _Bool _reverseShadow;	// 160 = 0xa0
    UIButton *_button;	// 168 = 0xa8
    _Bool _externallySetNumberOfLines;	// 176 = 0xb0
    _Bool _fontIsDefaultForIdiom;	// 177 = 0xb1
}

- (void).cxx_destruct;	// IMP=0x000000000092c4f3
@property(readonly, nonatomic) _Bool _fontIsDefaultForIdiom; // @synthesize _fontIsDefaultForIdiom;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x000000000092c46e
- (_Bool)_textColorFollowsTintColor;	// IMP=0x000000000092c2b8
- (void)_contentDidChange:(long long)arg1 fromContent:(id)arg2;	// IMP=0x000000000092c175
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000092c04e
- (void)setReverseShadow:(_Bool)arg1;	// IMP=0x000000000092bfe3
- (struct CGSize)shadowOffset;	// IMP=0x000000000092bf98
- (void)setShadowOffset:(struct CGSize)arg1;	// IMP=0x000000000092bf4f
- (void)setFont:(id)arg1;	// IMP=0x000000000092bf3b
- (void)_setFont:(id)arg1 isDefaultForIdiom:(_Bool)arg2;	// IMP=0x000000000092bf02
- (id)_initWithFrame:(struct CGRect)arg1 button:(id)arg2;	// IMP=0x000000000092be73
- (void)_setWantsAutolayout;	// IMP=0x000000000092be30
- (void)_updateTextColorWithFallbackColorIfNeeded;	// IMP=0x000000000092be2a
- (void)_internallySetNumberOfLines:(long long)arg1;	// IMP=0x000000000092bdee
- (void)setNumberOfLines:(long long)arg1;	// IMP=0x000000000092bdb4
- (double)_paddingForBaselineSpacingFromEdge:(int)arg1 toNeighborEdge:(int)arg2;	// IMP=0x000000000092c504

@end
