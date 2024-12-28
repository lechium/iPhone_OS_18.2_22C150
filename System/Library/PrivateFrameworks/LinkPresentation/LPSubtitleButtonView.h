//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPCaptionButtonPresentationProperties, LPTextViewStyle, UIButton;

__attribute__((visibility("hidden")))
@interface LPSubtitleButtonView
{
    LPCaptionButtonPresentationProperties *_buttonProperties;	// 8 = 0x8
    LPTextViewStyle *_style;	// 16 = 0x10
    UIButton *_button;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d1637
- (id)viewForLastBaselineLayout;	// IMP=0x00000000000d1622
- (void)buttonPressed:(id)arg1;	// IMP=0x00000000000d1539
- (void)sizeToFit;	// IMP=0x00000000000d14d2
- (struct CGSize)_layoutButtonForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;	// IMP=0x00000000000d1459
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000d140d
- (void)layoutComponentView;	// IMP=0x00000000000d13ad
- (void)_buildSubviewsIfNeeded;	// IMP=0x00000000000d0cb9
- (id)initWithHost:(id)arg1 buttonProperties:(id)arg2 style:(id)arg3;	// IMP=0x00000000000d0be4
- (id)initWithHost:(id)arg1;	// IMP=0x00000000000d0bd6

@end
