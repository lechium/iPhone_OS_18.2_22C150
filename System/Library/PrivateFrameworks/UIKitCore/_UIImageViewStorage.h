//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSString, UIImage, UIImageSymbolConfiguration, UIImageView, UILayoutGuide, UIView, _UIImageCIImageRenderer, _UIImageLoader, _UIImageSymbolVariant;
@protocol _UIImageViewLoadingDelegate, _UIImageViewStorage;

__attribute__((visibility("hidden")))
@interface _UIImageViewStorage : NSObject
{
    UIImageView *_imageView;	// 8 = 0x8
    id <_UIImageViewStorage> _storage;	// 16 = 0x10
}

+ (id)storageForImageView:(id)arg1;	// IMP=0x001000000123016d
- (void).cxx_destruct;	// IMP=0x0000000001231247
@property(nonatomic, getter=isStoppingLoad) _Bool stoppingLoad;
@property(nonatomic, getter=isEnqueueingLoad) _Bool enqueueingLoad;
@property(nonatomic, getter=isStartingLoad) _Bool startingLoad;
@property(nonatomic) _Bool adjustsImageSizeForAccessibilityContentSizeCategory;
@property(nonatomic) _Bool masksTemplateImages;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(retain, nonatomic) UIView *placeholderView;
@property(retain, nonatomic) UIImage *imageBeingSetByLoader;
@property(retain, nonatomic) id <_UIImageViewLoadingDelegate> loadingDelegate;
@property(retain, nonatomic) _UIImageLoader *imageLoader;
@property(nonatomic) unsigned int drawMode;
@property(retain, nonatomic) NSMapTable *layouts;
@property(retain, nonatomic) UILayoutGuide *imageContentGuide;
@property(retain, nonatomic) _UIImageCIImageRenderer *CIRenderer;
@property(nonatomic) long long defaultRenderingMode;
@property(nonatomic) long long animationRepeatCount;
@property(nonatomic) double animationDuration;
@property(retain, nonatomic) NSArray *highlightedAnimationImages;
@property(retain, nonatomic) NSArray *animationImages;
@property(retain, nonatomic) _UIImageSymbolVariant *preferredSymbolVariant;
@property(retain, nonatomic) UIImageSymbolConfiguration *overridingSymbolConfiguration;
@property(retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property(retain, nonatomic) UIImage *resolvedHighlightedImage;
@property(retain, nonatomic) UIImage *highlightedImage;
@property(retain, nonatomic) UIImage *resolvedImage;
@property(retain, nonatomic) UIImage *image;
- (id)extendedStorage;	// IMP=0x000000000123020c
- (id)simpleStorage;	// IMP=0x00000000012301af
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000000123126d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
