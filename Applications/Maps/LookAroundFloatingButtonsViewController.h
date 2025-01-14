//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class HairlineView, NSLayoutConstraint, UIButton, UIColor, UIVisualEffectView;
@protocol LookAroundFloatingButtonsViewControllerDelegate;

@interface LookAroundFloatingButtonsViewController : UIViewController
{
    _Bool _alternateButtonEnabled;	// 8 = 0x8
    _Bool _groupButtonsIfNeeded;	// 9 = 0x9
    _Bool _showsMinimizedButton;	// 10 = 0xa
    UIVisualEffectView *_alternateButtonBackgroundView;	// 16 = 0x10
    NSLayoutConstraint *_alternateButtonLeadingConstraintGrouped;	// 24 = 0x18
    NSLayoutConstraint *_alternateButtonLeadingConstraintSeparated;	// 32 = 0x20
    UIButton *_alternateButton;	// 40 = 0x28
    HairlineView *_separator;	// 48 = 0x30
    UIVisualEffectView *_doneButtonBackgroundView;	// 56 = 0x38
    NSLayoutConstraint *_doneButtonLeadingContraintGrouped;	// 64 = 0x40
    NSLayoutConstraint *_doneButtonLeadingContraintSeparated;	// 72 = 0x48
    UIButton *_doneButton;	// 80 = 0x50
    UIColor *_highlightedButtonBackgroundViewColor;	// 88 = 0x58
    UIButton *_menuButton;	// 96 = 0x60
    NSLayoutConstraint *_menuButtonVisibleConstraint;	// 104 = 0x68
    NSLayoutConstraint *_menuButtonHiddenConstraint;	// 112 = 0x70
    _Bool _hidingLabels;	// 120 = 0x78
    id <LookAroundFloatingButtonsViewControllerDelegate> _delegate;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00200000008db5d3
@property(nonatomic) _Bool hidingLabels; // @synthesize hidingLabels=_hidingLabels;
@property(nonatomic) _Bool showsMinimizedButton; // @synthesize showsMinimizedButton=_showsMinimizedButton;
@property(nonatomic) __weak id <LookAroundFloatingButtonsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapDoneButton:(id)arg1;	// IMP=0x00100000008db51b
- (void)didTapButton:(id)arg1;	// IMP=0x00100000008db462
- (void)_updateButtonLayoutToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00100000008daf04
- (void)_setCornerRadiiWithTraitCollection:(id)arg1;	// IMP=0x00100000008daca9
- (void)_setCornerRadii;	// IMP=0x00100000008dac5d
- (void)_updateButtonLayoutToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000008dac48
- (void)_updateButtonLayoutAnimated:(_Bool)arg1;	// IMP=0x00100000008dabf6
- (void)_setupConstraints;	// IMP=0x00100000008d95ee
- (id)optionsMenu;	// IMP=0x00100000008d8fa9
- (void)_setupViews;	// IMP=0x00100000008d844d
- (void)updateTheme;	// IMP=0x00100000008d8347
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000008d825d
- (void)setMinimizedButtonEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000008d81ed
@property(nonatomic, getter=isMinimizedButtonEnabled) _Bool minimizedButtonEnabled;
- (void)setMaximizedButtonEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000008d81b7
@property(nonatomic, getter=isMaximizedButtonEnabled) _Bool maximizedButtonEnabled;
- (void)_setAlternateButtonEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000008d80a1
- (void)_setAlternateButtonEnabled:(_Bool)arg1;	// IMP=0x00100000008d808d
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000008d7e73
- (void)viewDidLoad;	// IMP=0x00100000008d7e1d
- (void)loadView;	// IMP=0x00100000008d7d74
- (void)dealloc;	// IMP=0x00100000008d7cf4
- (id)initWithShowsMinimizeButton:(_Bool)arg1 groupButtonsIfNeeded:(_Bool)arg2;	// IMP=0x00100000008d7c91
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000008d7c89

@end

