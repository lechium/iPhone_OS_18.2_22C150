//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_TVBgImageLoadingViewController.h"

@class IKImageElement, IKViewElement, NSArray, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _TVDescriptiveAlertTemplateController : _TVBgImageLoadingViewController
{
    IKViewElement *_templateElement;	// 8 = 0x8
    NSArray *_templateSubviews;	// 16 = 0x10
    NSArray *_templateSubcontrollers;	// 24 = 0x18
    UIView *_preferredFocusView;	// 32 = 0x20
    UIColor *_backgroundColor;	// 40 = 0x28
    IKImageElement *_bgImageElement;	// 48 = 0x30
    IKImageElement *_bgHeroImageElement;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000074b49
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;	// IMP=0x0000000000074ae0
- (long long)_blurEffectStyle;	// IMP=0x0000000000074aa5
- (_Bool)_backgroundImageRequiresBlur;	// IMP=0x0000000000074a7e
- (id)_backgroundImageProxy;	// IMP=0x0000000000074961
- (struct CGSize)_backgroundImageProxySize;	// IMP=0x00000000000748fd
- (void)_normalizeButtonsInViews:(id)arg1;	// IMP=0x000000000007449a
- (void)loadView;	// IMP=0x0000000000074136
- (void)updateWithViewElement:(id)arg1;	// IMP=0x0000000000072d68

@end

