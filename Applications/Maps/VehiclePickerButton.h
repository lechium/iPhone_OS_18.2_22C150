//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

@class NSLayoutConstraint, UIImageView, UIView;

@interface VehiclePickerButton : UIButton
{
    _Bool _active;	// 8 = 0x8
    _Bool _needsOutlineStroke;	// 9 = 0x9
    NSLayoutConstraint *_leadingConstraint;	// 16 = 0x10
    NSLayoutConstraint *_trailingConstraint;	// 24 = 0x18
    NSLayoutConstraint *_topConstraint;	// 32 = 0x20
    NSLayoutConstraint *_bottomConstraint;	// 40 = 0x28
    UIView *_highlightView;	// 48 = 0x30
    UIImageView *_colorView;	// 56 = 0x38
    struct UIEdgeInsets _colorViewInsets;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000d1c0ef
@property(nonatomic) _Bool needsOutlineStroke; // @synthesize needsOutlineStroke=_needsOutlineStroke;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) struct UIEdgeInsets colorViewInsets; // @synthesize colorViewInsets=_colorViewInsets;
@property(retain, nonatomic) UIImageView *colorView; // @synthesize colorView=_colorView;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(readonly, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
- (id)accessibilityIdentifier;	// IMP=0x0010000000d1c036
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000d1be16
- (void)layoutSubviews;	// IMP=0x0010000000d1ba03
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000d1ae6b

@end

