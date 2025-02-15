//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSHashTable, NSMapTable, NSString, SKUILockupViewElement, SKUISizeValue, UIView;

__attribute__((visibility("hidden")))
@interface SKUIVerticalLockupView
{
    NSHashTable *_artworkRelatedChildViewElementViews;	// 8 = 0x8
    struct UIEdgeInsets _contentInset;	// 16 = 0x10
    NSMapTable *_imageViewToImageResourceCacheKey;	// 48 = 0x30
    NSMapTable *_lineSpacings;	// 56 = 0x38
    SKUILockupViewElement *_lockupElement;	// 64 = 0x40
    double _productImageAdjustedWidth;	// 72 = 0x48
    SKUISizeValue *_productImageBoundingSize;	// 80 = 0x50
    UIView *_productImageView;	// 88 = 0x58
    struct CGAffineTransform _productImageViewOriginalTransform;	// 96 = 0x60
    long long _sizingStyle;	// 144 = 0x90
    NSMapTable *_topInsets;	// 152 = 0x98
    NSMapTable *_viewElementViews;	// 160 = 0xa0
    double _opacityOfViewsOtherThanProductImageView;	// 168 = 0xa8
    double _zoomingImageAlpha;	// 176 = 0xb0
    double _zoomingImageWidth;	// 184 = 0xb8
}

+ (double)_topInsetForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000001dfcf8
+ (double)_bottomInsetForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000001dfa6a
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x00100000001df802
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;	// IMP=0x00100000001df60c
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00100000001dc973
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000001dc2b7
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000001dbf8c
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00100000001dbdf3
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;	// IMP=0x00100000001dbbbe
- (void).cxx_destruct;	// IMP=0x00000000001dfe97
@property(nonatomic) double zoomingImageWidth; // @synthesize zoomingImageWidth=_zoomingImageWidth;
@property(nonatomic) double zoomingImageAlpha; // @synthesize zoomingImageAlpha=_zoomingImageAlpha;
@property(nonatomic) double opacityOfViewsOtherThanProductImageView; // @synthesize opacityOfViewsOtherThanProductImageView=_opacityOfViewsOtherThanProductImageView;
@property(nonatomic) long long sizingStyle; // @synthesize sizingStyle=_sizingStyle;
- (void)_showConfirmationAction:(id)arg1;	// IMP=0x00000000001df5ed
- (void)_cancelConfirmationAction:(id)arg1;	// IMP=0x00000000001df5d1
- (void)_buttonAction:(id)arg1;	// IMP=0x00000000001df4ac
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;	// IMP=0x00000000001df108
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001dedf8
- (void)layoutSubviews;	// IMP=0x00000000001de250
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000001de012
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001de00a
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000001ddbe0
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000001ddb88
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000001dcedf
- (void)updateForChangedDistanceFromVanishingPoint;	// IMP=0x00000000001dbdbe
- (void)setVanishingPoint:(struct CGPoint)arg1;	// IMP=0x00000000001dbd43
- (void)setPerspectiveTargetView:(id)arg1;	// IMP=0x00000000001dbc37
- (void)dealloc;	// IMP=0x00000000001dbb3c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001db9c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

