//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKUIViewReuseView, UIView;

__attribute__((visibility("hidden")))
@interface SKUIDefaultSettingDescriptionView
{
    _Bool _hasDisclosureChevron;	// 8 = 0x8
    struct UIEdgeInsets _padding;	// 16 = 0x10
    UIView *_viewElementView;	// 48 = 0x30
    SKUIViewReuseView *_viewReuseView;	// 56 = 0x38
}

+ (struct UIEdgeInsets)_paddingForStyle:(id)arg1;	// IMP=0x00600000000e2a68
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;	// IMP=0x00600000000e2233
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00600000000e2139
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;	// IMP=0x00600000000e20e0
+ (_Bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00600000000e1fe3
- (void).cxx_destruct;	// IMP=0x00000000000e2aba
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000000e29f6
- (void)layoutSubviews;	// IMP=0x00000000000e27d5
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000000e26e9
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000000e23ff
- (_Bool)hasDisclosureChevron;	// IMP=0x00000000000e23a2

@end

