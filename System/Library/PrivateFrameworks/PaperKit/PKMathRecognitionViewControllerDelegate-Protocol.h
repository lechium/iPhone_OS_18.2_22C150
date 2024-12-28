//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PaperKit/NSObject-Protocol.h>

@class NSArray, NSLocale, NSSet, NSString, NSUUID, PKDrawing, PKMathRecognitionItem, PKMathRecognitionViewController, PKStroke, PKTiledView, UIImage, UIView, UIViewController;
@protocol PKCalculateScrubberController, PKCalculateScrubberControllerDelegate, UICoordinateSpace;

@protocol PKMathRecognitionViewControllerDelegate <NSObject>
- (void)mathViewController:(PKMathRecognitionViewController *)arg1 didUpdateExpressions:(NSSet *)arg2 newExpressions:(NSSet *)arg3 removedExpressions:(NSSet *)arg4 mathItems:(NSArray *)arg5;
- (struct CGAffineTransform)mathViewControllerDrawingTransform:(PKMathRecognitionViewController *)arg1;
- (PKTiledView *)mathViewControllerTiledView:(PKMathRecognitionViewController *)arg1;
- (PKDrawing *)mathViewControllerDrawing:(PKMathRecognitionViewController *)arg1;

@optional
- (NSString *)mathViewController:(PKMathRecognitionViewController *)arg1 resultForLocale:(NSLocale *)arg2 itemUUID:(NSUUID *)arg3;
- (void)mathViewControllerDidDismissPopoverUI:(PKMathRecognitionViewController *)arg1;
- (void)mathViewController:(PKMathRecognitionViewController *)arg1 willPresentPopoverUI:(long long)arg2;
- (double)mathViewControllerTimestampForLatestUserInteraction:(PKMathRecognitionViewController *)arg1;
- (void)mathViewController:(PKMathRecognitionViewController *)arg1 selectStrokes:(NSArray *)arg2;
- (void)mathViewController:(PKMathRecognitionViewController *)arg1 setShouldSolve:(_Bool)arg2 item:(PKMathRecognitionItem *)arg3 heroStroke:(PKStroke *)arg4 flag:(unsigned long long)arg5 undoable:(_Bool)arg6;
- (void)mathViewController:(PKMathRecognitionViewController *)arg1 setShouldSolve:(_Bool)arg2 item:(PKMathRecognitionItem *)arg3 heroStroke:(PKStroke *)arg4 flag:(unsigned long long)arg5;
- (UIImage *)mathViewController:(PKMathRecognitionViewController *)arg1 createTypesetImageForItemUUID:(NSUUID *)arg2 showResult:(_Bool)arg3 fontSize:(double)arg4;
- (UIImage *)mathViewController:(PKMathRecognitionViewController *)arg1 createTypesetImageForExpression:(NSString *)arg2 latex:(_Bool)arg3 fontSize:(double)arg4;
- (UIViewController *)mathViewController:(PKMathRecognitionViewController *)arg1 createTypesetViewControllerForExpression:(NSString *)arg2 latex:(_Bool)arg3 fontSize:(double)arg4;
- (id <PKCalculateScrubberController>)mathViewController:(PKMathRecognitionViewController *)arg1 createScrubberControllerForView:(UIView *)arg2 delegate:(id <PKCalculateScrubberControllerDelegate>)arg3;
- (void)mathViewController:(PKMathRecognitionViewController *)arg1 updatedResult:(NSString *)arg2 strokes:(NSArray *)arg3 expressionUUID:(NSUUID *)arg4;
- (void)mathViewController:(PKMathRecognitionViewController *)arg1 replaceStrokes:(NSArray *)arg2 withStrokes:(NSArray *)arg3;
- (void)mathViewController:(PKMathRecognitionViewController *)arg1 setHiddenStrokes:(NSArray *)arg2;
- (id <UICoordinateSpace>)mathViewController:(PKMathRecognitionViewController *)arg1 coordinateSpaceForDrawing:(PKDrawing *)arg2;
- (NSSet *)mathViewController:(PKMathRecognitionViewController *)arg1 expressionIdentifiersForCompatibleGraphNearLocation:(struct CGPoint)arg2 expressionUUID:(NSUUID *)arg3;
- (NSSet *)mathViewController:(PKMathRecognitionViewController *)arg1 expressionIdentifiersForExistingGraphNearLocation:(struct CGPoint)arg2;
- (void)mathViewController:(PKMathRecognitionViewController *)arg1 addGraphForExpression:(NSString *)arg2 variable:(NSString *)arg3 range:(struct CGRect)arg4 identifier:(NSString *)arg5 expressionLocation:(struct CGPoint)arg6 addToExisting:(_Bool)arg7;
- (double)mathViewControllerLatestEndOfStrokeTimestamp:(PKMathRecognitionViewController *)arg1;
- (void)mathViewControllerUpdateFrameForContainer:(PKMathRecognitionViewController *)arg1;
@end
