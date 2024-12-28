//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, NSArray, NSAttributedString, NSIndexSet, NSObject, NSString, UIFont, UIImage, UIImageView, UILabel, UIScrollView, UIView, VKCActionInfoButton, VKCActionInfoView, VKCAnalysisDebugMenuProvider, VKCImageAnalysisResult, VKCImageCustomHighlightView, VKCImageDataDetectorView, VKCImageSubjectContext, VKCImageSubjectHighlightView, VKCImageTextSelectionView, VKCImageTranslationView, VKCImageVisualSearchView, VKCRemoveBackgroundRequest, VKCRemoveBackgroundRequestHandler, VKCVisualSearchResultItem, VKTextRange;
@protocol OS_dispatch_queue, VKCImageAnalysisBaseViewDelegate;

__attribute__((visibility("hidden")))
@interface VKCImageAnalysisBaseView
{
    _Bool _isShowingTranslation;	// 8 = 0x8
    _Bool _subjectHighlightFeatureFlagEnabled;	// 9 = 0x9
    _Bool _isPublicAPI;	// 10 = 0xa
    _Bool _longPressDataDetectorsInTextMode;	// 11 = 0xb
    _Bool _wantsAutomaticContentsRectCalculation;	// 12 = 0xc
    _Bool _stringHighlightsActive;	// 13 = 0xd
    _Bool _didAddVisualSearchCornerView;	// 14 = 0xe
    _Bool _didLogContentsRectError;	// 15 = 0xf
    _Bool _visibleTextAreaInfoIsValid;	// 16 = 0x10
    _Bool _isAnalysisVisible;	// 17 = 0x11
    _Bool __hasActiveTextSelection;	// 18 = 0x12
    _Bool _clientDidSetNormalizedRect;	// 19 = 0x13
    _Bool _highlightedMenuItemUpdateScheduled;	// 20 = 0x14
    _Bool _actionInfoHiddenForZoomAnimation;	// 21 = 0x15
    VKCImageAnalysisResult *_analysisResult;	// 24 = 0x18
    id _loggingParentObject;	// 32 = 0x20
    VKCImageTextSelectionView *_textSelectionView;	// 40 = 0x28
    VKCImageDataDetectorView *_dataDetectorView;	// 48 = 0x30
    VKCImageVisualSearchView *_visualSearchView;	// 56 = 0x38
    VKCImageTranslationView *_translationView;	// 64 = 0x40
    id <VKCImageAnalysisBaseViewDelegate> _delegate;	// 72 = 0x48
    unsigned long long _activeInteractionTypes;	// 80 = 0x50
    NSArray *_quickActions;	// 88 = 0x58
    unsigned long long _dataDetectorTypes;	// 96 = 0x60
    UIView *_viewForObservingContentMode;	// 104 = 0x68
    VKCActionInfoView *_actionInfoView;	// 112 = 0x70
    UIFont *_actionInfoCustomFont;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 128 = 0x80
    VKCImageCustomHighlightView *_regexHighlightView;	// 136 = 0x88
    VKCImageSubjectHighlightView *_subjectHighlightView;	// 144 = 0x90
    unsigned long long _checkForQuickActionsIndex;	// 152 = 0x98
    NSArray *_highlightStrings;	// 160 = 0xa0
    NSIndexSet *_highlightStringsIndexSet;	// 168 = 0xa8
    UIImageView *_debugImageView;	// 176 = 0xb0
    VKCRemoveBackgroundRequestHandler *_removeBackgroundRequestHandler;	// 184 = 0xb8
    VKCRemoveBackgroundRequest *_inProcessMaskRemoveBackgroundRequest;	// 192 = 0xc0
    VKCActionInfoButton *_copyAllQuickAction;	// 200 = 0xc8
    VKCActionInfoButton *_translateQuickAction;	// 208 = 0xd0
    UILabel *_textInfoView;	// 216 = 0xd8
    VKTextRange *_selectedTextRangeBeforeDataDetectorMenu;	// 224 = 0xe0
    VKCAnalysisDebugMenuProvider *_debugMenuProvider;	// 232 = 0xe8
    UIScrollView *_scrollViewToObserve;	// 240 = 0xf0
    long long _scrollViewToObserveCount;	// 248 = 0xf8
    VKCVisualSearchResultItem *_vsItemPresentedFromMenu;	// 256 = 0x100
    CALayer *_layerForObservingContentsRect;	// 264 = 0x108
    struct CGRect _visibleImageRect;	// 272 = 0x110
    struct CGRect _frameWhenResigningActive;	// 304 = 0x130
    struct VKVisibleTextAreaInfo _visibleTextAreaInfo;	// 336 = 0x150
}

