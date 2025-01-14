//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SKUIImageView;

__attribute__((visibility("hidden")))
@interface SKUIImageCollectionViewCell
{
    SKUIImageView *_highlightImageView;	// 8 = 0x8
    id _imageRequestCacheKey;	// 16 = 0x10
    _Bool _showsReflectionImage;	// 24 = 0x18
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00100000000100a0
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000000fff5
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x001000000000ff3c
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x001000000000fdfe
- (void).cxx_destruct;	// IMP=0x0000000000010c10
@property(nonatomic) _Bool showsReflectionImage; // @synthesize showsReflectionImage=_showsReflectionImage;
- (void)_reloadHighlightImageView;	// IMP=0x000000000001086d
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000001082c
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000107eb
- (void)layoutSubviews;	// IMP=0x0000000000010505
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000000104fd
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000104f5
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000001030b
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000010180
- (void)reloadWithCarouselItem:(id)arg1 size:(struct CGSize)arg2 context:(id)arg3;	// IMP=0x000000000000f961

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

