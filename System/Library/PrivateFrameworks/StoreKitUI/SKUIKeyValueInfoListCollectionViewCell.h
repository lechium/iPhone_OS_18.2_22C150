//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString, SKUIAttributedStringView;

__attribute__((visibility("hidden")))
@interface SKUIKeyValueInfoListCollectionViewCell
{
    double _titleColumnWidth;	// 8 = 0x8
    SKUIAttributedStringView *_titleView;	// 16 = 0x10
    NSMapTable *_valueViews;	// 24 = 0x18
    NSMapTable *_imageViewToImageResourceCacheKey;	// 32 = 0x20
}

+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x0010000000244be5
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;	// IMP=0x00100000002449ef
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x0010000000243384
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000242f4c
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0010000000242ef3
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0010000000242d14
+ (double)titleColumnWidthWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000242b83
- (void).cxx_destruct;	// IMP=0x0000000000244db6
- (void)_imageTapAction:(id)arg1;	// IMP=0x0000000000244952
- (void)_buttonAction:(id)arg1;	// IMP=0x0000000000244838
- (void)layoutSubviews;	// IMP=0x000000000024415e
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000244156
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000024414e
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000243e7c
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000243663
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000242aac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
