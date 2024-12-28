//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingOnboardingAvatarCarouselItem : NSObject
{
    _Bool _shouldShowVariants;	// 8 = 0x8
    UIImage *_cachedImage;	// 16 = 0x10
    CDUnknownBlockType _imageProvider;	// 24 = 0x18
    unsigned long long _imageType;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    double _imageInsetPercentage;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000013db89
@property(nonatomic) _Bool shouldShowVariants; // @synthesize shouldShowVariants=_shouldShowVariants;
@property(readonly, nonatomic) double imageInsetPercentage; // @synthesize imageInsetPercentage=_imageInsetPercentage;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long imageType; // @synthesize imageType=_imageType;
@property(readonly, copy, nonatomic) CDUnknownBlockType imageProvider; // @synthesize imageProvider=_imageProvider;
@property(retain, nonatomic) UIImage *cachedImage; // @synthesize cachedImage=_cachedImage;
- (id)initWithTitle:(id)arg1;	// IMP=0x000000000013dab6
- (id)initWithImageInsetPercentage:(double)arg1 imageProvider:(CDUnknownBlockType)arg2;	// IMP=0x000000000013da1c

@end
