//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface ServiceTouchIDAlertHeaderView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    UILabel *_messageLabel;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000a36b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x001000000000a1f9
- (void)layoutSubviews;	// IMP=0x0010000000009ee2
@property(copy, nonatomic) NSString *title;
- (void)shakeTitleView;	// IMP=0x0010000000009bf7
@property(copy, nonatomic) NSString *message;
@property(retain, nonatomic) UIImage *image;

@end
