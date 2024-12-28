//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPUBorderDrawingCache, NSCache, NSHashTable, NSMapTable, NSMutableDictionary, NSMutableSet, NSString, SKUIBadgeTextAttachmentLoader, SKUIClientContext, SKUIItemOfferButton, SKUIResourceLoader, SKUIViewElementTextLayoutCache, UIColor, UIViewController;
@protocol SKUIArtworkRequestDelegate;

__attribute__((visibility("hidden")))
@interface SKUIViewElementLayoutContext : NSObject
{
    NSMutableDictionary *_aggregateValues;	// 8 = 0x8
    SKUIBadgeTextAttachmentLoader *_badgeImageLoader;	// 16 = 0x10
    MPUBorderDrawingCache *_borderDrawingCache;	// 24 = 0x18
    NSMapTable *_editorialLayouts;	// 32 = 0x20
    NSHashTable *_expandedEditorialLayouts;	// 40 = 0x28
    SKUIItemOfferButton *_itemOfferButton;	// 48 = 0x30
    NSMutableDictionary *_itemOfferButtonSizes;	// 56 = 0x38
    struct UIEdgeInsets _largeScreenElementPadding;	// 64 = 0x40
    NSMutableSet *_observedArtworkRequestIDs;	// 96 = 0x60
    NSMapTable *_blurColors;	// 104 = 0x68
    double _activePageWidth;	// 112 = 0x70
    id <SKUIArtworkRequestDelegate> _artworkRequestDelegate;	// 120 = 0x78
    SKUIClientContext *_clientContext;	// 128 = 0x80
    unsigned long long _containerViewElementType;	// 136 = 0x88
    SKUIViewElementTextLayoutCache *_labelLayoutCache;	// 144 = 0x90
    UIViewController *_parentViewController;	// 152 = 0x98
    SKUIResourceLoader *_resourceLoader;	// 160 = 0xa0
    UIColor *_placeholderColor;	// 168 = 0xa8
    UIColor *_tintColor;	// 176 = 0xb0
    NSString *_backdropGroupName;	// 184 = 0xb8
    double _displayScale;	// 192 = 0xc0
}