+ (id)keyPathsForValuesAffectingHasActiveTextSelection;	// IMP=0x001000000008bee1
- (void).cxx_destruct;	// IMP=0x0000000000095a2d
@property(nonatomic) struct CGRect frameWhenResigningActive; // @synthesize frameWhenResigningActive=_frameWhenResigningActive;
@property(nonatomic) __weak CALayer *layerForObservingContentsRect; // @synthesize layerForObservingContentsRect=_layerForObservingContentsRect;
@property(nonatomic) __weak VKCVisualSearchResultItem *vsItemPresentedFromMenu; // @synthesize vsItemPresentedFromMenu=_vsItemPresentedFromMenu;
@property(nonatomic) _Bool actionInfoHiddenForZoomAnimation; // @synthesize actionInfoHiddenForZoomAnimation=_actionInfoHiddenForZoomAnimation;
@property(nonatomic) long long scrollViewToObserveCount; // @synthesize scrollViewToObserveCount=_scrollViewToObserveCount;
@property(nonatomic) __weak UIScrollView *scrollViewToObserve; // @synthesize scrollViewToObserve=_scrollViewToObserve;
@property(retain, nonatomic) VKCAnalysisDebugMenuProvider *debugMenuProvider; // @synthesize debugMenuProvider=_debugMenuProvider;
@property(retain, nonatomic) VKTextRange *selectedTextRangeBeforeDataDetectorMenu; // @synthesize selectedTextRangeBeforeDataDetectorMenu=_selectedTextRangeBeforeDataDetectorMenu;
@property(retain, nonatomic) UILabel *textInfoView; // @synthesize textInfoView=_textInfoView;
@property(retain, nonatomic) VKCActionInfoButton *translateQuickAction; // @synthesize translateQuickAction=_translateQuickAction;
@property(retain, nonatomic) VKCActionInfoButton *copyAllQuickAction; // @synthesize copyAllQuickAction=_copyAllQuickAction;
@property(nonatomic) _Bool highlightedMenuItemUpdateScheduled; // @synthesize highlightedMenuItemUpdateScheduled=_highlightedMenuItemUpdateScheduled;
@property(nonatomic) _Bool clientDidSetNormalizedRect; // @synthesize clientDidSetNormalizedRect=_clientDidSetNormalizedRect;
@property(retain, nonatomic) VKCRemoveBackgroundRequest *inProcessMaskRemoveBackgroundRequest; // @synthesize inProcessMaskRemoveBackgroundRequest=_inProcessMaskRemoveBackgroundRequest;
@property(retain, nonatomic) VKCRemoveBackgroundRequestHandler *removeBackgroundRequestHandler; // @synthesize removeBackgroundRequestHandler=_removeBackgroundRequestHandler;
@property(retain, nonatomic) UIImageView *debugImageView; // @synthesize debugImageView=_debugImageView;
@property(retain, nonatomic) NSIndexSet *highlightStringsIndexSet; // @synthesize highlightStringsIndexSet=_highlightStringsIndexSet;
@property(retain, nonatomic) NSArray *highlightStrings; // @synthesize highlightStrings=_highlightStrings;
@property(nonatomic) _Bool _hasActiveTextSelection; // @synthesize _hasActiveTextSelection=__hasActiveTextSelection;
@property(nonatomic) _Bool isAnalysisVisible; // @synthesize isAnalysisVisible=_isAnalysisVisible;
@property(nonatomic) _Bool visibleTextAreaInfoIsValid; // @synthesize visibleTextAreaInfoIsValid=_visibleTextAreaInfoIsValid;
@property(nonatomic) unsigned long long checkForQuickActionsIndex; // @synthesize checkForQuickActionsIndex=_checkForQuickActionsIndex;
@property(nonatomic) _Bool didLogContentsRectError; // @synthesize didLogContentsRectError=_didLogContentsRectError;
@property(retain, nonatomic) VKCImageSubjectHighlightView *subjectHighlightView; // @synthesize subjectHighlightView=_subjectHighlightView;
@property(retain, nonatomic) VKCImageCustomHighlightView *regexHighlightView; // @synthesize regexHighlightView=_regexHighlightView;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(nonatomic) _Bool didAddVisualSearchCornerView; // @synthesize didAddVisualSearchCornerView=_didAddVisualSearchCornerView;
@property(nonatomic) _Bool stringHighlightsActive; // @synthesize stringHighlightsActive=_stringHighlightsActive;
@property(retain, nonatomic) UIFont *actionInfoCustomFont; // @synthesize actionInfoCustomFont=_actionInfoCustomFont;
@property(retain, nonatomic) VKCActionInfoView *actionInfoView; // @synthesize actionInfoView=_actionInfoView;
@property(nonatomic) __weak UIView *viewForObservingContentMode; // @synthesize viewForObservingContentMode=_viewForObservingContentMode;
@property(nonatomic) struct VKVisibleTextAreaInfo visibleTextAreaInfo; // @synthesize visibleTextAreaInfo=_visibleTextAreaInfo;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property(readonly, nonatomic) NSArray *quickActions; // @synthesize quickActions=_quickActions;
@property(nonatomic) struct CGRect visibleImageRect; // @synthesize visibleImageRect=_visibleImageRect;
@property(nonatomic) _Bool wantsAutomaticContentsRectCalculation; // @synthesize wantsAutomaticContentsRectCalculation=_wantsAutomaticContentsRectCalculation;
@property(nonatomic) _Bool longPressDataDetectorsInTextMode; // @synthesize longPressDataDetectorsInTextMode=_longPressDataDetectorsInTextMode;
@property(nonatomic) unsigned long long activeInteractionTypes; // @synthesize activeInteractionTypes=_activeInteractionTypes;
@property(nonatomic) __weak id <VKCImageAnalysisBaseViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VKCImageTranslationView *translationView; // @synthesize translationView=_translationView;
@property(retain, nonatomic) VKCImageVisualSearchView *visualSearchView; // @synthesize visualSearchView=_visualSearchView;
@property(retain, nonatomic) VKCImageDataDetectorView *dataDetectorView; // @synthesize dataDetectorView=_dataDetectorView;
@property(retain, nonatomic) VKCImageTextSelectionView *textSelectionView; // @synthesize textSelectionView=_textSelectionView;
@property(nonatomic) __weak id loggingParentObject; // @synthesize loggingParentObject=_loggingParentObject;
@property(nonatomic) _Bool isPublicAPI; // @synthesize isPublicAPI=_isPublicAPI;
@property(retain, nonatomic) VKCImageAnalysisResult *analysisResult; // @synthesize analysisResult=_analysisResult;
@property(nonatomic) _Bool subjectHighlightFeatureFlagEnabled; // @synthesize subjectHighlightFeatureFlagEnabled=_subjectHighlightFeatureFlagEnabled;
@property(nonatomic) _Bool isShowingTranslation; // @synthesize isShowingTranslation=_isShowingTranslation;
- (void)deleteDisposableFiles;	// IMP=0x000000000009540d
- (id)disposableSubjectPNGURLWithTitle:(id)arg1;	// IMP=0x000000000009527a
- (id)disposableFolderPath;	// IMP=0x000000000009522c
- (void)actionInfoButtonDidActivatePrimaryAction:(id)arg1;	// IMP=0x000000000009508a
- (void)willHideMenuForActionInfoButton:(id)arg1;	// IMP=0x000000000009504d
- (void)willDisplayMenuForActionInfoButton:(id)arg1;	// IMP=0x0000000000094fce
- (id)highlightView:(id)arg1 selectionRectsForRanges:(id)arg2;	// IMP=0x0000000000094a28
- (void)sendQuickActionAnalyticsWithDidBecomeVisible:(_Bool)arg1;	// IMP=0x00000000000948de
- (void)sendVisualSearchAnalyticsWithDidBecomeActive:(_Bool)arg1;	// IMP=0x00000000000947b2
- (void)sendActiveInteractionTypesDidChangeAnalyticsEvent;	// IMP=0x00000000000946be
- (void)sendAnalysisDidChangeAnalyticsEvent;	// IMP=0x00000000000945ca
- (struct CGRect)videoPreviewNormalizedCropRect;	// IMP=0x000000000009456e
- (CDStruct_5c5366e1)videoPreviewTimeRange;	// IMP=0x000000000009450e
- (id)videoPreviewSubjectMatteForImage:(id)arg1 atCompositionTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000009447b
- (id)videoPreviewSubjectMatteAtCompositionTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000094412
- (void)createStickerRepresentationsAtIndexSet:(id)arg1 type:(unsigned long long)arg2 stickerIDs:(id)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000094340
- (void)addMetadataToVSFeedbackItem:(id)arg1;	// IMP=0x0000000000094114
- (void)showTopVisualSearchResult;	// IMP=0x0000000000094046
- (void)automaticallyShowVisualSearchResultsIfApplicable;	// IMP=0x0000000000093fed
- (void)scrollViewDidZoomToUnitRect:(struct CGRect)arg1;	// IMP=0x0000000000093fd0
- (_Bool)visualSearchView:(id)arg1 shouldShowDotForItem:(id)arg2 allItems:(id)arg3;	// IMP=0x0000000000093cd6
- (id)presentingViewControllerForImageAnalysisInteraction;	// IMP=0x0000000000093c3c
- (void)visualSearchItemViewDidActivateVSItem:(id)arg1;	// IMP=0x0000000000093a88
- (id)visualSearchView:(id)arg1 normalizedPathForSubjectAtNormalizedPoint:(struct CGPoint)arg2;	// IMP=0x000000000009398f
- (void)visualSearchView:(id)arg1 analyticsEventOccured:(id)arg2;	// IMP=0x0000000000093924
- (void)submitVisualSearchUserFeedbackForReportIdentifier:(id)arg1 userFeedbackPayload:(id)arg2 sfReportData:(id)arg3;	// IMP=0x0000000000093887
- (void)generateVisualSearchResultForItems:(id)arg1 queryID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000937fb
- (void)visualSearchItemViewDidDismissController:(id)arg1;	// IMP=0x00000000000937a0
- (void)visualSearchItemView:(id)arg1 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect)arg2;	// IMP=0x0000000000093740
- (id)visualSearchResultItems;	// IMP=0x00000000000936f0
- (void)generateTextualVisualSearchResultForQueryInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000093665
- (id)textSelectionView:(id)arg1 closestVisualSearchItemForRange:(id)arg2;	// IMP=0x000000000009326d
- (void)triggerTapToRadar;	// IMP=0x0000000000093230
- (id)summaryDescription;	// IMP=0x00000000000931b1
@property(readonly, copy) NSString *description;
- (id)nonTextNormalizedHighlightAllQuadsForTextSelectionView:(id)arg1;	// IMP=0x0000000000092faa
- (id)dataDetectorElementAtPoint:(struct CGPoint)arg1 fromTextSelectionView:(id)arg2;	// IMP=0x0000000000092f98
- (void)textSelectionView:(id)arg1 analyticsEventOccured:(id)arg2;	// IMP=0x0000000000092f2d
- (_Bool)visualSearchItemView:(id)arg1 shouldBeginAtPoint:(struct CGPoint)arg2;	// IMP=0x0000000000092ec0
- (void)willDismissMenuForDataDetectorView:(id)arg1;	// IMP=0x0000000000092e39
- (void)willDisplayMenuForDataDetectorView:(id)arg1;	// IMP=0x0000000000092d8f
- (_Bool)dataDetectorView:(id)arg1 dataDetectorInteractionShouldBeginAtPoint:(struct CGPoint)arg2;	// IMP=0x0000000000092d22
- (_Bool)textSelectionView:(id)arg1 shouldHandleShareWithRanges:(id)arg2 boundingRect:(struct CGRect)arg3 selectedText:(id)arg4 selectedAttributedText:(id)arg5;	// IMP=0x0000000000092c66
- (id)textSelectionView:(id)arg1 updateAttributedStringForCopy:(id)arg2;	// IMP=0x0000000000092be9
- (id)textSelectionView:(id)arg1 updateStringForCopy:(id)arg2;	// IMP=0x0000000000092b6c
- (void)subjectHighlightView:(id)arg1 prepareForCalloutAction:(SEL)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000092af2
- (void)textSelectionView:(id)arg1 prepareForCalloutAction:(SEL)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000092a78
- (id)presentingViewControllerForTextSelectionView:(id)arg1;	// IMP=0x0000000000092a28
- (void)textSelectionView:(id)arg1 boundsDidChangeFromRect:(struct CGRect)arg2 toRect:(struct CGRect)arg3;	// IMP=0x00000000000929fa
- (void)textSelectionView:(id)arg1 selectionDidChange:(id)arg2;	// IMP=0x000000000009291d
- (void)textSelectionView:(id)arg1 requestsDataDetectorActivationAtPoint:(struct CGPoint)arg2;	// IMP=0x00000000000928a0
- (_Bool)textSelectionView:(id)arg1 dataDetectorExistsAtPoint:(struct CGPoint)arg2;	// IMP=0x000000000009286d
- (_Bool)textSelectionView:(id)arg1 shouldBeginAtPoint:(struct CGPoint)arg2;	// IMP=0x000000000009270d
- (id)previewImageForDataDetectorElementView:(id)arg1;	// IMP=0x00000000000926ae
- (id)viewForImageSnapshotForTextSelectionView:(id)arg1;	// IMP=0x000000000009264f
- (id)presentingViewControllerForInteractionWithDataDetectorView:(id)arg1;	// IMP=0x000000000009263d
- (void)dataDetectorView:(id)arg1 analyticsEventOccured:(id)arg2;	// IMP=0x00000000000925d2
- (id)previewForDataDetectorElementView:(id)arg1;	// IMP=0x0000000000092558
- (id)tempPNGURLForSubjectHighlightView:(id)arg1;	// IMP=0x00000000000924cc
- (_Bool)presentVisualSearchForItem:(id)arg1;	// IMP=0x0000000000092215
- (void)videoPreviewAvailableForSubjectHighlightView:(id)arg1;	// IMP=0x00000000000921c9
- (void)subjectHighlightView:(id)arg1 activateVSItemForNormalizedPath:(id)arg2;	// IMP=0x0000000000091f2e
- (_Bool)subjectHighlightView:(id)arg1 containsVSItemForNormalizedPath:(id)arg2;	// IMP=0x0000000000091d9a
- (id)presentingViewControllerForSubjectHighlightView:(id)arg1;	// IMP=0x0000000000091d4a
- (void)subjectHighlightView:(id)arg1 livePhotoShouldPlay:(_Bool)arg2;	// IMP=0x0000000000091cfb
- (_Bool)isSubjectHighlightShowingLivePhoto:(id)arg1 delegateHasImplementation:(_Bool *)arg2;	// IMP=0x0000000000091ca5
- (void)subjectHighlightViewSubjectInteractionInProgressDidChange:(id)arg1;	// IMP=0x0000000000091c59
- (void)subjectHighlightView:(id)arg1 willBeginInteractionAtPoint:(struct CGPoint)arg2 withType:(unsigned long long)arg3;	// IMP=0x0000000000091be2
- (_Bool)subjectHighlightView:(id)arg1 shouldBeginInteractionAtPoint:(struct CGPoint)arg2 withType:(unsigned long long)arg3;	// IMP=0x0000000000091b68
- (void)subjectBaseView:(id)arg1 analyticsEventOccurred:(id)arg2;	// IMP=0x0000000000091afd
- (void)subjectBaseViewGlowLayerActiveDidChange:(id)arg1;	// IMP=0x0000000000091aeb
- (void)subjectBaseViewViewDidCompletePath:(id)arg1;	// IMP=0x0000000000091ae5
- (void)subjectBaseViewDidBeginSubjectAnalysis:(id)arg1;	// IMP=0x0000000000091a99
- (void)subjectBaseViewViewDidCompleteSubjectAnalysis:(id)arg1;	// IMP=0x0000000000091954
- (void)clearRegexHighlightsAnimated:(_Bool)arg1 updateActiveTypes:(_Bool)arg2;	// IMP=0x0000000000091827
- (void)clearStringHighlightsAnimated:(_Bool)arg1;	// IMP=0x0000000000091810
- (void)highlightMatchesWithString:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000091645
- (void)_observeScrollViewDidScroll:(id)arg1;	// IMP=0x0000000000091633
- (void)scrollViewDidChange:(id)arg1;	// IMP=0x00000000000912ed
- (void)scrollViewWillChange:(id)arg1;	// IMP=0x00000000000910f1
@property(readonly, nonatomic) VKCImageCustomHighlightView *regexHighlightViewIfExists;
- (_Bool)containsVisualSearchItemAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000090b7c
- (unsigned long long)dataDetectorTypeAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000090b2c
- (id)dataDetectorElementPoint:(struct CGPoint)arg1 requestingView:(id)arg2;	// IMP=0x0000000000090a07
@property(readonly, nonatomic) double currentExtraOffsetForViewScale;
- (id)indexOfSubjectAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000000908e6
@property(readonly, nonatomic) NSIndexSet *allSubjectsIndexSet;
@property(copy, nonatomic) NSIndexSet *activeSubjectIndexSet;
- (_Bool)analysisContainsTextAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000000906ff
- (_Bool)containsImageSubjectAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000009064b
- (_Bool)containsActionInfoItemAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000000904b4
- (_Bool)containsTextAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000090464
- (_Bool)containsInteractiveItemAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000000902d7
- (void)clearTranslationViewIfNecessary;	// IMP=0x000000000009029f
- (void)clearVisualSearchViewIfNecessary;	// IMP=0x0000000000090267
- (void)clearDataDetectorViewIfNecessary;	// IMP=0x000000000009022f
- (void)clearTextSelectionViewIfNecessary;	// IMP=0x00000000000901f7
- (void)configureForActiveTypes:(unsigned long long)arg1;	// IMP=0x000000000008f8f4
- (void)configureForCurrentActiveInteractionTypes;	// IMP=0x000000000008f8c3
- (struct CGRect)calculateNormalizedVisibleRect;	// IMP=0x000000000008ee43
- (void)debugButtonDidTap:(id)arg1;	// IMP=0x000000000008ed70
- (void)updateDebugButtonIfNecessary;	// IMP=0x000000000008e47d
- (void)updateAndNotifyAfterValidNormalizedVisibleRectChange;	// IMP=0x000000000008e375
- (void)updateAndNotifyAfterValidNormalizedVisibleRectChangeIfNecessary;	// IMP=0x000000000008e2b3
- (void)setNormalizedVisibleRect:(struct CGRect)arg1;	// IMP=0x000000000008df53
- (void)updateNormalizedVisibleRect;	// IMP=0x000000000008de57
- (void)updateNormalizedVisibleRectIfNecessary;	// IMP=0x000000000008dd4e
- (void)_updateAnalysisVisibility;	// IMP=0x000000000008da08
- (void)_logVisualSearchHintAvailabilityUpdate;	// IMP=0x000000000008d8c6
- (void)updateCurrentDisplayedViewContentsRect;	// IMP=0x000000000008d4f5
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 usingSubviewsOf:(id)arg3;	// IMP=0x000000000008d444
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000008ceb8
- (void)updateSubviewsToMatchBounds;	// IMP=0x000000000008cc6a
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000008cc18
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000008cb97
@property(readonly, nonatomic) NSArray *filteredRectangleQuads;
@property(readonly, nonatomic) NSArray *filteredNormalizedRectangleQuads;
@property(readonly, nonatomic) NSArray *rawRectangleObservations;
@property(readonly, nonatomic) double totalBoundingBoxTextArea;
@property(readonly, nonatomic) double totalQuadTextArea;
- (void)invalidateVisibleTextAreaInfo;	// IMP=0x000000000008c5fd
- (struct VKVisibleTextAreaInfo)calculateVisibleTextAreaInfo;	// IMP=0x000000000008bffe
@property(readonly, nonatomic) _Bool hasActiveTextSelection;
- (void)test_activateTranslationOverlay;	// IMP=0x000000000008be1f
- (void)checkForTranslationResultsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008bdb6
- (void)clearSelection;	// IMP=0x000000000008bc2a
- (void)selectAll;	// IMP=0x000000000008bb5a
- (void)copyAllToClipboard;	// IMP=0x000000000008b934
- (void)copyButtonPressed:(id)arg1;	// IMP=0x000000000008b728
- (void)translateButtonPressed:(id)arg1;	// IMP=0x000000000008b58e
- (void)convertButtonPressed:(id)arg1;	// IMP=0x000000000008b588
- (void)resetSelection;	// IMP=0x000000000008b452
- (void)setQuickActions:(id)arg1;	// IMP=0x000000000008ae84
- (void)tearDownQuickActions;	// IMP=0x000000000008ae2b
- (_Bool)analysisIsAllDataDetectors;	// IMP=0x000000000008ab01
- (void)loadQuickActionsIfNecessary;	// IMP=0x000000000008a3dd
@property(nonatomic) _Bool inhibitSubjectDimmingAndLiftView;
@property(nonatomic) _Bool subjectViewUserInteractionDisabled;
@property(nonatomic) _Bool _photosInfoSingleTapSubjectModeEnabled;
- (void)highlightSubjectAtIndexSet:(id)arg1 showCallout:(_Bool)arg2 showBurst:(_Bool)arg3 burstPoint:(struct CGPoint)arg4 animated:(_Bool)arg5;	// IMP=0x000000000008a14e
- (id)generateSubjectImage;	// IMP=0x000000000008a146
- (id)imageSubjectPathWithIndexes:(id)arg1;	// IMP=0x000000000008a0cc
- (void)loadImageSubjectWithIndexes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008a041
- (void)loadImageSubjectIfAvailableWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000089fd8
- (void)beginImageSubjectAnalysisIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000089f6f
- (void)beginImageSubjectAnalysisWithDelayIfNecessary;	// IMP=0x0000000000089f32
- (void)beginImageSubjectAnalysisIfNecessary;	// IMP=0x0000000000089ef5
@property(nonatomic) _Bool usesLightDimmingViewInLightMode;
@property(retain, nonatomic) UIImage *customImageForRemoveBackground;
- (void)setIdentifierIndex:(long long)arg1;	// IMP=0x0000000000089c4a
@property(readonly, nonatomic) unsigned long long subjectRequestStatus;
@property(readonly, nonatomic) struct CGRect subjectFrame;
@property(readonly, nonatomic) _Bool subjectInteractionInProgress;
@property(readonly, nonatomic) _Bool isSubjectAnalysisComplete;
@property(readonly, nonatomic) _Bool isSubjectHighlightAvailable;
@property(nonatomic) _Bool subjectHighlightActive;
@property(readonly, nonatomic) VKCImageSubjectContext *subjectContext;
@property(nonatomic) _Bool highlightSelectableItems;
- (void)setHighlightSelectableItems:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000008977c
@property(readonly, nonatomic) VKTextRange *selectedRange;
@property(retain, nonatomic) NSArray *selectedRanges;
@property(readonly, nonatomic) NSAttributedString *selectedAttributedText;
@property(readonly, nonatomic) NSString *selectedText;
@property(readonly, nonatomic) NSString *text;
- (void)analysisDidUpdateForTypes:(unsigned long long)arg1;	// IMP=0x0000000000089052
- (void)setContentsRect:(struct CGRect)arg1;	// IMP=0x00000000000889cf
- (void)safeAreaInsetsDidChange;	// IMP=0x000000000008898e
- (void)didMoveToWindow;	// IMP=0x000000000008894d
@property(readonly, nonatomic) NSArray *keyPathsAffectingContentMode;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000888f6
- (void)layoutSubviews;	// IMP=0x000000000008878e
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x00000000000886dc
- (void)useInteractionOptions:(unsigned long long)arg1;	// IMP=0x0000000000088685
- (id)init;	// IMP=0x000000000008810a
- (void)dealloc;	// IMP=0x0000000000087f01

// Remaining properties
@property(readonly, nonatomic) struct CGRect contentsRect;
@property(readonly, nonatomic) NSString *customAnalyticsIdentifier;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
