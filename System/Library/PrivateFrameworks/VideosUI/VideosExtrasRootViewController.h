//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class IKAppContext, NSArray, NSLayoutConstraint, NSObject, NSString, UIButton, UINavigationController, UIStackView, UITraitCollection, UIView, VideosExtrasArtworkDataSource, VideosExtrasContext, VideosExtrasFeatureContainerViewController, VideosExtrasMainTemplateViewController, VideosExtrasNavigationController;
@protocol IKAppDataStoring, IKAppUserDefaultsStoring, OS_dispatch_queue, VideosExtrasRootViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VideosExtrasRootViewController : UIViewController
{
    NSLayoutConstraint *_bottomConstraint;	// 8 = 0x8
    VideosExtrasNavigationController *_navigationController;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_imageRequestQueue;	// 24 = 0x18
    _Bool _didAttemptRestartAfterAppContextFailure;	// 32 = 0x20
    _Bool _showsMenuBar;	// 33 = 0x21
    _Bool _showsBuiltInNavigationControls;	// 34 = 0x22
    VideosExtrasMainTemplateViewController *_mainTemplateViewController;	// 40 = 0x28
    UIView *_extrasMenuBarView;	// 48 = 0x30
    VideosExtrasContext *_context;	// 56 = 0x38
    id <VideosExtrasRootViewControllerDelegate> _delegate;	// 64 = 0x40
    VideosExtrasFeatureContainerViewController *_featureContainer;	// 72 = 0x48
    IKAppContext *_applicationContext;	// 80 = 0x50
    NSArray *_lastSelectedSnapshotViewControllers;	// 88 = 0x58
    UIStackView *_extrasMenuButtonsStackView;	// 96 = 0x60
    UIButton *_backButton;	// 104 = 0x68
    NSLayoutConstraint *_extrasScrollViewLeadingConstraint;	// 112 = 0x70
    id <IKAppDataStoring> _localStorage;	// 120 = 0x78
    id <IKAppDataStoring> _vendorStorage;	// 128 = 0x80
    id <IKAppUserDefaultsStoring> _userDefaultsStorage;	// 136 = 0x88
    VideosExtrasArtworkDataSource *_artworkDataSource;	// 144 = 0x90
    struct CGSize _initialPresentationSize;	// 152 = 0x98
}

