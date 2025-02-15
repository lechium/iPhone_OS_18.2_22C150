//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PDFDocumentViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFDocumentView
{
    PDFDocumentViewPrivate *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005c3ab
- (struct CGVector)_scaleFromLayerTransforms;	// IMP=0x000000000005c2e9
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000005bf2f
- (id)pdfView;	// IMP=0x000000000005bf05
- (void)recieveBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2 forPage:(id)arg3;	// IMP=0x000000000005bdb3
- (id)backgroundImageForPage:(id)arg1 withQuality:(int *)arg2;	// IMP=0x000000000005bc3e
- (void)didRotatePageNotification:(id)arg1;	// IMP=0x000000000005bb14
- (void)changedBoundsForBoxNotification:(id)arg1;	// IMP=0x000000000005baef
- (void)_updateVisibilityDelegateForVisiblePageView:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005b9c9
- (void)_reAddPageOverlaysStartingAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005b796
- (void)_removePageOverlaysStartingAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005b540
- (void)_shiftPagesAtIndex:(unsigned long long)arg1 downwards:(_Bool)arg2;	// IMP=0x000000000005b0fc
- (void)didSwapPage:(id)arg1 atIndex:(unsigned long long)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x000000000005ad9b
- (void)willSwapPage:(id)arg1 atIndex:(unsigned long long)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x000000000005ac09
- (void)didRemovePage:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005aa23
- (void)willRemovePage:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005a946
- (void)didInsertPage:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005a772
- (void)willInsertPage:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005a75d
- (struct CGPoint)_pixelAlignPageFrameOrigin:(struct CGRect)arg1;	// IMP=0x000000000005a74d
- (id)_createPageView:(id)arg1;	// IMP=0x000000000005a60e
- (id)pageBackgroundManager;	// IMP=0x000000000005a5f5
- (void)forceUpdateActivePageIndex:(unsigned long long)arg1 withMaxDuration:(double)arg2;	// IMP=0x000000000005a5a2
- (void)willForceUpdate;	// IMP=0x000000000005a581
- (void)previewRotateShiftPages:(double)arg1;	// IMP=0x000000000005a39d
- (void)_updateVisibility;	// IMP=0x0000000000059c56
- (void)updateVisibility;	// IMP=0x0000000000059bc2
- (struct CGSize)documentViewSize;	// IMP=0x0000000000059ba7
- (void)layoutDocumentView;	// IMP=0x0000000000059549
- (id)pageViews;	// IMP=0x0000000000059528
- (void)removePageViewForPageAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000059397
- (id)createPageViewForPageAtIndex:(unsigned long long)arg1 withFrame:(struct CGRect)arg2;	// IMP=0x0000000000058f34
- (id)pageViewForPageAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000058e8d
- (void)updateNotificationsForDocument;	// IMP=0x0000000000058d68
- (id)document;	// IMP=0x0000000000058d47
- (void)setDocument:(id)arg1;	// IMP=0x000000000005890e
- (void)dealloc;	// IMP=0x0000000000058862
- (id)initWithPDFView:(id)arg1;	// IMP=0x000000000005871d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

