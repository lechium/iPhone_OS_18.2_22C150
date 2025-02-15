//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSHashTable, NSMapTable, NSMutableArray, NSString, SKUIGradientView, SKUILockupViewElement, SKUIProductLockupLayout;

__attribute__((visibility("hidden")))
@interface SKUIProductLockupCollectionViewCell
{
    NSHashTable *_artworkRelatedChildViewElementViews;	// 8 = 0x8
    NSMapTable *_buyButtonDescriptorToButton;	// 16 = 0x10
    NSMapTable *_elementViews;	// 24 = 0x18
    NSMapTable *_imageViewToImageResourceCacheKey;	// 32 = 0x20
    SKUIProductLockupLayout *_layout;	// 40 = 0x28
    SKUILockupViewElement *_lockup;	// 48 = 0x30
    SKUIGradientView *_offerConfirmationGradientView;	// 56 = 0x38
    long long _offerMetadataPosition;	// 64 = 0x40
    NSHashTable *_offerViews;	// 72 = 0x48
    NSMutableArray *_segmentedControlControllers;	// 80 = 0x50
}

+ (void)_requestLayoutForViewElements:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000141c74
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x0010000000141992
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;	// IMP=0x0010000000141797
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x001000000013e3e2
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000013e164
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x001000000013e095
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x001000000013defc
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;	// IMP=0x001000000013dcc7
- (void).cxx_destruct;	// IMP=0x0000000000143db9
- (id)_viewElementForView:(id)arg1;	// IMP=0x0000000000143c05
- (void)_updateLayoutToAnimateOfferTransitionForView:(id)arg1;	// IMP=0x00000000001435cb
- (struct CGRect)_stackElements:(id)arg1 alignment:(long long)arg2 inRect:(struct CGRect)arg3;	// IMP=0x0000000000143119
- (struct CGRect)_stackBottomRightElements:(id)arg1 inRect:(struct CGRect)arg2;	// IMP=0x0000000000142cf8
- (void)_prepareOfferConfirmationGradientForView:(id)arg1;	// IMP=0x0000000000142736
- (void)_layoutConfirmationGradientRelativeToSection:(long long)arg1 alpha:(double)arg2;	// IMP=0x000000000014228b
- (struct CGRect)_frameForSection:(long long)arg1;	// IMP=0x000000000014207c
- (void)_showConfirmationAction:(id)arg1;	// IMP=0x000000000014173b
- (void)_imageTapAction:(id)arg1;	// IMP=0x0000000000141561
- (void)_cancelConfirmationAction:(id)arg1;	// IMP=0x0000000000141508
- (void)_buttonAction:(id)arg1;	// IMP=0x0000000000141281
- (void)offerViewWillAnimateTransition:(id)arg1;	// IMP=0x000000000014126f
- (void)offerViewDidAnimateTransition:(id)arg1;	// IMP=0x000000000014121e
- (_Bool)offerViewAnimateTransition:(id)arg1;	// IMP=0x0000000000141209
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;	// IMP=0x00000000001411f7
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;	// IMP=0x00000000001411a6
- (void)layoutSubviews;	// IMP=0x000000000013fc26
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x000000000013fa32
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000013f68b
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000013f2a2
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000013e63d
- (void)updateForChangedDistanceFromVanishingPoint;	// IMP=0x000000000013dec7
- (void)setVanishingPoint:(struct CGPoint)arg1;	// IMP=0x000000000013de4c
- (void)setPerspectiveTargetView:(id)arg1;	// IMP=0x000000000013dd40
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000013dbf0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

