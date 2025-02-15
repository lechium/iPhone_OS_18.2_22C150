//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, SKUIBadgeLabel, SKUIClientContext, SKUIColorScheme, SKUIContentRatingArtworkResourceLoader, SKUIItemContentRating, SKUIItemOffer, SKUIItemOfferButton, SKUIItemState, SKUIProductPageHeaderLabel, UIButton, UIControl, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIProductPageHeaderView : UIView
{
    UILabel *_ageBandLabel;	// 8 = 0x8
    UIButton *_artistButton;	// 16 = 0x10
    SKUIBadgeLabel *_editorialBadgeLabel;	// 24 = 0x18
    SKUIClientContext *_clientContext;	// 32 = 0x20
    SKUIItemContentRating *_contentRating;	// 40 = 0x28
    SKUIContentRatingArtworkResourceLoader *_contentRatingArtworkLoader;	// 48 = 0x30
    SKUIColorScheme *_colorScheme;	// 56 = 0x38
    double _headerImageHeight;	// 64 = 0x40
    UIImageView *_headerImageView;	// 72 = 0x48
    UIImageView *_iconImageView;	// 80 = 0x50
    UILabel *_inAppPurchasesLabel;	// 88 = 0x58
    SKUIItemOffer *_itemOffer;	// 96 = 0x60
    SKUIItemOfferButton *_itemOfferButton;	// 104 = 0x68
    UILabel *_itemOfferExplanationLabel;	// 112 = 0x70
    UILabel *_itemOfferExplanationTitleLabel;	// 120 = 0x78
    SKUIItemState *_itemState;	// 128 = 0x80
    _Bool _needsLayoutAfterButtonAnimation;	// 136 = 0x88
    long long _numberOfUserRatings;	// 144 = 0x90
    _Bool _restricted;	// 152 = 0x98
    SKUIItemContentRating *_secondaryContentRating;	// 160 = 0xa0
    UIButton *_shareButton;	// 168 = 0xa8
    SKUIProductPageHeaderLabel *_titleLabel;	// 176 = 0xb0
    double _userRating;	// 184 = 0xb8
    UILabel *_userRatingLabel;	// 192 = 0xc0
    UIImageView *_userRatingStarsView;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000001cffce
@property(readonly, nonatomic) UIControl *shareButton; // @synthesize shareButton=_shareButton;
@property(nonatomic) double userRating; // @synthesize userRating=_userRating;
@property(retain, nonatomic) SKUIItemContentRating *secondaryContentRating; // @synthesize secondaryContentRating=_secondaryContentRating;
@property(nonatomic, getter=isRestricted) _Bool restricted; // @synthesize restricted=_restricted;
@property(nonatomic) long long numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
@property(copy, nonatomic) SKUIItemState *itemState; // @synthesize itemState=_itemState;
@property(readonly, nonatomic) SKUIItemOfferButton *itemOfferButton; // @synthesize itemOfferButton=_itemOfferButton;
@property(retain, nonatomic) SKUIItemOffer *itemOffer; // @synthesize itemOffer=_itemOffer;
@property(nonatomic) double headerImageHeight; // @synthesize headerImageHeight=_headerImageHeight;
@property(retain, nonatomic) SKUIContentRatingArtworkResourceLoader *contentRatingArtworkLoader; // @synthesize contentRatingArtworkLoader=_contentRatingArtworkLoader;
@property(retain, nonatomic) SKUIItemContentRating *contentRating; // @synthesize contentRating=_contentRating;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(readonly, nonatomic) UIControl *artistButton; // @synthesize artistButton=_artistButton;
- (void)_getBottomLayoutProperties:(struct **)arg1 origins:(double **)arg2 height:(double *)arg3 forWidth:(double)arg4;	// IMP=0x00000000001cfdbc
- (void)_getTopLayoutProperties:(struct **)arg1 origins:(double **)arg2 height:(double *)arg3 forWidth:(double)arg4;	// IMP=0x00000000001cfb7b
- (void)_reloadItemOfferButton:(_Bool)arg1;	// IMP=0x00000000001cf961
- (void)_finishButtonAnimation;	// IMP=0x00000000001cf90d
- (void)_showConfirmationAction:(id)arg1;	// IMP=0x00000000001cf8c0
- (void)_cancelConfirmationAction:(id)arg1;	// IMP=0x00000000001cf876
- (void)contentRatingArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forContentRating:(id)arg3;	// IMP=0x00000000001cf7b1
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;	// IMP=0x00000000001cf50d
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;	// IMP=0x00000000001cf4fb
- (void)sizeToFit;	// IMP=0x00000000001cf0cb
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000001cee48
- (void)layoutSubviews;	// IMP=0x00000000001cdfdc
@property(copy, nonatomic) NSString *title;
- (void)setItemState:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001cd6a9
@property(copy, nonatomic) NSString *itemOfferExplanationTitle;
@property(copy, nonatomic) NSString *itemOfferExplanationText;
@property(copy, nonatomic) NSString *inAppPurchasesString;
@property(retain, nonatomic) UIImage *iconImage;
@property(retain, nonatomic) UIImage *headerImage;
@property(copy, nonatomic) NSString *editorialBadge;
@property(copy, nonatomic) NSString *artistName;
@property(copy, nonatomic) NSString *ageBandString;
- (id)contentRatingName;	// IMP=0x00000000001cbf12
- (void)dealloc;	// IMP=0x00000000001cbe46
- (id)initWithClientContext:(id)arg1;	// IMP=0x00000000001cbc3d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

