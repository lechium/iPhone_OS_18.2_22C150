//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, NSString, UIButton, UILabel, UILayoutGuide;

@interface NavContainerResumeRouteControl
{
    NSString *_titleText;	// 8 = 0x8
    UILayoutGuide *_contentLayoutGuide;	// 16 = 0x10
    NSLayoutConstraint *_topConstraint;	// 24 = 0x18
    NSLayoutConstraint *_bottomConstraint;	// 32 = 0x20
    NSLayoutConstraint *_bottomConstraintWhenHidden;	// 40 = 0x28
    NSLayoutConstraint *_contentHeightCollapsedConstraint;	// 48 = 0x30
    NSLayoutConstraint *_closeButtonHeightConstraint;	// 56 = 0x38
    UILabel *_titleLabel;	// 64 = 0x40
    UIButton *_closeButton;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000007ee9d1
- (id);	// IMP=0x00100000007ee9c0
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSLayoutConstraint *closeButtonHeightConstraint; // @synthesize closeButtonHeightConstraint=_closeButtonHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentHeightCollapsedConstraint; // @synthesize contentHeightCollapsedConstraint=_contentHeightCollapsedConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraintWhenHidden; // @synthesize bottomConstraintWhenHidden=_bottomConstraintWhenHidden;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(readonly, nonatomic) UILayoutGuide *contentLayoutGuide; // @synthesize contentLayoutGuide=_contentLayoutGuide;
- (id)initialConstraintsForAnimatingPositionInStatusBarBackgroundView:(id)arg1;	// IMP=0x00100000007ee759
- (id)constraintsForPositionInStatusBarBackgroundView:(id)arg1;	// IMP=0x00100000007ee5ac
- (void)showIfNeeded;	// IMP=0x00100000007ee418
- (void)hideIfNeeded;	// IMP=0x00100000007ee299
@property(retain, nonatomic) NSString *title;
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00100000007ee1cc
- (void)didMoveToSuperview;	// IMP=0x00100000007edf7b
- (void)_updateBackgroundColor;	// IMP=0x00100000007edeef
- (void)_closeButtonAction;	// IMP=0x00100000007eded8
- (void)updateTheme;	// IMP=0x00100000007edec6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000007ecd6b

// Remaining properties
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
