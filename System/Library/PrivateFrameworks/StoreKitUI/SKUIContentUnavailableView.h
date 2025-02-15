//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SKUIAttributedStringView, SKUIButtonViewElement, SKUIImageView, SKUIImageViewElement, UIControl;

__attribute__((visibility("hidden")))
@interface SKUIContentUnavailableView
{
    UIControl *_button;	// 8 = 0x8
    SKUIButtonViewElement *_buttonElement;	// 16 = 0x10
    struct UIEdgeInsets _contentInset;	// 24 = 0x18
    SKUIImageView *_imageView;	// 56 = 0x38
    SKUIImageViewElement *_imageElement;	// 64 = 0x40
    SKUIAttributedStringView *_messageView;	// 72 = 0x48
    SKUIAttributedStringView *_titleView;	// 80 = 0x50
}

+ (id)_attributedStringWithTitleLabel:(id)arg1 context:(id)arg2;	// IMP=0x001000000008a8a9
+ (id)_attributedStringWithMessageLabel:(id)arg1 context:(id)arg2;	// IMP=0x001000000008a707
+ (id)_attributedStringWithButton:(id)arg1 context:(id)arg2;	// IMP=0x001000000008a554
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x0010000000089674
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000089463
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x001000000008940a
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0010000000089278
- (void).cxx_destruct;	// IMP=0x000000000008ab83
- (double)_firstBaselineOffsetForView:(id)arg1;	// IMP=0x000000000008aae6
- (double)_baselineOffsetForView:(id)arg1;	// IMP=0x000000000008aa49
- (void)_buttonAction:(id)arg1;	// IMP=0x000000000008a44c
- (void)layoutSubviews;	// IMP=0x0000000000089da3
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000089d9b
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000089d93
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000089c8d
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000089c35
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000000898cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

