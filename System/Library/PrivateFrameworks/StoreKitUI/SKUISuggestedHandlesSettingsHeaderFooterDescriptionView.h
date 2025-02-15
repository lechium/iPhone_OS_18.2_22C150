//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, SKUISuggestedHandlesSettingsHeaderFooterDescription, UILabel;

__attribute__((visibility("hidden")))
@interface SKUISuggestedHandlesSettingsHeaderFooterDescriptionView
{
    NSMutableArray *_buttons;	// 8 = 0x8
    SKUISuggestedHandlesSettingsHeaderFooterDescription *_description;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
}

+ (id)_helpLabelWithDescription:(id)arg1 forWidth:(double)arg2;	// IMP=0x00600000003859aa
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingsHeaderFooterDescription:(id)arg2 context:(id)arg3;	// IMP=0x0060000000384fc5
+ (void)requestLayoutForSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0060000000384f7c
+ (struct CGSize)preferredSizeForSettingsHeaderFooterDescription:(id)arg1 context:(id)arg2;	// IMP=0x0060000000384f23
+ (_Bool)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0060000000384ed8
- (void).cxx_destruct;	// IMP=0x0000000000385b04
- (void)_buttonAction:(id)arg1;	// IMP=0x000000000038596e
- (void)layoutSubviews;	// IMP=0x0000000000385576
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000038552b
- (void)reloadWithSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000003851ae

@end

