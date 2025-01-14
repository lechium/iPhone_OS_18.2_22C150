//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_TVBgImageLoadingViewController.h"

@class IKImageElement, IKViewElement;

__attribute__((visibility("hidden")))
@interface _TVLoadingViewController : _TVBgImageLoadingViewController
{
    IKImageElement *_bgImageElement;	// 8 = 0x8
    IKImageElement *_heroImgElement;	// 16 = 0x10
    IKViewElement *_loadingTemplateElement;	// 24 = 0x18
    double _spinnerDelay;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001bbe5
- (void)setSpinnerDelay:(double)arg1;	// IMP=0x000000000001bab9
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000001b95d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000001b73c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000001b6b9
- (void)loadView;	// IMP=0x000000000001b5e6
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;	// IMP=0x000000000001b55f
- (struct CGSize)_backgroundImageProxySize;	// IMP=0x000000000001b4fb
- (long long)_blurEffectStyle;	// IMP=0x000000000001b4c0
- (_Bool)_backgroundImageRequiresBlur;	// IMP=0x000000000001b499
- (id)_backgroundImageProxy;	// IMP=0x000000000001b37c
- (void)updateWithViewElement:(id)arg1;	// IMP=0x000000000001acd1
- (void)updateWithLoadingTemplate:(id)arg1;	// IMP=0x000000000001acbf
- (id)init;	// IMP=0x000000000001ac7c

@end

