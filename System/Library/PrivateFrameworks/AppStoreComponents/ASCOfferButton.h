//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class ASCModalViewInteraction, ASCOfferButtonBackgroundImageView, ASCOfferMetadata, ASCOfferTheme, CAAnimation, NSString, UILabel, UIViewPropertyAnimator;
@protocol ASCOfferButtonDelegate;

__attribute__((visibility("hidden")))
@interface ASCOfferButton : UIControl
{
    _Bool _fixedHeight;	// 8 = 0x8
    _Bool _shouldTopAlign;	// 9 = 0x9
    _Bool _shouldExpandBackground;	// 10 = 0xa
    ASCOfferTheme *_theme;	// 16 = 0x10
    ASCOfferMetadata *_metadata;	// 24 = 0x18
    id <ASCOfferButtonDelegate> _delegate;	// 32 = 0x20
    long long _subtitlePosition;	// 40 = 0x28
    double _topPadding;	// 48 = 0x30
    NSString *_size;	// 56 = 0x38
    ASCOfferButtonBackgroundImageView *_imageView;	// 64 = 0x40
    UILabel *_titleLabelIfLoaded;	// 72 = 0x48
    UILabel *_subtitleLabelIfLoaded;	// 80 = 0x50
    ASCModalViewInteraction *_modalInteraction;	// 88 = 0x58
    UIViewPropertyAnimator *_currentTransition;	// 96 = 0x60
}

+ (id)progressStateImageFittingSize:(id)arg1 forTheme:(id)arg2 startPercent:(double)arg3 endPercent:(double)arg4 useFullImageSize:(_Bool)arg5;	// IMP=0x0060000000056c73
+ (_Bool)adjustsTitleFontSizeToFitWidthForSize:(id)arg1;	// IMP=0x006000000005690a
+ (id)viewInAppStoreTitleFontForText:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x0060000000056741
+ (id)mediumTitleFontForText:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x006000000005670f
+ (id)smallTitleFontForText:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x00600000000565fa
- (void).cxx_destruct;	// IMP=0x000000000005bf51
@property(retain, nonatomic) UIViewPropertyAnimator *currentTransition; // @synthesize currentTransition=_currentTransition;
@property(retain, nonatomic) ASCModalViewInteraction *modalInteraction; // @synthesize modalInteraction=_modalInteraction;
@property(readonly, nonatomic) UILabel *subtitleLabelIfLoaded; // @synthesize subtitleLabelIfLoaded=_subtitleLabelIfLoaded;
@property(readonly, nonatomic) UILabel *titleLabelIfLoaded; // @synthesize titleLabelIfLoaded=_titleLabelIfLoaded;
@property(readonly, nonatomic) ASCOfferButtonBackgroundImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSString *size; // @synthesize size=_size;
@property(nonatomic) _Bool shouldExpandBackground; // @synthesize shouldExpandBackground=_shouldExpandBackground;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) _Bool shouldTopAlign; // @synthesize shouldTopAlign=_shouldTopAlign;
@property(nonatomic, getter=isFixedHeight) _Bool fixedHeight; // @synthesize fixedHeight=_fixedHeight;
@property(nonatomic) long long subtitlePosition; // @synthesize subtitlePosition=_subtitlePosition;
@property(nonatomic) __weak id <ASCOfferButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ASCOfferMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) ASCOfferTheme *theme; // @synthesize theme=_theme;
- (id)description;	// IMP=0x000000000005bd17
- (void)layoutSubviews;	// IMP=0x000000000005bc02
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x000000000005bb75
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000005ba8a
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000005ba68
- (void)invalidateIntrinsicContentSize;	// IMP=0x000000000005b9e7
- (id)makeLayout;	// IMP=0x000000000005b3c1
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000005b2d4
- (void)onTraitCollectionChange;	// IMP=0x000000000005b005
- (void)transitionToMetadata:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005af13
- (void)transitionToMetadata:(id)arg1 scalingDurationBy:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005a7bf
- (id)transitionColorForMetadata:(id)arg1;	// IMP=0x000000000005a696
- (id)transitionImageForMetadata:(id)arg1;	// IMP=0x000000000005a53d
- (_Bool)chainTransitionToMetadata:(id)arg1 scalingDurationBy:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005a270
- (_Bool)shouldTransitionImageViewFromMetadata:(id)arg1 toMetadata:(id)arg2;	// IMP=0x000000000005a0f5
- (_Bool)canTransitionToMetadata:(id)arg1;	// IMP=0x0000000000059f50
@property(retain, nonatomic) CAAnimation *imageAnimation;
- (void)endModalState;	// IMP=0x0000000000059cc3
- (void)beginModalStateWithCancelBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000059c1c
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000059127
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000005902f
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000058f57
- (id)focusEffect;	// IMP=0x0000000000058e6c
- (_Bool)canBecomeFocused;	// IMP=0x0000000000058e64
- (void)updateVisualEffects;	// IMP=0x0000000000058e09
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x0000000000058d2e
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000058cd8
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000058c82
- (void)updateLabelStyleProperties;	// IMP=0x0000000000058696
- (void)updateImageStyleProperties;	// IMP=0x0000000000057e8e
@property(readonly, nonatomic) UILabel *subtitleLabel;
- (void)setSubtitleLabelIfLoaded:(id)arg1;	// IMP=0x0000000000057c2e
@property(readonly, nonatomic) UILabel *titleLabel;
- (void)setTitleLabelIfLoaded:(id)arg1;	// IMP=0x0000000000057a91
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000057a7c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000057a51
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000577e3
- (id)accessibilityIdentifier;	// IMP=0x0000000000056514
- (_Bool)accessibilityActivate;	// IMP=0x00000000000564d9
- (id)accessibilityValue;	// IMP=0x000000000005642e
- (id)accessibilityHint;	// IMP=0x00000000000563c9
- (id)accessibilityLabel;	// IMP=0x0000000000056149
- (unsigned long long)accessibilityTraits;	// IMP=0x00000000000560d5
- (_Bool)isAccessibilityElement;	// IMP=0x00000000000560cd

@end

