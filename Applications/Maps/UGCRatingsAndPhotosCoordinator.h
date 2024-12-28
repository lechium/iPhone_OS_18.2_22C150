//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UGCAddPhotosController, UGCCommunityAcknowledgementViewController, UGCSubmissionLookupResult, UIViewController, _TtC4Maps26UGCSubmissionLookupManager;
@protocol UGCPOIEnrichmentEditor;

@interface UGCRatingsAndPhotosCoordinator
{
    UIViewController<UGCPOIEnrichmentEditor> *_ratingContributionsViewController;	// 8 = 0x8
    UGCCommunityAcknowledgementViewController *_thankYouVC;	// 16 = 0x10
    UGCAddPhotosController *_photoPicker;	// 24 = 0x18
    _TtC4Maps26UGCSubmissionLookupManager *_lookupManager;	// 32 = 0x20
    _Bool _shouldShowThankYouScreen;	// 40 = 0x28
    _Bool _userHasDeletedSubmission;	// 41 = 0x29
    _Bool _hasPhotoPickerEmphasis;	// 42 = 0x2a
    _Bool _suppressRatings;	// 43 = 0x2b
    long long _initialOverallState;	// 48 = 0x30
    NSArray *_initialPhotosWithMetadata;	// 56 = 0x38
    long long _preferredSourceType;	// 64 = 0x40
    UGCSubmissionLookupResult *_existingSubmission;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000c75e11
@property(retain, nonatomic) UGCSubmissionLookupResult *existingSubmission; // @synthesize existingSubmission=_existingSubmission;
@property(nonatomic) long long preferredSourceType; // @synthesize preferredSourceType=_preferredSourceType;
@property(nonatomic) _Bool suppressRatings; // @synthesize suppressRatings=_suppressRatings;
@property(nonatomic) _Bool hasPhotoPickerEmphasis; // @synthesize hasPhotoPickerEmphasis=_hasPhotoPickerEmphasis;
@property(retain, nonatomic) NSArray *initialPhotosWithMetadata; // @synthesize initialPhotosWithMetadata=_initialPhotosWithMetadata;
@property(nonatomic) long long initialOverallState; // @synthesize initialOverallState=_initialOverallState;
- (void)presentationControllerWillDismiss:(id)arg1;	// IMP=0x0010000000c75d26
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x0010000000c75cb4
- (void)_dismissPOIEnrichmentEditorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000c758d1
- (void)_failWithAccountErrorWithPresentingViewController:(id)arg1;	// IMP=0x0010000000c757e2
- (void)_failLookupWithError:(id)arg1;	// IMP=0x0010000000c756c7
- (id)addPhotosControllerRequestsAnchoringBarButtonItem:(id)arg1;	// IMP=0x0010000000c756b5
- (id)addPhotosControllerRequestsAnchoringView:(id)arg1;	// IMP=0x0010000000c756a3
- (void)_dismissPhotoPickerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000c7552b
- (void)takePhotoController:(id)arg1 didSelectPhotosWithMetadata:(id)arg2;	// IMP=0x0010000000c75406
- (void)takePhotoControllerDidCancel:(id)arg1;	// IMP=0x0010000000c75313
- (void)_presentFailedToSubmitAlertForResponse:(id)arg1 withPresentingViewController:(id)arg2;	// IMP=0x0010000000c752fc
- (void)poiEnrichmenEditorDidCancel:(id)arg1;	// IMP=0x0010000000c7528f
- (void)_presentThirdPartyPhotoSharePromptIfNecessaryForReviewedPlace:(id)arg1;	// IMP=0x0010000000c7515c
- (void)_presentPushNotificationPromptIfNecessary;	// IMP=0x0010000000c74f69
- (int)_generateEntryPointForAnalytics:(long long)arg1;	// IMP=0x0010000000c74f4e
- (void)captureAnalyticsForRatingsForm:(id)arg1 photosForm:(id)arg2;	// IMP=0x0010000000c7441d
- (void)poiEnrichmentEditor:(id)arg1 didSelectTermsOfServiceURL:(id)arg2;	// IMP=0x0010000000c743b2
- (void)submissionCompletionWithViewController:(id)arg1 enrichmentForm:(id)arg2 policy:(long long)arg3 newReviewedPlace:(id)arg4 response:(id)arg5 error:(id)arg6;	// IMP=0x0010000000c73d2e
- (void)poiEnrichmentEditor:(id)arg1 finishedFillingEnrichmentForm:(id)arg2;	// IMP=0x0010000000c73826
@property(readonly, nonatomic) _Bool isEditingSubmission;
- (id)_createPOIEnrichmentFormWithContext;	// IMP=0x0010000000c733e2
- (void)_presentPOIEnrichmentViewController;	// IMP=0x0010000000c73101
- (void)_presentPhotoPickerWithMaxCount:(unsigned long long)arg1;	// IMP=0x0010000000c72f64
- (void)_handleLookupSubmissionCompletion:(id)arg1 lookupError:(id)arg2;	// IMP=0x0010000000c72daf
- (void)_startRatingsAndPhotosFlowWithSubmissionLookup;	// IMP=0x0010000000c72ac7
- (void)_startPOIEnrichmentFlow;	// IMP=0x0010000000c728b6
- (void)_startRatingsAndPhotosFlowDependentUponReviewedPlaceLookup;	// IMP=0x0010000000c7270c
- (void)_startRatingsAndPhotosFlowRequiringInformedConsent;	// IMP=0x0010000000c72588
- (void)_startRatingsAndPhotosFlowWithInformedConsentIfNeeded;	// IMP=0x0010000000c72510
- (void)_dismissPlacecardWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000c7235f
@property(readonly, nonatomic) _Bool shouldDismissPlacecard;
- (void)_macOSBasedPresentation;	// IMP=0x0010000000c721f4
- (void)_iosBasedPresentation;	// IMP=0x0010000000c721e2
- (void)present;	// IMP=0x0010000000c7216f
- (id)init;	// IMP=0x0010000000c72130

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
