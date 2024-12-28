//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIButton, UIControl, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIRedeemITunesPassLearnMoreView : UIView
{
    UIButton *_button;	// 8 = 0x8
    UILabel *_explanationLabel;	// 16 = 0x10
    UIImageView *_headerImageView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002250fa
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000225058
- (void)layoutSubviews;	// IMP=0x0000000000224cc6
@property(retain, nonatomic) UIImage *headerImage;
@property(copy, nonatomic) NSString *explanationString;
@property(copy, nonatomic) NSString *buttonTitle;
@property(readonly, nonatomic) UIControl *button;

@end
