//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIEvent, UIGestureRecognizer, _UISheetInteraction;

@protocol _UISheetInteractionDelegate <NSObject>

@optional
- (void)_sheetInteractionDraggingEnded:(_UISheetInteraction *)arg1;
- (void)_sheetInteractionDraggingChanged:(_UISheetInteraction *)arg1 withTranslation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3 animateChange:(_Bool)arg4;
- (void)_sheetInteractionDraggingBegan:(_UISheetInteraction *)arg1 withRubberBandCoefficient:(double)arg2;
- (_Bool)sheetInteraction:(_UISheetInteraction *)arg1 shouldAllowVerticalRubberBandingWithEvent:(UIEvent *)arg2;
- (_Bool)sheetInteraction:(_UISheetInteraction *)arg1 shouldBeginHorizontalRubberBandingWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (struct CGPoint)offsetForInterruptedAnimationInSheetInteraction:(_UISheetInteraction *)arg1;
- (void)sheetInteraction:(_UISheetInteraction *)arg1 didChangeOffset:(struct CGPoint)arg2;
- (_Bool)sheetInteractionShouldInteractWithQuicklyScrollingDescendentScrollView:(_UISheetInteraction *)arg1;
@end

