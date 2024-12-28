//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKPageModelController, NSString, _SSSScreenshotAnnotationControllerAKOverlayContainerView;

@interface _SSSScreenshotAnnotationController
{
    AKPageModelController *_pageModelController;	// 8 = 0x8
    _Bool _shouldTeardownAnnotationController;	// 16 = 0x10
    _SSSScreenshotAnnotationControllerAKOverlayContainerView *_overlayView;	// 24 = 0x18
    _Bool _didDrawPenStroke;	// 32 = 0x20
}

+ (id)annotationsFromAnnotationData:(id)arg1;	// IMP=0x0020000000044fb3
+ (id)annotationDataFromAnnotations:(id)arg1;	// IMP=0x0010000000044df7
- (void).cxx_destruct;	// IMP=0x00200000000464b6
@property(readonly, nonatomic) _Bool didDrawPenStroke; // @synthesize didDrawPenStroke=_didDrawPenStroke;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000004633e
@property(readonly, copy, nonatomic) NSString *originalImageDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, nonatomic) _Bool supportsImageDescriptionEditing;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (void)handleDrawingGestureRecognizerUpdate:(id)arg1;	// IMP=0x0010000000046234
- (void)updateDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 withPriority:(_Bool)arg3 forAnnotationController:(id)arg4;	// IMP=0x0010000000046081
- (void)uninstallDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;	// IMP=0x0010000000046018
- (void)installDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;	// IMP=0x0010000000045faf
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;	// IMP=0x0010000000045f35
- (void)controllerDidDismissPopover:(id)arg1;	// IMP=0x0010000000045ecb
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;	// IMP=0x0010000000045e7b
- (id)undoManagerForAnnotationController:(id)arg1;	// IMP=0x0010000000045e0f
- (id)contentSnapshot;	// IMP=0x0010000000045dbf
- (id)newContentSnapshotPDFDataIncludingAdornments:(_Bool)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;	// IMP=0x001000000004578d
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;	// IMP=0x00100000000455f7
- (struct CGRect)visibleRectOfOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;	// IMP=0x00100000000453e2
- (struct CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;	// IMP=0x001000000004534f
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;	// IMP=0x0010000000045349
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;	// IMP=0x0010000000045343
- (void)penStrokeCompletedForAnnotationController:(id)arg1;	// IMP=0x00100000000452d5
- (void)editCheckpointReachedForAnnotationController:(id)arg1;	// IMP=0x00100000000452c1
- (void)editDetectedForAnnotationController:(id)arg1;	// IMP=0x001000000004525c
- (_Bool)_updateAnnotationsForViewState:(CDStruct_6a6871ea)arg1 createUndoCommand:(_Bool)arg2;	// IMP=0x0010000000044932
- (_Bool)_updateAnnotationsForViewState:(CDStruct_6a6871ea)arg1;	// IMP=0x001000000004491a
- (void)_updateAnnotationsCreateUndoCommand:(_Bool)arg1;	// IMP=0x0010000000044667
- (void)_updateAnnotations;	// IMP=0x0010000000044650
- (void)endedEditingWithOverlay;	// IMP=0x0010000000044613
- (void)logDidEnterEditingWithOverlay;	// IMP=0x001000000004453c
- (void)updateUndoState;	// IMP=0x00100000000444b7
- (void)setGesturesEnabled:(_Bool)arg1;	// IMP=0x0010000000044445
- (id)rotationGestureRecognizer;	// IMP=0x00100000000443f5
- (id)panGestureRecognizer;	// IMP=0x00100000000443a5
- (id)longPressGestureRecognizer;	// IMP=0x0010000000044355
- (id)doubleTapGestureRecognizer;	// IMP=0x0010000000044305
- (id)tapGestureRecognizer;	// IMP=0x00100000000442b5
- (id)gestureRecognizers;	// IMP=0x00100000000440b3
- (struct CGRect)rectToCenterAboveKeyboard;	// IMP=0x0010000000043bf6
- (id)overlayView;	// IMP=0x0010000000043bb9
- (void)setScreenshot:(id)arg1;	// IMP=0x001000000004394b
- (void)setActive:(_Bool)arg1;	// IMP=0x001000000004373f
- (void)_enableInkingOnAKController:(_Bool)arg1;	// IMP=0x00100000000436fd
- (void)_prepareAKController;	// IMP=0x001000000004332e
- (void)setAnnotationKitController:(id)arg1 didAllocate:(_Bool)arg2;	// IMP=0x0010000000043228
- (void)setAnnotationKitController:(id)arg1;	// IMP=0x0010000000043214
- (id)pageModelController;	// IMP=0x0010000000043160
- (_Bool)_isEditingScreenshotImage;	// IMP=0x0010000000043147
- (void)dealloc;	// IMP=0x001000000004309e
- (id)init;	// IMP=0x0010000000043046

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsFormFill;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N


@end
