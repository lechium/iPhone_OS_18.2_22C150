//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, SUUIGiftDashView, UILabel;

__attribute__((visibility("hidden")))
@interface SUUIGiftConfirmLabeledValue : UIView
{
    SUUIGiftDashView *_dashView;	// 8 = 0x8
    UILabel *_labelLabel;	// 16 = 0x10
    long long _style;	// 24 = 0x18
    UILabel *_valueLabel;	// 32 = 0x20
    UILabel *_subtitleLabel;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000030fe33
@property(readonly, nonatomic) long long giftConfirmLabelStyle; // @synthesize giftConfirmLabelStyle=_style;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000030fd33
- (void)layoutSubviews;	// IMP=0x000000000030f630
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSString *subtitleLabel;
@property(copy, nonatomic) NSString *label;
- (id)initWithGiftConfirmLabelStyle:(long long)arg1;	// IMP=0x000000000030ed62

@end
