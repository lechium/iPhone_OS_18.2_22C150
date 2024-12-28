//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, NSString, SSLookupItemOffer, SUUIClientContext, SUUIItemState, UIButton, UIControl, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SUUIBannerView : UIView
{
    UILabel *_artistNameLabel;	// 8 = 0x8
    UIView *_bottomBorderView;	// 16 = 0x10
    SUUIClientContext *_clientContext;	// 24 = 0x18
    UIButton *_closeButton;	// 32 = 0x20
    UIImageView *_iconImageView;	// 40 = 0x28
    SSLookupItemOffer *_itemOffer;	// 48 = 0x30
    UIButton *_itemOfferButton;	// 56 = 0x38
    SUUIItemState *_itemState;	// 64 = 0x40
    UILabel *_itemStateLabel;	// 72 = 0x48
    NSMutableArray *_screenshotImageViews;	// 80 = 0x50
    UIView *_separatorView;	// 88 = 0x58
    UILabel *_titleLabel;	// 96 = 0x60
    float _userRating;	// 104 = 0x68
    UIImageView *_userRatingStarImageView;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000002df74a
@property(nonatomic) float userRating; // @synthesize userRating=_userRating;
@property(retain, nonatomic) SUUIItemState *itemState; // @synthesize itemState=_itemState;
@property(retain, nonatomic) SSLookupItemOffer *itemOffer; // @synthesize itemOffer=_itemOffer;
@property(readonly, nonatomic) UIControl *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) SUUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_reloadItemState;	// IMP=0x00000000002df23a
- (id)_newDefaultLabel;	// IMP=0x00000000002df169
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002df0fa
- (void)layoutSubviews;	// IMP=0x00000000002ddc96
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000002ddb74
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *iconImage;
@property(copy, nonatomic) NSArray *screenshotImages;
@property(copy, nonatomic) NSString *artistName;
@property(readonly, nonatomic) UIControl *itemOfferButton;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002dcc4a

@end
