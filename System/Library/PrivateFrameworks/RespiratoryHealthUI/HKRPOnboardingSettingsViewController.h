//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class HKRPOxygenSaturationOnboardingManager, HKRPOxygenSaturationSettings, NSString, OBBoldTrayButton, OBLinkTrayButton, RespiratoryHealthHeroView, UILabel, UIScrollView, UIView, UIVisualEffectView;
@protocol BPSSetupMiniFlowControllerDelegate, HKRPOnboardingDelegate;

__attribute__((visibility("hidden")))
@interface HKRPOnboardingSettingsViewController : UIViewController
{
    _Bool _didLayoutSubviews;	// 8 = 0x8
    _Bool _isInitialInsetsSet;	// 9 = 0x9
    _Bool _isVisible;	// 10 = 0xa
    id <BPSSetupMiniFlowControllerDelegate> miniFlowDelegate;	// 16 = 0x10
    long long _style;	// 24 = 0x18
    HKRPOxygenSaturationSettings *_settings;	// 32 = 0x20
    HKRPOxygenSaturationOnboardingManager *_onboardingManager;	// 40 = 0x28
    id <HKRPOnboardingDelegate> _onboardingDelegate;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    UILabel *_descriptionLabel;	// 64 = 0x40
    RespiratoryHealthHeroView *_watchView;	// 72 = 0x48
    OBBoldTrayButton *_suggestedChoiceButton;	// 80 = 0x50
    OBLinkTrayButton *_setupLaterButton;	// 88 = 0x58
    UILabel *_locationLabel;	// 96 = 0x60
    UIView *_footerView;	// 104 = 0x68
    UIVisualEffectView *_blurView;	// 112 = 0x70
    UIScrollView *_scrollView;	// 120 = 0x78
    UIView *_contentView;	// 128 = 0x80
    struct UIEdgeInsets _initialInsets;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000007184
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) _Bool isInitialInsetsSet; // @synthesize isInitialInsetsSet=_isInitialInsetsSet;
@property(nonatomic) struct UIEdgeInsets initialInsets; // @synthesize initialInsets=_initialInsets;
@property(nonatomic) _Bool didLayoutSubviews; // @synthesize didLayoutSubviews=_didLayoutSubviews;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) OBLinkTrayButton *setupLaterButton; // @synthesize setupLaterButton=_setupLaterButton;
@property(retain, nonatomic) OBBoldTrayButton *suggestedChoiceButton; // @synthesize suggestedChoiceButton=_suggestedChoiceButton;
@property(retain, nonatomic) RespiratoryHealthHeroView *watchView; // @synthesize watchView=_watchView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <HKRPOnboardingDelegate> onboardingDelegate; // @synthesize onboardingDelegate=_onboardingDelegate;
@property(retain, nonatomic) HKRPOxygenSaturationOnboardingManager *onboardingManager; // @synthesize onboardingManager=_onboardingManager;
@property(retain, nonatomic) HKRPOxygenSaturationSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <BPSSetupMiniFlowControllerDelegate> miniFlowDelegate; // @synthesize miniFlowDelegate;
- (id)_localizedStringForKey:(id)arg1;	// IMP=0x0000000000006e13
- (id)pillTitleSelectedColor;	// IMP=0x0000000000006d71
- (id)pillTitleColor;	// IMP=0x0000000000006cff
- (id)pillBackgroundColor;	// IMP=0x0000000000006caa
- (id)pillBackgroundSelectedColor;	// IMP=0x0000000000006c25
- (id)labelColor;	// IMP=0x0000000000006bd5
- (id)backgroundColor;	// IMP=0x0000000000006b85
- (id)_headerTitleFont;	// IMP=0x0000000000006ac4
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000006a1d
- (void)setupLaterButtonPressed:(id)arg1;	// IMP=0x00000000000069e0
- (void)_presentOnboardingError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000651c
- (void)_askUserToInstallWatchAppWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006299
- (void)_installWatchAppIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000600a
- (void)_onboardWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005d92
- (double)_calculateHeroHorizontalMarginForViewFrame:(struct CGRect)arg1;	// IMP=0x0000000000005d77
- (void)suggestedChoiceButtonPressed:(id)arg1;	// IMP=0x0000000000005c84
- (void)layoutUI;	// IMP=0x000000000000472a
- (void)createUI;	// IMP=0x0000000000003588
- (void)viewDidLoad;	// IMP=0x0000000000003547
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000003504
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000034be
- (void)setInsetsIfNeeded;	// IMP=0x00000000000033fc
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x00000000000033bb
- (void)registerForTraitChanges;	// IMP=0x0000000000003305
- (id)initWithStyle:(long long)arg1 settings:(id)arg2 onboardingManager:(id)arg3 onboardingDelegate:(id)arg4;	// IMP=0x000000000000321d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

