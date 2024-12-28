//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CAGradientLayer, NSParagraphStyle, NSString, UIFont, UITextView;

__attribute__((visibility("hidden")))
@interface SFDialogTextView : UIView
{
    NSString *_title;	// 8 = 0x8
    UIFont *_titleFont;	// 16 = 0x10
    UIFont *_messageFontWithTitle;	// 24 = 0x18
    NSParagraphStyle *_titleParagraphStyle;	// 32 = 0x20
    UITextView *_textView;	// 40 = 0x28
    double _preferredMaxLayoutWidth;	// 48 = 0x30
    CAGradientLayer *_topGradient;	// 56 = 0x38
    CAGradientLayer *_bottomGradient;	// 64 = 0x40
    NSString *_message;	// 72 = 0x48
    UIFont *_messageFont;	// 80 = 0x50
    struct UIEdgeInsets _contentInsets;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000010c5fc
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) UIFont *messageFont; // @synthesize messageFont=_messageFont;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)flashScrollIndicators;	// IMP=0x000000000010c59d
- (void)_updateFontStyling;	// IMP=0x000000000010c4cb
- (void)setPreferredMaxLayoutWidth:(double)arg1;	// IMP=0x000000000010c49e
- (void)setTitle:(id)arg1;	// IMP=0x000000000010c39c
- (void)_updateText;	// IMP=0x000000000010be56
- (void)_updateTextContainerInset;	// IMP=0x000000000010bdd5
- (void)layoutSubviews;	// IMP=0x000000000010b993
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000010b923
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010b8f4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000010b409

@end
