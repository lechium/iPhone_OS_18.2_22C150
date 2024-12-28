//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

@class UIImage, UIImageView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface TabThumbnailCloseButton : UIButton
{
    UIVisualEffectView *_backdropEffectView;	// 8 = 0x8
    UIVisualEffectView *_vibrantEffectView;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
}

+ (double)defaultButtonSize;	// IMP=0x00400000001d686e
+ (id)backgroundColor;	// IMP=0x00400000001d5e14
- (void).cxx_destruct;	// IMP=0x00000000001d69d0
@property(retain, nonatomic) UIImage *image;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000001d690f
- (void)layoutSubviews;	// IMP=0x00000000001d687c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001d5e73

@end
