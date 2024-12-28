//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, _ASCABLEQRCodeBadgeView, _ASCABLEQRCodeImageView;

__attribute__((visibility("hidden")))
@interface _ASCABLEQRCodeView : UIView
{
    NSString *_message;	// 8 = 0x8
    _ASCABLEQRCodeImageView *_imageView;	// 16 = 0x10
    UIView *_platterView;	// 24 = 0x18
    _ASCABLEQRCodeBadgeView *_badgeView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000041607
- (id)_qrCodeColor;	// IMP=0x0000000000041520
- (void)_updatePlatterBorderStyle;	// IMP=0x0000000000041410
- (void)_updateQRCodeImage;	// IMP=0x00000000000413bc
- (id)_qrCodeCIImage;	// IMP=0x00000000000411aa
- (id)_qrCodeASImage;	// IMP=0x000000000004102a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000040fd4
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000040fa1
- (id)initWithMessage:(id)arg1;	// IMP=0x00000000000405f1

@end
