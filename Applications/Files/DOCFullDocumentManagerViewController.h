//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DocumentManager/UIDocumentBrowserViewController.h>

@class DOCConcreteLocation, DOCSourceObserver, MISSING_TYPE, NSArray, NSString, RBSAssertion, UINavigationController, UIScrollView, UITapGestureRecognizer, UITraitCollection, UIViewController, _TtC5Files16DOCActionManager, _TtC5Files16DOCPickerContext, _TtC5Files18DOCDocumentManager, _TtC5Files19DOCSearchController, _TtC5Files21DOCFileProviderSource, _TtC5Files21DOCPickerFilenameView, _TtC5Files22DOCHierarchyController, _TtC5Files22DOCLocationChangePacer, _TtC5Files22DOCSourceOrderObserver, _TtC5Files25DOCItemCollectionViewPool, _TtC5Files27DOCDisplayModeChangeHandler, _TtC5Files29DOCBrowserContainerController, _TtC5Files30DOCBrowserNavigationDataSource;
@protocol DOCFullDocumentManagerViewControllerDelegate, UIViewControllerTransitionCoordinator, _TtP5Files25DOCContentOverlayDimmable_, _TtP5Files27DOCScannedDocumentReceiving_;

@interface DOCFullDocumentManagerViewController : UIDocumentBrowserViewController
{
    UITapGestureRecognizer *_multiTapDebugGestureRecognizer;	// 8 = 0x8
    int _userChangedDefaultSaveLocationToken;	// 16 = 0x10
    _Bool _viewDidLoadResetLocationDisabled;	// 20 = 0x14
    _Bool _resetNavBarScrollEdgeAfterPop;	// 21 = 0x15
    _Bool _updateLocationsAfterPopTransition;	// 22 = 0x16
    _Bool _isActivated;	// 23 = 0x17
    _Bool _canGoToEnclosingFolder;	// 24 = 0x18
    _Bool _needsFirstResponder;	// 25 = 0x19
    _Bool _environmentSupportsColumnView;	// 26 = 0x1a
    NSString *_shortDebugID;	// 32 = 0x20
    UINavigationController *_internalNavigationController;	// 40 = 0x28
    UIViewController *_rootViewController;	// 48 = 0x30
    id <DOCFullDocumentManagerViewControllerDelegate> _fullDocumentManagerDelegate;	// 56 = 0x38
    _TtC5Files22DOCHierarchyController *_hierarchyController;	// 64 = 0x40
    _TtC5Files18DOCDocumentManager *_documentManager;	// 72 = 0x48
    _TtC5Files16DOCActionManager *_actionManager;	// 80 = 0x50
    _TtC5Files27DOCDisplayModeChangeHandler *_displayModeHandler;	// 88 = 0x58
    _TtC5Files30DOCBrowserNavigationDataSource *_dataSource;	// 96 = 0x60
    _TtC5Files25DOCItemCollectionViewPool *_itemCollectionViewPool;	// 104 = 0x68
    _TtC5Files22DOCLocationChangePacer *_locationChangePacer;	// 112 = 0x70
    DOCSourceObserver *_sourceObserver;	// 120 = 0x78
    _TtC5Files22DOCSourceOrderObserver *_sourceOrderObserver;	// 128 = 0x80
    _TtC5Files21DOCFileProviderSource *_currentGoToFileProviderSource;	// 136 = 0x88
    NSArray *_goToFileProviderSources;	// 144 = 0x90
    id _goToFileProviderCandidateSource;	// 152 = 0x98
    id _goToHiddenFileProviderCandidateSource;	// 160 = 0xa0
    _TtC5Files16DOCPickerContext *_pickerContext;	// 168 = 0xa8
    _TtC5Files21DOCPickerFilenameView *_pickerFilenameView;	// 176 = 0xb0
    UIViewController *_pickerPresentingController;	// 184 = 0xb8
    RBSAssertion *_processAssertion;	// 192 = 0xc0
    NSArray *_droppedLocationsAfterSwitchingDisplayMode;	// 200 = 0xc8
    id __postSearchInitializationBufferStorage;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0020000000009f55
@property(nonatomic) _Bool environmentSupportsColumnView; // @synthesize environmentSupportsColumnView=_environmentSupportsColumnView;
@property(nonatomic) _Bool needsFirstResponder; // @synthesize needsFirstResponder=_needsFirstResponder;
@property(retain, nonatomic) id _postSearchInitializationBufferStorage; // @synthesize _postSearchInitializationBufferStorage=__postSearchInitializationBufferStorage;
@property(retain, nonatomic) NSArray *droppedLocationsAfterSwitchingDisplayMode; // @synthesize droppedLocationsAfterSwitchingDisplayMode=_droppedLocationsAfterSwitchingDisplayMode;
@property(nonatomic) _Bool canGoToEnclosingFolder; // @synthesize canGoToEnclosingFolder=_canGoToEnclosingFolder;
@property(nonatomic) _Bool viewDidLoadResetLocationDisabled; // @synthesize viewDidLoadResetLocationDisabled=_viewDidLoadResetLocationDisabled;
@property(nonatomic) _Bool isActivated; // @synthesize isActivated=_isActivated;
@property(nonatomic) _Bool updateLocationsAfterPopTransition; // @synthesize updateLocationsAfterPopTransition=_updateLocationsAfterPopTransition;
@property(retain, nonatomic) RBSAssertion *processAssertion; // @synthesize processAssertion=_processAssertion;
@property(retain, nonatomic) UIViewController *pickerPresentingController; // @synthesize pickerPresentingController=_pickerPresentingController;
@property(retain, nonatomic) _TtC5Files21DOCPickerFilenameView *pickerFilenameView; // @synthesize pickerFilenameView=_pickerFilenameView;
- (id);	// IMP=0x0010000000009deb
@property(retain, nonatomic) id goToHiddenFileProviderCandidateSource; // @synthesize goToHiddenFileProviderCandidateSource=_goToHiddenFileProviderCandidateSource;
@property(retain, nonatomic) id goToFileProviderCandidateSource; // @synthesize goToFileProviderCandidateSource=_goToFileProviderCandidateSource;
@property(copy, nonatomic) NSArray *goToFileProviderSources; // @synthesize goToFileProviderSources=_goToFileProviderSources;
@property(retain, nonatomic) _TtC5Files21DOCFileProviderSource *currentGoToFileProviderSource; // @synthesize currentGoToFileProviderSource=_currentGoToFileProviderSource;
@property(retain, nonatomic) _TtC5Files22DOCSourceOrderObserver *sourceOrderObserver; // @synthesize sourceOrderObserver=_sourceOrderObserver;
@property(nonatomic) __weak DOCSourceObserver *sourceObserver; // @synthesize sourceObserver=_sourceObserver;
@property(readonly) _TtC5Files22DOCLocationChangePacer *locationChangePacer; // @synthesize locationChangePacer=_locationChangePacer;
@property(readonly) _TtC5Files25DOCItemCollectionViewPool *itemCollectionViewPool; // @synthesize itemCollectionViewPool=_itemCollectionViewPool;
@property(readonly) _TtC5Files30DOCBrowserNavigationDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) _TtC5Files27DOCDisplayModeChangeHandler *displayModeHandler; // @synthesize displayModeHandler=_displayModeHandler;
@property(retain) _TtC5Files16DOCActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain) _TtC5Files18DOCDocumentManager *documentManager; // @synthesize documentManager=_documentManager;
@property(retain) _TtC5Files22DOCHierarchyController *hierarchyController; // @synthesize hierarchyController=_hierarchyController;
@property(nonatomic) __weak id <DOCFullDocumentManagerViewControllerDelegate> fullDocumentManagerDelegate; // @synthesize fullDocumentManagerDelegate=_fullDocumentManagerDelegate;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(readonly) UINavigationController *internalNavigationController; // @synthesize internalNavigationController=_internalNavigationController;
@property(retain, nonatomic) _TtC5Files16DOCPickerContext *pickerContext; // @synthesize pickerContext=_pickerContext;
- (void)resetNavigationStepwise;	// IMP=0x0010000000009a54
- (void)revealDocumentAtURL:(id)arg1 importIfNeeded:(_Bool)arg2 updateLastUsedDate:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000941c
- (void)columnViewController:(id)arg1 didShowItemControllers:(id)arg2;	// IMP=0x001000000000904b
- (void)columnViewController:(id)arg1 willShowItemControllers:(id)arg2;	// IMP=0x0010000000009045
- (id)_navigationControllerDimmingColorForParallaxTransition:(id)arg1;	// IMP=0x0010000000008fa5
- (_Bool)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;	// IMP=0x0010000000008f38
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x001000000000875e
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000008741
- (void)endForcedNavigationTransitionChrome:(id)arg1 appearingViewController:(id)arg2;	// IMP=0x00100000000086e0
- (void)beginForcedNavigationTransitionChromeIfNeeded:(id)arg1 appearingViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00100000000084f6
- (_Bool)navigationController:(id)arg1 canPop:(id)arg2;	// IMP=0x00100000000084e4
- (void)dismissSearchAlongsideCoordinator:(id)arg1;	// IMP=0x0010000000008469
- (void)dismissSearch;	// IMP=0x0010000000008455
- (void)setCustomActions:(id)arg1;	// IMP=0x0010000000008414
@property(readonly, nonatomic) _Bool prefersTabBarHidden;
- (_Bool)_canPopViewController;	// IMP=0x00100000000082bf
@property(readonly) _TtC5Files19DOCSearchController *effectiveSearchController;
@property(readonly) _TtC5Files29DOCBrowserContainerController *effectiveBrowserViewController;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000007cd2
- (void)setAdditionalLeadingNavigationBarButtonItems:(id)arg1;	// IMP=0x0010000000007a96
- (void)setAdditionalTrailingNavigationBarButtonItems:(id)arg1;	// IMP=0x001000000000781f
- (void)revealLocation:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000768a
- (void)showLocation:(id)arg1 fromRootAnimated:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000755b
- (void)showLocation:(id)arg1 animated:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000007430
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x001000000000741c
- (id)currentItemCollectionViewController;	// IMP=0x0010000000007399
- (id)currentViewController;	// IMP=0x0010000000007349
- (void)popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x00100000000071e9
- (_Bool)canResetHierarchyController;	// IMP=0x0010000000006f4a
- (void)setAllowsPickingMultipleItems:(_Bool)arg1;	// IMP=0x0010000000006d87
- (void)_navigateBack;	// IMP=0x0010000000006cfe
- (_Bool)_canNavigateBack;	// IMP=0x0010000000006c8b
- (void)setDelegate:(id)arg1;	// IMP=0x0010000000006bf7
- (void)viewDidLoad;	// IMP=0x0010000000006a55
- (_Bool)_defaultLocationIsRecentsTab;	// IMP=0x00100000000069af
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000068dd
- (void)dealloc;	// IMP=0x00100000000067ab
@property(readonly, copy) NSString *description;
@property(retain) NSString *shortDebugID; // @synthesize shortDebugID=_shortDebugID;
- (void)doc_commonInitWithSourceObserver:(id)arg1;	// IMP=0x0010000000005df2
- (id)initWithConfiguration:(id)arg1 sourceObserver:(id)arg2;	// IMP=0x0010000000005d80
- (void)preloadLaunchServiceDatabase;	// IMP=0x0010000000005c97
@property(nonatomic, readonly) id <_TtP5Files25DOCContentOverlayDimmable_> dimmable;
@property(nonatomic, readonly) _Bool isInUserTriggeredSelectionMode;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;	// IMP=0x00100000000a68d0
- (void)documentPickerWasCancelled:(id)arg1;	// IMP=0x00100000000a67c0
- (void)importScannedDocumentAt:(id)arg1 presentingController:(id)arg2;	// IMP=0x00100000000a66b0
- (void)createNewFolderIn:(id)arg1 moving:(id)arg2;	// IMP=0x00100000000a4350
- (void)beginRenameOf:(id)arg1;	// IMP=0x00100000000a4130
- (_Bool)infoPanelPreviewingMultipleItems;	// IMP=0x00100000000a3240
- (_Bool)isBrowserCurrentLocation:(id)arg1;	// IMP=0x00100000000a3050
- (void)beginLoadingAdditionalParents:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a2e00
- (_Bool)canLoadAdditionalParents;	// IMP=0x00100000000a2da0
- (void)didFinishGatheringItemsAndThumbnailsWithSender:(id)arg1;	// IMP=0x00100000000a2d40
- (void)didToggleEditStateWithEditing:(_Bool)arg1 in:(id)arg2;	// IMP=0x00100000000a2b40
- (void)didIndicateCancelPicker;	// IMP=0x00100000000a2b10
- (void)didTapLocationOf:(id)arg1;	// IMP=0x00100000000a2790
- (void)didCommitPreviewOf:(id)arg1;	// IMP=0x00100000000a13c0
- (void)didSelectLocation:(id)arg1 atParentLocation:(id)arg2;	// IMP=0x00100000000a0f10
- (void)didSelectItem:(id)arg1 atParentLocation:(id)arg2 wasAlreadySelected:(_Bool)arg3 onlyRevealIfColumn:(_Bool)arg4;	// IMP=0x00100000000a0670
- (_Bool)establishFirstResponder;	// IMP=0x00100000000a7e30
- (_Bool)establishFirstResponderIfNeeded;	// IMP=0x00100000000a7b30
@property(nonatomic, readonly) unsigned long long effectiveTabSwitcherTab;
- (void)updateNavigationBarPrefersLargeTitles;	// IMP=0x00100000000b2330
- (void)viewDidLayoutSubviews;	// IMP=0x00100000000b2210
- (void)splitViewWillChangeFrom:(long long)arg1 to:(long long)arg2 alongsideCoordinator:(id)arg3;	// IMP=0x00100000000b20a0
- (void)splitViewWillDidExpand;	// IMP=0x00100000000b2070
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000000b1ee0
- (void)updateAvailableDisplayModesWithAnimated:(_Bool)arg1;	// IMP=0x00100000000b1cf0
- (void)didChangeEnvironmentSupportsColumnView;	// IMP=0x00100000000b18e0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000b1880
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000b17c0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000000b1730
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000000b16c0
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x00100000000b1350
- (void)swift_viewDidLoad;	// IMP=0x00100000000b12c0
- (void)ensureInternalNavigationControllerIsInstalled;	// IMP=0x00100000000b0f00
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000000b09b0
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000000b0790
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
- (void)updateRelatedViewControllersWithCurrentHierarchy;	// IMP=0x00100000000afc60
@property(nonatomic, readonly) DOCConcreteLocation *displayedRootLocation;
- (void)activateContainerViewControllersIfNeeded;	// IMP=0x00100000000af800
- (void)itemCollectionViewControllerDidLoad;	// IMP=0x00100000000adec0
- (void)fullDocumentManagerViewControllerDidFinishLoading:(id)arg1;	// IMP=0x00100000000ade40
- (void)swift_commonInitWith:(id)arg1;	// IMP=0x00100000000adac0
@property(nonatomic, readonly) UIScrollView *primaryContentScrollView;
- (void)swift_navigationController:(id)arg1 didShow:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00100000000b2ba0
- (void)swift_navigationController:(id)arg1 willShow:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00100000000b2b30
- (void)didDismissSearchResultsController:(id)arg1;	// IMP=0x00100000000b4520
- (void)willDismissSearchResultsController:(id)arg1;	// IMP=0x00100000000b44d0
- (void)didPresentSearchResultsController:(id)arg1;	// IMP=0x00100000000b4390
- (void)willPresentSearchResultsController:(id)arg1;	// IMP=0x00100000000b4340
- (void)didDismissSearchController:(id)arg1;	// IMP=0x00100000000b4180
- (void)willDismissSearchController:(id)arg1;	// IMP=0x00100000000b3bd0
- (void)didPresentSearchController:(id)arg1;	// IMP=0x00100000000b39f0
- (void)willPresentSearchController:(id)arg1;	// IMP=0x00100000000b39a0
@property(nonatomic, readonly) UITraitCollection *traitCollectionExpectedForSearchPresentation;
- (void)performShowDebugMenu:(id)arg1;	// IMP=0x00100000001b54e0
- (void)presentDebugMenuForMultipleTaps:(id)arg1;	// IMP=0x00100000001b5480
- (void)presentDebugMenuForLongPress:(id)arg1;	// IMP=0x00100000001b5420
- (void)installDebugMenuGesture;	// IMP=0x00100000001b4e10
- (void)invokeDebugGathering;	// IMP=0x00100000001b4c40
- (void)documentCameraViewController:(id)arg1 didFinishWithScan:(id)arg2;	// IMP=0x00100000002a14c0
- (void)documentCameraViewControllerDidCancel:(id)arg1;	// IMP=0x00100000002a1360
@property(nonatomic, readonly) id <_TtP5Files27DOCScannedDocumentReceiving_> doc_documentScannerReceivingTarget;
- (void)updateCustomActions;	// IMP=0x00100000002c0be0
- (long long)pickerOperationFor:(id)arg1;	// IMP=0x00100000002cb980
- (void)didConfirmPickIn:(id)arg1;	// IMP=0x00100000002caa50
- (void)didTapOnUnselectableItem:(id)arg1;	// IMP=0x00100000002c7960
- (void)validateCommand:(id)arg1;	// IMP=0x00100000003b8630
- (void)performMoveHere:(id)arg1;	// IMP=0x00100000003b8110
- (void)performDismiss:(id)arg1;	// IMP=0x00100000003b80c0
- (void)performRename:(id)arg1;	// IMP=0x00100000003b7e20
- (void)performConfirmPickerExportOrDrillIn:(id)arg1;	// IMP=0x00100000003b7e00
- (void)performCommandReturnKey:(id)arg1;	// IMP=0x00100000003b7de0
- (void)performConnectToServer:(id)arg1;	// IMP=0x00100000003b7d00
- (void)performGoToLocation:(id)arg1;	// IMP=0x00100000003b7cb0
- (void)performEjectMedium:(id)arg1;	// IMP=0x00100000003b7c60
- (void)performCreateDocument;	// IMP=0x00100000003b7c00
- (void)performCreateDocumentOrOpenNewWindow:(id)arg1;	// IMP=0x00100000003b7bb0
- (void)performCreateFolderWithSelection:(id)arg1;	// IMP=0x00100000003b7ab0
- (void)performCreateFolder:(id)arg1;	// IMP=0x00100000003b7a90
- (void)performGroupBySharedBy:(id)arg1;	// IMP=0x00100000003b79d0
- (void)performGroupBySize:(id)arg1;	// IMP=0x00100000003b79b0
- (void)performGroupByDate:(id)arg1;	// IMP=0x00100000003b7990
- (void)performGroupByKind:(id)arg1;	// IMP=0x00100000003b7970
- (void)performSortBySharedBy:(id)arg1;	// IMP=0x00100000003b76f0
- (void)performSortByTags:(id)arg1;	// IMP=0x00100000003b76d0
- (void)performSortByKind:(id)arg1;	// IMP=0x00100000003b76b0
- (void)performSortBySize:(id)arg1;	// IMP=0x00100000003b7690
- (void)performSortByDate:(id)arg1;	// IMP=0x00100000003b7640
- (void)performSortByName:(id)arg1;	// IMP=0x00100000003b7620
- (void)performUseGrouping:(id)arg1;	// IMP=0x00100000003b7420
- (void)performViewAsUserSizeLarger:(id)arg1;	// IMP=0x00100000003b73d0
- (void)performViewAsUserSizeSmaller:(id)arg1;	// IMP=0x00100000003b7380
- (void)performViewAsColumns:(id)arg1;	// IMP=0x00100000003b7330
- (void)performViewAsList:(id)arg1;	// IMP=0x00100000003b72e0
- (void)performViewAsIcons:(id)arg1;	// IMP=0x00100000003b7290
- (MISSING_TYPE *)performGoForwardInHistory: /* Error: Ran out of types for this method. */;	// IMP=0x00100000003b7130
- (void)performGoBackInHistory:(id)arg1;	// IMP=0x00100000003b70e0
- (void)performGoToEnclosingFolder:(id)arg1;	// IMP=0x00100000003b70c0
- (_Bool)canPerformGoToEnclosingFolder;	// IMP=0x00100000003b7050
- (void)performFind:(id)arg1;	// IMP=0x00100000003b7000
@property(nonatomic, readonly) NSArray *keyCommands;
- (void)doc_updateBarButtonTrackingViewsIfNecessary;	// IMP=0x00100000003c4ec0
- (void)clearDroppedLocationsAfterSwitchingViewStyle;	// IMP=0x00100000003e1c20
- (void)dataSource:(id)arg1 didSet:(id)arg2 on:(id)arg3 animated:(_Bool)arg4;	// IMP=0x00100000003e19e0
- (void)dataSource:(id)arg1 willSet:(id)arg2 on:(id)arg3 animated:(_Bool)arg4;	// IMP=0x00100000003e19c0
- (void)dataSource:(id)arg1 didUpdate:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00100000003e1930
- (void)dataSource:(id)arg1 willSwitchFrom:(long long)arg2 to:(long long)arg3;	// IMP=0x00100000003deab0
@property(nonatomic, readonly) id <UIViewControllerTransitionCoordinator> hierarchyChangeTransitionCoordinator;
- (void)configureColumnViewController:(id)arg1;	// IMP=0x00100000003e3c10
- (id)provideColumnViewControllerWithContains:(id)arg1;	// IMP=0x00100000003e3bb0
- (id)provideContainerControllerAt:(id)arg1 from:(id)arg2 isUserInteraction:(_Bool)arg3 isBrowsingTrash:(_Bool)arg4;	// IMP=0x00100000003e3730
@property(nonatomic, readonly) _Bool presentationContextShowsProvidersAsBrowserRoot;
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x0010000000405f60
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0010000000405e90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