+ (double)_calculateValueFromString:(id)arg1 withDefault:(double)arg2 coefficent:(double)arg3;	// IMP=0x006000000023da8c
+ (double)itemWidthForElement:(id)arg1 withDefaultWidth:(double)arg2 fitWidth:(double)arg3;	// IMP=0x006000000023b15b
- (void).cxx_destruct;	// IMP=0x000000000023e05b
@property(nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property(readonly, nonatomic) struct UIEdgeInsets largeScreenElementPadding; // @synthesize largeScreenElementPadding=_largeScreenElementPadding;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(retain, nonatomic) SKUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) SKUIViewElementTextLayoutCache *labelLayoutCache; // @synthesize labelLayoutCache=_labelLayoutCache;
@property(nonatomic) unsigned long long containerViewElementType; // @synthesize containerViewElementType=_containerViewElementType;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(nonatomic) __weak id <SKUIArtworkRequestDelegate> artworkRequestDelegate; // @synthesize artworkRequestDelegate=_artworkRequestDelegate;
@property(nonatomic) double activePageWidth; // @synthesize activePageWidth=_activePageWidth;
- (struct CGSize)_sizeForImageElement:(id)arg1 applyTransform:(_Bool)arg2;	// IMP=0x000000000023dd79
- (_Bool)_loadImageForURL:(id)arg1 cacheKey:(id)arg2 dataConsumer:(id)arg3 reason:(long long)arg4;	// IMP=0x000000000023dbc2
- (void)_artworkRequestDidLoadImageNotification:(id)arg1;	// IMP=0x000000000023d92d
- (id)transientRequestIdentifierForViewElement:(id)arg1;	// IMP=0x000000000023d837
- (id)textPropertiesForViewElement:(id)arg1 width:(double)arg2;	// IMP=0x000000000023d6ac
- (struct CGSize)sizeForViewElement:(id)arg1 width:(double)arg2;	// IMP=0x000000000023cce0
- (struct CGSize)sizeForItemOfferButton:(id)arg1;	// IMP=0x000000000023c92a
- (struct CGSize)sizeForImageElement:(id)arg1;	// IMP=0x000000000023c913
- (struct CGSize)sizeForBadgeElement:(id)arg1;	// IMP=0x000000000023c813
- (void)setLargeScreenElementPaddingFromContext:(id)arg1;	// IMP=0x000000000023c649
- (void)setBlurColor:(id)arg1 cacheKey:(id)arg2;	// IMP=0x000000000023c627
- (void)setAggregateValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000023c58f
- (id)requestIdentifierForViewElement:(id)arg1;	// IMP=0x000000000023c530
- (id)requestIdentifierForResourceCacheKey:(id)arg1;	// IMP=0x000000000023c4fb
- (id)requestIdentifierForArtwork:(id)arg1;	// IMP=0x000000000023c49c
- (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2;	// IMP=0x000000000023c321
- (id)placeholderImageForSize:(struct CGSize)arg1;	// IMP=0x000000000023c1d8
- (long long)maxWidthForElement:(id)arg1 withDefaultWidth:(long long)arg2;	// IMP=0x000000000023c131
- (id)placeholderImageForImageElement:(id)arg1 dataConsumer:(id)arg2;	// IMP=0x000000000023be7f
- (id)dataConsumerForImageElement:(id)arg1;	// IMP=0x000000000023bd1c
- (_Bool)loadImageForImageElement:(id)arg1 reason:(long long)arg2 dataConsumer:(id)arg3;	// IMP=0x000000000023bc25
- (_Bool)loadImageForImageElement:(id)arg1 reason:(long long)arg2;	// IMP=0x000000000023bba4
- (_Bool)loadTemplatedImageForBadgeElement:(id)arg1 reason:(long long)arg2;	// IMP=0x000000000023b9ef
- (_Bool)loadImageForBadgeElement:(id)arg1 reason:(long long)arg2;	// IMP=0x000000000023b8c4
- (_Bool)loadImageForArtwork:(id)arg1 dataConsumer:(id)arg2 reason:(long long)arg3;	// IMP=0x000000000023b841
- (_Bool)loadImageForArtwork:(id)arg1 reason:(long long)arg2;	// IMP=0x000000000023b7bf
- (_Bool)isEditorialLayoutExpanded:(id)arg1;	// IMP=0x000000000023b7a9
- (void)invalidateAllEditorialLayouts;	// IMP=0x000000000023b793
- (id)imageResourceCacheKeyForViewElement:(id)arg1;	// IMP=0x000000000023b68f
- (id)imageResourceCacheKeyForArtwork:(id)arg1;	// IMP=0x000000000023b67a
- (void)expandEditorialForLabelElement:(id)arg1;	// IMP=0x000000000023b5f1
- (id)editorialLayoutForLabelElement:(id)arg1 width:(double)arg2;	// IMP=0x000000000023b4d1
- (double)defaultItemWidthForViewElement:(id)arg1;	// IMP=0x000000000023b2db
@property(readonly, nonatomic) MPUBorderDrawingCache *borderDrawingCache;
- (id)blurColorForCacheKey:(id)arg1;	// IMP=0x000000000023b25e
@property(readonly, nonatomic) SKUIBadgeTextAttachmentLoader *badgeImageLoader;
- (id)aggregateValueForKey:(id)arg1;	// IMP=0x000000000023b1f6
@property(readonly, nonatomic) NSCache *placeholderImageCache;
- (void)dealloc;	// IMP=0x000000000023b0c0
- (id)initWithStorePageSectionContext:(id)arg1 previousLayoutContext:(id)arg2;	// IMP=0x000000000023acbb
- (id)initWithStorePageSectionContext:(id)arg1;	// IMP=0x000000000023aca7
- (id)init;	// IMP=0x000000000023ac95
- (id)_initSKUIViewElementLayoutContext;	// IMP=0x000000000023aad4

@end
