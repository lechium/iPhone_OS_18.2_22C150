//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit23CanvasElementResizeView
{
    MISSING_TYPE *miniMenuController;	// 256 = 0x100
    MISSING_TYPE *moreButton;	// 264 = 0x108
    MISSING_TYPE *contextMenuInteraction;	// 272 = 0x110
    MISSING_TYPE *tapGestureRecognizer;	// 280 = 0x118
    MISSING_TYPE *doubleTapGestureRecognizer;	// 288 = 0x120
    MISSING_TYPE *dragLocation;	// 296 = 0x128
    MISSING_TYPE *draggedImage;	// 320 = 0x140
    MISSING_TYPE *suppressMiniMenu;	// 328 = 0x148
    MISSING_TYPE *_selection;	// 336 = 0x150
    MISSING_TYPE *editingCanvasElements;	// 368 = 0x170
    MISSING_TYPE *hasDraggingCanvasElement;	// 376 = 0x178
}

- (void).cxx_destruct;	// IMP=0x00000000001a4f50
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000001a4e00
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x00000000001a4d80
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x00000000001a4c00
- (void)doubleTapped:(id)arg1;	// IMP=0x00000000001a4a90
- (void)tapped:(id)arg1;	// IMP=0x00000000001a4670
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000001a42b0
- (void)controlHandleMoved:(id)arg1;	// IMP=0x00000000001a1e50
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000001a1670
- (void)layoutSubviews;	// IMP=0x00000000001a0730
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019fb90
- (void)didMoveToWindow;	// IMP=0x000000000019fb60
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;	// IMP=0x0000000000381910
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;	// IMP=0x0000000000381880
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;	// IMP=0x0000000000381810
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;	// IMP=0x0000000000381770
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;	// IMP=0x00000000003816e0
- (long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;	// IMP=0x0000000000381630
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;	// IMP=0x0000000000381580

@end

