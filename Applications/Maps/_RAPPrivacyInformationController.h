//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSLayoutConstraint, NSMutableArray, NSString, UIButton, UIImage, UIImageView, UILabel, UIScrollView, UISwitch, UIView;

@interface _RAPPrivacyInformationController : UIViewController
{
    long long _appearance;	// 8 = 0x8
    long long _shortcutType;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
    UISwitch *_followUpSwitch;	// 40 = 0x28
    UIScrollView *_scrollView;	// 48 = 0x30
    UIView *_containerView;	// 56 = 0x38
    UIView *_bottomView;	// 64 = 0x40
    UIButton *_skipButton;	// 72 = 0x48
    UIImageView *_iconView;	// 80 = 0x50
    UIImage *_portraitIcon;	// 88 = 0x58
    UIImage *_landscapeIcon;	// 96 = 0x60
    _Bool _shouldShowPrivacy;	// 104 = 0x68
    _Bool _hasValidEmail;	// 105 = 0x69
    _Bool _isUserEnteredEmailAddress;	// 106 = 0x6a
    NSString *_emailAddress;	// 112 = 0x70
    _Bool _accessibilityEnabled;	// 120 = 0x78
    NSMutableArray *_portraitSpecificConstraints;	// 128 = 0x80
    NSMutableArray *_landscapeSpecificConstraints;	// 136 = 0x88
    NSLayoutConstraint *_portraitAccessibilityConstraint;	// 144 = 0x90
    CDUnknownBlockType _completion;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0020000000e43dba
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)_skipButtonTapped;	// IMP=0x0010000000e43d2e
- (void)_sendButtonTapped;	// IMP=0x0010000000e43c7e
- (void)acceptPrivacyAgreement;	// IMP=0x0010000000e43b35
- (id)_getEvent;	// IMP=0x0010000000e43acf
- (void)cancelPrivacyAgreement;	// IMP=0x0010000000e4391b
- (id)_createSkipButton;	// IMP=0x0010000000e436df
- (id)_createSendButton;	// IMP=0x0010000000e4346d
- (id)_setupBottomViewInView:(id)arg1 commonConstraints:(id)arg2 portraitSpecificConstraints:(id)arg3 landscapeSpecificConstraints:(id)arg4;	// IMP=0x0010000000e42c66
- (id)_createDetailsViewInView:(id)arg1 constraints:(id)arg2;	// IMP=0x0010000000e426db
- (id)_createSwitchViewInView:(id)arg1 constraints:(id)arg2;	// IMP=0x0000000000e42024
- (id)setupContactViewsInContainer:(id)arg1 constraints:(id)arg2 portraitSpecificConstraints:(id)arg3 landscapeSpecificConstraints:(id)arg4;	// IMP=0x0010000000e41ccd
- (id)setupTitleViewsInContainer:(id)arg1 constraints:(id)arg2 portraitSpecificConstraints:(id)arg3 landscapeSpecificConstraints:(id)arg4;	// IMP=0x0010000000e41595
- (id)_setupContainerViewInView:(id)arg1 constraints:(id)arg2 portraitSpecificConstraints:(id)arg3 landscapeSpecificConstraints:(id)arg4;	// IMP=0x0010000000e40943
- (void)setupViews;	// IMP=0x0010000000e407db
- (void)updateCenterYConstraintIfNeeded;	// IMP=0x0010000000e40760
- (void)setSkipButtonFont;	// IMP=0x0010000000e406c5
- (id)sendButtonFont;	// IMP=0x0010000000e406a4
- (id)followUpDetailFont;	// IMP=0x0010000000e40683
- (id)followUpLabelFont;	// IMP=0x0010000000e40662
- (void)setSubtitleFont;	// IMP=0x0010000000e405eb
- (id)titleFont;	// IMP=0x0010000000e405ca
- (void)contentSizeDidChange:(id)arg1;	// IMP=0x0010000000e40550
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000e403a4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000e4027b
- (id)defaultPOIStyleAttributes;	// IMP=0x0010000000e40229
- (id)_obViewController;	// IMP=0x0010000000e3fe14
- (void)viewDidLoad;	// IMP=0x0010000000e3f707
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000e3f6f3
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000e3f6df
- (id)initWithShortcutType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000e3f6a0
- (id)initWithCompletion:(CDUnknownBlockType)arg1 emailAddress:(id)arg2 isUserEnteredEmailAddress:(_Bool)arg3;	// IMP=0x0010000000e3f627
- (id)initWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000e3f576

@end
