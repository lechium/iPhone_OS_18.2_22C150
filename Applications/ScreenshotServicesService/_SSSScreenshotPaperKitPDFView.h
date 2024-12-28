//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CRContext, MISSING_TYPE, NSData, PDFDocument, PDFView, PKToolPicker, SSSScreenshot, _SSSScreenshotContentOverlayController, _TtC8PaperKit17PaperDocumentView;
@protocol _SSSScreenshotPaperKitPDFViewDelegate;

@interface _SSSScreenshotPaperKitPDFView : UIView
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *leftRightMargin;	// 16 = 0x10
    MISSING_TYPE *context;	// 24 = 0x18
    MISSING_TYPE *screenshotEditsSnapshotted;	// 32 = 0x20
    MISSING_TYPE *cancellable;	// 40 = 0x28
    MISSING_TYPE *paperDocumentView;	// 48 = 0x30
    MISSING_TYPE *cachedRenderedPDFDocument;	// 56 = 0x38
    MISSING_TYPE *toolPicker;	// 64 = 0x40
    MISSING_TYPE *pdfData;	// 72 = 0x48
    MISSING_TYPE *isChangingVellumOpacity;	// 88 = 0x58
    MISSING_TYPE *vellumOpacity;	// 96 = 0x60
    MISSING_TYPE *screenshot;	// 104 = 0x68
    MISSING_TYPE *isCropping;	// 112 = 0x70
    MISSING_TYPE *rulerHostView;	// 120 = 0x78
    MISSING_TYPE *changeCounter;	// 128 = 0x80
    MISSING_TYPE *editable;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0020000000066260
- (id)documentFromPDFData:(id)arg1;	// IMP=0x00100000000661b0
- (void)layoutSubviews;	// IMP=0x0010000000065a50
- (void)setupDocumentViewController;	// IMP=0x0010000000065a20
- (void)deselectAllAnnotations;	// IMP=0x0010000000064b00
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000064ae0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000064ab0
@property(nonatomic) _Bool editable; // @synthesize editable;
- (void)updatePaletteVisibilityIfNecessary:(_Bool)arg1;	// IMP=0x0010000000064660
@property(nonatomic) unsigned long long changeCounter; // @synthesize changeCounter;
- (void)updatePDFViewZoomParameters;	// IMP=0x0010000000064480
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
@property(nonatomic, readonly) struct CGRect currentPageBounds;
@property(nonatomic) struct CGRect currentPageUnitCropRect;
- (void)updateCurrentPageCropRect:(struct CGRect)arg1;	// IMP=0x0010000000062f90
@property(nonatomic, retain) UIView *rulerHostView; // @synthesize rulerHostView;
@property(nonatomic) _Bool isCropping; // @synthesize isCropping;
@property(nonatomic, readonly) _SSSScreenshotContentOverlayController *overlayController;
@property(nonatomic, readonly) UIView *viewWithScreenshotImage;
@property(nonatomic, retain) SSSScreenshot *screenshot; // @synthesize screenshot;
@property(nonatomic) double vellumOpacity; // @synthesize vellumOpacity;
@property(nonatomic, readonly) PDFView *pdfView;
@property(nonatomic, copy) NSData *pdfData;
@property(nonatomic, readonly) PKToolPicker *toolPicker; // @synthesize toolPicker;
@property(nonatomic, retain) PDFDocument *cachedRenderedPDFDocument; // @synthesize cachedRenderedPDFDocument;
@property(nonatomic, retain) _TtC8PaperKit17PaperDocumentView *paperDocumentView; // @synthesize paperDocumentView;
@property(nonatomic) _Bool screenshotEditsSnapshotted; // @synthesize screenshotEditsSnapshotted;
@property(nonatomic, readonly) CRContext *context; // @synthesize context;
@property(nonatomic, readonly) double leftRightMargin; // @synthesize leftRightMargin;
@property(nonatomic) __weak id <_SSSScreenshotPaperKitPDFViewDelegate> delegate; // @synthesize delegate;
- (void)_toolPicker:(id)arg1 startEditingOpacityWithAccessoryView:(id)arg2;	// IMP=0x0010000000067850

@end
