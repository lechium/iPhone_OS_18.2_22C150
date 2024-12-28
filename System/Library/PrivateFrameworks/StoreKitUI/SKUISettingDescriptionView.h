//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface SKUISettingDescriptionView : UIView
{
    struct UIEdgeInsets _contentInset;	// 8 = 0x8
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;	// IMP=0x00600000003836a3
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x006000000038365a
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;	// IMP=0x0060000000383601
+ (_Bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00600000003835b6
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (struct UIEdgeInsets)layoutMargins;	// IMP=0x00000000003837db
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000383790
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000383747
@property(readonly, nonatomic) _Bool hasDisclosureChevron;

@end
