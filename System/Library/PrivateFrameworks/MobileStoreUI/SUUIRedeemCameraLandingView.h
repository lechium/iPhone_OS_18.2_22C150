//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIButton, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SUUIRedeemCameraLandingView : UIView
{
    UILabel *_bodyLabel;	// 8 = 0x8
    UIButton *_button;	// 16 = 0x10
    UILabel *_headerLabel;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
    long long _spacingStyle;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002e86b3
@property(nonatomic) long long spacingStyle; // @synthesize spacingStyle=_spacingStyle;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002e83af
- (void)layoutSubviews;	// IMP=0x00000000002e7d74
@property(retain, nonatomic) UIImage *image;
- (id)initWithClientContext:(id)arg1;	// IMP=0x00000000002e7612

@end

