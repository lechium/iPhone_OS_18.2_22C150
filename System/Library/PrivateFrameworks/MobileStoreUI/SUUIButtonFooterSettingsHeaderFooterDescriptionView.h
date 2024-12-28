//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SUUIButtonViewElement, SUUIViewElement, UIButton;

__attribute__((visibility("hidden")))
@interface SUUIButtonFooterSettingsHeaderFooterDescriptionView
{
    UIButton *_button;	// 8 = 0x8
    SUUIButtonViewElement *_buttonElement;	// 16 = 0x10
    SUUIViewElement *_viewElement;	// 24 = 0x18
}

+ (id)_buttonWithButtonElement:(id)arg1;	// IMP=0x0060000000158918
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingsHeaderFooterDescription:(id)arg2 context:(id)arg3;	// IMP=0x0060000000158312
+ (void)requestLayoutForSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x006000000015830c
+ (_Bool)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0060000000158304
+ (struct CGSize)preferredSizeForSettingsHeaderFooterDescription:(id)arg1 context:(id)arg2;	// IMP=0x00600000001582ee
- (void).cxx_destruct;	// IMP=0x0000000000158bd8
- (void)_reloadWithButtonElement:(id)arg1 context:(id)arg2;	// IMP=0x00000000001589ec
- (void)_buttonTapped:(id)arg1;	// IMP=0x0000000000158892
- (void)layoutSubviews;	// IMP=0x00000000001586c0
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000001586b8
- (void)reloadWithSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000015848e

@end
