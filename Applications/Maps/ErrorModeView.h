//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MapsThemeButton, NSLayoutConstraint, NSString, UIImageView, UILabel, UIStackView;

@interface ErrorModeView : UIView
{
    UIStackView *_stackView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_messageLabel;	// 24 = 0x18
    MapsThemeButton *_button;	// 32 = 0x20
    NSLayoutConstraint *_verticalAdjustmentConstraint;	// 40 = 0x28
    NSLayoutConstraint *_bottomConstraint;	// 48 = 0x30
    UIImageView *_errorIconImageView;	// 56 = 0x38
    CDUnknownBlockType _handler;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000058fe5c
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void)removeErrorIconImageView;	// IMP=0x001000000058fdf8
- (void)insertErrorIcon:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x001000000058fc4a
@property(readonly, nonatomic) double fittingHeight;
- (void)setSpacing:(double)arg1;	// IMP=0x001000000058fbaa
- (void)setTopPadding:(double)arg1;	// IMP=0x001000000058fa15
- (void)_buttonTapped:(id)arg1;	// IMP=0x001000000058f9f5
- (void)setVerticalAdjustment:(double)arg1;	// IMP=0x001000000058f9d0
- (void)setupConstraints;	// IMP=0x001000000058f75c
- (id)init;	// IMP=0x001000000058f1aa
- (void)setMessageLabelFontProvider:(CDUnknownBlockType)arg1;	// IMP=0x001000000058f180
- (void)setTitleLabelFontProvider:(CDUnknownBlockType)arg1;	// IMP=0x001000000058f156
- (void)setButtonTitle:(id)arg1 glyphName:(id)arg2 backgroundColor:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000058f086
- (void)setButtonTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000058efcf
- (void)setTitleLabelFont:(id)arg1;	// IMP=0x001000000058efb2
- (void)setTitle:(id)arg1 andMessage:(id)arg2;	// IMP=0x001000000058ee93

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

