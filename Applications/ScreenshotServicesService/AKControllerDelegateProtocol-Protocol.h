//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AKAnnotation, AKController, AKPageModelController, CALayer, NSArray, NSData, NSIndexSet, NSString, NSUndoManager, UIAutoFillTextSuggestion, UIGestureRecognizer, UIView, UIViewController;

@protocol AKControllerDelegateProtocol <NSObject>
- (void)updateDrawingGestureRecognizer:(UIGestureRecognizer *)arg1 forPageAtIndex:(unsigned long long)arg2 withPriority:(_Bool)arg3 forAnnotationController:(AKController *)arg4;
- (void)uninstallDrawingGestureRecognizer:(UIGestureRecognizer *)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(AKController *)arg3;
- (void)installDrawingGestureRecognizer:(UIGestureRecognizer *)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(AKController *)arg3;
- (UIViewController *)popoverPresentingViewControllerForAnnotationController:(AKController *)arg1;
- (NSUndoManager *)undoManagerForAnnotationController:(AKController *)arg1;
- (NSData *)newContentSnapshotPDFDataIncludingAdornments:(_Bool)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(AKController *)arg5;
- (struct CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(AKController *)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(AKController *)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(AKController *)arg3;

@optional
@property(readonly, nonatomic) _Bool supportsFormFill;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, copy, nonatomic) NSString *originalImageDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, nonatomic) _Bool supportsImageDescriptionEditing;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (UIView *)contentSnapshot;
- (void)controller:(AKController *)arg1 setFormFillingEnabled:(_Bool)arg2;
- (NSArray *)quadPointsForCharacterIndexes:(NSIndexSet *)arg1 onPageAtIndex:(unsigned long long)arg2 forAnnotationController:(AKController *)arg3;
- (void)setAllowsNativeRenderingOfHighlightableSelection:(_Bool)arg1 forAnnotationController:(AKController *)arg2;
- (void)clearHighlightableSelectionForAnnotationController:(AKController *)arg1;
- (NSIndexSet *)highlightableSelectionCharacterIndexesOnPageAtIndex:(unsigned long long)arg1 forAnnotationController:(AKController *)arg2;
- (void)controller:(AKController *)arg1 performActionForMode:(unsigned long long)arg2 fromSender:(long long)arg3 withAttribute:(long long)arg4 onPageAtIndex:(unsigned long long)arg5;
- (_Bool)hasHighlightableSelectionForAnnotationController:(AKController *)arg1;
- (_Bool)requestPermissionForController:(AKController *)arg1 toPerformActionFromSender:(long long)arg2;
- (void)rotateLeft:(AKController *)arg1;
- (void)rotateRight:(AKController *)arg1;
- (NSArray *)controller:(AKController *)arg1 willSetToolbarItems:(NSArray *)arg2;
- (void)controllerDidDismissPopover:(AKController *)arg1;
- (void)controllerWillDismissSignatureManagerView:(AKController *)arg1;
- (void)controllerWillShowSignatureManagerView:(AKController *)arg1;
- (void)controllerWillDismissSignatureCaptureView:(AKController *)arg1;
- (void)controllerWillShowSignatureCaptureView:(AKController *)arg1;
- (CALayer *)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(AKController *)arg2;
- (_Bool)shouldPlaceProposedFormElementAtRect:(struct CGRect)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(AKController *)arg3;
- (_Bool)shouldPlaceFormElementAtPoint:(struct CGPoint)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(AKController *)arg3;
- (void)handleTextSuggestion:(UIAutoFillTextSuggestion *)arg1 forAnnotationController:(AKController *)arg2 completionHandler:(void (^)(NSSet *))arg3;
- (_Bool)controllerShouldDetectFormElements:(AKController *)arg1;
- (_Bool)handleBackTabInTextEditorForAnnotation:(AKAnnotation *)arg1 forAnnotationController:(AKController *)arg2;
- (_Bool)handleTabInTextEditorForAnnotation:(AKAnnotation *)arg1 forAnnotationController:(AKController *)arg2;
- (_Bool)shouldAddTabControlsToTextEditorForAnnotation:(AKAnnotation *)arg1 forAnnotationController:(AKController *)arg2;
- (void)positionSketchOverlay:(UIView *)arg1 forAnnotationController:(AKController *)arg2;
- (void)removeAuxiliaryView:(UIView *)arg1 forAnnotationController:(AKController *)arg2;
- (void)placeAuxiliaryView:(UIView *)arg1 forAnnotationController:(AKController *)arg2;
- (void)controllerDidExitToolMode:(AKController *)arg1;
- (void)controllerWillExitToolMode:(AKController *)arg1;
- (void)controllerDidEnterToolMode:(AKController *)arg1;
- (void)controllerWillEnterToolMode:(AKController *)arg1;
- (void)controller:(AKController *)arg1 didPlaceSingleShotAnnotation:(AKAnnotation *)arg2 onPageModelController:(AKPageModelController *)arg3;
- (void)controller:(AKController *)arg1 willPlaceSingleShotAnnotation:(AKAnnotation *)arg2 onProposedPageModelController:(id *)arg3;
- (_Bool)controller:(AKController *)arg1 shouldPlaceSingleShotAnnotation:(AKAnnotation *)arg2 onProposedPageModelController:(AKPageModelController *)arg3;
- (void)penStrokeCompletedForAnnotationController:(AKController *)arg1;
- (void)editDetectedForAnnotationController:(AKController *)arg1;
- (void)editCheckpointReachedForAnnotationController:(AKController *)arg1;
- (struct CGRect)visibleRectOfOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(AKController *)arg2;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(AKController *)arg2;
@end

