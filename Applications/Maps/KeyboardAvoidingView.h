//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint;

@interface KeyboardAvoidingView : UIView
{
    float _constraintPriority;	// 8 = 0x8
    UIView *_contentView;	// 16 = 0x10
    NSLayoutConstraint *_leadingConstraint;	// 24 = 0x18
    NSLayoutConstraint *_trailingConstraint;	// 32 = 0x20
    NSLayoutConstraint *_topConstraint;	// 40 = 0x28
    NSLayoutConstraint *_bottomConstraint;	// 48 = 0x30
}

+ (void)startObservingKeyboard;	// IMP=0x0040000000a2e1a7
- (void).cxx_destruct;	// IMP=0x0020000000a2f080
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) float constraintPriority; // @synthesize constraintPriority=_constraintPriority;
- (void)updateForKeyboardFrame:(struct CGRect)arg1;	// IMP=0x0010000000a2ed96
- (void)keyboardWillOrDidChangeFrame:(id)arg1;	// IMP=0x0010000000a2ecd7
- (void)removeConstraints;	// IMP=0x0010000000a2eb3e
- (void)addConstraints;	// IMP=0x0010000000a2e77d
- (void)layoutSubviews;	// IMP=0x0010000000a2e73c
- (void)updateConstraints;	// IMP=0x0010000000a2e6fb
- (void)updateForKeyboardFrame;	// IMP=0x0010000000a2e676
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000a2e382
- (id)init;	// IMP=0x0010000000a2e34e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000a2e33a
- (id)initWithContentView:(id)arg1;	// IMP=0x0010000000a2e308
- (id)initWithContentView:(id)arg1 frame:(struct CGRect)arg2;	// IMP=0x0010000000a2e1c9

@end