+ (id)currentController;	// IMP=0x00100000002135a3
- (void).cxx_destruct;	// IMP=0x0000000000218365
@property(retain, nonatomic) VideosExtrasArtworkDataSource *artworkDataSource; // @synthesize artworkDataSource=_artworkDataSource;
@property(retain, nonatomic) id <IKAppUserDefaultsStoring> userDefaultsStorage; // @synthesize userDefaultsStorage=_userDefaultsStorage;
@property(retain, nonatomic) id <IKAppDataStoring> vendorStorage; // @synthesize vendorStorage=_vendorStorage;
@property(retain, nonatomic) id <IKAppDataStoring> localStorage; // @synthesize localStorage=_localStorage;
@property(retain, nonatomic) NSLayoutConstraint *extrasScrollViewLeadingConstraint; // @synthesize extrasScrollViewLeadingConstraint=_extrasScrollViewLeadingConstraint;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIStackView *extrasMenuButtonsStackView; // @synthesize extrasMenuButtonsStackView=_extrasMenuButtonsStackView;
@property(retain, nonatomic) NSArray *lastSelectedSnapshotViewControllers; // @synthesize lastSelectedSnapshotViewControllers=_lastSelectedSnapshotViewControllers;
@property(retain, nonatomic) IKAppContext *applicationContext; // @synthesize applicationContext=_applicationContext;
@property(retain, nonatomic) VideosExtrasFeatureContainerViewController *featureContainer; // @synthesize featureContainer=_featureContainer;
@property(nonatomic) _Bool showsBuiltInNavigationControls; // @synthesize showsBuiltInNavigationControls=_showsBuiltInNavigationControls;
@property(nonatomic) _Bool showsMenuBar; // @synthesize showsMenuBar=_showsMenuBar;
@property(nonatomic) __weak id <VideosExtrasRootViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize initialPresentationSize; // @synthesize initialPresentationSize=_initialPresentationSize;
@property(readonly, nonatomic) __weak VideosExtrasContext *context; // @synthesize context=_context;
@property(retain, nonatomic) UIView *extrasMenuBarView; // @synthesize extrasMenuBarView=_extrasMenuBarView;
@property(retain, nonatomic) VideosExtrasMainTemplateViewController *mainTemplateViewController; // @synthesize mainTemplateViewController=_mainTemplateViewController;
@property(readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)_showExtrasBar:(_Bool)arg1;	// IMP=0x0000000000217ac3
- (_Bool)shouldExtrasBeVisibleForViewSize:(struct CGSize)arg1;	// IMP=0x000000000021786a
- (void)_playbackWillEndNotification:(id)arg1;	// IMP=0x00000000002177c9
- (_Bool)_areExtrasVisible;	// IMP=0x0000000000217791
- (void)_adjustExtrasVisibilityForViewSize:(struct CGSize)arg1;	// IMP=0x00000000002174fc
@property(readonly, nonatomic) UIView *mainMenuBar;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000021748f
- (id)detectMainDocument:(id)arg1;	// IMP=0x00000000002172d3
- (_Bool)_setMainDocumentWithViewController:(id)arg1;	// IMP=0x00000000002171ec
- (void)_extrasMenuItemSelected:(id)arg1;	// IMP=0x0000000000216f10
- (void)_backButtonPressed:(id)arg1;	// IMP=0x0000000000216ec2
- (id)_extrasMenuBarViewForElements:(id)arg1;	// IMP=0x000000000021615e
- (void)_setNavigationController:(id)arg1;	// IMP=0x0000000000215fae
- (id)_createDataStorageForIdentifier:(id)arg1;	// IMP=0x0000000000215dab
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;	// IMP=0x0000000000215d29
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;	// IMP=0x0000000000215c4c
- (_Bool)shouldAutorotate;	// IMP=0x0000000000215c19
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000021582d
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000215795
- (void)viewDidLayoutSubviews;	// IMP=0x00000000002155c4
- (void)viewDidLoad;	// IMP=0x00000000002154b7
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000215302
- (_Bool)prefersStatusBarHidden;	// IMP=0x00000000002152fa
- (id)storeFrontCountryCode;	// IMP=0x00000000002152f2
- (id)systemLanguage;	// IMP=0x000000000021526a
- (id)timeZone;	// IMP=0x0000000000215251
- (_Bool)isTimeZoneSet;	// IMP=0x0000000000215249
- (struct CGSize)screenSize;	// IMP=0x00000000002151b8
- (unsigned long long)preferredVideoPreviewFormat;	// IMP=0x00000000002151b0
- (unsigned long long)preferredVideoFormat;	// IMP=0x00000000002151a8
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;	// IMP=0x00000000002151a2
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000214fe4
- (void)_attemptRestart;	// IMP=0x0000000000214f05
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;	// IMP=0x0000000000214eff
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x0000000000214e38
- (id)navigationControllerForContext:(id)arg1;	// IMP=0x0000000000214e23
- (id)deviceConfigForContext:(id)arg1;	// IMP=0x0000000000214e1a
- (id)viewElementRegistry;	// IMP=0x00000000002143c5
- (_Bool)appUsesDefaultStyleSheets;	// IMP=0x00000000002143bd
- (id)appLaunchParams;	// IMP=0x0000000000214245
- (id)vendorIdentifier;	// IMP=0x000000000021423d
- (id)appIdentifier;	// IMP=0x0000000000214235
- (_Bool)shouldIgnoreJSValidation;	// IMP=0x000000000021422d
- (id)appJSURL;	// IMP=0x00000000002141e7
- (_Bool)appIsTrusted;	// IMP=0x00000000002141df
- (void)showExtrasMenuBarInFrame:(struct CGRect)arg1;	// IMP=0x0000000000213ece
- (void)updateMenuButtonForSelectionAtIndex:(unsigned long long)arg1 deselectedIndex:(unsigned long long)arg2;	// IMP=0x0000000000213c3c
- (void)setClearsStackOnNextPush;	// IMP=0x0000000000213c1f
@property(readonly, nonatomic) NSArray *mainMenuItemElements;
- (void)popToFeatureOrMain;	// IMP=0x0000000000213aa8
- (void)start;	// IMP=0x0000000000213a72
- (void)_stopOldContextIfNeeded;	// IMP=0x0000000000213a3a
- (id)childViewControllerForHomeIndicatorAutoHidden;	// IMP=0x00000000002139ea
- (void)dealloc;	// IMP=0x000000000021398d
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000213880
- (void)_setUpForApplication;	// IMP=0x00000000002135bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) UITraitCollection *overrideTraitCollection; // @dynamic overrideTraitCollection;
@property(readonly) Class superclass;

@end
