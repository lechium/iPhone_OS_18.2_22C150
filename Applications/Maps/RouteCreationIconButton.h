//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface RouteCreationIconButton : UIButton
{
    UIImageView *_iconImageView;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
    UIImage *_image;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000a1bef5
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)_updateDisabledState;	// IMP=0x0010000000a1be8d
- (void)layoutSubviews;	// IMP=0x0010000000a1be4c
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0010000000a1be0b
- (id)initWithImage:(id)arg1 title:(id)arg2;	// IMP=0x0010000000a1b6b0

@end
