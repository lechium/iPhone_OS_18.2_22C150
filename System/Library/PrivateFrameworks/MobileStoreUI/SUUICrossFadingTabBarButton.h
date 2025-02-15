//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class NSString, UIImage, UIImageView, UILabel, _Badge;

__attribute__((visibility("hidden")))
@interface SUUICrossFadingTabBarButton : UIControl
{
    UILabel *_selectedTitleLabel;	// 8 = 0x8
    UIImageView *_selectedImageView;	// 16 = 0x10
    UILabel *_standardTitleLabel;	// 24 = 0x18
    UIImageView *_standardImageView;	// 32 = 0x20
    _Badge *_badge;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    UIImage *_image;	// 56 = 0x38
    UIImage *_selectedImage;	// 64 = 0x40
    double _selectionProgress;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000894a5
@property(nonatomic) double selectionProgress; // @synthesize selectionProgress=_selectionProgress;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_positionBadge;	// IMP=0x0000000000089255
- (void)_setBadgeValue:(id)arg1;	// IMP=0x0000000000089098
- (void)tintColorDidChange;	// IMP=0x0000000000088ca8
- (void)layoutSubviews;	// IMP=0x0000000000088900
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000885d1

@end

