//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

@interface _TtC8PaperKit17PaperDocumentView : UIView
{
    MISSING_TYPE *editingMode;	// 8 = 0x8
    MISSING_TYPE *context;	// 16 = 0x10
    MISSING_TYPE *viewUUID;	// 3 = 0x3
    MISSING_TYPE *pdfView;	// 0 = 0x0
    MISSING_TYPE *viewControllerForPresentingUI;	// 5434859 = 0x52edeb
    MISSING_TYPE *thumbnailView;	// 2 = 0x2
    MISSING_TYPE *pageOverlayViewProvider;	// 84787 = 0x14b33
    MISSING_TYPE *_allowsDocumentStructureEditing;	// 0 = 0x0
    MISSING_TYPE *allowsDocumentStructureCopying;	// 0 = 0x0
    MISSING_TYPE *delegate;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *dataModelInitialState;	// 0 = 0x0
    MISSING_TYPE *dataModel;	// 1852339301 = 0x6e687465
    MISSING_TYPE *pdfDocument;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *documentDelegate;	// 12 = 0xc
    MISSING_TYPE *pageToOverlayMap;	// 5519646 = 0x54391e
    MISSING_TYPE *tiledView;	// 5434859 = 0x52edeb
    MISSING_TYPE *nonDrawingToolMode;	// 1414745679 = 0x54534e4f
    MISSING_TYPE *vellumOpacity;	// 1953002597 = 0x74687465
    MISSING_TYPE *canEditVellumOpacity;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *$__lazy_storage_$_paperDocumentViewProxy;	// 0 = 0x0
    MISSING_TYPE *toolPicker;	// 0 = 0x0
    MISSING_TYPE *automaticallyAdjustScaleFactor;	// 5519646 = 0x54391e
    MISSING_TYPE *automaticallyApplySafeAreaInsetsToAxes;	// 26323 = 0x66d3
    MISSING_TYPE *passThroughSubject;	// 0 = 0x0
    MISSING_TYPE *livePassThroughSubject;	// 0 = 0x0
    MISSING_TYPE *isUpdatingPDFDocument;	// 1869045599 = 0x6f675f5f
    MISSING_TYPE *updateDocAsset;	// 0 = 0x0
    MISSING_TYPE *updateDocTask;	// 1094999903 = 0x41445f5f
    MISSING_TYPE *changedPages;	// 1414745679 = 0x54534e4f
    MISSING_TYPE *changedPagesTask;	// 5545984 = 0x54a000
    MISSING_TYPE *changedDeadline;	// 35584 = 0x8b00
    MISSING_TYPE *isCurrentlyLiveEditing;	// 5545984 = 0x54a000
    MISSING_TYPE *liveEditingContinuations;	// 0 = 0x0
    MISSING_TYPE *multipeerConnection;	// 6 = 0x6
    MISSING_TYPE *liveStreamMessenger;	// 2 = 0x2
    MISSING_TYPE *participantDetailsDataSource;	// 0 = 0x0
    MISSING_TYPE *showParticipantCursors;	// 25 = 0x19
    MISSING_TYPE *textualContextProvider;	// 1094999903 = 0x41445f5f
    MISSING_TYPE *formAnalytics;	// 5545984 = 0x54a000
    MISSING_TYPE *_insertingFromFileIndex;	// 0 = 0x0
    MISSING_TYPE *validPasteUTTypeIdentifiers;	// 0 = 0x0
    MISSING_TYPE *docScanDismissBlock;	// 0 = 0x0
    MISSING_TYPE *quadEditorController;	// 0 = 0x0
    MISSING_TYPE *_rulerHostingDelegate;	// 1868783455 = 0x6f635f5f
    MISSING_TYPE *rulerHostView;	// 282624 = 0x45000
    MISSING_TYPE *calculateDocument;	// 5545984 = 0x54a000
    MISSING_TYPE *calculateDocumentExpressionSolvingBehavior;	// 282624 = 0x45000
}

- (void).cxx_destruct;	// IMP=0x000000000031a130
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000337e20
- (void)pageDidScroll:(id)arg1;	// IMP=0x00000000003323a0
- (void)documentPickerWasCancelled:(id)arg1;	// IMP=0x0000000000331940
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;	// IMP=0x0000000000331830
- (void)didMoveToSuperview;	// IMP=0x00000000003287e0
- (void)pdfView:(id)arg1 willEndDisplayingOverlayView:(id)arg2 forPage:(id)arg3;	// IMP=0x0000000000328680
- (void)pdfView:(id)arg1 willDisplayOverlayView:(id)arg2 forPage:(id)arg3;	// IMP=0x00000000003285f0
- (id)pdfView:(id)arg1 overlayViewForPage:(id)arg2;	// IMP=0x0000000000328560
- (void)annotationsChanged:(id)arg1;	// IMP=0x0000000000326a70
- (void)annotationPropertiesChanged:(id)arg1;	// IMP=0x0000000000326840
- (void)pdfSelectionChanged:(id)arg1;	// IMP=0x0000000000325c70
- (void)axTapOnShapeView:(id)arg1;	// IMP=0x000000000031b050
- (id)axCurrentPageView;	// IMP=0x000000000031aec0
- (id)axDetectedFormElements;	// IMP=0x000000000031ad20
- (void)axRemoveFormFieldFromHierarchy:(id)arg1;	// IMP=0x000000000031ad10
- (void)axInsertFormFieldsIntoHierarchy;	// IMP=0x000000000031ad00
- (void)toolPickerVisibilityDidChange:(id)arg1;	// IMP=0x000000000031ac80
- (void)toolPickerIsRulerActiveDidChange:(id)arg1;	// IMP=0x000000000031abb0
- (void)toolPickerSelectedToolItemDidChange:(id)arg1;	// IMP=0x000000000031ab00
- (void)toolPickerSelectedToolDidChange:(id)arg1;	// IMP=0x000000000031aab0
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)layoutSubviews;	// IMP=0x000000000031a860
- (void)dealloc;	// IMP=0x000000000031a110
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000319fd0

@end
