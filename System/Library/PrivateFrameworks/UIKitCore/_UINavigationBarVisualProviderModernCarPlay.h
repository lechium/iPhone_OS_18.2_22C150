//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UINavigationBarVisualProvider.h"

@class NSArray, NSLayoutConstraint, NSString, UIColor, UIFocusContainerGuide, UIImageSymbolConfiguration, UIView, UIVisualEffectView, _CarTitleView, _UIBarButtonItemAppearanceStorage, _UIButtonBar, _UIButtonBarButton;

__attribute__((visibility("hidden")))
@interface _UINavigationBarVisualProviderModernCarPlay : _UINavigationBarVisualProvider
{
    _Bool _compactMetrics;	// 32 = 0x20
    _Bool _havePrepared;	// 33 = 0x21
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;	// 40 = 0x28
    UIView *_contentView;	// 48 = 0x30
    _CarTitleView *_titleView;	// 56 = 0x38
    _UIButtonBar *_leadingBar;	// 64 = 0x40
    _UIButtonBar *_trailingBar;	// 72 = 0x48
    _UIButtonBarButton *_backBarButton;	// 80 = 0x50
    NSLayoutConstraint *_leadingBarConstraint;	// 88 = 0x58
    NSLayoutConstraint *_leadingBarNoItemsConstraint;	// 96 = 0x60
    NSLayoutConstraint *_trailingBarConstraint;	// 104 = 0x68
    NSLayoutConstraint *_trailingBarNoItemsConstraint;	// 112 = 0x70
    NSArray *_backButtonConstraints;	// 120 = 0x78
    NSLayoutConstraint *_largeTitleLeadingConstraint;	// 128 = 0x80
    NSLayoutConstraint *_largeTitleTrailingConstraint;	// 136 = 0x88
    NSLayoutConstraint *_regularTitleConstraint;	// 144 = 0x90
    NSLayoutConstraint *_leadingBarWithTitleTrailingConstraint;	// 152 = 0x98
    NSLayoutConstraint *_leadingBarWithNoTitleTrailingConstraint;	// 160 = 0xa0
    NSLayoutConstraint *_trailingBarWithTitleLeadingConstraint;	// 168 = 0xa8
    NSLayoutConstraint *_trailingBarWithNoTitleLeadingConstraint;	// 176 = 0xb0
    UIVisualEffectView *_backgroundView;	// 184 = 0xb8
    UIFocusContainerGuide *_focusContainerGuide;	// 192 = 0xc0
    NSArray *_debugViews;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000b4aeff
@property(retain, nonatomic) NSArray *debugViews; // @synthesize debugViews=_debugViews;
@property(retain, nonatomic) UIFocusContainerGuide *focusContainerGuide; // @synthesize focusContainerGuide=_focusContainerGuide;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSLayoutConstraint *trailingBarWithNoTitleLeadingConstraint; // @synthesize trailingBarWithNoTitleLeadingConstraint=_trailingBarWithNoTitleLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingBarWithTitleLeadingConstraint; // @synthesize trailingBarWithTitleLeadingConstraint=_trailingBarWithTitleLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingBarWithNoTitleTrailingConstraint; // @synthesize leadingBarWithNoTitleTrailingConstraint=_leadingBarWithNoTitleTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingBarWithTitleTrailingConstraint; // @synthesize leadingBarWithTitleTrailingConstraint=_leadingBarWithTitleTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *regularTitleConstraint; // @synthesize regularTitleConstraint=_regularTitleConstraint;
@property(retain, nonatomic) NSLayoutConstraint *largeTitleTrailingConstraint; // @synthesize largeTitleTrailingConstraint=_largeTitleTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *largeTitleLeadingConstraint; // @synthesize largeTitleLeadingConstraint=_largeTitleLeadingConstraint;
@property(retain, nonatomic) NSArray *backButtonConstraints; // @synthesize backButtonConstraints=_backButtonConstraints;
@property(retain, nonatomic) NSLayoutConstraint *trailingBarNoItemsConstraint; // @synthesize trailingBarNoItemsConstraint=_trailingBarNoItemsConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingBarConstraint; // @synthesize trailingBarConstraint=_trailingBarConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingBarNoItemsConstraint; // @synthesize leadingBarNoItemsConstraint=_leadingBarNoItemsConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingBarConstraint; // @synthesize leadingBarConstraint=_leadingBarConstraint;
@property(retain, nonatomic) _UIButtonBarButton *backBarButton; // @synthesize backBarButton=_backBarButton;
@property(retain, nonatomic) _UIButtonBar *trailingBar; // @synthesize trailingBar=_trailingBar;
@property(retain, nonatomic) _UIButtonBar *leadingBar; // @synthesize leadingBar=_leadingBar;
@property(retain, nonatomic) _CarTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool havePrepared; // @synthesize havePrepared=_havePrepared;
@property(readonly, nonatomic) _Bool compactMetrics; // @synthesize compactMetrics=_compactMetrics;
- (void)_installGradientLayerMaskForClippingView:(id)arg1;	// IMP=0x0000000000b4a85a
- (void)_configureBackground;	// IMP=0x0000000000b4a581
- (void)changeAppearance;	// IMP=0x0000000000b4a56f
- (double)absorptionForItem:(id)arg1;	// IMP=0x0000000000b4a566
@property(readonly, nonatomic) double backButtonMaximumWidth;
@property(readonly, nonatomic) double backButtonMargin;
- (id)backIndicatorMaskImage;	// IMP=0x0000000000b4a547
- (id)backIndicatorImage;	// IMP=0x0000000000b4a53f
- (id)defaultFontDescriptor;	// IMP=0x0000000000b4a4a5
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;	// IMP=0x0000000000b4a49a
@property(readonly, nonatomic) double defaultTextPadding;
@property(readonly, nonatomic) double defaultEdgeSpacing;
@property(readonly, nonatomic) _Bool centerTextButtons;
@property(readonly, nonatomic) UIColor *tintColor;
- (long long)barMetrics;	// IMP=0x0000000000b4a45f
@property(readonly, nonatomic) long long barType;
@property(readonly, nonatomic) _UIBarButtonItemAppearanceStorage *appearanceStorage; // @synthesize appearanceStorage=_appearanceStorage;
- (_Bool)isRTL;	// IMP=0x0000000000b4a3f5
- (void)navigationItemUpdatedLargeTitleDisplayMode:(id)arg1;	// IMP=0x0000000000b4a3ef
- (void)navigationItemUpdatedLargeTitleContent:(id)arg1;	// IMP=0x0000000000b4a3e9
- (void)navigationItem:(id)arg1 appearance:(id)arg2 categoriesChanged:(long long)arg3;	// IMP=0x0000000000b4a3e3
- (void)navigationItemUpdatedScrollEdgeProgress:(id)arg1;	// IMP=0x0000000000b4a3dd
- (void)navigationItemUpdatedSearchController:(id)arg1 oldSearchController:(id)arg2;	// IMP=0x0000000000b4a3d7
- (void)navigationItemUpdatedPromptContent:(id)arg1;	// IMP=0x0000000000b4a3d1
- (void)navigationItemUpdatedCanvasView:(id)arg1;	// IMP=0x0000000000b4a3cb
- (void)navigationItemUpdatedBottomPalette:(id)arg1 oldPalette:(id)arg2;	// IMP=0x0000000000b4a3c5
- (void)navigationItemUpdatedNavigationBarVisibility:(id)arg1;	// IMP=0x0000000000b4a3bf
- (void)navigationItemUpdatedBackgroundAppearance:(id)arg1;	// IMP=0x0000000000b4a3b9
- (_Bool)shouldSearchControllerDeferPresentationTransitionForNavigationItem:(id)arg1;	// IMP=0x0000000000b4a3b1
- (void)navigationItemSearchControllerReadyForDeferredAutomaticShowsScopeBar:(id)arg1;	// IMP=0x0000000000b4a3ab
- (void)navigationItemUpdatedRightBarButtonItems:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000b4a2f4
- (void)navigationItemUpdatedLeftBarButtonItems:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000b4a23d
- (void)navigationItemUpdatedBackButtonContent:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000b4a186
- (void)navigationItemUpdatedContentLayout:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000b4a0cf
- (void)navigationItemUpdatedTitleContent:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000b4a018
- (_Bool)navigationItemIsBackItem:(id)arg1;	// IMP=0x0000000000b49fb9
- (_Bool)navigationItemIsTopItem:(id)arg1;	// IMP=0x0000000000b49f5a
- (void)_updateContentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2 direction:(unsigned long long)arg3;	// IMP=0x0000000000b49e51
- (void)_updateContentForTopItem:(id)arg1 backItem:(id)arg2 animated:(_Bool)arg3 direction:(unsigned long long)arg4;	// IMP=0x0000000000b46ed3
- (void)__backButtonAction;	// IMP=0x0000000000b46e60
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000b46e1f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000b46da2
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000b46d8c
- (void)animateForSearchPresentation:(_Bool)arg1;	// IMP=0x0000000000b46d86
- (void)dismissHostedSearchWithTransitionCoordinator:(id)arg1;	// IMP=0x0000000000b46d80
- (void)presentHostedSearchWithTransitionCoordinator:(id)arg1;	// IMP=0x0000000000b46d7a
- (void)navigationBarInvalidatedResolvedLayoutMargins;	// IMP=0x0000000000b46c5f
- (void)popAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000b46c47
- (void)prepareForPop;	// IMP=0x0000000000b46c41
- (void)pushAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000b46c29
- (void)updateTopNavigationItemAnimated:(_Bool)arg1;	// IMP=0x0000000000b46bad
- (void)setupTopNavigationItem;	// IMP=0x0000000000b46b31
- (void)prepareForPush;	// IMP=0x0000000000b46b2b
- (void)stackDidChangeFrom:(id)arg1;	// IMP=0x0000000000b46aef
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;	// IMP=0x0000000000b469bf
- (void)teardown;	// IMP=0x0000000000b466b3
- (void)prepare;	// IMP=0x0000000000b4420a

// Remaining properties
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImageSymbolConfiguration",?,R,N

@property(readonly) Class superclass;

@end
