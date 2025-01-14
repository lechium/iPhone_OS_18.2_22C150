//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SUUIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SUUIProfileSettingDescriptionView
{
    UILabel *_handleLabel;	// 8 = 0x8
    _Bool _hasDisclosureChevron;	// 16 = 0x10
    SUUIImageView *_imageView;	// 24 = 0x18
    UILabel *_nameLabel;	// 32 = 0x20
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;	// IMP=0x00600000002073a3
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x006000000020739d
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;	// IMP=0x0060000000207387
+ (_Bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x006000000020737f
- (void).cxx_destruct;	// IMP=0x0000000000207c8e
- (void)layoutSubviews;	// IMP=0x00000000002077c4
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000002077bc
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000002074ce
- (_Bool)hasDisclosureChevron;	// IMP=0x00000000002074be

@end

