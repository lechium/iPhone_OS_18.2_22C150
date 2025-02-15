//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC5Files39DOCServiceDocumentBrowserViewController
{
    MISSING_TYPE *hostProxy;	// 8 = 0x8
    MISSING_TYPE *remoteAdditionalLeadingNavigationBarButtonItems;	// 16 = 0x10
    MISSING_TYPE *remoteAdditionalTrailingNavigationBarButtonItems;	// 24 = 0x18
    MISSING_TYPE *hasAddedUIPBackdrop;	// 32 = 0x20
    MISSING_TYPE *updateBarButtonTrackingViews_lastSentFramesByUUID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000003c3df0
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00100000003c3da0
- (id)initForOpeningContentTypes:(id)arg1;	// IMP=0x00100000003c3d70
- (id)initForOpeningFilesWithContentTypes:(id)arg1;	// IMP=0x00100000003c3d40
- (void)documentBrowser:(id)arg1 failedToImportDocumentAtURL:(id)arg2 error:(id)arg3;	// IMP=0x00100000003c2dd0
- (void)documentBrowser:(id)arg1 didImportDocumentAtURL:(id)arg2 toDestinationURL:(id)arg3;	// IMP=0x00100000003c2d00
- (void)documentBrowser:(id)arg1 didRequestDocumentCreationWithHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000003c2a60
- (void)documentBrowser:(id)arg1 didPickDocumentsAtURLs:(id)arg2;	// IMP=0x00100000003c27a0
- (void)documentManagerWasCancelled:(id)arg1;	// IMP=0x00100000003c2260
- (_Bool)documentBrowser:(id)arg1 shouldShowActivityViewControllerForDocumentURLs:(id)arg2 popoverTracker:(id)arg3 isContentManaged:(_Bool)arg4 additionalActivities:(id)arg5 activityProxy:(id)arg6;	// IMP=0x00100000003c20f0
- (void)_getAnimationInfoForDocumentAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003c1d80
- (void)getTransitionControllerForItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000003c13a0
- (void)getTransitionControllerForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000003c11b0
- (void)_clearCurrentOpenInteraction;	// IMP=0x00100000003c1040
- (void)_setDefaultDocumentAspectRatio:(double)arg1;	// IMP=0x00100000003c0d60
- (void)_setCreateButtonTitle:(id)arg1;	// IMP=0x00100000003c0c60
- (void)_setAllowsPickingMultipleItems:(_Bool)arg1;	// IMP=0x00100000003c0b80
- (void)_setAllowsDocumentCreation:(_Bool)arg1;	// IMP=0x00100000003c0b60
- (void)_importDocumentAtURLWrapper:(id)arg1 nextToDocumentAtURLWrapper:(id)arg2 mode:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000003c0a00
- (void)_importDocumentAtURLWrapper:(id)arg1 mode:(unsigned long long)arg2 toCurrentBrowserLocationWithCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003c01a0
- (void)_establishFirstResponderAndPerformKeyCommand:(id)arg1;	// IMP=0x00100000003bfb40
- (void)_setSceneIdentifier:(id)arg1;	// IMP=0x00100000003bed80
- (void)_setCustomActions:(id)arg1;	// IMP=0x00100000003be970
- (void)_dismissAllPresentedViewControllers:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003be040
- (void)_renameDocumentAtURL:(id)arg1 newName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003bdf00
- (void)_initiateDocumentCreationWithIntent:(id)arg1;	// IMP=0x00100000003bc920
- (void)_revealSymbolicLocation:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003bc7a0
- (void)_revealDocumentAtURL:(id)arg1 importIfNeeded:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003bc210
- (void)_setAdditionalTrailingNavigationBarButtonItems:(id)arg1;	// IMP=0x00100000003bba60
- (void)_setAdditionalLeadingNavigationBarButtonItems:(id)arg1;	// IMP=0x00100000003bb440
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000003ba880
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x00100000003ba720
- (void)didPerformActionOn:(id)arg1;	// IMP=0x00100000003ba6d0
- (void)didPerformActionOn:(id)arg1 overflowAction:(_Bool)arg2;	// IMP=0x00100000003ba670
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000003ba2b0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000003b9f60
- (void)viewDidLoad;	// IMP=0x00100000003b9da0
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x00100000003b9d10
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000003b9c60
- (void)tabbedBrowserViewController:(id)arg1 didFinishInitialLoad:(_Bool)arg2 ofTab:(unsigned long long)arg3;	// IMP=0x00100000003c3e90
- (_Bool)establishFirstResponder;	// IMP=0x00100000003c4230
- (void)configureUIPDocumentLandingStyleIfNecessary;	// IMP=0x00100000003c4440
- (void)_applyBrowserStateChange:(id)arg1 force:(_Bool)arg2;	// IMP=0x00100000003c4260

@end

