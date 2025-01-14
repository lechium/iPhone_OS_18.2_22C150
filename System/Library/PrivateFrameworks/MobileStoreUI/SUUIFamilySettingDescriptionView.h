//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SUUISettingsFamilyViewElement, SUUIViewElementLayoutContext, UIActivityIndicatorView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SUUIFamilySettingDescriptionView
{
    UIActivityIndicatorView *_activityIndicator;	// 8 = 0x8
    UIImageView *_iconImageView;	// 16 = 0x10
    UILabel *_labelView;	// 24 = 0x18
    SUUIViewElementLayoutContext *_layoutContext;	// 32 = 0x20
    SUUISettingsFamilyViewElement *_viewElement;	// 40 = 0x28
    long long _viewState;	// 48 = 0x30
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;	// IMP=0x0060000000061622
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x006000000006161c
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;	// IMP=0x0060000000061606
+ (_Bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00600000000615fe
- (void).cxx_destruct;	// IMP=0x0000000000061ec4
- (void)_setViewState:(long long)arg1;	// IMP=0x0000000000061ea7
- (void)_layoutWithLockup;	// IMP=0x0000000000061b3d
- (void)_layoutWithActivityIndicator;	// IMP=0x00000000000619fa
- (id)_attributedStringForViewState;	// IMP=0x00000000000619a8
- (id)_attributedStringForKey:(id)arg1;	// IMP=0x0000000000061788
- (void)layoutSubviews;	// IMP=0x0000000000061720
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000061718
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000061712
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000061695

@end

