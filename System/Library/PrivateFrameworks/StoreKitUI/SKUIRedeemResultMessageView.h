//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIRedeemResultMessageView : UIView
{
    UILabel *_messageLabel;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004b45b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000004b352
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000004b2c4
- (void)layoutSubviews;	// IMP=0x000000000004afb1
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *message;

@end

