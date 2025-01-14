//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSHashTable, NSMapTable, NSString, SUUILockupViewElement, SUUISizeValue, UIView;

__attribute__((visibility("hidden")))
@interface SUUIVerticalLockupView
{
    NSHashTable *_artworkRelatedChildViewElementViews;	// 8 = 0x8
    struct UIEdgeInsets _contentInset;	// 16 = 0x10
    NSMapTable *_imageViewToImageResourceCacheKey;	// 48 = 0x30
    NSMapTable *_lineSpacings;	// 56 = 0x38
    SUUILockupViewElement *_lockupElement;	// 64 = 0x40
    double _productImageAdjustedWidth;	// 72 = 0x48
    SUUISizeValue *_productImageBoundingSize;	// 80 = 0x50
    UIView *_productImageView;	// 88 = 0x58
    struct CGAffineTransform _productImageViewOriginalTransform;	// 96 = 0x60
    long long _sizingStyle;	// 144 = 0x90
    NSMapTable *_topInsets;	// 152 = 0x98
    NSMapTable *_viewElementViews;	// 160 = 0xa0
    double _opacityOfViewsOtherThanProductImageView;	// 168 = 0xa8
    double _zoomingImageAlpha;	// 176 = 0xb0
    double _zoomingImageWidth;	// 184 = 0xb8
}

+ (double)_topInsetForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000026b214
+ (double)_bottomInsetForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000026afd8
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x001000000026adda
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;	// IMP=0x001000000026ac2c
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x001000000026808f
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000267a05
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0010000000267724
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00100000002675d8
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;	// IMP=0x00100000002673ef
- (void).cxx_destruct;	// IMP=0x000000000026b369
@property(nonatomic) double zoomingImageWidth; // @synthesize zoomingImageWidth=_zoomingImageWidth;
@property(nonatomic) double zoomingImageAlpha; // @synthesize zoomingImageAlpha=_zoomingImageAlpha;
@property(nonatomic) double opacityOfViewsOtherThanProductImageView; // @synthesize opacityOfViewsOtherThanProductImageView=_opacityOfViewsOtherThanProductImageView;
@property(nonatomic) long long sizingStyle; // @synthesize sizingStyle=_sizingStyle;
- (void)_showConfirmationAction:(id)arg1;	// IMP=0x000000000026ac0d
- (void)_cancelConfirmationAction:(id)arg1;	// IMP=0x000000000026abf1
- (void)_buttonAction:(id)arg1;	// IMP=0x000000000026aacc
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;	// IMP=0x000000000026a728
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000026a418
- (void)layoutSubviews;	// IMP=0x0000000000269870
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000269632
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000026962a
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000269200
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000002691a8
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000002684fd
- (void)updateForChangedDistanceFromVanishingPoint;	// IMP=0x00000000002675a3
- (void)setVanishingPoint:(struct CGPoint)arg1;	// IMP=0x0000000000267528
- (void)setPerspectiveTargetView:(id)arg1;	// IMP=0x0000000000267408
- (void)dealloc;	// IMP=0x000000000026736d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000267248

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

