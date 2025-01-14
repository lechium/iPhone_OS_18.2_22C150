//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class SKUIGiftConfiguration, SKUIGiftConfirmLabeledValue, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIGiftConfirmView : UIView
{
    SKUIGiftConfirmLabeledValue *_amountView;	// 8 = 0x8
    UILabel *_chargeDisclaimerLabel;	// 16 = 0x10
    UILabel *_confirmYourOrderLabel;	// 24 = 0x18
    SKUIGiftConfirmLabeledValue *_senderView;	// 32 = 0x20
    SKUIGiftConfiguration *_giftConfiguration;	// 40 = 0x28
    SKUIGiftConfirmLabeledValue *_itemView;	// 48 = 0x30
    SKUIGiftConfirmLabeledValue *_messageView;	// 56 = 0x38
    SKUIGiftConfirmLabeledValue *_recipientsView;	// 64 = 0x40
    UIView *_rule1;	// 72 = 0x48
    UIView *_rule2;	// 80 = 0x50
    UIView *_rule3;	// 88 = 0x58
    UIView *_rule4;	// 96 = 0x60
    UIView *_rule5;	// 104 = 0x68
    UIView *_rule6;	// 112 = 0x70
    SKUIGiftConfirmLabeledValue *_fromView;	// 120 = 0x78
    SKUIGiftConfirmLabeledValue *_sendOnView;	// 128 = 0x80
    UIButton *_termsButton;	// 136 = 0x88
    SKUIGiftConfirmLabeledValue *_themeNameView;	// 144 = 0x90
    UILabel *_totalLabel;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000000b5da1
- (id)_termsButton;	// IMP=0x00000000000b5afa
- (id)_newLightLabelWithSize:(double)arg1 alpha:(double)arg2;	// IMP=0x00000000000b59e0
- (id)_newBoldLabelWithSize:(double)arg1;	// IMP=0x00000000000b58f2
- (void)layoutSubviews;	// IMP=0x00000000000b4073
@property(readonly, nonatomic) UIButton *termsButton;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000000b2ca4

@end

