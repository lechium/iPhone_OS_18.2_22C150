//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSHashTable, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface SKUIMenuBarTemplateShelfFixedElementsCollectionViewCell
{
    NSHashTable *_artworkRelatedChildViewElementViews;	// 8 = 0x8
    struct UIEdgeInsets _contentInset;	// 16 = 0x10
    NSMapTable *_imageViewToImageResourceCacheKey;	// 48 = 0x30
    NSMapTable *_viewElementViews;	// 56 = 0x38
    NSArray *_viewElements;	// 64 = 0x40
}

+ (id)_leftPositionedChildrenOfViewElement:(id)arg1;	// IMP=0x001000000001cdaa
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x001000000001cbdf
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;	// IMP=0x001000000001c9a3
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x001000000001bd86
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000001ba95
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x001000000001b9c6
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x001000000001b830
- (void).cxx_destruct;	// IMP=0x000000000001cfef
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x000000000001c7af
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000001c7a7
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000001c3be
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000001c366
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000001bde9
- (void)layoutSubviews;	// IMP=0x000000000001b48b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001b3b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
